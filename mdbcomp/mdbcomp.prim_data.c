/*
** Automatically generated from `prim_data.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


#include "mdbcomp.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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




static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1;

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_pred_or_func_0[2];

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_pred_or_func_0[2];

static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_pred_or_func_0[2];

static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0[6];

static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0[6];

static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0;

static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1[6];

static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1[6];

static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1;

static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1[1];

static const MR_DuPtagLayout mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_proc_label_0[2];

static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_proc_label_0[2];

static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_proc_label_0[2];

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2;

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0[3];

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0[3];

static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0[3];

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14;

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15;

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_trace_port_0[16];

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_trace_port_0[16];

static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_trace_port_0[16];

static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0_10001(
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

static void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0_10001(
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0_10001(
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

static void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0_10001(
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0_10001(
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

static void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0_10001(
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
  MR_Box mdbcomp__prim_data__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0_10001(
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2);

static void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0_10001(
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
  MR_Box mdbcomp__prim_data__wrapper_arg_3);



/* sealed */ struct mdbcomp__prim_data__vector_common_type_1_0_s {
  const MR_Word mdbcomp__prim_data__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct mdbcomp__prim_data__vector_common_type_1_0_s mdbcomp__prim_data_vector_common_1[16];

/* sealed */ struct mdbcomp__prim_data__vector_common_type_2_0_s {
  const MR_String mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct mdbcomp__prim_data__vector_common_type_2_0_s mdbcomp__prim_data_vector_common_2[16];




static /* final */ const struct mdbcomp__prim_data__vector_common_type_1_0_s mdbcomp__prim_data_vector_common_1[16] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 6 },
  /* row 2 */   {     (MR_Integer) 12 },
  /* row 3 */   {     (MR_Integer) 13 },
  /* row 4 */   {     (MR_Integer) 8 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 3 },
  /* row 8 */   {     (MR_Integer) 9 },
  /* row 9 */   {     (MR_Integer) 11 },
  /* row 10 */   {     (MR_Integer) 10 },
  /* row 11 */   {     (MR_Integer) 2 },
  /* row 12 */   {     (MR_Integer) 14 },
  /* row 13 */   {     (MR_Integer) 4 },
  /* row 14 */   {     (MR_Integer) 7 },
  /* row 15 */   {     (MR_Integer) 15 },
};

static /* final */ const struct mdbcomp__prim_data__vector_common_type_2_0_s mdbcomp__prim_data_vector_common_2[16] = {
  /* row 0 */   {     (MR_String) "CALL" },
  /* row 1 */   {     (MR_String) "EXIT" },
  /* row 2 */   {     (MR_String) "REDO" },
  /* row 3 */   {     (MR_String) "FAIL" },
  /* row 4 */   {     (MR_String) "TAIL" },
  /* row 5 */   {     (MR_String) "EXCP" },
  /* row 6 */   {     (MR_String) "COND" },
  /* row 7 */   {     (MR_String) "THEN" },
  /* row 8 */   {     (MR_String) "ELSE" },
  /* row 9 */   {     (MR_String) "NEGE" },
  /* row 10 */   {     (MR_String) "NEGS" },
  /* row 11 */   {     (MR_String) "NEGF" },
  /* row 12 */   {     (MR_String) "DSJF" },
  /* row 13 */   {     (MR_String) "DSJL" },
  /* row 14 */   {     (MR_String) "SWTC" },
  /* row 15 */   {     (MR_String) "USER" },
};


#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0 = {
  (MR_String) "pf_predicate",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1 = {
  (MR_String) "pf_function",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_pred_or_func_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1
};

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_pred_or_func_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_pred_or_func_0_0
};

static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_pred_or_func_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0[6] = {
  (MR_String) "ord_defining_module",
  (MR_String) "ord_p_or_f",
  (MR_String) "ord_declaring_module",
  (MR_String) "ord_pred_name",
  (MR_String) "ord_arity",
  (MR_String) "ord_mode_number"
};

static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0 = {
  (MR_String) "ordinary_proc_label",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_0,
  mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1[6] = {
  (MR_String) "spec_defining_module",
  (MR_String) "spec_spec_id",
  (MR_String) "spec_type_module",
  (MR_String) "spec_type_name",
  (MR_String) "spec_type_arity",
  (MR_String) "spec_mode_number"
};

static const MR_DuFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1 = {
  (MR_String) "special_proc_label",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__prim_data__mdbcomp__prim_data__field_types_proc_label_0_1,
  mdbcomp__prim_data__mdbcomp__prim_data__field_names_proc_label_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0[1] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1[1] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1
};

static const MR_DuPtagLayout mdbcomp__prim_data__mdbcomp__prim_data__du_ptag_ordered_proc_label_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__prim_data__mdbcomp__prim_data__du_stag_ordered_proc_label_0_1
  }
};

static const MR_DuFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__du_name_ordered_proc_label_0[2] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__du_functor_desc_proc_label_0_1
};

static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_proc_label_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0 = {
  (MR_String) "spec_pred_unify",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1 = {
  (MR_String) "spec_pred_index",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2 = {
  (MR_String) "spec_pred_compare",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0[3] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2
};

static const MR_EnumFunctorDescPtr mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0[3] = {
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_2,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_1,
  &mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_special_pred_id_0_0
};

static const MR_Integer mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__prim_data____Unify____special_pred_id_0_0_10001)),
  ((MR_Box) (mdbcomp__prim_data____Compare____special_pred_id_0_0_10001)),
  (MR_String) "mdbcomp.prim_data",
  (MR_String) "special_pred_id",
  {     mdbcomp__prim_data__mdbcomp__prim_data__enum_name_ordered_special_pred_id_0 },
  {     mdbcomp__prim_data__mdbcomp__prim_data__enum_value_ordered_special_pred_id_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__prim_data__mdbcomp__prim_data__functor_number_map_special_pred_id_0
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_0 = {
  (MR_String) "port_call",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_1 = {
  (MR_String) "port_exit",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_2 = {
  (MR_String) "port_redo",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_3 = {
  (MR_String) "port_fail",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_4 = {
  (MR_String) "port_tailrec_call",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_5 = {
  (MR_String) "port_exception",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_6 = {
  (MR_String) "port_ite_cond",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_7 = {
  (MR_String) "port_ite_then",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_8 = {
  (MR_String) "port_ite_else",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_9 = {
  (MR_String) "port_neg_enter",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_10 = {
  (MR_String) "port_neg_success",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_11 = {
  (MR_String) "port_neg_failure",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_12 = {
  (MR_String) "port_disj_first",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_13 = {
  (MR_String) "port_disj_later",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_14 = {
  (MR_String) "port_switch",
  (MR_Integer) 14
};

static const MR_EnumFunctorDesc mdbcomp__prim_data__mdbcomp__prim_data__enum_functor_desc_trace_port_0_15 = {
  (MR_String) "port_user",
  (MR_Integer) 15
};

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

const MR_TypeCtorInfo_Struct mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0(
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
{
  {
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0(
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

    return mdbcomp__prim_data__succeeded;
  }
}

void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0(
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
{
  {
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0(
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

    return mdbcomp__prim_data__succeeded;
  }
}

void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0(
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;
    MR_Integer mdbcomp__prim_data__CastX_62 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
    MR_Integer mdbcomp__prim_data__CastY_63 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__CastX_62 == mdbcomp__prim_data__CastY_63);
    if (mdbcomp__prim_data__succeeded)
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Integer mdbcomp__prim_data__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer mdbcomp__prim_data__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
      MR_String mdbcomp__prim_data__Var_78 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mdbcomp__prim_data__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mdbcomp__prim_data__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdbcomp__prim_data__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mdbcomp__prim_data__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdbcomp__prim_data__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__prim_data__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_String mdbcomp__prim_data__ArgY4_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer mdbcomp__prim_data__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer mdbcomp__prim_data__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mdbcomp__prim_data__Var_16;

        mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__prim_data__Var_16, mdbcomp__prim_data__Var_81, mdbcomp__prim_data__ArgY1_5);
        mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_16 == (MR_Integer) 0);
        mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
        if (mdbcomp__prim_data__succeeded)
          *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_16;
        else
        {
          MR_Word mdbcomp__prim_data__Var_17;
          MR_Integer mdbcomp__prim_data__Var_88 = (MR_Integer) mdbcomp__prim_data__Var_80;
          MR_Integer mdbcomp__prim_data__Var_89 = (MR_Integer) mdbcomp__prim_data__ArgY2_7;

          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__Var_17, mdbcomp__prim_data__Var_88, mdbcomp__prim_data__Var_89);
          mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_17 == (MR_Integer) 0);
          mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
          if (mdbcomp__prim_data__succeeded)
            *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_17;
          else
          {
            MR_Word mdbcomp__prim_data__Var_18;

            mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__prim_data__Var_18, mdbcomp__prim_data__Var_79, mdbcomp__prim_data__ArgY3_9);
            mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_18 == (MR_Integer) 0);
            mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
            if (mdbcomp__prim_data__succeeded)
              *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_18;
            else
            {
              MR_Word mdbcomp__prim_data__Var_19;

              mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__prim_data__Var_19, mdbcomp__prim_data__Var_78, mdbcomp__prim_data__ArgY4_11);
              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_19 == (MR_Integer) 0);
              mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
              if (mdbcomp__prim_data__succeeded)
                *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_19;
              else
              {
                MR_Word mdbcomp__prim_data__Var_20;

                mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__Var_20, mdbcomp__prim_data__Var_77, mdbcomp__prim_data__ArgY5_13);
                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_20 == (MR_Integer) 0);
                mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
                if (mdbcomp__prim_data__succeeded)
                  *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_20;
                else
                  mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Var_76, mdbcomp__prim_data__ArgY6_15);
              }
            }
          }
        }
      }
      else
        *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Integer mdbcomp__prim_data__Var_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer mdbcomp__prim_data__Var_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
      MR_String mdbcomp__prim_data__Var_84 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word mdbcomp__prim_data__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mdbcomp__prim_data__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mdbcomp__prim_data__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word mdbcomp__prim_data__ArgY1_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdbcomp__prim_data__ArgY2_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__prim_data__ArgY3_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 2)));
        MR_String mdbcomp__prim_data__ArgY4_52 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer mdbcomp__prim_data__ArgY5_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer mdbcomp__prim_data__ArgY6_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mdbcomp__prim_data__Var_57;

        mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__prim_data__Var_57, mdbcomp__prim_data__Var_87, mdbcomp__prim_data__ArgY1_46);
        mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_57 == (MR_Integer) 0);
        mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
        if (mdbcomp__prim_data__succeeded)
          *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_57;
        else
        {
          MR_Word mdbcomp__prim_data__Var_58;
          MR_Integer mdbcomp__prim_data__Var_90 = (MR_Integer) mdbcomp__prim_data__Var_86;
          MR_Integer mdbcomp__prim_data__Var_91 = (MR_Integer) mdbcomp__prim_data__ArgY2_48;

          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__Var_58, mdbcomp__prim_data__Var_90, mdbcomp__prim_data__Var_91);
          mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_58 == (MR_Integer) 0);
          mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
          if (mdbcomp__prim_data__succeeded)
            *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_58;
          else
          {
            MR_Word mdbcomp__prim_data__Var_59;

            mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__prim_data__Var_59, mdbcomp__prim_data__Var_85, mdbcomp__prim_data__ArgY3_50);
            mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_59 == (MR_Integer) 0);
            mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
            if (mdbcomp__prim_data__succeeded)
              *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_59;
            else
            {
              MR_Word mdbcomp__prim_data__Var_60;

              mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__prim_data__Var_60, mdbcomp__prim_data__Var_84, mdbcomp__prim_data__ArgY4_52);
              mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_60 == (MR_Integer) 0);
              mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
              if (mdbcomp__prim_data__succeeded)
                *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_60;
              else
              {
                MR_Word mdbcomp__prim_data__Var_61;

                mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__prim_data__Var_61, mdbcomp__prim_data__Var_83, mdbcomp__prim_data__ArgY5_54);
                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__Var_61 == (MR_Integer) 0);
                mdbcomp__prim_data__succeeded = !(mdbcomp__prim_data__succeeded);
                if (mdbcomp__prim_data__succeeded)
                  *mdbcomp__prim_data__HeadVar__1_1 = mdbcomp__prim_data__Var_61;
                else
                  mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Var_82, mdbcomp__prim_data__ArgY6_56);
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0(
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;
    MR_Integer mdbcomp__prim_data__CastX_27 = (MR_Integer) mdbcomp__prim_data__HeadVar__1_1;
    MR_Integer mdbcomp__prim_data__CastY_28 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;

    mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__CastX_27 == mdbcomp__prim_data__CastY_28);
    if (mdbcomp__prim_data__succeeded)
      mdbcomp__prim_data__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word mdbcomp__prim_data__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdbcomp__prim_data__ArgY1_4;
      MR_Word mdbcomp__prim_data__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdbcomp__prim_data__ArgY2_6;
      MR_Word mdbcomp__prim_data__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mdbcomp__prim_data__ArgY3_8;
      MR_String mdbcomp__prim_data__ArgX4_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 3)));
      MR_String mdbcomp__prim_data__ArgY4_10;
      MR_Integer mdbcomp__prim_data__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer mdbcomp__prim_data__ArgY5_12;
      MR_Integer mdbcomp__prim_data__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer mdbcomp__prim_data__ArgY6_14;

      mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (mdbcomp__prim_data__succeeded)
      {
        mdbcomp__prim_data__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
        mdbcomp__prim_data__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
        mdbcomp__prim_data__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
        mdbcomp__prim_data__ArgY4_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
        mdbcomp__prim_data__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
        mdbcomp__prim_data__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
        mdbcomp__prim_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__prim_data__ArgX1_3, mdbcomp__prim_data__ArgY1_4);
        if (mdbcomp__prim_data__succeeded)
        {
          mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__ArgX2_5 == mdbcomp__prim_data__ArgY2_6);
          if (mdbcomp__prim_data__succeeded)
          {
            mdbcomp__prim_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__prim_data__ArgX3_7, mdbcomp__prim_data__ArgY3_8);
            if (mdbcomp__prim_data__succeeded)
            {
              mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__ArgX4_9, mdbcomp__prim_data__ArgY4_10) == 0);
              if (mdbcomp__prim_data__succeeded)
              {
                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__ArgX5_11 == mdbcomp__prim_data__ArgY5_12);
                if (mdbcomp__prim_data__succeeded)
                  mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__ArgX6_13 == mdbcomp__prim_data__ArgY6_14);
              }
            }
          }
        }
      }
    }
    else
    {
      MR_Word mdbcomp__prim_data__ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mdbcomp__prim_data__ArgY1_16;
      MR_Word mdbcomp__prim_data__ArgX2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mdbcomp__prim_data__ArgY2_18;
      MR_Word mdbcomp__prim_data__ArgX3_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mdbcomp__prim_data__ArgY3_20;
      MR_String mdbcomp__prim_data__ArgX4_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 3)));
      MR_String mdbcomp__prim_data__ArgY4_22;
      MR_Integer mdbcomp__prim_data__ArgX5_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer mdbcomp__prim_data__ArgY5_24;
      MR_Integer mdbcomp__prim_data__ArgX6_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer mdbcomp__prim_data__ArgY6_26;

      mdbcomp__prim_data__succeeded = ((MR_tag((MR_Word) mdbcomp__prim_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mdbcomp__prim_data__succeeded)
      {
        mdbcomp__prim_data__ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 0)));
        mdbcomp__prim_data__ArgY2_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 1)));
        mdbcomp__prim_data__ArgY3_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 2)));
        mdbcomp__prim_data__ArgY4_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 3)));
        mdbcomp__prim_data__ArgY5_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 4)));
        mdbcomp__prim_data__ArgY6_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__prim_data__HeadVar__2_2, (MR_Integer) 5)));
        mdbcomp__prim_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__prim_data__ArgX1_15, mdbcomp__prim_data__ArgY1_16);
        if (mdbcomp__prim_data__succeeded)
        {
          mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__ArgX2_17 == mdbcomp__prim_data__ArgY2_18);
          if (mdbcomp__prim_data__succeeded)
          {
            mdbcomp__prim_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__prim_data__ArgX3_19, mdbcomp__prim_data__ArgY3_20);
            if (mdbcomp__prim_data__succeeded)
            {
              mdbcomp__prim_data__succeeded = (strcmp(mdbcomp__prim_data__ArgX4_21, mdbcomp__prim_data__ArgY4_22) == 0);
              if (mdbcomp__prim_data__succeeded)
              {
                mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__ArgX5_23 == mdbcomp__prim_data__ArgY5_24);
                if (mdbcomp__prim_data__succeeded)
                  mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__ArgX6_25 == mdbcomp__prim_data__ArgY6_26);
              }
            }
          }
        }
      }
    }
    return mdbcomp__prim_data__succeeded;
  }
}

void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0(
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2,
  MR_Word mdbcomp__prim_data__HeadVar__3_3)
{
  {
    MR_Integer mdbcomp__prim_data__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__prim_data__HeadVar__2_2;
    MR_Integer mdbcomp__prim_data__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__prim_data__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__prim_data__HeadVar__1_1, mdbcomp__prim_data__Cast_HeadVar1_4, mdbcomp__prim_data__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0(
  MR_Word mdbcomp__prim_data__HeadVar__2_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded = (mdbcomp__prim_data__HeadVar__2_1 == mdbcomp__prim_data__HeadVar__2_2);

    return mdbcomp__prim_data__succeeded;
  }
}

MR_Integer MR_CALL 
mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(
  MR_Word mdbcomp__prim_data__Id_3)
{
  {
    MR_Integer mdbcomp__prim_data__Arity_4;
    MR_String mdbcomp__prim_data__Var_5;
    MR_String mdbcomp__prim_data__Var_6;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__Var_5, &mdbcomp__prim_data__Var_6, &mdbcomp__prim_data__Arity_4);
    return mdbcomp__prim_data__Arity_4;
  }
}

MR_String MR_CALL 
mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(
  MR_Word mdbcomp__prim_data__Id_3)
{
  {
    MR_String mdbcomp__prim_data__Name_4;
    MR_String mdbcomp__prim_data__Var_5;
    MR_Integer mdbcomp__prim_data__Var_6;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__Var_5, &mdbcomp__prim_data__Name_4, &mdbcomp__prim_data__Var_6);
    return mdbcomp__prim_data__Name_4;
  }
}

MR_String MR_CALL 
mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(
  MR_Word mdbcomp__prim_data__Id_3)
{
  {
    MR_String mdbcomp__prim_data__Name_4;
    MR_String mdbcomp__prim_data__Var_5;
    MR_Integer mdbcomp__prim_data__Var_6;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__prim_data__Id_3, &mdbcomp__prim_data__Name_4, &mdbcomp__prim_data__Var_5, &mdbcomp__prim_data__Var_6);
    return mdbcomp__prim_data__Name_4;
  }
}

MR_bool MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_2(
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
  MR_String * mdbcomp__prim_data__HeadVar__2_2,
  MR_String mdbcomp__prim_data__HeadVar__3_3,
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;

    if ((strcmp(mdbcomp__prim_data__HeadVar__3_3, (MR_String) "__Index__") == 0))
    {
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 1;
      *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "index";
      *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
      mdbcomp__prim_data__succeeded = MR_TRUE;
    }
    else
    if ((strcmp(mdbcomp__prim_data__HeadVar__3_3, (MR_String) "__Unify__") == 0))
    {
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 0;
      *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "unify";
      *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
      mdbcomp__prim_data__succeeded = MR_TRUE;
    }
    else
    if ((strcmp(mdbcomp__prim_data__HeadVar__3_3, (MR_String) "__Compare__") == 0))
    {
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 2;
      *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "compare";
      *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 3;
      mdbcomp__prim_data__succeeded = MR_TRUE;
    }
    else
      mdbcomp__prim_data__succeeded = MR_FALSE;
    return mdbcomp__prim_data__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_1(
  MR_Word * mdbcomp__prim_data__HeadVar__1_1,
  MR_String mdbcomp__prim_data__HeadVar__2_2,
  MR_String * mdbcomp__prim_data__HeadVar__3_3,
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;

    if ((strcmp(mdbcomp__prim_data__HeadVar__2_2, (MR_String) "index") == 0))
    {
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 1;
      *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Index__";
      *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
      mdbcomp__prim_data__succeeded = MR_TRUE;
    }
    else
    if ((strcmp(mdbcomp__prim_data__HeadVar__2_2, (MR_String) "unify") == 0))
    {
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 0;
      *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Unify__";
      *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
      mdbcomp__prim_data__succeeded = MR_TRUE;
    }
    else
    if ((strcmp(mdbcomp__prim_data__HeadVar__2_2, (MR_String) "compare") == 0))
    {
      *mdbcomp__prim_data__HeadVar__1_1 = (MR_Integer) 2;
      *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Compare__";
      *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 3;
      mdbcomp__prim_data__succeeded = MR_TRUE;
    }
    else
      mdbcomp__prim_data__succeeded = MR_FALSE;
    return mdbcomp__prim_data__succeeded;
  }
}

void MR_CALL 
mdbcomp__prim_data__special_pred_name_arity_4_p_0(
  MR_Word mdbcomp__prim_data__HeadVar__1_1,
  MR_String * mdbcomp__prim_data__HeadVar__2_2,
  MR_String * mdbcomp__prim_data__HeadVar__3_3,
  MR_Integer * mdbcomp__prim_data__HeadVar__4_4)
{
  switch (mdbcomp__prim_data__HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "compare";
        *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Compare__";
        *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 3;
      }
      break;
    case (MR_Integer) 1:
      {
        *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "index";
        *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Index__";
        *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
      }
      break;
    case (MR_Integer) 0:
      {
        *mdbcomp__prim_data__HeadVar__2_2 = (MR_String) "unify";
        *mdbcomp__prim_data__HeadVar__3_3 = (MR_String) "__Unify__";
        *mdbcomp__prim_data__HeadVar__4_4 = (MR_Integer) 2;
      }
      break;
  }
}

void MR_CALL 
mdbcomp__prim_data__string_to_trace_port_2_p_1(
  MR_String * mdbcomp__prim_data__HeadVar__1_1,
  MR_Word mdbcomp__prim_data__HeadVar__2_2)
{
  {
    *mdbcomp__prim_data__HeadVar__1_1 = ((&mdbcomp__prim_data_vector_common_2[0 + mdbcomp__prim_data__HeadVar__2_2]))->mdbcomp__prim_data__vector_common_type_2_0__vct_2_f_0;
  }
}

MR_bool MR_CALL 
mdbcomp__prim_data__string_to_trace_port_2_p_0(
  MR_String mdbcomp__prim_data__HeadVar__1_1,
  MR_Word * mdbcomp__prim_data__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;

    {
      MR_Integer mdbcomp__prim_data__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 0)) {
        case (MR_Integer) 67:
          switch (MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 1)) {
            case (MR_Integer) 65:
              if (MR_offset_streq(2, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "CALL"))
                mdbcomp__prim_data__case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 79:
              if (MR_offset_streq(2, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "COND"))
                mdbcomp__prim_data__case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 68:
          if (((((MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 1)) == (MR_Integer) 83)) && (((MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 2)) == (MR_Integer) 74))))
            switch (MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 3)) {
              case (MR_Integer) 70:
                if (MR_offset_streq(4, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "DSJF"))
                  mdbcomp__prim_data__case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 76:
                if (MR_offset_streq(4, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "DSJL"))
                  mdbcomp__prim_data__case_num_0 = (MR_Integer) 3;
                break;
            }
          break;
        case (MR_Integer) 69:
          switch (MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 1)) {
            case (MR_Integer) 76:
              if (MR_offset_streq(2, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "ELSE"))
                mdbcomp__prim_data__case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 88:
              switch (MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 2)) {
                case (MR_Integer) 67:
                  if (MR_offset_streq(3, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "EXCP"))
                    mdbcomp__prim_data__case_num_0 = (MR_Integer) 5;
                  break;
                case (MR_Integer) 73:
                  if (MR_offset_streq(3, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "EXIT"))
                    mdbcomp__prim_data__case_num_0 = (MR_Integer) 6;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 70:
          if (MR_offset_streq(1, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "FAIL"))
            mdbcomp__prim_data__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 78:
          if (((((MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 1)) == (MR_Integer) 69)) && (((MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 2)) == (MR_Integer) 71))))
            switch (MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 3)) {
              case (MR_Integer) 69:
                if (MR_offset_streq(4, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "NEGE"))
                  mdbcomp__prim_data__case_num_0 = (MR_Integer) 8;
                break;
              case (MR_Integer) 70:
                if (MR_offset_streq(4, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "NEGF"))
                  mdbcomp__prim_data__case_num_0 = (MR_Integer) 9;
                break;
              case (MR_Integer) 83:
                if (MR_offset_streq(4, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "NEGS"))
                  mdbcomp__prim_data__case_num_0 = (MR_Integer) 10;
                break;
            }
          break;
        case (MR_Integer) 82:
          if (MR_offset_streq(1, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "REDO"))
            mdbcomp__prim_data__case_num_0 = (MR_Integer) 11;
          break;
        case (MR_Integer) 83:
          if (MR_offset_streq(1, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "SWTC"))
            mdbcomp__prim_data__case_num_0 = (MR_Integer) 12;
          break;
        case (MR_Integer) 84:
          switch (MR_nth_code_unit(mdbcomp__prim_data__HeadVar__1_1, 1)) {
            case (MR_Integer) 65:
              if (MR_offset_streq(2, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "TAIL"))
                mdbcomp__prim_data__case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 72:
              if (MR_offset_streq(2, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "THEN"))
                mdbcomp__prim_data__case_num_0 = (MR_Integer) 14;
              break;
          }
          break;
        case (MR_Integer) 85:
          if (MR_offset_streq(1, mdbcomp__prim_data__HeadVar__1_1, (MR_String) "USER"))
            mdbcomp__prim_data__case_num_0 = (MR_Integer) 15;
          break;
      }
      if ((mdbcomp__prim_data__case_num_0 < (MR_Integer) 0))
        mdbcomp__prim_data__succeeded = MR_FALSE;
      else
      {
        /* we found a match; look up the results */
        *mdbcomp__prim_data__HeadVar__2_2 = ((&mdbcomp__prim_data_vector_common_1[0 + mdbcomp__prim_data__case_num_0]))->mdbcomp__prim_data__vector_common_type_1_0__vct_1_f_0;
        mdbcomp__prim_data__succeeded = MR_TRUE;
      }
    }
    return mdbcomp__prim_data__succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____pred_or_func_0_0_10001(
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;

    mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____pred_or_func_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    return mdbcomp__prim_data__succeeded;
  }
}

static void MR_CALL 
mdbcomp__prim_data____Compare____pred_or_func_0_0_10001(
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

    mdbcomp__prim_data____Compare____pred_or_func_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____proc_label_0_0_10001(
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;

    mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    return mdbcomp__prim_data__succeeded;
  }
}

static void MR_CALL 
mdbcomp__prim_data____Compare____proc_label_0_0_10001(
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

    mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____special_pred_id_0_0_10001(
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;

    mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____special_pred_id_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    return mdbcomp__prim_data__succeeded;
  }
}

static void MR_CALL 
mdbcomp__prim_data____Compare____special_pred_id_0_0_10001(
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

    mdbcomp__prim_data____Compare____special_pred_id_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__prim_data____Unify____trace_port_0_0_10001(
  MR_Box mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__prim_data__succeeded;

    mdbcomp__prim_data__succeeded = mdbcomp__prim_data____Unify____trace_port_0_0(((MR_Word) mdbcomp__prim_data__wrapper_arg_1), ((MR_Word) mdbcomp__prim_data__wrapper_arg_2));
    return mdbcomp__prim_data__succeeded;
  }
}

static void MR_CALL 
mdbcomp__prim_data____Compare____trace_port_0_0_10001(
  MR_Box * mdbcomp__prim_data__wrapper_arg_1,
  MR_Box mdbcomp__prim_data__wrapper_arg_2,
  MR_Box mdbcomp__prim_data__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__prim_data__conv0_HeadVar__1_1;

    mdbcomp__prim_data____Compare____trace_port_0_0(&mdbcomp__prim_data__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__prim_data__wrapper_arg_2), ((MR_Word) mdbcomp__prim_data__wrapper_arg_3));
    *mdbcomp__prim_data__wrapper_arg_1 = ((MR_Box) (mdbcomp__prim_data__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__prim_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdbcomp.prim_data. */
