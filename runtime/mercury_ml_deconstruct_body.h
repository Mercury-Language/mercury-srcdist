// vim: ts=4 sw=4 expandtab ft=c

// Copyright (C) 2002, 2004, 2007 The University of Melbourne.
// Copyright (C) 2016, 2018 The Mercury team.
// This file is distributed under the terms specified in COPYING.LIB.

// mercury_ml_deconstruct_body.h
//
// This file is included several times in library/deconstruct.m. Each inclusion
// defines the body of one of several variants of the `deconstruct' function.
//
// The code including this file must define these macros:
//
// PREDNAME             Gives the name of the function or predicate being
//                      defined.
//
// EXPAND_INFO_CALL     Gives the name of the MR_expand_functor_* variant that
//                      we want to use.
//
// EXPAND_INFO_TYPE     Gives the type of the expand_info argument of
//                      EXPAND_INFO_CALL.
//
// TYPEINFO_ARG         Gives the name of the argument that contains the
//                      typeinfo of the term being deconstructed.
//
// TERM_ARG             Gives the name of the argument that contains the
//                      value of the term being deconstructed.
//
// FUNCTOR_ARG          Gives the name of the argument to which we assign
//                      the function symbol of the term.
//
// FUNCTOR_NUMBER_ARG   (optional) Gives the name of the argument to which we
//                      assign the function symbol number of the term.
//
// ARITY_ARG            Gives the name of the argument to which the value of
//                      the arity field should be assigned.
//
// ARGUMENTS_ARG        Gives the name of the argument to which the list of
//                      univs representing the arguments of the term should
//                      be assigned.
//
// NONCANON             Gives a value of type MR_noncanon_handling; its value
//                      will govern the handling of values of noncanonical
//                      types.
//
// The code including this file may define these macros:
//
// MAX_ARITY_ARG        If defined, gives the name of the argument whose value
//                      gives the maximum number of arguments we want to
//                      succeed for.
//
// SAVE_SUCCESS         If defined, success is saved into SUCCESS_INDICATOR.

#if defined(SAVE_SUCCESS) && !defined(MAX_ARITY_ARG)
  #error "SAVE_SUCCESS requires MAX_ARITY_ARG is defined"
#endif

#ifdef  MAX_ARITY_ARG
  #define   maybe_max_arity_arg     MAX_ARITY_ARG,
  #define   max_arity_check_start                                       \
                                    if (expand_info.limit_reached) {    \
                                        success = MR_FALSE;             \
                                    } else {                            \
                                        success = MR_TRUE;
  #define   max_arity_check_end     }
#else
  #define   maybe_max_arity_arg
  #define   max_arity_check_start
  #define   max_arity_check_end
#endif

#ifdef  MAX_ARITY_ARG
    MR_bool             success;
#endif

    EXPAND_INFO_TYPE    expand_info;
    MR_TypeInfo         type_info;
    MR_ConstString      conststring_functor;

    type_info = (MR_TypeInfo) TYPEINFO_ARG;

    MR_save_transient_registers();
    EXPAND_INFO_CALL(type_info, &TERM_ARG, NONCANON, maybe_max_arity_arg
        &expand_info);
    MR_restore_transient_registers();

    max_arity_check_start
        MR_deconstruct_get_functor(expand_info, functor, conststring_functor);
        FUNCTOR_ARG = (MR_String) (MR_Integer) conststring_functor;

        MR_deconstruct_get_arity(expand_info, ARITY_ARG);
        MR_deconstruct_get_arg_univs_list(expand_info, ARGUMENTS_ARG);
#ifdef FUNCTOR_NUMBER_ARG
        MR_deconstruct_get_functor_number(expand_info, FUNCTOR_NUMBER_ARG);
#endif
    max_arity_check_end

#ifdef SAVE_SUCCESS
    SUCCESS_INDICATOR = success;
#endif

#undef  maybe_max_arity_arg
#undef  max_arity_check_start
#undef  max_arity_check_end
