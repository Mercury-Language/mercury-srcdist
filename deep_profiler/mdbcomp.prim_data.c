/*
** Automatically generated from `mdbcomp.prim_data.m'
** by the Mercury compiler,
** version rotd-2015-06-22
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module mdbcomp.prim_data. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__prim_data__init
ENDINIT
*/

#include "mdbcomp.prim_data.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "mdbcomp.sym_name.mih"




#line 65 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0;

#line 68 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1;

#line 71 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_pred_or_func_0[2];

#line 74 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_pred_or_func_0[2];

#line 77 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_pred_or_func_0[2];

#line 80 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0[6];

#line 83 "mdbcomp.prim_data.c"
static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0[6];

#line 86 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0;

#line 89 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1[6];

#line 92 "mdbcomp.prim_data.c"
static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1[6];

#line 95 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1;

#line 98 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0[1];

#line 101 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1[1];

#line 104 "mdbcomp.prim_data.c"
static const MR_DuPtagLayout mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_proc_label_0[2];

#line 107 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_proc_label_0[2];

#line 110 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_proc_label_0[2];

#line 113 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0;

#line 116 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1;

#line 119 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2;

#line 122 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3;

#line 125 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0[4];

#line 128 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0[4];

#line 131 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0[4];

#line 134 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0;

#line 137 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1;

#line 140 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2;

#line 143 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3;

#line 146 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4;

#line 149 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5;

#line 152 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6;

#line 155 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7;

#line 158 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8;

#line 161 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9;

#line 164 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10;

#line 167 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11;

#line 170 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12;

#line 173 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13;

#line 176 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14;

#line 179 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15;

#line 182 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_trace_port_0[16];

#line 185 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_trace_port_0[16];

#line 188 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_trace_port_0[16];

#line 191 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0_10001(
#line 194 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 196 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 199 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0_10001(
#line 202 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 204 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 206 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 209 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0_10001(
#line 212 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 214 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 217 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0_10001(
#line 220 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 222 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 224 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 227 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0_10001(
#line 230 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 232 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 235 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0_10001(
#line 238 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 240 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 242 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

#line 245 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0_10001(
#line 248 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 250 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

#line 253 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0_10001(
#line 256 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 258 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 260 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3);



#line 132 "prim_data.m"
/* sealed */ struct mdbcomp__prim_data__vector_common_type_1_0_s {
#line 132 "prim_data.m"
  const MR_String mdbcomp__prim_data__vector_common_type_1_0__vct_1_f_0;
#line 132 "prim_data.m"
  const MR_String mdbcomp__prim_data__vector_common_type_1_0__vct_1_f_1;
#line 132 "prim_data.m"
  const MR_Integer mdbcomp__prim_data__vector_common_type_1_0__vct_1_f_2;
#line 132 "prim_data.m"
};

static /* final */ const struct mdbcomp__prim_data__vector_common_type_1_0_s mdbcomp__prim_data_vector_common_1[4];

#line 132 "prim_data.m"
/* sealed */ struct mdbcomp__prim_data__vector_common_type_2_0_s {
#line 132 "prim_data.m"
  const MR_String mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_0;
#line 132 "prim_data.m"
  const MR_Word mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_1;
#line 132 "prim_data.m"
  const MR_String mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_2;
#line 132 "prim_data.m"
  const MR_Integer mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_3;
#line 132 "prim_data.m"
};

static /* final */ const struct mdbcomp__prim_data__vector_common_type_2_0_s mdbcomp__prim_data_vector_common_2[8];




static /* final */ const struct mdbcomp__prim_data__vector_common_type_1_0_s mdbcomp__prim_data_vector_common_1[4] = {
  /* row 0 */
  {
    (MR_String) "unify",
    (MR_String) "__Unify__",
    (MR_Integer) 2
  },
  /* row 1 */
  {
    (MR_String) "index",
    (MR_String) "__Index__",
    (MR_Integer) 2
  },
  /* row 2 */
  {
    (MR_String) "compare",
    (MR_String) "__Compare__",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "initialise",
    (MR_String) "__Initialise__",
    (MR_Integer) 1
  },
};

static /* final */ const struct mdbcomp__prim_data__vector_common_type_2_0_s mdbcomp__prim_data_vector_common_2[8] = {
  /* row 0 */
  {
    (MR_String) "compare",
    (MR_Integer) 2,
    (MR_String) "__Compare__",
    (MR_Integer) 3
  },
  /* row 1 */
  {
    (MR_String) "index",
    (MR_Integer) 1,
    (MR_String) "__Index__",
    (MR_Integer) 2
  },
  /* row 2 */
  {
    (MR_String) "initialise",
    (MR_Integer) 3,
    (MR_String) "__Initialise__",
    (MR_Integer) 1
  },
  /* row 3 */
  {
    (MR_String) "unify",
    (MR_Integer) 0,
    (MR_String) "__Unify__",
    (MR_Integer) 2
  },
  /* row 4 */
  {
    (MR_String) "__Compare__",
    (MR_Integer) 2,
    (MR_String) "compare",
    (MR_Integer) 3
  },
  /* row 5 */
  {
    (MR_String) "__Index__",
    (MR_Integer) 1,
    (MR_String) "index",
    (MR_Integer) 2
  },
  /* row 6 */
  {
    (MR_String) "__Initialise__",
    (MR_Integer) 3,
    (MR_String) "initialise",
    (MR_Integer) 1
  },
  /* row 7 */
  {
    (MR_String) "__Unify__",
    (MR_Integer) 0,
    (MR_String) "unify",
    (MR_Integer) 2
  },
};


#include "mdbcomp.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 395 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0 = {
  (MR_String) "pf_predicate",
  (MR_Integer) 0
};

#line 401 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1 = {
  (MR_String) "pf_function",
  (MR_Integer) 1
};

#line 407 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_pred_or_func_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1
};

#line 413 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_pred_or_func_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0
};

#line 419 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_pred_or_func_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 425 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__prim_data____Unify____pred_or_func_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____pred_or_func_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "pred_or_func",
  {     mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_pred_or_func_0 },
  {     mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_pred_or_func_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_pred_or_func_0
};

#line 442 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 452 "mdbcomp.prim_data.c"
static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0[6] = {
  (MR_String) "ord_defining_module",
  (MR_String) "ord_p_or_f",
  (MR_String) "ord_declaring_module",
  (MR_String) "ord_pred_name",
  (MR_String) "ord_arity",
  (MR_String) "ord_mode_number"
};

#line 462 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0 = {
  (MR_String) "ordinary_proc_label",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0,
  mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0,
  NULL,
  NULL
};

#line 477 "mdbcomp.prim_data.c"
static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 487 "mdbcomp.prim_data.c"
static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1[6] = {
  (MR_String) "spec_defining_module",
  (MR_String) "spec_spec_id",
  (MR_String) "spec_type_module",
  (MR_String) "spec_type_name",
  (MR_String) "spec_type_arity",
  (MR_String) "spec_mode_number"
};

#line 497 "mdbcomp.prim_data.c"
static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1 = {
  (MR_String) "special_proc_label",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1,
  mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1,
  NULL,
  NULL
};

#line 512 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0[1] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0
};

#line 517 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1[1] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1
};

#line 522 "mdbcomp.prim_data.c"
static const MR_DuPtagLayout mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_proc_label_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1
  }
};

#line 536 "mdbcomp.prim_data.c"
static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_proc_label_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1
};

#line 542 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_proc_label_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 548 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__prim_data____Unify____proc_label_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____proc_label_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "proc_label",
  {     mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_proc_label_0 },
  {     mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_proc_label_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_proc_label_0
};

#line 565 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0 = {
  (MR_String) "spec_pred_unify",
  (MR_Integer) 0
};

#line 571 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1 = {
  (MR_String) "spec_pred_index",
  (MR_Integer) 1
};

#line 577 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2 = {
  (MR_String) "spec_pred_compare",
  (MR_Integer) 2
};

#line 583 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3 = {
  (MR_String) "spec_pred_init",
  (MR_Integer) 3
};

#line 589 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0[4] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3
};

#line 597 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0[4] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_3,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0
};

#line 605 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 613 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__prim_data____Unify____special_pred_id_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____special_pred_id_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "special_pred_id",
  {     mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0 },
  {     mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0
};

#line 630 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0 = {
  (MR_String) "port_call",
  (MR_Integer) 0
};

#line 636 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1 = {
  (MR_String) "port_exit",
  (MR_Integer) 1
};

#line 642 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2 = {
  (MR_String) "port_redo",
  (MR_Integer) 2
};

#line 648 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3 = {
  (MR_String) "port_fail",
  (MR_Integer) 3
};

#line 654 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4 = {
  (MR_String) "port_tailrec_call",
  (MR_Integer) 4
};

#line 660 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5 = {
  (MR_String) "port_exception",
  (MR_Integer) 5
};

#line 666 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6 = {
  (MR_String) "port_ite_cond",
  (MR_Integer) 6
};

#line 672 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7 = {
  (MR_String) "port_ite_then",
  (MR_Integer) 7
};

#line 678 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8 = {
  (MR_String) "port_ite_else",
  (MR_Integer) 8
};

#line 684 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9 = {
  (MR_String) "port_neg_enter",
  (MR_Integer) 9
};

#line 690 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10 = {
  (MR_String) "port_neg_success",
  (MR_Integer) 10
};

#line 696 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11 = {
  (MR_String) "port_neg_failure",
  (MR_Integer) 11
};

#line 702 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12 = {
  (MR_String) "port_disj_first",
  (MR_Integer) 12
};

#line 708 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13 = {
  (MR_String) "port_disj_later",
  (MR_Integer) 13
};

#line 714 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14 = {
  (MR_String) "port_switch",
  (MR_Integer) 14
};

#line 720 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15 = {
  (MR_String) "port_user",
  (MR_Integer) 15
};

#line 726 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_trace_port_0[16] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15
};

#line 746 "mdbcomp.prim_data.c"
static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_trace_port_0[16] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15
};

#line 766 "mdbcomp.prim_data.c"
static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_trace_port_0[16] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 12,
  (MR_Integer) 5,
  (MR_Integer) 14,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 13,
  (MR_Integer) 15
};

#line 786 "mdbcomp.prim_data.c"
const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__prim_data____Unify____trace_port_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____trace_port_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "trace_port",
  {     mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_trace_port_0 },
  {     mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_trace_port_0 },
  (MR_Integer) 16,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_trace_port_0
};

#line 803 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0_10001(
#line 806 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 808 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 810 "mdbcomp.prim_data.c"
{
#line 812 "mdbcomp.prim_data.c"
  {
#line 814 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 817 "mdbcomp.prim_data.c"
    {
#line 819 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____pred_or_func_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 822 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 824 "mdbcomp.prim_data.c"
  }
#line 826 "mdbcomp.prim_data.c"
}

#line 829 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0_10001(
#line 832 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 834 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 836 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 838 "mdbcomp.prim_data.c"
{
#line 840 "mdbcomp.prim_data.c"
  {
#line 842 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 845 "mdbcomp.prim_data.c"
    {
#line 847 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____pred_or_func_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 850 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 852 "mdbcomp.prim_data.c"
  }
#line 854 "mdbcomp.prim_data.c"
}

#line 857 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0_10001(
#line 860 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 862 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 864 "mdbcomp.prim_data.c"
{
#line 866 "mdbcomp.prim_data.c"
  {
#line 868 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 871 "mdbcomp.prim_data.c"
    {
#line 873 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 876 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 878 "mdbcomp.prim_data.c"
  }
#line 880 "mdbcomp.prim_data.c"
}

#line 883 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0_10001(
#line 886 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 888 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 890 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 892 "mdbcomp.prim_data.c"
{
#line 894 "mdbcomp.prim_data.c"
  {
#line 896 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 899 "mdbcomp.prim_data.c"
    {
#line 901 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 904 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 906 "mdbcomp.prim_data.c"
  }
#line 908 "mdbcomp.prim_data.c"
}

#line 911 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0_10001(
#line 914 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 916 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 918 "mdbcomp.prim_data.c"
{
#line 920 "mdbcomp.prim_data.c"
  {
#line 922 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 925 "mdbcomp.prim_data.c"
    {
#line 927 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____special_pred_id_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 930 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 932 "mdbcomp.prim_data.c"
  }
#line 934 "mdbcomp.prim_data.c"
}

#line 937 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0_10001(
#line 940 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 942 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 944 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 946 "mdbcomp.prim_data.c"
{
#line 948 "mdbcomp.prim_data.c"
  {
#line 950 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 953 "mdbcomp.prim_data.c"
    {
#line 955 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____special_pred_id_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 958 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 960 "mdbcomp.prim_data.c"
  }
#line 962 "mdbcomp.prim_data.c"
}

#line 965 "mdbcomp.prim_data.c"
static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0_10001(
#line 968 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
#line 970 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
#line 972 "mdbcomp.prim_data.c"
{
#line 974 "mdbcomp.prim_data.c"
  {
#line 976 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded;

#line 979 "mdbcomp.prim_data.c"
    {
#line 981 "mdbcomp.prim_data.c"
      mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____trace_port_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    }
#line 984 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 986 "mdbcomp.prim_data.c"
  }
#line 988 "mdbcomp.prim_data.c"
}

#line 991 "mdbcomp.prim_data.c"
static void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0_10001(
#line 994 "mdbcomp.prim_data.c"
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
#line 996 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
#line 998 "mdbcomp.prim_data.c"
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
#line 1000 "mdbcomp.prim_data.c"
{
#line 1002 "mdbcomp.prim_data.c"
  {
#line 1004 "mdbcomp.prim_data.c"
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

#line 1007 "mdbcomp.prim_data.c"
    {
#line 1009 "mdbcomp.prim_data.c"
      mdbcomp__prim_data____Compare____trace_port_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    }
#line 1012 "mdbcomp.prim_data.c"
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
#line 1014 "mdbcomp.prim_data.c"
  }
#line 1016 "mdbcomp.prim_data.c"
}

#line 38 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0(
#line 38 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 38 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 38 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 38 "prim_data.m"
{
#line 38 "prim_data.m"
  {
#line 38 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 38 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 38 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 38 "prim_data.m"
    {
#line 38 "prim_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
#line 38 "prim_data.m"
      return;
    }
#line 38 "prim_data.m"
  }
#line 38 "prim_data.m"
}

#line 38 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0(
#line 38 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
#line 38 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 38 "prim_data.m"
{
#line 1060 "mdbcomp.prim_data.c"
  {
#line 1062 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

#line 1065 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1067 "mdbcomp.prim_data.c"
  }
#line 38 "prim_data.m"
}

#line 89 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0(
#line 89 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 89 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 89 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 89 "prim_data.m"
{
#line 89 "prim_data.m"
  {
#line 89 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 89 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 89 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 89 "prim_data.m"
    {
#line 89 "prim_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
#line 89 "prim_data.m"
      return;
    }
#line 89 "prim_data.m"
  }
#line 89 "prim_data.m"
}

#line 89 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0(
#line 89 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
#line 89 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 89 "prim_data.m"
{
#line 1113 "mdbcomp.prim_data.c"
  {
#line 1115 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

#line 1118 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1120 "mdbcomp.prim_data.c"
  }
#line 89 "prim_data.m"
}

#line 69 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0(
#line 69 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 69 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 69 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 69 "prim_data.m"
{
#line 69 "prim_data.m"
  {
#line 69 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 69 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastX_62 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 69 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastY_63 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 69 "prim_data.m"
    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__CastX_62 == mdbcomp__prim_data__CastY_63);
#line 69 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 1149 "mdbcomp.prim_data.c"
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "prim_data.m"
    else
#line 69 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 69 "prim_data.m"
      {
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
#line 69 "prim_data.m"
        MR_String mdbcomp__prim_data__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

#line 69 "prim_data.m"
        if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 69 "prim_data.m"
          {
#line 69 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 2)));
#line 69 "prim_data.m"
            MR_String mdbcomp__prim_data__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 3)));
#line 69 "prim_data.m"
            MR_Integer mdbcomp__prim_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 4)));
#line 69 "prim_data.m"
            MR_Integer mdbcomp__prim_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 5)));
#line 69 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_16_16;

#line 69 "prim_data.m"
            {
#line 69 "prim_data.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__prim_data__V_16_16, mdbcomp__prim_data__V_81_81, mdbcomp__prim_data__V_10_10);
            }
#line 1194 "mdbcomp.prim_data.c"
            mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_16_16 == (MR_Integer) 0);
#line 69 "prim_data.m"
            mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
            if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
              *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_16_16;
#line 69 "prim_data.m"
            else
#line 69 "prim_data.m"
              {
#line 69 "prim_data.m"
                MR_Word mdbcomp__prim_data__V_17_17;
#line 69 "prim_data.m"
                MR_Integer mdbcomp__prim_data__V_88_88 = (MR_Integer) mdbcomp__prim_data__V_80_80;
#line 69 "prim_data.m"
                MR_Integer mdbcomp__prim_data__V_89_89 = (MR_Integer) mdbcomp__prim_data__V_11_11;

#line 69 "prim_data.m"
                {
#line 69 "prim_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__V_17_17, mdbcomp__prim_data__V_88_88, mdbcomp__prim_data__V_89_89);
                }
#line 1218 "mdbcomp.prim_data.c"
                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_17_17 == (MR_Integer) 0);
#line 69 "prim_data.m"
                mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
                if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                  *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_17_17;
#line 69 "prim_data.m"
                else
#line 69 "prim_data.m"
                  {
#line 69 "prim_data.m"
                    MR_Word mdbcomp__prim_data__V_18_18;

#line 69 "prim_data.m"
                    {
#line 69 "prim_data.m"
                      mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__prim_data__V_18_18, mdbcomp__prim_data__V_79_79, mdbcomp__prim_data__V_12_12);
                    }
#line 1238 "mdbcomp.prim_data.c"
                    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_18_18 == (MR_Integer) 0);
#line 69 "prim_data.m"
                    mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
                    if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                      *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_18_18;
#line 69 "prim_data.m"
                    else
#line 69 "prim_data.m"
                      {
#line 69 "prim_data.m"
                        MR_Word mdbcomp__prim_data__V_19_19;

#line 69 "prim_data.m"
                        {
#line 69 "prim_data.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__prim_data__V_19_19, mdbcomp__prim_data__V_78_78, mdbcomp__prim_data__V_13_13);
                        }
#line 1258 "mdbcomp.prim_data.c"
                        mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_19_19 == (MR_Integer) 0);
#line 69 "prim_data.m"
                        mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
                        if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                          *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_19_19;
#line 69 "prim_data.m"
                        else
#line 69 "prim_data.m"
                          {
#line 69 "prim_data.m"
                            MR_Word mdbcomp__prim_data__V_20_20;

#line 69 "prim_data.m"
                            {
#line 69 "prim_data.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__V_20_20, mdbcomp__prim_data__V_77_77, mdbcomp__prim_data__V_14_14);
                            }
#line 1278 "mdbcomp.prim_data.c"
                            mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_20_20 == (MR_Integer) 0);
#line 69 "prim_data.m"
                            mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
                            if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                              *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_20_20;
#line 69 "prim_data.m"
                            else
#line 69 "prim_data.m"
                              {
#line 69 "prim_data.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__V_76_76, mdbcomp__prim_data__V_15_15);
#line 69 "prim_data.m"
                                return;
                              }
#line 69 "prim_data.m"
                          }
#line 69 "prim_data.m"
                      }
#line 69 "prim_data.m"
                  }
#line 69 "prim_data.m"
              }
#line 69 "prim_data.m"
          }
#line 69 "prim_data.m"
        else
#line 1307 "mdbcomp.prim_data.c"
          *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "prim_data.m"
      }
#line 69 "prim_data.m"
    else
#line 69 "prim_data.m"
      {
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
#line 69 "prim_data.m"
        MR_String mdbcomp__prim_data__V_84_84 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

#line 69 "prim_data.m"
        if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1330 "mdbcomp.prim_data.c"
          *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 2;
#line 69 "prim_data.m"
        else
#line 69 "prim_data.m"
          {
#line 69 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 2)));
#line 69 "prim_data.m"
            MR_String mdbcomp__prim_data__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 3)));
#line 69 "prim_data.m"
            MR_Integer mdbcomp__prim_data__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 4)));
#line 69 "prim_data.m"
            MR_Integer mdbcomp__prim_data__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 5)));
#line 69 "prim_data.m"
            MR_Word mdbcomp__prim_data__V_57_57;

#line 69 "prim_data.m"
            {
#line 69 "prim_data.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__prim_data__V_57_57, mdbcomp__prim_data__V_87_87, mdbcomp__prim_data__V_51_51);
            }
#line 1356 "mdbcomp.prim_data.c"
            mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_57_57 == (MR_Integer) 0);
#line 69 "prim_data.m"
            mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
            if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
              *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_57_57;
#line 69 "prim_data.m"
            else
#line 69 "prim_data.m"
              {
#line 69 "prim_data.m"
                MR_Word mdbcomp__prim_data__V_58_58;
#line 69 "prim_data.m"
                MR_Integer mdbcomp__prim_data__V_90_90 = (MR_Integer) mdbcomp__prim_data__V_86_86;
#line 69 "prim_data.m"
                MR_Integer mdbcomp__prim_data__V_91_91 = (MR_Integer) mdbcomp__prim_data__V_52_52;

#line 69 "prim_data.m"
                {
#line 69 "prim_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__V_58_58, mdbcomp__prim_data__V_90_90, mdbcomp__prim_data__V_91_91);
                }
#line 1380 "mdbcomp.prim_data.c"
                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_58_58 == (MR_Integer) 0);
#line 69 "prim_data.m"
                mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
                if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                  *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_58_58;
#line 69 "prim_data.m"
                else
#line 69 "prim_data.m"
                  {
#line 69 "prim_data.m"
                    MR_Word mdbcomp__prim_data__V_59_59;

#line 69 "prim_data.m"
                    {
#line 69 "prim_data.m"
                      mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__prim_data__V_59_59, mdbcomp__prim_data__V_85_85, mdbcomp__prim_data__V_53_53);
                    }
#line 1400 "mdbcomp.prim_data.c"
                    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_59_59 == (MR_Integer) 0);
#line 69 "prim_data.m"
                    mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
                    if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                      *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_59_59;
#line 69 "prim_data.m"
                    else
#line 69 "prim_data.m"
                      {
#line 69 "prim_data.m"
                        MR_Word mdbcomp__prim_data__V_60_60;

#line 69 "prim_data.m"
                        {
#line 69 "prim_data.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__prim_data__V_60_60, mdbcomp__prim_data__V_84_84, mdbcomp__prim_data__V_54_54);
                        }
#line 1420 "mdbcomp.prim_data.c"
                        mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_60_60 == (MR_Integer) 0);
#line 69 "prim_data.m"
                        mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
                        if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                          *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_60_60;
#line 69 "prim_data.m"
                        else
#line 69 "prim_data.m"
                          {
#line 69 "prim_data.m"
                            MR_Word mdbcomp__prim_data__V_61_61;

#line 69 "prim_data.m"
                            {
#line 69 "prim_data.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__V_61_61, mdbcomp__prim_data__V_83_83, mdbcomp__prim_data__V_55_55);
                            }
#line 1440 "mdbcomp.prim_data.c"
                            mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_61_61 == (MR_Integer) 0);
#line 69 "prim_data.m"
                            mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
#line 69 "prim_data.m"
                            if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                              *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__V_61_61;
#line 69 "prim_data.m"
                            else
#line 69 "prim_data.m"
                              {
#line 69 "prim_data.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__V_82_82, mdbcomp__prim_data__V_56_56);
#line 69 "prim_data.m"
                                return;
                              }
#line 69 "prim_data.m"
                          }
#line 69 "prim_data.m"
                      }
#line 69 "prim_data.m"
                  }
#line 69 "prim_data.m"
              }
#line 69 "prim_data.m"
          }
#line 69 "prim_data.m"
      }
#line 69 "prim_data.m"
  }
#line 69 "prim_data.m"
}

#line 69 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0(
#line 69 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 69 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 69 "prim_data.m"
{
#line 69 "prim_data.m"
  {
#line 69 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 69 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastX_27 = (MR_Integer) mdbcomp__prim_data__HeadVar__1_1;
#line 69 "prim_data.m"
    MR_Integer mdbcomp__prim_data__CastY_28 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;

#line 69 "prim_data.m"
    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__CastX_27 == mdbcomp__prim_data__CastY_28);
#line 69 "prim_data.m"
    if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
      mdbcomp__prim_data__succeeded = MR_TRUE;
#line 69 "prim_data.m"
    else
#line 69 "prim_data.m"
    if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 69 "prim_data.m"
      {
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 2)));
#line 69 "prim_data.m"
        MR_String mdbcomp__prim_data__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 3)));
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 4)));
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 5)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_9_9;
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_10_10;
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_11_11;
#line 69 "prim_data.m"
        MR_String mdbcomp__prim_data__V_12_12;
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_13_13;
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_14_14;

#line 69 "prim_data.m"
        mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 69 "prim_data.m"
        if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
          {
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
#line 1547 "mdbcomp.prim_data.c"
            {
#line 1549 "mdbcomp.prim_data.c"
              mdbcomp__prim_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__prim_data__V_3_3, mdbcomp__prim_data__V_9_9);
            }
#line 69 "prim_data.m"
            if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
              {
#line 1556 "mdbcomp.prim_data.c"
                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_4_4 == mdbcomp__prim_data__V_10_10);
#line 69 "prim_data.m"
                if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                  {
#line 1562 "mdbcomp.prim_data.c"
                    {
#line 1564 "mdbcomp.prim_data.c"
                      mdbcomp__prim_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__prim_data__V_5_5, mdbcomp__prim_data__V_11_11);
                    }
#line 69 "prim_data.m"
                    if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                      {
#line 1571 "mdbcomp.prim_data.c"
                        mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__V_6_6, mdbcomp__prim_data__V_12_12) == 0);
#line 69 "prim_data.m"
                        if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                          {
#line 1577 "mdbcomp.prim_data.c"
                            mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_7_7 == mdbcomp__prim_data__V_13_13);
#line 69 "prim_data.m"
                            if (mdbcomp__prim_data__succeeded)
#line 1581 "mdbcomp.prim_data.c"
                              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_8_8 == mdbcomp__prim_data__V_14_14);
#line 69 "prim_data.m"
                          }
#line 69 "prim_data.m"
                      }
#line 69 "prim_data.m"
                  }
#line 69 "prim_data.m"
              }
#line 69 "prim_data.m"
          }
#line 69 "prim_data.m"
      }
#line 69 "prim_data.m"
    else
#line 69 "prim_data.m"
      {
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 2)));
#line 69 "prim_data.m"
        MR_String mdbcomp__prim_data__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 3)));
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 4)));
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 5)));
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_21_21;
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_22_22;
#line 69 "prim_data.m"
        MR_Word mdbcomp__prim_data__V_23_23;
#line 69 "prim_data.m"
        MR_String mdbcomp__prim_data__V_24_24;
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_25_25;
#line 69 "prim_data.m"
        MR_Integer mdbcomp__prim_data__V_26_26;

#line 69 "prim_data.m"
        mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 69 "prim_data.m"
        if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
          {
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
#line 69 "prim_data.m"
            mdbcomp__prim_data__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
#line 1642 "mdbcomp.prim_data.c"
            {
#line 1644 "mdbcomp.prim_data.c"
              mdbcomp__prim_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__prim_data__V_15_15, mdbcomp__prim_data__V_21_21);
            }
#line 69 "prim_data.m"
            if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
              {
#line 1651 "mdbcomp.prim_data.c"
                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_16_16 == mdbcomp__prim_data__V_22_22);
#line 69 "prim_data.m"
                if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                  {
#line 1657 "mdbcomp.prim_data.c"
                    {
#line 1659 "mdbcomp.prim_data.c"
                      mdbcomp__prim_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__prim_data__V_17_17, mdbcomp__prim_data__V_23_23);
                    }
#line 69 "prim_data.m"
                    if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                      {
#line 1666 "mdbcomp.prim_data.c"
                        mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__V_18_18, mdbcomp__prim_data__V_24_24) == 0);
#line 69 "prim_data.m"
                        if (mdbcomp__prim_data__succeeded)
#line 69 "prim_data.m"
                          {
#line 1672 "mdbcomp.prim_data.c"
                            mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_19_19 == mdbcomp__prim_data__V_25_25);
#line 69 "prim_data.m"
                            if (mdbcomp__prim_data__succeeded)
#line 1676 "mdbcomp.prim_data.c"
                              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__V_20_20 == mdbcomp__prim_data__V_26_26);
#line 69 "prim_data.m"
                          }
#line 69 "prim_data.m"
                      }
#line 69 "prim_data.m"
                  }
#line 69 "prim_data.m"
              }
#line 69 "prim_data.m"
          }
#line 69 "prim_data.m"
      }
#line 69 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 69 "prim_data.m"
  }
#line 69 "prim_data.m"
}

#line 26 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0(
#line 26 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 26 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
#line 26 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
#line 26 "prim_data.m"
{
#line 26 "prim_data.m"
  {
#line 26 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 26 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
#line 26 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

#line 26 "prim_data.m"
    {
#line 26 "prim_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
#line 26 "prim_data.m"
      return;
    }
#line 26 "prim_data.m"
  }
#line 26 "prim_data.m"
}

#line 26 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0(
#line 26 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
#line 26 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
#line 26 "prim_data.m"
{
#line 1738 "mdbcomp.prim_data.c"
  {
#line 1740 "mdbcomp.prim_data.c"
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

#line 1743 "mdbcomp.prim_data.c"
    return mdbcomp__prim_data__succeeded;
#line 1745 "mdbcomp.prim_data.c"
  }
#line 26 "prim_data.m"
}

#line 125 "prim_data.m"
MR_Integer MR_CALL 
mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(
#line 125 "prim_data.m"
  MR_Word mdbcomp__prim_data__Id_3)
#line 125 "prim_data.m"
{
#line 144 "prim_data.m"
  {
#line 144 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 144 "prim_data.m"
    MR_Integer mdbcomp__prim_data__Arity_4;
#line 144 "prim_data.m"
    MR_String mdbcomp__prim_data__V_5_5;
#line 144 "prim_data.m"
    MR_String mdbcomp__prim_data__V_6_6;

#line 144 "prim_data.m"
    {
#line 144 "prim_data.m"
      mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__V_5_5, &mdbcomp__prim_data__V_6_6, &mdbcomp__prim_data__Arity_4);
    }
#line 144 "prim_data.m"
    return mdbcomp__prim_data__Arity_4;
#line 144 "prim_data.m"
  }
#line 125 "prim_data.m"
}

#line 119 "prim_data.m"
MR_String MR_CALL 
mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(
#line 119 "prim_data.m"
  MR_Word mdbcomp__prim_data__Id_3)
#line 119 "prim_data.m"
{
#line 141 "prim_data.m"
  {
#line 141 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 141 "prim_data.m"
    MR_String mdbcomp__prim_data__Name_4;
#line 141 "prim_data.m"
    MR_String mdbcomp__prim_data__V_5_5;
#line 141 "prim_data.m"
    MR_Integer mdbcomp__prim_data__V_6_6;

#line 141 "prim_data.m"
    {
#line 141 "prim_data.m"
      mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__V_5_5, &mdbcomp__prim_data__Name_4, &mdbcomp__prim_data__V_6_6);
    }
#line 141 "prim_data.m"
    return mdbcomp__prim_data__Name_4;
#line 141 "prim_data.m"
  }
#line 119 "prim_data.m"
}

#line 112 "prim_data.m"
MR_String MR_CALL 
mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(
#line 112 "prim_data.m"
  MR_Word mdbcomp__prim_data__Id_3)
#line 112 "prim_data.m"
{
#line 138 "prim_data.m"
  {
#line 138 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 138 "prim_data.m"
    MR_String mdbcomp__prim_data__Name_4;
#line 138 "prim_data.m"
    MR_String mdbcomp__prim_data__V_5_5;
#line 138 "prim_data.m"
    MR_Integer mdbcomp__prim_data__V_6_6;

#line 138 "prim_data.m"
    {
#line 138 "prim_data.m"
      mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__Name_4, &mdbcomp__prim_data__V_5_5, &mdbcomp__prim_data__V_6_6);
    }
#line 138 "prim_data.m"
    return mdbcomp__prim_data__Name_4;
#line 138 "prim_data.m"
  }
#line 112 "prim_data.m"
}

#line 105 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_2(
#line 105 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 105 "prim_data.m"
  MR_String * mdbcomp__prim_data__HeadVar__2_2,
#line 105 "prim_data.m"
  MR_String mdbcomp__prim_data__HeadVar__3_3,
#line 105 "prim_data.m"
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
#line 105 "prim_data.m"
{
#line 132 "prim_data.m"
  {
#line 132 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 132 "prim_data.m"
    MR_Integer mdbcomp__prim_data__lo_0;
#line 132 "prim_data.m"
    MR_Integer mdbcomp__prim_data__hi_1;
#line 132 "prim_data.m"
    MR_Integer mdbcomp__prim_data__mid_2;
#line 132 "prim_data.m"
    MR_Integer mdbcomp__prim_data__result_3;

#line 132 "prim_data.m"
    /* binary string simple lookup switch */
#line 132 "prim_data.m"
    mdbcomp__prim_data__lo_0 = (MR_Integer) 0;
#line 132 "prim_data.m"
    mdbcomp__prim_data__hi_1 = (MR_Integer) 3;
#line 132 "prim_data.m"
    do
#line 132 "prim_data.m"
      {
#line 132 "prim_data.m"
        mdbcomp__prim_data__mid_2 = (((mdbcomp__prim_data__lo_0 + mdbcomp__prim_data__hi_1)) / (MR_Integer) 2);
#line 132 "prim_data.m"
        mdbcomp__prim_data__result_3 = MR_strcmp(mdbcomp__prim_data__HeadVar__3_3, ((&mdbcomp__prim_data_vector_common_2[4 + mdbcomp__prim_data__mid_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_0);
#line 132 "prim_data.m"
        if ((mdbcomp__prim_data__result_3 == (MR_Integer) 0))
#line 132 "prim_data.m"
          {
#line 132 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__1_1 = ((&mdbcomp__prim_data_vector_common_2[4 + mdbcomp__prim_data__mid_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_1;
#line 132 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__2_2 = ((&mdbcomp__prim_data_vector_common_2[4 + mdbcomp__prim_data__mid_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_2;
#line 132 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__4_4 = ((&mdbcomp__prim_data_vector_common_2[4 + mdbcomp__prim_data__mid_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_3;
#line 132 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 132 "prim_data.m"
            /* jump out of search loop */
#line 132 "prim_data.m"
            goto label_0;
#line 132 "prim_data.m"
          }
#line 132 "prim_data.m"
        else
#line 132 "prim_data.m"
        if ((mdbcomp__prim_data__result_3 < (MR_Integer) 0))
#line 132 "prim_data.m"
          mdbcomp__prim_data__hi_1 = (mdbcomp__prim_data__mid_2 - (MR_Integer) 1);
#line 132 "prim_data.m"
        else
#line 132 "prim_data.m"
          mdbcomp__prim_data__lo_0 = (mdbcomp__prim_data__mid_2 + (MR_Integer) 1);
#line 132 "prim_data.m"
      }
#line 132 "prim_data.m"
    while ((mdbcomp__prim_data__lo_0 <= mdbcomp__prim_data__hi_1));
#line 132 "prim_data.m"
    mdbcomp__prim_data__succeeded = MR_FALSE;
#line 132 "prim_data.m"
  label_0:;
#line 132 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 132 "prim_data.m"
  }
#line 105 "prim_data.m"
}

#line 104 "prim_data.m"
MR_bool MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_1(
#line 104 "prim_data.m"
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
#line 104 "prim_data.m"
  MR_String mdbcomp__prim_data__HeadVar__2_2,
#line 104 "prim_data.m"
  MR_String * mdbcomp__prim_data__HeadVar__3_3,
#line 104 "prim_data.m"
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
#line 104 "prim_data.m"
{
#line 132 "prim_data.m"
  {
#line 132 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;
#line 132 "prim_data.m"
    MR_Integer mdbcomp__prim_data__lo_0;
#line 132 "prim_data.m"
    MR_Integer mdbcomp__prim_data__hi_1;
#line 132 "prim_data.m"
    MR_Integer mdbcomp__prim_data__mid_2;
#line 132 "prim_data.m"
    MR_Integer mdbcomp__prim_data__result_3;

#line 132 "prim_data.m"
    /* binary string simple lookup switch */
#line 132 "prim_data.m"
    mdbcomp__prim_data__lo_0 = (MR_Integer) 0;
#line 132 "prim_data.m"
    mdbcomp__prim_data__hi_1 = (MR_Integer) 3;
#line 132 "prim_data.m"
    do
#line 132 "prim_data.m"
      {
#line 132 "prim_data.m"
        mdbcomp__prim_data__mid_2 = (((mdbcomp__prim_data__lo_0 + mdbcomp__prim_data__hi_1)) / (MR_Integer) 2);
#line 132 "prim_data.m"
        mdbcomp__prim_data__result_3 = MR_strcmp(mdbcomp__prim_data__HeadVar__2_2, ((&mdbcomp__prim_data_vector_common_2[0 + mdbcomp__prim_data__mid_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_0);
#line 132 "prim_data.m"
        if ((mdbcomp__prim_data__result_3 == (MR_Integer) 0))
#line 132 "prim_data.m"
          {
#line 132 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__1_1 = ((&mdbcomp__prim_data_vector_common_2[0 + mdbcomp__prim_data__mid_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_1;
#line 132 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__3_3 = ((&mdbcomp__prim_data_vector_common_2[0 + mdbcomp__prim_data__mid_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_2;
#line 132 "prim_data.m"
            *mdbcomp__prim_data__HeadVar__4_4 = ((&mdbcomp__prim_data_vector_common_2[0 + mdbcomp__prim_data__mid_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_3;
#line 132 "prim_data.m"
            mdbcomp__prim_data__succeeded = MR_TRUE;
#line 132 "prim_data.m"
            /* jump out of search loop */
#line 132 "prim_data.m"
            goto label_0;
#line 132 "prim_data.m"
          }
#line 132 "prim_data.m"
        else
#line 132 "prim_data.m"
        if ((mdbcomp__prim_data__result_3 < (MR_Integer) 0))
#line 132 "prim_data.m"
          mdbcomp__prim_data__hi_1 = (mdbcomp__prim_data__mid_2 - (MR_Integer) 1);
#line 132 "prim_data.m"
        else
#line 132 "prim_data.m"
          mdbcomp__prim_data__lo_0 = (mdbcomp__prim_data__mid_2 + (MR_Integer) 1);
#line 132 "prim_data.m"
      }
#line 132 "prim_data.m"
    while ((mdbcomp__prim_data__lo_0 <= mdbcomp__prim_data__hi_1));
#line 132 "prim_data.m"
    mdbcomp__prim_data__succeeded = MR_FALSE;
#line 132 "prim_data.m"
  label_0:;
#line 132 "prim_data.m"
    return mdbcomp__prim_data__succeeded;
#line 132 "prim_data.m"
  }
#line 104 "prim_data.m"
}

#line 103 "prim_data.m"
void MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_0(
#line 103 "prim_data.m"
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
#line 103 "prim_data.m"
  MR_String * mdbcomp__prim_data__HeadVar__2_2,
#line 103 "prim_data.m"
  MR_String * mdbcomp__prim_data__HeadVar__3_3,
#line 103 "prim_data.m"
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
#line 103 "prim_data.m"
{
#line 132 "prim_data.m"
  {
#line 132 "prim_data.m"
    MR_bool mdbcomp__prim_data__succeeded;

#line 132 "prim_data.m"
    *mdbcomp__prim_data__HeadVar__2_2 = ((&mdbcomp__prim_data_vector_common_1[0 + mdbcomp__prim_data__HeadVar__1_1]))->mdbcomp__prim_data__vector_common_type_1_0__vct_1_f_0;
#line 132 "prim_data.m"
    *mdbcomp__prim_data__HeadVar__3_3 = ((&mdbcomp__prim_data_vector_common_1[0 + mdbcomp__prim_data__HeadVar__1_1]))->mdbcomp__prim_data__vector_common_type_1_0__vct_1_f_1;
#line 132 "prim_data.m"
    *mdbcomp__prim_data__HeadVar__4_4 = ((&mdbcomp__prim_data_vector_common_1[0 + mdbcomp__prim_data__HeadVar__1_1]))->mdbcomp__prim_data__vector_common_type_1_0__vct_1_f_2;
#line 132 "prim_data.m"
  }
#line 103 "prim_data.m"
}

void mercury__mdbcomp__prim_data__init(void)
{
}

void mercury__mdbcomp__prim_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0);
	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0);
	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0);
	MR_register_type_ctor_info(&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0);
}

void mercury__mdbcomp__prim_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.prim_data. */
