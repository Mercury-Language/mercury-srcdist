// vim: ts=4 sw=4 expandtab ft=c

// Copyright (C) 2000-2002, 2006, 2011-2012 The University of Melbourne.
// This file may only be copied under the terms of the GNU Library General
// Public License - see the file COPYING.LIB in the Mercury distribution.

// mercury_string.c - string handling

#include "mercury_imp.h"
#include "mercury_string.h"

#if defined(MR_HAVE__VSNPRINTF) && ! defined(MR_HAVE_VSNPRINTF)
  #define vsnprintf _vsnprintf
#endif

#if defined(MR_HAVE_VSNPRINTF) || defined(MR_HAVE__VSNPRINTF)
  #define MR_HAVE_A_VSNPRINTF
#endif

#define BUFFER_SIZE 4096

MR_String
MR_make_string(MR_AllocSiteInfoPtr alloc_id, const char *fmt, ...)
{
    va_list     ap;
    MR_String   result;
    int         n;
    char        *p;

#ifdef MR_HAVE_A_VSNPRINTF
    int         size = BUFFER_SIZE;
    char        fixed[BUFFER_SIZE];
    MR_bool     dynamically_allocated = MR_FALSE;

    // On the first iteration we try with a fixed-size buffer.
    // If that didn't work, use a dynamically allocated array twice
    // the size of the fixed array and keep growing the array until
    // the string fits.

    p = fixed;

    while (1) {
        // Try to print in the allocated space.
        va_start(ap, fmt);
        n = vsnprintf(p, size, fmt, ap);
        va_end(ap);

        // If that worked, return the string.
        if (n > -1 && n < size) {
            break;
        }

        // Else try again with more space.
        if (n > -1) {   // glibc 2.1
            size = n + 1; // precisely what is needed
        } else {        // glibc 2.0
            size *= 2;  // twice the old size
        }

        if (!dynamically_allocated) {
            p = MR_NEW_ARRAY(char, size);
            dynamically_allocated = MR_TRUE;
        } else {
            p = MR_RESIZE_ARRAY(p, char, size);
        }
    }

#else
    // It is possible for this buffer to overflow,
    // and then bad things may happen.

    char fixed[40960];

    va_start(ap, fmt);
    n = vsprintf(fixed, fmt, ap);
    va_end(ap);

    p = fixed;
#endif
    MR_restore_transient_hp();
    MR_allocate_aligned_string_msg(result, strlen(p), alloc_id);
    MR_save_transient_hp();
    strcpy(result, p);

#ifdef MR_HAVE_A_VSNPRINTF
    if (dynamically_allocated) {
        MR_free(p);
    }
#endif

    return result;
}

// Note that MR_hash_string{,2,3,4,5,6} are actually defined as macros in
// mercury_string.h, if we are using GNU C.
// We define them here whether or not we are using gcc, so that users
// can easily switch between gcc and cc without rebuilding the libraries.

#undef MR_hash_string
#undef MR_hash_string2
#undef MR_hash_string3
#undef MR_hash_string4
#undef MR_hash_string5
#undef MR_hash_string6

MR_Integer
MR_hash_string(MR_ConstString s)
{
    MR_HASH_STRING_FUNC_BODY
}

MR_Integer
MR_hash_string2(MR_ConstString s)
{
    MR_HASH_STRING2_FUNC_BODY
}

MR_Integer
MR_hash_string3(MR_ConstString s)
{
    MR_HASH_STRING3_FUNC_BODY
}

MR_Integer
MR_hash_string4(MR_ConstString s)
{
    MR_HASH_STRING4_FUNC_BODY
}

MR_Integer
MR_hash_string5(MR_ConstString s)
{
    MR_HASH_STRING5_FUNC_BODY
}

MR_Integer
MR_hash_string6(MR_ConstString s)
{
    MR_HASH_STRING6_FUNC_BODY
}

MR_bool
MR_utf8_next(const MR_String s_, MR_Integer *pos)
{
    const unsigned char *s = (const unsigned char *)s_;
    int c;

    if (s[*pos] == '\0') {
        // End of string.
        return MR_FALSE;
    }

    for (;;) {
        ++(*pos);
        c = s[*pos];
        if (MR_utf8_is_single_byte(c) || MR_utf8_is_lead_byte(c)) {
            break;
        }
    }

    return MR_TRUE;
}

MR_bool
MR_utf8_prev(const MR_String s_, MR_Integer *pos)
{
    const unsigned char *s = (const unsigned char *)s_;
    int c;

    while (*pos > 0) {
        (*pos)--;
        c = s[*pos];
        if (MR_utf8_is_single_byte(c) || MR_utf8_is_lead_byte(c)) {
            return MR_TRUE;
        }
    }

    return MR_FALSE;
}

MR_int_least32_t
MR_utf8_get(const MR_String s_, MR_Integer pos)
{
    const unsigned char *s = (const unsigned char *)s_;
    int c;
    int width;

    c = s[pos];
    if (MR_is_ascii(c)) {
        return c;
    } else {
        return MR_utf8_get_mb(s_, pos, &width);
    }
}

MR_int_least32_t
MR_utf8_get_mb(const MR_String s_, MR_Integer pos, int *width)
{
    const unsigned char *s = (const unsigned char *)s_;
    int c;
    int d;
    int minc;

    c = s[pos];

    // c <= 0x7f (ASCII) must be handled before calling this function.

    if (c <= 0xC1) {
        // Trailing byte of multi-byte sequence or an overlong encoding for
        // code point <= 127.

        return -2;
    }

    if (c <= 0xDF) {
        // 2-byte sequence.
        c &= 0x1F;
        *width = 2;
        minc = 0x80;
    }
    else if (c <= 0xEF) {
        // 3-byte sequence.
        c &= 0x0F;
        *width = 3;
        minc = 0x800;
    }
    else if (c <= 0xF4) {
        // 4-byte sequence.
        c &= 0x07;
        *width = 4;
        minc = 0x10000;
    }
    else {
        // Otherwise invalid.
        return -2;
    }

    switch (*width) {
        case 4:
            d = s[++pos];
            if (!MR_utf8_is_trail_byte(d)) {
                return -2;
            }
            c = (c << 6) | (d & 0x3F);
            // fall through
        case 3:
            d = s[++pos];
            if (!MR_utf8_is_trail_byte(d)) {
                return -2;
            }
            c = (c << 6) | (d & 0x3F);
            // fall through
        case 2:
            d = s[++pos];
            if (!MR_utf8_is_trail_byte(d)) {
                return -2;
            }
            c = (c << 6) | (d & 0x3F);
            break;
    }

    // Check for overlong forms, which could be used to bypass security
    // validations. We could also check code points aren't above U+10FFFF
    // or in the surrogate ranges, but we don't.

    if (c < minc) {
        return -2;
    }

    return c;
}

MR_int_least32_t
MR_utf8_get_next(const MR_String s, MR_Integer *pos)
{
    int c;

    c = s[*pos];
    if (MR_is_ascii(c)) {
        (*pos)++;
        return c;
    }

    return MR_utf8_get_next_mb(s, pos);
}

MR_int_least32_t
MR_utf8_get_next_mb(const MR_String s, MR_Integer *pos)
{
    int c, width;

    c = MR_utf8_get_mb(s, *pos, &width);
    if (c >= 0) {
        // Multibyte code point.
        (*pos) += width;
        return c;
    }

    // Some invalid byte sequence.
    MR_utf8_next(s, pos);
    return c;
}

MR_int_least32_t
MR_utf8_prev_get(const MR_String s, MR_Integer *pos)
{
    int c, width;

    if (MR_utf8_prev(s, pos)) {
        c = s[*pos];
        if (MR_is_ascii(c)) {
            return c;
        } else {
            return MR_utf8_get_mb(s, *pos, &width);
        }
    }

    // Past beginning.
    return -1;
}

size_t
MR_utf8_width(MR_Char c)
{
    // So we don't need to check for negative values nor use unsigned ints
    // in the interface, which are a pain.

    MR_UnsignedChar uc = c;

    if (uc <= 0x7f) {
        return 1;
    }
    if (uc <= 0x7ff) {
        return 2;
    }
    if (uc <= 0xffff) {
        return (MR_is_surrogate(uc)) ? 0 : 3;
    }
    if (uc <= 0x10ffff) {
        return 4;
    }
    // The rest are illegal.
    return 0;
}

size_t
MR_utf8_encode(char s_[], MR_Char c)
{
    unsigned char *s = (unsigned char *)s_;
    MR_UnsignedChar uc = c;

    if (uc <= 0x7f) {
        s[0] = uc;
        return 1;
    }

    if (uc <= 0x7ff) {
        s[0] = 0xC0 | ((uc >> 6) & 0x1F);
        s[1] = 0x80 |  (uc       & 0x3F);
        return 2;
    }

    if (uc <= 0xffff) {
        if (MR_is_surrogate(uc)) {
            return 0;
        }
        s[0] = 0xE0 | ((uc >> 12) & 0x0F);
        s[1] = 0x80 | ((uc >>  6) & 0x3F);
        s[2] = 0x80 |  (uc        & 0x3F);
        return 3;
    }

    if (uc <= 0x10ffff) {
        s[0] = 0xF0 | ((uc >> 18) & 0x07);
        s[1] = 0x80 | ((uc >> 12) & 0x3F);
        s[2] = 0x80 | ((uc >>  6) & 0x3F);
        s[3] = 0x80 |  (uc        & 0x3F);
        return 4;
    }

    // Otherwise is illegal.
    return 0;
}

MR_bool
MR_utf8_verify(const MR_String s)
{
    MR_Integer pos = 0;

    for (;;) {
        MR_int_least32_t c;

        c = MR_utf8_get_next(s, &pos);
        if (c == 0) {
            return MR_TRUE;
        }
        if (c < 0) {
            return MR_FALSE;
        }
    }
}
