// vim: ts=4 sw=4 expandtab ft=c

// Copyright (C) 1998-2000,2002, 2004-2005 The University of Melbourne.
// Copyright (C) 2016, 2018 The Mercury team.
// This file is distributed under the terms specified in COPYING.LIB.

// mercury_array_macros.h defines macros for dealing with expandable arrays.

#ifndef MERCURY_ARRAY_MACROS_H
#define MERCURY_ARRAY_MACROS_H

#include    "mercury_reg_workarounds.h" // for MR_assign_structure

// The MR_ensure_room_for_next macro works with a group of three variables
// that follow the pattern
//
//  Item    *widgets = NULL;
//  int     widget_max = 0;
//  int     widget_next = 0;
//
// where widgets is a pointer to a MR_malloc'd array of items, widget_max
// gives the number of elements in the array, and widget_next is the
// index of the first free slot in the widgets array. Widget_max is
// zero if and only if widgets is NULL.
//
// MR_ensure_room_for_next(widget, Item, INIT_SIZE) checks whether
// there is enough room in the widgets array to add a new item.
// If not, doubles the size of the existing widgets array, or
// allocates an array of INIT_SIZE items if the widgets array
// has not been initialized before.
//
// BEWARE: YOU NEED TO BE VERY CAREFUL OF POINTERS TO OBJECTS ON THE GC HEAP:
//
// - For MR_ensure_room_for_next(), the memory is allocated with MR_malloc(),
//   which means that if conservative GC is enabled, the array elements
//   _MUST NOT_ point to the GC heap (or at least must not be the _only_
//   pointer to any object on the GC heap); but the array address can be
//   stored anywhere.
//
// - For MR_GC_ensure_room_for_next(), the memory is allocated on the GC heap,
//   which means that the array elements can point to anything;
//   but the array address _MUST NOT_ be stored in memory allocated with
//   malloc() or MR_malloc() (unless it is also stored in some place
//   which _is_ scanned by the collector).
//
// It is the caller's responsibility to deallocate the memory for the array
// if/when it is no longer needed, using MR_free() or MR_GC_free_attrib()
// respectively.

#define MR_ensure_room_for_next(base, type, init)                       \
    do {                                                                \
        if (base##_next >= base##_max) {                                \
            if (base##_max == 0) {                                      \
                base##_max = (init);                                    \
                base##s = MR_NEW_ARRAY(type, base##_max);               \
            } else {                                                    \
                base##_max *= 2;                                        \
                base##s = MR_RESIZE_ARRAY(base##s, type, base##_max);   \
            }                                                           \
        }                                                               \
    } while (0)
#define MR_GC_ensure_room_for_next(base, type, init, alloc_id)          \
    do {                                                                \
        if (base##_next >= base##_max) {                                \
            if (base##_max == 0) {                                      \
                base##_max = (init);                                    \
                base##s = MR_GC_NEW_ARRAY_ATTRIB(type, base##_max,      \
                    (alloc_id));                                        \
            } else {                                                    \
                base##_max *= 2;                                        \
                base##s = MR_GC_RESIZE_ARRAY_ATTRIB(base##s, type,      \
                    base##_max);                                        \
            }                                                           \
        }                                                               \
    } while (0)

// MR_ensure_big_enough makes the same assumptions as MR_ensure_room_for_next,
// and operates almost the same way. The exception is that it does not assume
// that the array grows one item at a time; instead it ensures that the array
// is big enough to contain the element at index `slot'. Since with this regime
// there is no notion of the "next" slot, this macro does not access, nor does
// it require the existence of, base##_next.
//
// BEWARE: YOU NEED TO BE VERY CAREFUL OF POINTERS TO OBJECTS ON THE GC HEAP.
// See the comment for MR_ensure_room_for_next().

#define MR_ensure_big_enough(slot, base, type, init)                    \
    do {                                                                \
        if ((slot) >= base##_max) {                                     \
            if (base##_max == 0) {                                      \
                base##_max = MR_max((init), (slot) + 1);                \
                base##s = MR_NEW_ARRAY(type, base##_max);               \
            } else {                                                    \
                base##_max = MR_max(base##_max * 2, (slot) + 1);        \
                base##s = MR_RESIZE_ARRAY(base##s, type, base##_max);   \
            }                                                           \
        }                                                               \
    } while (0)

// MR_ensure_big_enough2 works like MR_ensure_big_enough, except that
// it resizes two arrays at once. These two arrays are named base##s1 and
// base##s2, and since they are always the same size, they share the
// base##_max variable.
//
// BEWARE: YOU NEED TO BE VERY CAREFUL OF POINTERS TO OBJECTS ON THE GC HEAP.
// See the comment for MR_ensure_room_for_next().

#define MR_ensure_big_enough2(slot, base, s1, s2, type, init)           \
    do {                                                                \
        if ((slot) >= base##_max) {                                     \
            if (base##_max == 0) {                                      \
                base##_max = MR_max((init), (slot) + 1);                \
                base##s1 = MR_NEW_ARRAY(type, base##_max);              \
                base##s2 = MR_NEW_ARRAY(type, base##_max);              \
            } else {                                                    \
                base##_max = MR_max(base##_max * 2, (slot) + 1);        \
                base##s1 = MR_RESIZE_ARRAY(base##s1, type, base##_max); \
                base##s2 = MR_RESIZE_ARRAY(base##s2, type, base##_max); \
            }                                                           \
        }                                                               \
    } while (0)

// MR_bsearch(int num_elements, int& element, MR_bool& found, COMPARE)
//
// Given a sorted array, this macro performs a binary search.
// If the search is successful, MR_bsearch sets the `found' parameter
// to MR_TRUE and the `element' parameter to the index of the desired item.
// If the search is unsuccessful, MR_bsearch sets `found' to MR_FALSE;
// `element' will be clobbered.
//
// The number of the elements in the array is given by the `num_elements'
// parameter.
// The `COMPARE' parameter should be an expression of type int which compares
// the value at the index specified by the current value of `element'
// with the desired value, and returns <0, 0, or >0 according to whether
// it is less than, equal to, or greater than the desired value.
//
// The name of the array to be searched is not explicitly a parameter;
// its identity is encoded in the boolean expression of the `COMPARE'
// parameter.

#define MR_bsearch(num_elements, element, found, COMPARE)               \
    do {                                                                \
        int lo;                                                         \
        int hi;                                                         \
        int diff;                                                       \
                                                                        \
        /*                                                              \
        ** We initialize `element' here only to avoid gcc warnings      \
        ** about possibly accessing an uninitialized variable           \
        ** in code using MR_bsearch().                                  \
        */                                                              \
                                                                        \
        (element) = 0;                                                  \
        lo = 0;                                                         \
        hi = (num_elements) - 1;                                        \
        (found) = MR_FALSE;                                             \
        while (lo <= hi) {                                              \
            (element) = (lo + hi) / 2;                                  \
            diff = (COMPARE);                                           \
            if (diff == 0) {                                            \
                (found) = MR_TRUE;                                      \
                break;                                                  \
            } else if (diff < 0) {                                      \
                lo = (element) + 1;                                     \
            } else {                                                    \
                hi = (element) - 1;                                     \
            }                                                           \
        }                                                               \
    } while (0)

// MR_find_first_match(int num_elements, int& element, MR_bool& found, COMPARE)
//
// Given a sorted array, this macro finds the first element in the array
// for which `COMPARE' is zero (MR_bsearch finds an arbitrary element).
// Otherwise, the parameters and behaviour are the same as for MR_bsearch.

#define MR_find_first_match(num_elements, element, found, COMPARE)      \
    do {                                                                \
        MR_bsearch((num_elements), (element), (found), (COMPARE));      \
        if (found) {                                                    \
            while ((element) > 0) {                                     \
                (element)--;                                            \
                if ((COMPARE) != 0) {                                   \
                    (element)++;                                        \
                    break;                                              \
                }                                                       \
            }                                                           \
        }                                                               \
    } while (0)

// MR_prepare_insert_into_sorted(array[], int& next, int& element, COMPARE)
//
// Given a sorted array of `items', this prepares for the insertion of a
// new item into the array at the proper point. It finds the index at which
// the new item should be inserted, and moves all items at and above that
// index one position to the right to make room for the new item.
//
// The `next' parameter holds the number of elements in the array;
// it is incremented by this macro. The macro returns the index of the slot
// at which the new item should be inserted in the `element' parameter.
// The `COMPARE' parameter should be an expression of type int which compares
// the item at the index specified by the current value of `element' with
// the item being inserted, and returns <0, 0, or >0 according to whether
// it is less than, equal to, or greater than the item being inserted.

#define MR_prepare_insert_into_sorted(items, next, element, COMPARE)    \
    do {                                                                \
        (element) = (next) - 1;                                         \
        while ((element) >= 0 && (COMPARE) > 0) {                       \
            MR_assign_structure(items[element + 1], items[element]);    \
            (element) -= 1;                                             \
        }                                                               \
        (element) += 1;                                                 \
        (next) += 1;                                                    \
    } while (0)

#endif // MERCURY_ARRAY_MACROS_H
