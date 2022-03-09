/*
** Automatically generated from `parse_mutable.m'
** by the Mercury compiler,
** version rotd-2022-03-09
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.parse_mutable.
// :- implementation.

/*
INIT mercury__parse_tree__parse_mutable__init
ENDINIT
*/

#include "parse_tree.parse_mutable.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_pragma_foreign.mih"
#include "parse_tree.parse_sym_name.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_type_name.mih"
#include "parse_tree.parse_types.mih"
#include "parse_tree.parse_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"



struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s {
  MR_Word parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5;
  MR_bool parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded;
  jmp_buf parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__commit_0;
};

struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s {
  MR_Word parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5;
  MR_bool parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded;
  jmp_buf parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__commit_0;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_mutable__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_mutable__pair__ti_pair_2term__ti_term_1term__type_ctor_info_generic_0parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term__ti_term_1term__type_ctor_info_generic_0parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_mutable__pair__pti_pair_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_0[1];

static const MR_DuArgLocn parse_tree__parse_mutable__parse_tree__parse_mutable__field_locns_collected_mutable_attribute_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_1;

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_2;

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_3;

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_4;

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_0[3];

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1];

static const MR_DuPtagLayout parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_collected_mutable_attribute_0[3];

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_name_ordered_collected_mutable_attribute_0[5];

static const MR_Integer parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_collected_mutable_attribute_0[5];

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_foreign_name_0_0[2];

static const MR_ConstString parse_tree__parse_mutable__parse_tree__parse_mutable__field_names_foreign_name_0_0[2];

static const MR_DuArgLocn parse_tree__parse_mutable__parse_tree__parse_mutable__field_locns_foreign_name_0_0[2];

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_foreign_name_0_0;

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_foreign_name_0_0[1];

static const MR_DuPtagLayout parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_foreign_name_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_name_ordered_foreign_name_0[1];

static const MR_Integer parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_foreign_name_0[1];

static const MR_EnumFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__enum_ordinal_ordered_mutable_locn_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__enum_name_ordered_mutable_locn_0[2];

static const MR_Integer parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_mutable_locn_0[2];

static MR_String MR_CALL 
parse_tree__parse_mutable__IntroducedFrom__func__parse_mutable_attrs__342__1_1_f_0(
  MR_Word LambdaHeadVar__1_33);

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__parse_mutable____Compare____foreign_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____foreign_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attr_3_p_0(
  MR_Word VarSet_4,
  MR_Word MutAttrTerm_5,
  MR_Word * MutAttrResult_6);

static MR_Word MR_CALL 
parse_tree__parse_mutable__default_mutable_attributes_0_f_0(void);

static MR_Box MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(
  MR_Word VarSet_4,
  MR_Word MutAttrsTerm_5,
  MR_Word * MaybeMutAttrs_6);

static void MR_CALL 
parse_tree__parse_mutable__check_attribute_fit_7_p_0(
  MR_Word VarSet_8,
  MR_Word OnlyLangMap_9,
  MR_Word MaybeTrailed_10,
  MR_Word MaybeConst_11,
  MR_Word MaybeIO_12,
  MR_Word MaybeLocal_13,
  MR_Word * MaybeMutAttrs_14);

static void MR_CALL 
parse_tree__parse_mutable__report_conflicting_attributes_5_p_0(
  MR_Word VarSet_6,
  MR_Word Term0_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
parse_tree__parse_mutable__record_mutable_attributes_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LangMap_0_3,
  MR_Word * STATE_VARIABLE_LangMap_4,
  MR_Word STATE_VARIABLE_MaybeTrailed_0_5,
  MR_Word * STATE_VARIABLE_MaybeTrailed_6,
  MR_Word STATE_VARIABLE_MaybeConstant_0_7,
  MR_Word * STATE_VARIABLE_MaybeConstant_8,
  MR_Word STATE_VARIABLE_MaybeIO_0_9,
  MR_Word * STATE_VARIABLE_MaybeIO_10,
  MR_Word STATE_VARIABLE_MaybeLocal_0_11,
  MR_Word * STATE_VARIABLE_MaybeLocal_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__parse_mutable__report_repeated_or_conflicting_attributes_7_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word VarSet_8,
  MR_Word Term0_9,
  MR_Box Attr0_10,
  MR_Word Term_11,
  MR_Box Attr_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0(
  MR_Word VarSet_4,
  MR_Word InstTerm_5,
  MR_Word * MaybeInst_6);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0(
  MR_Word VarSet_4,
  MR_Word TypeTerm_5,
  MR_Word * MaybeType_6);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_name_2_p_0(
  MR_Word NameTerm_3,
  MR_Word * MaybeName_4);

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____foreign_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable____Compare____foreign_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____mutable_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_1[86][2];

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_2[3][3];

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_5[1][5];


struct parse_tree__parse_mutable__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_0;
  const MR_Word parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct parse_tree__parse_mutable__vector_common_type_6_0_s parse_tree__parse_mutable_vector_common_6[5];



static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_1[86][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "expected"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "predname/arity"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "got"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate,"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not zero or two."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose arity"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[16])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- initialise pred_name/pred_arity."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whose arity is not zero or two:"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ":- finalise pred_name/pred_arity."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "representing part of the constraint store"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 28U)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or the form"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid mutable name."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type in a"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration may not contain variables, but"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the inst in a"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration cannot contain variables:"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In a"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In fifth argument of"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: expected a list of attributes, got"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: attributes"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "conflict."))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: attribute"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "attribute explicitly."))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "untrailed"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You need to specify the"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which is that updates are trailed."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "conflicts with the default,"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[73])))
  },
  /* row  76 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[2])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is repeated."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "support for Erlang has been discontinued."))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "unrecognised attribute"))
  },
};

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_3[4][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 10U)
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_mutable__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term__ti_term_1term__type_ctor_info_generic_0parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_mutable__pair__pti_pair_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct parse_tree__parse_mutable__vector_common_type_6_0_s parse_tree__parse_mutable_vector_common_6[5] = {
  /* row   0 */
  {
    (MR_String) "attach_to_io_state",
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_String) "constant",
    (MR_Word) ((MR_Unsigned) 4U)
  },
  /* row   2 */
  {
    (MR_String) "thread_local",
    (MR_Word) ((MR_Unsigned) 8U)
  },
  /* row   3 */
  {
    (MR_String) "trailed",
    (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_mutable_scalar_common_3[2]))
  },
  /* row   4 */
  {
    (MR_String) "untrailed",
    (MR_Word) (MR_mkword(MR_mktag(2), &parse_tree__parse_mutable_scalar_common_3[3]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__parse_mutable__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__parse_mutable__pair__ti_pair_2term__ti_term_1term__type_ctor_info_generic_0parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__parse_mutable__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_pair__ti_pair_2term__ti_term_1term__type_ctor_info_generic_0parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_mutable__pair__ti_pair_2term__ti_term_1term__type_ctor_info_generic_0parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__parse_mutable__pair__pti_pair_2__plain_term__ti_term_1term__type_ctor_info_generic_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__parse_mutable__term__ti_term_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_trailed_0)
};

static const MR_DuArgLocn parse_tree__parse_mutable__parse_tree__parse_mutable__field_locns_collected_mutable_attribute_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_0 = {
  (MR_String) "mutable_attr_trailed",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_0,
  NULL,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_locns_collected_mutable_attribute_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_foreign_name_0)
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_1 = {
  (MR_String) "mutable_attr_foreign_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_2 = {
  (MR_String) "mutable_attr_attach_to_io_state",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_3 = {
  (MR_String) "mutable_attr_constant",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_4 = {
  (MR_String) "mutable_attr_thread_local",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_0[3] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_2,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_4
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

static const MR_DuPtagLayout parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_collected_mutable_attribute_0[3] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_name_ordered_collected_mutable_attribute_0[5] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_2,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_1,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_4,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

static const MR_Integer parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_collected_mutable_attribute_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0_10001)),
  (MR_String) "parse_tree.parse_mutable",
  (MR_String) "collected_mutable_attribute",
  { parse_tree__parse_mutable__parse_tree__parse_mutable__du_name_ordered_collected_mutable_attribute_0 },
  { parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_collected_mutable_attribute_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_collected_mutable_attribute_0,

};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_foreign_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString parse_tree__parse_mutable__parse_tree__parse_mutable__field_names_foreign_name_0_0[2] = {
  (MR_String) "foreign_name_lang",
  (MR_String) "foreign_name_name"
};

static const MR_DuArgLocn parse_tree__parse_mutable__parse_tree__parse_mutable__field_locns_foreign_name_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_foreign_name_0_0 = {
  (MR_String) "foreign_name",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_foreign_name_0_0,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_names_foreign_name_0_0,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_locns_foreign_name_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_foreign_name_0_0[1] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_foreign_name_0_0
};

static const MR_DuPtagLayout parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_foreign_name_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_foreign_name_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_name_ordered_foreign_name_0[1] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_foreign_name_0_0
};

static const MR_Integer parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_foreign_name_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_foreign_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_mutable____Unify____foreign_name_0_0_10001)),
  ((MR_Box) (parse_tree__parse_mutable____Compare____foreign_name_0_0_10001)),
  (MR_String) "parse_tree.parse_mutable",
  (MR_String) "foreign_name",
  { parse_tree__parse_mutable__parse_tree__parse_mutable__du_name_ordered_foreign_name_0 },
  { parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_foreign_name_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_foreign_name_0,

};

static const MR_EnumFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_0 = {
  (MR_String) "mutable_locn_item",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_1 = {
  (MR_String) "mutable_locn_in_solver_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__enum_ordinal_ordered_mutable_locn_0[2] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_0,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__enum_name_ordered_mutable_locn_0[2] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_1,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_0
};

static const MR_Integer parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_mutable_locn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_mutable_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_mutable____Unify____mutable_locn_0_0_10001)),
  ((MR_Box) (parse_tree__parse_mutable____Compare____mutable_locn_0_0_10001)),
  (MR_String) "parse_tree.parse_mutable",
  (MR_String) "mutable_locn",
  { parse_tree__parse_mutable__parse_tree__parse_mutable__enum_name_ordered_mutable_locn_0 },
  { parse_tree__parse_mutable__parse_tree__parse_mutable__enum_ordinal_ordered_mutable_locn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_mutable_locn_0,

};

static MR_String MR_CALL 
parse_tree__parse_mutable__IntroducedFrom__func__parse_mutable_attrs__342__1_1_f_0(
  MR_Word LambdaHeadVar__1_33)
{
  MR_String LambdaHeadVar__2_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_33, (MR_Integer) 1))));

  return LambdaHeadVar__2_34;
}

void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____mutable_locn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_28 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_14 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                parse_tree__parse_mutable____Compare____foreign_name_0_0(HeadVar__1_1, Var_28, ArgY1_14);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer Var_30 = (MR_Integer) (Var_29);
                MR_Integer Var_31 = (MR_Integer) (ArgY1_5);

                succeeded = (Var_30 < Var_31);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_30 > Var_31);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
          }
        }
        break;
    }
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____foreign_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = parse_tree__parse_mutable____Unify____foreign_name_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____foreign_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attr_3_p_0(
  MR_Word VarSet_4,
  MR_Word MutAttrTerm_5,
  MR_Word * MutAttrResult_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) MutAttrTerm_5)) == (MR_Integer) 0);
  MR_Word MutAttr_9;
  MR_String String_7;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrTerm_5, (MR_Integer) 0))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrTerm_5, (MR_Integer) 1))));
    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 0);
      if (succeeded)
      {
        String_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 4;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(String_7, ((&parse_tree__parse_mutable_vector_common_6[0 + mid_2]))->parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            MutAttr_9 = ((&parse_tree__parse_mutable_vector_common_6[0 + mid_2]))->parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_1;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (MutAttrTerm_5));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (MutAttr_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MutAttrResult_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
    }
  }
  else
  {
    MR_Word Lang_14;
    MR_String ForeignName_15;
    MR_Word Args_10;
    MR_Word LangTerm_12;
    MR_Word ForeignNameTerm_13;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    succeeded = ((MR_tag((MR_Word) MutAttrTerm_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrTerm_5, (MR_Integer) 0))));
      Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrTerm_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
        succeeded = (strcmp(Var_28, (MR_String) "foreign_name") == 0);
        if (succeeded)
        {
          succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LangTerm_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ForeignNameTerm_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
              succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = parse_tree__parse_pragma_foreign__term_to_foreign_language_2_p_0(LangTerm_12, &Lang_14);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ForeignNameTerm_13)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignNameTerm_13, (MR_Integer) 0))));
                    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignNameTerm_13, (MR_Integer) 1))));
                    succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 2);
                      if (succeeded)
                        ForeignName_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), Var_31, (MR_Integer) 0))));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word MutAttr_88;

      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = (MR_Box) ((MR_Unsigned) (Lang_14));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ForeignName_15));
      }
      MutAttr_88 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_33)));
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (MutAttrTerm_5));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (MutAttr_88));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MutAttrResult_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
      }
    }
    else
    {
      MR_Word Var_35;
      MR_String Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Args_89;
      MR_Word LangTerm_90;

      succeeded = ((MR_tag((MR_Word) MutAttrTerm_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrTerm_5, (MR_Integer) 0))));
        Args_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrTerm_5, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
          succeeded = (strcmp(Var_36, (MR_String) "foreign_name") == 0);
          if (succeeded)
          {
            succeeded = (Args_89 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              LangTerm_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_89, (MR_Integer) 0))));
              Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_89, (MR_Integer) 1))));
              succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1))));
                succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                  succeeded = parse_tree__parse_pragma_foreign__term_to_foreign_language_erlang_1_p_0(LangTerm_90);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word Spec_20;
        MR_Word Var_58;
        MR_Word Var_59;

        Var_58 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MutAttrTerm_5);
        {
          Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_mutable_attr\'/3"));
          MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[84])));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MutAttrResult_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
        }
      }
      else
      {
        MR_String MutAttrStr_21;
        MR_Word Var_63;
        MR_Word Var_66;
        MR_Word Var_69;
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Pieces_91;
        MR_Word Spec_92;

        MutAttrStr_21 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, MutAttrTerm_5);
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (MutAttrStr_21));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[10])));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[85])));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[3])));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[39])));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
        }
        {
          Pieces_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_91, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[1])));
          MR_hl_field(MR_mktag(1), Pieces_91, 1) = ((MR_Box) (Var_63));
        }
        Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MutAttrTerm_5);
        {
          Spec_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_92, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_mutable_attr\'/3"));
          MR_hl_field(MR_mktag(1), Spec_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_92, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_92, 3) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Spec_92, 4) = ((MR_Box) (Pieces_91));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_92));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MutAttrResult_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_mutable_decl_info_7_p_0(
  MR_Word _ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ArgTerms_10,
  MR_Word Context_11,
  MR_Word SeqNum_12,
  MR_Word MutableLocn_13,
  MR_Word * MaybeItemMutableInfo_14)
{
  parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(VarSet_9, ArgTerms_10, Context_11, SeqNum_12, MutableLocn_13, MaybeItemMutableInfo_14);
}

void MR_CALL 
parse_tree__parse_mutable__parse_mutable_item_6_p_0(
  MR_Word ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, MaybeIOM_12);
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_Word MaybeItemMutableInfo_13;

  parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, (MR_Integer) 0, &MaybeItemMutableInfo_13);
  if (((MR_tag((MR_Word) MaybeItemMutableInfo_13)) == (MR_Integer) 0))
    *MaybeIOM_12 = (MR_Word) (MaybeItemMutableInfo_13);
  else
  {
    MR_Word ItemMutableInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeItemMutableInfo_13, (MR_Integer) 0))));
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (ItemMutableInfo_14));
    }
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Var_18));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(
  MR_Word VarSet_9,
  MR_Word ArgTerms_10,
  MR_Word Context_11,
  MR_Word SeqNum_12,
  MR_Word MutableLocn_13,
  MR_Word * MaybeItemMutableInfo_14)
{
  MR_bool succeeded = (ArgTerms_10 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word NameTerm_15;
  MR_Word TypeTerm_16;
  MR_Word ValueTerm_17;
  MR_Word InstTerm_18;
  MR_Word MaybeAttrsTerm_20;
  MR_Word OptMutAttrsTerm_19;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;

  if (succeeded)
  {
    NameTerm_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1))));
    succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeTerm_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
      succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ValueTerm_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
        succeeded = (Var_44 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          InstTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))));
          OptMutAttrsTerm_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1))));
          if ((OptMutAttrsTerm_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MaybeAttrsTerm_20 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word MutAttrsTerm0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptMutAttrsTerm_19, (MR_Integer) 0))));
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptMutAttrsTerm_19, (MR_Integer) 1))));

            succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              {
                MaybeAttrsTerm_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeAttrsTerm_20, 0) = ((MR_Box) (MutAttrsTerm0_21));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeName_22;
    MR_Word MaybeType_23;
    MR_Word Value_24;
    MR_Word ProgVarSet_25;
    MR_Word MaybeInst_26;
    MR_Word MaybeMutAttrs_27;
    MR_String Name_29;
    MR_Word Type_30;
    MR_Word Inst_31;
    MR_Word MutAttrs_32;

    parse_tree__parse_mutable__parse_mutable_name_2_p_0(NameTerm_15, &MaybeName_22);
    parse_tree__parse_mutable__parse_mutable_type_3_p_0(VarSet_9, TypeTerm_16, &MaybeType_23);
    mercury__term__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueTerm_17, &Value_24);
    mercury__varset__coerce_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_9, &ProgVarSet_25);
    parse_tree__parse_mutable__parse_mutable_inst_3_p_0(VarSet_9, InstTerm_18, &MaybeInst_26);
    if ((MaybeAttrsTerm_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_46;

      Var_46 = parse_tree__parse_mutable__default_mutable_attributes_0_f_0();
      {
        MaybeMutAttrs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeMutAttrs_27, 0) = ((MR_Box) (Var_46));
      }
    }
    else
    {
      MR_Word MutAttrsTerm_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttrsTerm_20, (MR_Integer) 0))));

      parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(VarSet_9, MutAttrsTerm_28, &MaybeMutAttrs_27);
    }
    succeeded = ((MR_tag((MR_Word) MaybeName_22)) == (MR_Integer) 1);
    if (succeeded)
    {
      Name_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeName_22, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) MaybeType_23)) == (MR_Integer) 1);
      if (succeeded)
      {
        Type_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeType_23, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) MaybeInst_26)) == (MR_Integer) 1);
        if (succeeded)
        {
          Inst_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInst_26, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) MaybeMutAttrs_27)) == (MR_Integer) 1);
          if (succeeded)
            MutAttrs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMutAttrs_27, (MR_Integer) 0))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word ItemMutableInfo_33;

      {
        ItemMutableInfo_33 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 0) = ((MR_Box) (Name_29));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 1) = ((MR_Box) (Type_30));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 2) = ((MR_Box) (Type_30));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 3) = ((MR_Box) (Inst_31));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 4) = ((MR_Box) (Inst_31));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 5) = ((MR_Box) (Value_24));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 6) = ((MR_Box) (ProgVarSet_25));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 7) = ((MR_Box) (MutAttrs_32));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 8) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), ItemMutableInfo_33, 9) = ((MR_Box) (SeqNum_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeItemMutableInfo_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemMutableInfo_33));
      }
    }
    else
    {
      MR_Word Specs_34;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;

      Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeName_22);
      Var_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), MaybeType_23);
      Var_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), MaybeInst_26);
      Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0), MaybeMutAttrs_27);
      Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_53, Var_54);
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_51, Var_52);
      Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_49, Var_50);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemMutableInfo_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_34));
      }
    }
  }
  else
  {
    MR_Word WhatPieces_37;
    MR_String Prefix_38;
    MR_String Suffix1_39;
    MR_Word Pieces_40;
    MR_Word Spec_41;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_String Var_81;
    MR_String Var_82;
    MR_Word Var_83;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_String Var_88;
    MR_String Var_89;
    MR_Word Var_97;

    switch (MutableLocn_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          WhatPieces_37 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[42]));
          Prefix_38 = (MR_String) "";
          Suffix1_39 = (MR_String) "";
        }
        break;
      case (MR_Integer) 0:
        {
          WhatPieces_37 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[45]));
          Prefix_38 = (MR_String) ":- ";
          Suffix1_39 = (MR_String) ".";
        }
        break;
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[11])));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (WhatPieces_37));
    }
    Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "mutable(name, type, init_value, inst)", Suffix1_39);
    Var_81 = mercury__string__f_43_43_2_f_0(Prefix_38, Var_82);
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_81));
    }
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "mutable(name, type, init_value, inst, [attr1, ...])", (MR_String) ".");
    Var_88 = mercury__string__f_43_43_2_f_0(Prefix_38, Var_89);
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[8])));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[46])));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[20])));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
    }
    Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_73, Var_76);
    {
      Spec_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_41, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_mutable_decl_info\'/7"));
      MR_hl_field(MR_mktag(1), Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_41, 3) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(1), Spec_41, 4) = ((MR_Box) (Pieces_40));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Spec_41));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeItemMutableInfo_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_97));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__parse_mutable__default_mutable_attributes_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;

  Var_2 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(MR_mktag(0), HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[76])));
  }
  return HeadVar__1_1;
}

static MR_Box MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_34;

  conv1_LambdaHeadVar__2_34 = parse_tree__parse_mutable__IntroducedFrom__func__parse_mutable_attrs__342__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_34));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MutAttrResult_6;

  parse_tree__parse_mutable__parse_mutable_attr_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_MutAttrResult_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_MutAttrResult_6));
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(
  MR_Word VarSet_4,
  MR_Word MutAttrsTerm_5,
  MR_Word * MaybeMutAttrs_6)
{
  MR_bool succeeded;
  MR_Word MutAttrTerms_7;

  succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(MutAttrsTerm_5, &MutAttrTerms_7);
  if (succeeded)
  {
    MR_Word MaybeAttrList_8;
    MR_Word Var_25;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&parse_tree__parse_mutable_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (VarSet_4));
    }
    parse_tree__parse_util__map_parser_3_p_0((MR_Word) (&parse_tree__parse_mutable_scalar_common_2[0]), Var_25, MutAttrTerms_7, &MaybeAttrList_8);
    if (((MR_tag((MR_Word) MaybeAttrList_8)) == (MR_Integer) 0))
      *MaybeMutAttrs_6 = (MR_Word) (MaybeAttrList_8);
    else
    {
      MR_Word CollectedMutAttrPairs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAttrList_8, (MR_Integer) 0))));
      MR_Word LangMap_10;
      MR_Word MaybeTrailed_11;
      MR_Word MaybeConstant_12;
      MR_Word MaybeIO_13;
      MR_Word MaybeLocal_14;
      MR_Word RecordSpecs_15;
      MR_Word Var_26;

      Var_26 = mercury__map__init_0_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__parse_mutable_scalar_common_2[1]));
      parse_tree__parse_mutable__record_mutable_attributes_14_p_0(VarSet_4, CollectedMutAttrPairs_9, Var_26, &LangMap_10, (MR_Word) ((MR_Unsigned) 0U), &MaybeTrailed_11, (MR_Word) ((MR_Unsigned) 0U), &MaybeConstant_12, (MR_Word) ((MR_Unsigned) 0U), &MaybeIO_13, (MR_Word) ((MR_Unsigned) 0U), &MaybeLocal_14, (MR_Word) ((MR_Unsigned) 0U), &RecordSpecs_15);
      if ((RecordSpecs_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OnlyLangMap_18;

        OnlyLangMap_18 = mercury__map__map_values_only_2_f_0((MR_Word) (&parse_tree__parse_mutable_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__parse_mutable_scalar_common_2[2]), LangMap_10);
        parse_tree__parse_mutable__check_attribute_fit_7_p_0(VarSet_4, OnlyLangMap_18, MaybeTrailed_11, MaybeConstant_12, MaybeIO_13, MaybeLocal_14, MaybeMutAttrs_6);
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMutAttrs_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RecordSpecs_15));
        }
    }
  }
  else
  {
    MR_String MutAttrsStr_22;
    MR_Word Pieces_23;
    MR_Word Spec_24;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_58;
    MR_Word Var_59;

    MutAttrsStr_22 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, (MR_Integer) 0, MutAttrsTerm_5);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (MutAttrsStr_22));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[10])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[60])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[3])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[59])));
      MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_38));
    }
    Var_58 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), MutAttrsTerm_5);
    {
      Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_mutable_attrs\'/3"));
      MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (Pieces_23));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMutAttrs_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__check_attribute_fit_7_p_0(
  MR_Word VarSet_8,
  MR_Word OnlyLangMap_9,
  MR_Word MaybeTrailed_10,
  MR_Word MaybeConst_11,
  MR_Word MaybeIO_12,
  MR_Word MaybeLocal_13,
  MR_Word * MaybeMutAttrs_14)
{
  MR_Word Const_26;
  MR_Word STATE_VARIABLE_Specs_81_81;

  if ((MaybeConst_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word IO_16;
    MR_Word Local_19;

    if ((MaybeIO_12 == (MR_Word) ((MR_Unsigned) 0U)))
      IO_16 = (MR_Integer) 0;
    else
      IO_16 = (MR_Integer) 1;
    if ((MaybeTrailed_10 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeLocal_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Local_19 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[2]));
        STATE_VARIABLE_Specs_81_81 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word LocalTerm_18;
        MR_String LocalTermStr_22;
        MR_Word Pieces_23;
        MR_Word Spec_24;
        MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLocal_13, (MR_Integer) 0))));
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_77;

        LocalTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
        Local_19 = (MR_Word) ((MR_Unsigned) 0U);
        LocalTermStr_22 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, (MR_Integer) 0, LocalTerm_18);
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_55, 1) = ((MR_Box) (LocalTermStr_22));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[75])));
        }
        {
          Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[65])));
          MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_54));
        }
        Var_77 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), LocalTerm_18);
        {
          Spec_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.check_attribute_fit\'/7"));
          MR_hl_field(MR_mktag(1), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_24, 3) = ((MR_Box) (Var_77));
          MR_hl_field(MR_mktag(1), Spec_24, 4) = ((MR_Box) (Pieces_23));
        }
        {
          STATE_VARIABLE_Specs_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 0) = ((MR_Box) (Spec_24));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_81_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    else
    {
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrailed_10, (MR_Integer) 0))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 1))));
      MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_116, (MR_Integer) 0))));

      if ((MaybeLocal_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Local_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Local_19, 0) = (MR_Box) ((MR_Unsigned) (Var_122));
        }
        STATE_VARIABLE_Specs_81_81 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLocal_13, (MR_Integer) 0))));
        MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_119, (MR_Integer) 0))));

        switch (Var_122) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              Local_19 = (MR_Word) ((MR_Unsigned) 0U);
              parse_tree__parse_mutable__report_conflicting_attributes_5_p_0(VarSet_8, Var_125, Var_123, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_81_81);
            }
            break;
          case (MR_Integer) 0:
            {
              Local_19 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Specs_81_81 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
      }
    }
    {
      Const_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_26, 0) = (MR_Box) ((MR_Unsigned) (IO_16));
      MR_hl_field(MR_mktag(1), Const_26, 1) = ((MR_Box) (Local_19));
    }
  }
  else
  {
    MR_Word ConstTerm_27;
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeConst_11, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word STATE_VARIABLE_Specs_40_40;

    ConstTerm_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_33, (MR_Integer) 0))));
    if ((MaybeIO_12 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_37_37 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word IOTerm_28;
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIO_12, (MR_Integer) 0))));

      IOTerm_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_35, (MR_Integer) 0))));
      parse_tree__parse_mutable__report_conflicting_attributes_5_p_0(VarSet_8, ConstTerm_27, IOTerm_28, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_37_37);
    }
    if ((MaybeTrailed_10 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_40_40 = STATE_VARIABLE_Specs_37_37;
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrailed_10, (MR_Integer) 0))));
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 1))));
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_115, (MR_Integer) 0))));

      switch (Var_117) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          parse_tree__parse_mutable__report_conflicting_attributes_5_p_0(VarSet_8, ConstTerm_27, Var_118, STATE_VARIABLE_Specs_37_37, &STATE_VARIABLE_Specs_40_40);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_40_40 = STATE_VARIABLE_Specs_37_37;
          break;
      }
    }
    if ((MaybeLocal_13 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_81_81 = STATE_VARIABLE_Specs_40_40;
    else
    {
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLocal_13, (MR_Integer) 0))));
      MR_Word LocalTerm_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));

      parse_tree__parse_mutable__report_conflicting_attributes_5_p_0(VarSet_8, ConstTerm_27, LocalTerm_93, STATE_VARIABLE_Specs_40_40, &STATE_VARIABLE_Specs_81_81);
    }
    Const_26 = (MR_Word) ((MR_Unsigned) 0U);
  }
  if ((STATE_VARIABLE_Specs_81_81 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MutAttrs_29;

    {
      MutAttrs_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MutAttrs_29, 0) = ((MR_Box) (OnlyLangMap_9));
      MR_hl_field(MR_mktag(0), MutAttrs_29, 1) = ((MR_Box) (Const_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeMutAttrs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MutAttrs_29));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeMutAttrs_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Specs_81_81));
    }
}

static void MR_CALL 
parse_tree__parse_mutable__report_conflicting_attributes_5_p_0(
  MR_Word VarSet_6,
  MR_Word Term0_7,
  MR_Word Term_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_String TermStr0_10;
  MR_String TermStr_11;
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_36;

  TermStr0_10 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, (MR_Integer) 0, Term0_7);
  TermStr_11 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_6, (MR_Integer) 0, Term_8);
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (TermStr0_10));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (TermStr_11));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[64])));
  }
  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[62])));
    MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
  }
  {
    Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[61])));
    MR_hl_field(MR_mktag(1), Pieces_12, 1) = ((MR_Box) (Var_20));
  }
  Var_36 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_8);
  {
    Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.report_conflicting_attributes\'/5"));
    MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Var_36));
    MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_15 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
  }
}

static void MR_CALL 
parse_tree__parse_mutable__record_mutable_attributes_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LangMap_0_3,
  MR_Word * STATE_VARIABLE_LangMap_4,
  MR_Word STATE_VARIABLE_MaybeTrailed_0_5,
  MR_Word * STATE_VARIABLE_MaybeTrailed_6,
  MR_Word STATE_VARIABLE_MaybeConstant_0_7,
  MR_Word * STATE_VARIABLE_MaybeConstant_8,
  MR_Word STATE_VARIABLE_MaybeIO_0_9,
  MR_Word * STATE_VARIABLE_MaybeIO_10,
  MR_Word STATE_VARIABLE_MaybeLocal_0_11,
  MR_Word * STATE_VARIABLE_MaybeLocal_12,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      *STATE_VARIABLE_MaybeLocal_12 = STATE_VARIABLE_MaybeLocal_0_11;
      *STATE_VARIABLE_MaybeIO_10 = STATE_VARIABLE_MaybeIO_0_9;
      *STATE_VARIABLE_MaybeConstant_8 = STATE_VARIABLE_MaybeConstant_0_7;
      *STATE_VARIABLE_MaybeTrailed_6 = STATE_VARIABLE_MaybeTrailed_0_5;
      *STATE_VARIABLE_LangMap_4 = STATE_VARIABLE_LangMap_0_3;
    }
    else
    {
      MR_Word Term_35;
      MR_Word Attr_36;
      MR_Word TermAttrs_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_MaybeLocal_75_75;
      MR_Word STATE_VARIABLE_MaybeIO_82_82;
      MR_Word STATE_VARIABLE_MaybeConstant_89_89;
      MR_Word STATE_VARIABLE_MaybeTrailed_94_94;
      MR_Word STATE_VARIABLE_Specs_118_118;
      MR_Word STATE_VARIABLE_LangMap_120_120;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_LangMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_MaybeTrailed_0_5;
      MR_Word next_value_of_STATE_VARIABLE_MaybeConstant_0_7;
      MR_Word next_value_of_STATE_VARIABLE_MaybeIO_0_9;
      MR_Word next_value_of_STATE_VARIABLE_MaybeLocal_0_11;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_13;

      Term_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 0))));
      Attr_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) Attr_36)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Attr_36)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                if ((STATE_VARIABLE_MaybeIO_0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_83;

                  {
                    Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Term_35));
                    MR_hl_field(MR_mktag(0), Var_83, 1) = NULL;
                  }
                  {
                    STATE_VARIABLE_MaybeIO_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeIO_82_82, 0) = ((MR_Box) (Var_83));
                  }
                  STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_0_13;
                }
                else
                {
                  MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeIO_0_9, (MR_Integer) 0))));
                  MR_Word Term0_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))));

                  parse_tree__parse_mutable__report_repeated_or_conflicting_attributes_7_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), HeadVar__1_1, Term0_133, ((MR_Box) ((MR_Integer) 0)), Term_35, ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_118_118);
                  STATE_VARIABLE_MaybeIO_82_82 = STATE_VARIABLE_MaybeIO_0_9;
                }
                STATE_VARIABLE_LangMap_120_120 = STATE_VARIABLE_LangMap_0_3;
                STATE_VARIABLE_MaybeTrailed_94_94 = STATE_VARIABLE_MaybeTrailed_0_5;
                STATE_VARIABLE_MaybeConstant_89_89 = STATE_VARIABLE_MaybeConstant_0_7;
                STATE_VARIABLE_MaybeLocal_75_75 = STATE_VARIABLE_MaybeLocal_0_11;
              }
              break;
            case (MR_Integer) 1:
              {
                if ((STATE_VARIABLE_MaybeConstant_0_7 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_90;

                  {
                    Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Term_35));
                    MR_hl_field(MR_mktag(0), Var_90, 1) = NULL;
                  }
                  {
                    STATE_VARIABLE_MaybeConstant_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeConstant_89_89, 0) = ((MR_Box) (Var_90));
                  }
                  STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_0_13;
                }
                else
                {
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeConstant_0_7, (MR_Integer) 0))));
                  MR_Word Term0_130 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 0))));

                  parse_tree__parse_mutable__report_repeated_or_conflicting_attributes_7_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), HeadVar__1_1, Term0_130, ((MR_Box) ((MR_Integer) 0)), Term_35, ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_118_118);
                  STATE_VARIABLE_MaybeConstant_89_89 = STATE_VARIABLE_MaybeConstant_0_7;
                }
                STATE_VARIABLE_LangMap_120_120 = STATE_VARIABLE_LangMap_0_3;
                STATE_VARIABLE_MaybeTrailed_94_94 = STATE_VARIABLE_MaybeTrailed_0_5;
                STATE_VARIABLE_MaybeIO_82_82 = STATE_VARIABLE_MaybeIO_0_9;
                STATE_VARIABLE_MaybeLocal_75_75 = STATE_VARIABLE_MaybeLocal_0_11;
              }
              break;
            case (MR_Integer) 2:
              {
                if ((STATE_VARIABLE_MaybeLocal_0_11 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_76;

                  {
                    Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Term_35));
                    MR_hl_field(MR_mktag(0), Var_76, 1) = NULL;
                  }
                  {
                    STATE_VARIABLE_MaybeLocal_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeLocal_75_75, 0) = ((MR_Box) (Var_76));
                  }
                  STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_0_13;
                }
                else
                {
                  MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeLocal_0_11, (MR_Integer) 0))));
                  MR_Word Term0_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_71, (MR_Integer) 0))));

                  parse_tree__parse_mutable__report_repeated_or_conflicting_attributes_7_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), HeadVar__1_1, Term0_136, ((MR_Box) ((MR_Integer) 0)), Term_35, ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_118_118);
                  STATE_VARIABLE_MaybeLocal_75_75 = STATE_VARIABLE_MaybeLocal_0_11;
                }
                STATE_VARIABLE_LangMap_120_120 = STATE_VARIABLE_LangMap_0_3;
                STATE_VARIABLE_MaybeTrailed_94_94 = STATE_VARIABLE_MaybeTrailed_0_5;
                STATE_VARIABLE_MaybeConstant_89_89 = STATE_VARIABLE_MaybeConstant_0_7;
                STATE_VARIABLE_MaybeIO_82_82 = STATE_VARIABLE_MaybeIO_0_9;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ForeignName_44 = (MR_Word) (MR_body((MR_Word) (Attr_36), (MR_Integer) 1));
            MR_Word Lang_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignName_44, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_String Name_46 = ((MR_String) ((MR_hl_field(MR_mktag(0), ForeignName_44, (MR_Integer) 1))));
            MR_Word Term0_47;
            MR_Word Var_96;
            MR_Box conv0_Var_96;

            succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__parse_mutable_scalar_common_2[1]), STATE_VARIABLE_LangMap_0_3, ((MR_Box) (Lang_45)), &conv0_Var_96);
            if (succeeded)
            {
              Var_96 = ((MR_Word) (conv0_Var_96));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              Term0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_96, (MR_Integer) 0))));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String TermStr0_49;
              MR_String TermStr_50;
              MR_Word Pieces_51;
              MR_Word Spec_52;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Var_117;

              TermStr0_49 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_1, (MR_Integer) 0, Term0_47);
              TermStr_50 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), HeadVar__1_1, (MR_Integer) 0, Term_35);
              {
                Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (TermStr0_49));
              }
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (TermStr_50));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
                MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[64])));
              }
              {
                Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[62])));
                MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_106));
              }
              {
                Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
                MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_103));
              }
              {
                Pieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[61])));
                MR_hl_field(MR_mktag(1), Pieces_51, 1) = ((MR_Box) (Var_101));
              }
              Var_117 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_35);
              {
                Spec_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Spec_52, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.record_mutable_attributes\'/14"));
                MR_hl_field(MR_mktag(1), Spec_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(1), Spec_52, 2) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(1), Spec_52, 3) = ((MR_Box) (Var_117));
                MR_hl_field(MR_mktag(1), Spec_52, 4) = ((MR_Box) (Pieces_51));
              }
              {
                STATE_VARIABLE_Specs_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_118_118, 0) = ((MR_Box) (Spec_52));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_118_118, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
              }
              STATE_VARIABLE_LangMap_120_120 = STATE_VARIABLE_LangMap_0_3;
            }
            else
            {
              MR_Word Var_119;

              {
                Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (Term_35));
                MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (Name_46));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&parse_tree__parse_mutable_scalar_common_2[1]), ((MR_Box) (Lang_45)), ((MR_Box) (Var_119)), STATE_VARIABLE_LangMap_0_3, &STATE_VARIABLE_LangMap_120_120);
              STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_0_13;
            }
            STATE_VARIABLE_MaybeTrailed_94_94 = STATE_VARIABLE_MaybeTrailed_0_5;
            STATE_VARIABLE_MaybeConstant_89_89 = STATE_VARIABLE_MaybeConstant_0_7;
            STATE_VARIABLE_MaybeIO_82_82 = STATE_VARIABLE_MaybeIO_0_9;
            STATE_VARIABLE_MaybeLocal_75_75 = STATE_VARIABLE_MaybeLocal_0_11;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Trailed_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Attr_36, (MR_Integer) 0))) & (MR_Integer) 1);

            if ((STATE_VARIABLE_MaybeTrailed_0_5 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_95;

              {
                Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Term_35));
                MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (Trailed_53));
              }
              {
                STATE_VARIABLE_MaybeTrailed_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTrailed_94_94, 0) = ((MR_Box) (Var_95));
              }
              STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_0_13;
            }
            else
            {
              MR_Word Trailed0_54;
              MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeTrailed_0_5, (MR_Integer) 0))));
              MR_Word Term0_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 0))));

              Trailed0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_92, (MR_Integer) 1))));
              parse_tree__parse_mutable__report_repeated_or_conflicting_attributes_7_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_trailed_0), HeadVar__1_1, Term0_127, ((MR_Box) (Trailed0_54)), Term_35, ((MR_Box) (Trailed_53)), STATE_VARIABLE_Specs_0_13, &STATE_VARIABLE_Specs_118_118);
              STATE_VARIABLE_MaybeTrailed_94_94 = STATE_VARIABLE_MaybeTrailed_0_5;
            }
            STATE_VARIABLE_LangMap_120_120 = STATE_VARIABLE_LangMap_0_3;
            STATE_VARIABLE_MaybeConstant_89_89 = STATE_VARIABLE_MaybeConstant_0_7;
            STATE_VARIABLE_MaybeIO_82_82 = STATE_VARIABLE_MaybeIO_0_9;
            STATE_VARIABLE_MaybeLocal_75_75 = STATE_VARIABLE_MaybeLocal_0_11;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TermAttrs_37;
      next_value_of_STATE_VARIABLE_LangMap_0_3 = STATE_VARIABLE_LangMap_120_120;
      next_value_of_STATE_VARIABLE_MaybeTrailed_0_5 = STATE_VARIABLE_MaybeTrailed_94_94;
      next_value_of_STATE_VARIABLE_MaybeConstant_0_7 = STATE_VARIABLE_MaybeConstant_89_89;
      next_value_of_STATE_VARIABLE_MaybeIO_0_9 = STATE_VARIABLE_MaybeIO_82_82;
      next_value_of_STATE_VARIABLE_MaybeLocal_0_11 = STATE_VARIABLE_MaybeLocal_75_75;
      next_value_of_STATE_VARIABLE_Specs_0_13 = STATE_VARIABLE_Specs_118_118;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_LangMap_0_3 = next_value_of_STATE_VARIABLE_LangMap_0_3;
      STATE_VARIABLE_MaybeTrailed_0_5 = next_value_of_STATE_VARIABLE_MaybeTrailed_0_5;
      STATE_VARIABLE_MaybeConstant_0_7 = next_value_of_STATE_VARIABLE_MaybeConstant_0_7;
      STATE_VARIABLE_MaybeIO_0_9 = next_value_of_STATE_VARIABLE_MaybeIO_0_9;
      STATE_VARIABLE_MaybeLocal_0_11 = next_value_of_STATE_VARIABLE_MaybeLocal_0_11;
      STATE_VARIABLE_Specs_0_13 = next_value_of_STATE_VARIABLE_Specs_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__report_repeated_or_conflicting_attributes_7_p_0(
  MR_Word TypeInfo_for_T_52,
  MR_Word VarSet_8,
  MR_Word Term0_9,
  MR_Box Attr0_10,
  MR_Word Term_11,
  MR_Box Attr_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_String TermStr_14;
  MR_Word Pieces_15;
  MR_Word Spec_17;
  MR_Word Var_50;

  TermStr_14 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, (MR_Integer) 0, Term_11);
  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_52, Attr0_10, Attr_12);
  if (succeeded)
  {
    MR_Word Var_23;
    MR_Word Var_24;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[78])));
    }
    {
      Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[65])));
      MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_23));
    }
  }
  else
  {
    MR_String TermStr0_16;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;

    TermStr0_16 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, (MR_Integer) 0, Term0_9);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (TermStr0_16));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (TermStr_14));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[64])));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_34));
    }
  }
  Var_50 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_11);
  {
    Spec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.report_repeated_or_conflicting_attributes\'/7"));
    MR_hl_field(MR_mktag(1), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(MR_mktag(1), Spec_17, 3) = ((MR_Box) (Var_50));
    MR_hl_field(MR_mktag(1), Spec_17, 4) = ((MR_Box) (Pieces_15));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_19 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word Var_7;

        mercury__term__contains_var_2_p_1((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &Var_7, parse_tree__parse_mutable__parse_mutable_inst_3_p_0_1, env_ptr);
      }
      (env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0(
  MR_Word VarSet_4,
  MR_Word InstTerm_5,
  MR_Word * MaybeInst_6)
{
  struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s env;

  (env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5 = InstTerm_5;
  parse_tree__parse_mutable__parse_mutable_inst_3_p_0_2(&env);
  if ((env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
  {
    MR_String InstTermStr_8;
    MR_Word Pieces_9;
    MR_Word Spec_10;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_31;
    MR_Word Var_32;

    InstTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, (env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (InstTermStr_8));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[10])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[53])));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_14));
    }
    Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_mutable_inst\'/3"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (Pieces_9));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeInst_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
    }
  }
  else
  {
    MR_Word ContextPieces_11;

    ContextPieces_11 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[58])));
    parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[1])), VarSet_4, ContextPieces_11, (env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, MaybeInst_6);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word Var_7;

        mercury__term__contains_var_2_p_1((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, &Var_7, parse_tree__parse_mutable__parse_mutable_type_3_p_0_1, env_ptr);
      }
      (env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0(
  MR_Word VarSet_4,
  MR_Word TypeTerm_5,
  MR_Word * MaybeType_6)
{
  struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s env;

  (env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5 = TypeTerm_5;
  parse_tree__parse_mutable__parse_mutable_type_3_p_0_2(&env);
  if ((env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded)
  {
    MR_String TypeTermStr_8;
    MR_Word Pieces_9;
    MR_Word Spec_10;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_31;
    MR_Word Var_32;

    TypeTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_4, (env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (TypeTermStr_8));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[52])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[50])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_14));
    }
    Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), (env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_mutable_type\'/3"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (Pieces_9));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeType_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
    }
  }
  else
  {
    MR_Word ContextPieces_11;

    ContextPieces_11 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0));
    parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[0])), VarSet_4, ContextPieces_11, (env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, MaybeType_6);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_name_2_p_0(
  MR_Word NameTerm_3,
  MR_Word * MaybeName_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) NameTerm_3)) == (MR_Integer) 0);
  MR_String Name_5;
  MR_Word Var_9;
  MR_Word Var_10;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_3, (MR_Integer) 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NameTerm_3, (MR_Integer) 1))));
    succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 0);
      if (succeeded)
        Name_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    }
  }
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeName_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_5));
    }
  else
  {
    MR_Word Spec_8;
    MR_Word Var_19;
    MR_Word Var_20;

    Var_19 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), NameTerm_3);
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_mutable_name\'/2"));
      MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[48])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Spec_8));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeName_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_finalise_item_6_p_0(
  MR_Word _ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, MaybeIOM_12);
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Term_13;
  MR_Word Var_26;

  if (succeeded)
  {
    Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeSymNameSpecifier_14;

    parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(VarSet_8, Term_13, &MaybeSymNameSpecifier_14);
    if (((MR_tag((MR_Word) MaybeSymNameSpecifier_14)) == (MR_Integer) 0))
      *MaybeIOM_12 = (MR_Word) (MaybeSymNameSpecifier_14);
    else
    {
      MR_Word SymNameSpecifier_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameSpecifier_14, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) SymNameSpecifier_16)) == (MR_Integer) 0))
      {
        MR_String TermStr_18;
        MR_Word Pieces_19;
        MR_Word Spec_20;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_85;
        MR_Word Var_86;

        TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_13);
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (TermStr_18));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[10])));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[7])));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[6])));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[5])));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[4])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[3])));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[27])));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[1])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_56));
        }
        Var_85 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
        {
          Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_finalise_item\'/6"));
          MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
        }
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
        }
      }
      else
      {
        MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymNameSpecifier_16, (MR_Integer) 0))));
        MR_Word UserArity_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymNameSpecifier_16, (MR_Integer) 1))));
        MR_Integer UserArityInt_23 = (MR_Integer) (UserArity_22);

        switch (UserArityInt_23) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          MR_Word ItemFinalise_24;
          MR_Word Item_25;
          MR_Word Var_28;

          {
            ItemFinalise_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemFinalise_24, 0) = ((MR_Box) (SymName_21));
            MR_hl_field(MR_mktag(0), ItemFinalise_24, 1) = ((MR_Box) (UserArity_22));
            MR_hl_field(MR_mktag(0), ItemFinalise_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ItemFinalise_24, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), ItemFinalise_24, 4) = ((MR_Box) (SeqNum_11));
          }
          {
            Item_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_25, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Item_25, 1) = ((MR_Box) (ItemFinalise_24));
          }
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Item_25));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
          }
        }
        else
        {
          MR_Word Var_31;
          MR_Word Var_34;
          MR_Word Var_37;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_String TermStr_110;
          MR_Word Pieces_111;
          MR_Word Spec_112;

          TermStr_110 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_13);
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (TermStr_110));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[10])));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[29])));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[28])));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[27])));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
          }
          {
            Pieces_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), Pieces_111, 1) = ((MR_Box) (Var_31));
          }
          Var_51 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
          {
            Spec_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_112, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_finalise_item\'/6"));
            MR_hl_field(MR_mktag(1), Spec_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_112, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_112, 3) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Spec_112, 4) = ((MR_Box) (Pieces_111));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Spec_112));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
          }
        }
      }
    }
  }
  else
  {
    MR_Word Var_108;
    MR_Word Spec_120;

    {
      Spec_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_120, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_finalise_item\'/6"));
      MR_hl_field(MR_mktag(1), Spec_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_120, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_120, 3) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Spec_120, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[36])));
    }
    {
      Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Spec_120));
      MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_108));
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_initialise_item_6_p_0(
  MR_Word _ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, MaybeIOM_12);
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Word SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  MR_bool succeeded = (ArgTerms_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Term_13;
  MR_Word Var_26;

  if (succeeded)
  {
    Term_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1))));
    succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word MaybeSymNameSpecifier_14;

    parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(VarSet_8, Term_13, &MaybeSymNameSpecifier_14);
    if (((MR_tag((MR_Word) MaybeSymNameSpecifier_14)) == (MR_Integer) 0))
      *MaybeIOM_12 = (MR_Word) (MaybeSymNameSpecifier_14);
    else
    {
      MR_Word SymNameSpecifier_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSymNameSpecifier_14, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) SymNameSpecifier_16)) == (MR_Integer) 0))
      {
        MR_String TermStr_18;
        MR_Word Pieces_19;
        MR_Word Spec_20;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_74;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_88;
        MR_Word Var_89;

        TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_13);
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (TermStr_18));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[10])));
        }
        {
          Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[7])));
          MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[6])));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[5])));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[4])));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[3])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[2])));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[1])));
          MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_59));
        }
        Var_88 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
        {
          Spec_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_initialise_item\'/6"));
          MR_hl_field(MR_mktag(1), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(1), Spec_20, 3) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(1), Spec_20, 4) = ((MR_Box) (Pieces_19));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Spec_20));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
        }
      }
      else
      {
        MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymNameSpecifier_16, (MR_Integer) 0))));
        MR_Word UserArity_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymNameSpecifier_16, (MR_Integer) 1))));
        MR_Integer UserArityInt_23 = (MR_Integer) (UserArity_22);

        switch (UserArityInt_23) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          MR_Word ItemInitialise_24;
          MR_Word Item_25;
          MR_Word Var_28;

          {
            ItemInitialise_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ItemInitialise_24, 0) = ((MR_Box) (SymName_21));
            MR_hl_field(MR_mktag(0), ItemInitialise_24, 1) = ((MR_Box) (UserArity_22));
            MR_hl_field(MR_mktag(0), ItemInitialise_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ItemInitialise_24, 3) = ((MR_Box) (Context_10));
            MR_hl_field(MR_mktag(0), ItemInitialise_24, 4) = ((MR_Box) (SeqNum_11));
          }
          {
            Item_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Item_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Item_25, 1) = ((MR_Box) (ItemInitialise_24));
          }
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Item_25));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
          }
        }
        else
        {
          MR_Word Var_31;
          MR_Word Var_34;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_String TermStr_113;
          MR_Word Pieces_114;
          MR_Word Spec_115;

          TermStr_113 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), VarSet_8, Term_13);
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (TermStr_113));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[17])));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[12])));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[2])));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
          }
          {
            Pieces_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_114, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), Pieces_114, 1) = ((MR_Box) (Var_31));
          }
          Var_54 = mercury__term__get_term_context_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Term_13);
          {
            Spec_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_115, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_initialise_item\'/6"));
            MR_hl_field(MR_mktag(1), Spec_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_115, 2) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(1), Spec_115, 3) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), Spec_115, 4) = ((MR_Box) (Pieces_114));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Spec_115));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_55));
          }
        }
      }
    }
  }
  else
  {
    MR_Word Var_111;
    MR_Word Spec_123;

    {
      Spec_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_123, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.parse_mutable.parse_initialise_item\'/6"));
      MR_hl_field(MR_mktag(1), Spec_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_123, 2) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(1), Spec_123, 3) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(1), Spec_123, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_1[26])));
    }
    {
      Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Spec_123));
      MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeIOM_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_111));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____foreign_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_mutable____Unify____foreign_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____foreign_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_mutable____Compare____foreign_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____mutable_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__parse_mutable____Unify____mutable_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__parse_mutable____Compare____mutable_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__parse_mutable__init(void)
{
}

void mercury__parse_tree__parse_mutable__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0);
	MR_register_type_ctor_info(&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_foreign_name_0);
	MR_register_type_ctor_info(&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_mutable_locn_0);
}

void mercury__parse_tree__parse_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__parse_mutable__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.parse_mutable.
