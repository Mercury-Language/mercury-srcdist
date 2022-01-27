/*
** Automatically generated from `parse_mutable.m'
** by the Mercury compiler,
** version rotd-2017-02-22
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


/* :- module parse_tree.parse_mutable. */
/* :- implementation. */

/*
INIT mercury__parse_tree__parse_mutable__init
ENDINIT
*/

#include "parse_tree.parse_mutable.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_inst_mode_name.mih"
#include "parse_tree.parse_pragma.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s {
  MR_bool parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded;
  MR_Word parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11;
  jmp_buf parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0;
  MR_Word parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116;
  MR_Word parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12;
  MR_Word parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13;
  MR_Word parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49;
  MR_Box parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49;
};

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


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0;

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_0[1];

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_0;

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_1[1];

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_1;

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_2[1];

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_2;

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_3[1];

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_3;

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_4[1];

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_4;

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_3[2];

static const MR_DuPtagLayout parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_collected_mutable_attribute_0[4];

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_name_ordered_collected_mutable_attribute_0[5];

static const MR_Integer parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_collected_mutable_attribute_0[5];

static const MR_EnumFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_0;

static const MR_EnumFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_1;

static const MR_EnumFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__enum_value_ordered_mutable_locn_0[2];

static const MR_EnumFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__enum_name_ordered_mutable_locn_0[2];

static const MR_Integer parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_mutable_locn_0[2];

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0_10001(
  MR_Box parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0_10001(
  MR_Box * parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2,
  MR_Box parse_tree__parse_mutable__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____mutable_locn_0_0_10001(
  MR_Box parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0_10001(
  MR_Box * parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2,
  MR_Box parse_tree__parse_mutable__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(
  MR_Word * parse_tree__parse_mutable__HeadVar__1_1,
  MR_Word parse_tree__parse_mutable__HeadVar__2_2,
  MR_Word parse_tree__parse_mutable__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0(
  MR_Word parse_tree__parse_mutable__HeadVar__1_1,
  MR_Word parse_tree__parse_mutable__HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attr_2_p_0(
  MR_Word parse_tree__parse_mutable__MutAttrTerm_3,
  MR_Word * parse_tree__parse_mutable__MutAttrResult_4);

static void MR_CALL 
parse_tree__parse_mutable__process_mutable_attribute_3_p_0(
  MR_Word parse_tree__parse_mutable__HeadVar__1_1,
  MR_Word parse_tree__parse_mutable__STATE_VARIABLE_Attributes_0_2,
  MR_Word * parse_tree__parse_mutable__STATE_VARIABLE_Attributes_3);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_6(
  MR_Box parse_tree__parse_mutable__closure_arg,
  MR_Box parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2,
  MR_Box * parse_tree__parse_mutable__wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_1(
  MR_Box parse_tree__parse_mutable__closure_arg,
  MR_Box parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box * parse_tree__parse_mutable__wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2(
  void * parse_tree__parse_mutable__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_4(
  void * parse_tree__parse_mutable__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_3(
  void * parse_tree__parse_mutable__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_5(
  void * parse_tree__parse_mutable__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_4,
  MR_Word parse_tree__parse_mutable__MutAttrsTerm_5,
  MR_Word * parse_tree__parse_mutable__MaybeMutAttrs_6);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_1(
  void * parse_tree__parse_mutable__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_2(
  void * parse_tree__parse_mutable__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_4,
  MR_Word parse_tree__parse_mutable__InstTerm_5,
  MR_Word * parse_tree__parse_mutable__MaybeInst_6);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_1(
  void * parse_tree__parse_mutable__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_2(
  void * parse_tree__parse_mutable__env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_4,
  MR_Word parse_tree__parse_mutable__TypeTerm_5,
  MR_Word * parse_tree__parse_mutable__MaybeType_6);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_name_2_p_0(
  MR_Word parse_tree__parse_mutable__NameTerm_3,
  MR_Word * parse_tree__parse_mutable__MaybeName_4);


static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_2[91][2];

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_3[9][1];

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_4[1][5];

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_5[1][6];


/* sealed */ struct parse_tree__parse_mutable__vector_common_type_6_0_s {
  const MR_String parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_0;
  const MR_Word parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct parse_tree__parse_mutable__vector_common_type_6_0_s parse_tree__parse_mutable_vector_common_6[5];



static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0)),
    ((MR_Box) (&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_4[0])),
    ((MR_Box) (parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_5[0])),
    ((MR_Box) (parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_2[91][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "doesn\'t."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not zero or two."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose arity"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- initialise pred_name/pred_arity."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- finalise pred_name/pred_arity."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "representing part of the constraint store"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid mutable name."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[41])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In a"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__parse_mutable_scalar_common_3[0])))
  },
  /* row 50 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[1])))
  },
  /* row 52 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_2[51])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[45])))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[2])))
  },
  /* row 56 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_2[55])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unrecognised attribute"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type in a"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration cannot contain variables:"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst in a"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: conflicting attributes"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in attribute list:"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: malformed attribute list"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the predicate specification in an"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must specify the predicate\'s arity;"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate,"))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires arity, found"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose arity is not zero or two:"))
  },
  /* row 88 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the form"))
  },
};

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_3[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[39])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[63])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[18])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[28])))
  },
};

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__parse_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__parse_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0))
  },
};

static /* final */ const MR_Box parse_tree__parse_mutable_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0))
  },
};


static /* final */ const struct parse_tree__parse_mutable__vector_common_type_6_0_s parse_tree__parse_mutable_vector_common_6[5] = {
  /* row 0 */
  {
    (MR_String) "attach_to_io_state",
    (MR_Word) MR_mkword(MR_mktag(2), &parse_tree__parse_mutable_scalar_common_3[0])
  },
  /* row 1 */
  {
    (MR_String) "constant",
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[74])
  },
  /* row 2 */
  {
    (MR_String) "thread_local",
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[75])
  },
  /* row 3 */
  {
    (MR_String) "trailed",
    (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[1])
  },
  /* row 4 */
  {
    (MR_String) "untrailed",
    (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[2])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__parse_mutable__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0
  }
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_trailed_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_0 = {
  (MR_String) "mutable_attr_trailed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_name_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_1 = {
  (MR_String) "mutable_attr_foreign_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_2 = {
  (MR_String) "mutable_attr_attach_to_io_state",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_3 = {
  (MR_String) "mutable_attr_constant",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_thread_local_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_4 = {
  (MR_String) "mutable_attr_thread_local",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_0[1] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_1
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_1[1] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_0
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_2[1] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_2
};

static const MR_DuFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_3[2] = {
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_3,
  &parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_4
};

static const MR_DuPtagLayout parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_collected_mutable_attribute_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0_10001)),
  ((MR_Box) (parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0_10001)),
  (MR_String) "parse_tree.parse_mutable",
  (MR_String) "collected_mutable_attribute",
  {     parse_tree__parse_mutable__parse_tree__parse_mutable__du_name_ordered_collected_mutable_attribute_0 },
  {     parse_tree__parse_mutable__parse_tree__parse_mutable__du_ptag_ordered_collected_mutable_attribute_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_collected_mutable_attribute_0
};

static const MR_EnumFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_0 = {
  (MR_String) "mutable_locn_item",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__enum_functor_desc_mutable_locn_0_1 = {
  (MR_String) "mutable_locn_in_solver_type",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr parse_tree__parse_mutable__parse_tree__parse_mutable__enum_value_ordered_mutable_locn_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__parse_mutable____Unify____mutable_locn_0_0_10001)),
  ((MR_Box) (parse_tree__parse_mutable____Compare____mutable_locn_0_0_10001)),
  (MR_String) "parse_tree.parse_mutable",
  (MR_String) "mutable_locn",
  {     parse_tree__parse_mutable__parse_tree__parse_mutable__enum_name_ordered_mutable_locn_0 },
  {     parse_tree__parse_mutable__parse_tree__parse_mutable__enum_value_ordered_mutable_locn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__parse_mutable__parse_tree__parse_mutable__functor_number_map_mutable_locn_0
};

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0_10001(
  MR_Box parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;

    {
      parse_tree__parse_mutable__succeeded = parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0(((MR_Word) parse_tree__parse_mutable__wrapper_arg_1), ((MR_Word) parse_tree__parse_mutable__wrapper_arg_2));
    }
    return parse_tree__parse_mutable__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0_10001(
  MR_Box * parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2,
  MR_Box parse_tree__parse_mutable__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_mutable__conv0_HeadVar__1_1;

    {
      parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(&parse_tree__parse_mutable__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_mutable__wrapper_arg_2), ((MR_Word) parse_tree__parse_mutable__wrapper_arg_3));
    }
    *parse_tree__parse_mutable__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_mutable__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____mutable_locn_0_0_10001(
  MR_Box parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;

    {
      parse_tree__parse_mutable__succeeded = parse_tree__parse_mutable____Unify____mutable_locn_0_0(((MR_Word) parse_tree__parse_mutable__wrapper_arg_1), ((MR_Word) parse_tree__parse_mutable__wrapper_arg_2));
    }
    return parse_tree__parse_mutable__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0_10001(
  MR_Box * parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2,
  MR_Box parse_tree__parse_mutable__wrapper_arg_3)
{
  {
    MR_Word parse_tree__parse_mutable__conv0_HeadVar__1_1;

    {
      parse_tree__parse_mutable____Compare____mutable_locn_0_0(&parse_tree__parse_mutable__conv0_HeadVar__1_1, ((MR_Word) parse_tree__parse_mutable__wrapper_arg_2), ((MR_Word) parse_tree__parse_mutable__wrapper_arg_3));
    }
    *parse_tree__parse_mutable__wrapper_arg_1 = ((MR_Box) (parse_tree__parse_mutable__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_9,
  MR_Word parse_tree__parse_mutable__ArgTerms_10,
  MR_Word parse_tree__parse_mutable__Context_11,
  MR_Integer parse_tree__parse_mutable__SeqNum_12,
  MR_Word parse_tree__parse_mutable__MutableLocn_13,
  MR_Word * parse_tree__parse_mutable__MaybeItemMutableInfo_14)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_mutable__NameTerm_15;
    MR_Word parse_tree__parse_mutable__TypeTerm_16;
    MR_Word parse_tree__parse_mutable__ValueTerm_17;
    MR_Word parse_tree__parse_mutable__InstTerm_18;
    MR_Word parse_tree__parse_mutable__MaybeAttrsTerm_20;
    MR_Word parse_tree__parse_mutable__OptMutAttrsTerm_19;
    MR_Word parse_tree__parse_mutable__V_42_42;
    MR_Word parse_tree__parse_mutable__V_43_43;
    MR_Word parse_tree__parse_mutable__V_44_44;

    if (parse_tree__parse_mutable__succeeded)
      {
        parse_tree__parse_mutable__NameTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__ArgTerms_10, (MR_Integer) 0)));
        parse_tree__parse_mutable__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__ArgTerms_10, (MR_Integer) 1)));
        parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__V_42_42)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_mutable__succeeded)
          {
            parse_tree__parse_mutable__TypeTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_42_42, (MR_Integer) 0)));
            parse_tree__parse_mutable__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_42_42, (MR_Integer) 1)));
            parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__V_43_43)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_mutable__succeeded)
              {
                parse_tree__parse_mutable__ValueTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_43_43, (MR_Integer) 0)));
                parse_tree__parse_mutable__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_43_43, (MR_Integer) 1)));
                parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__V_44_44)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_mutable__succeeded)
                  {
                    parse_tree__parse_mutable__InstTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_44_44, (MR_Integer) 0)));
                    parse_tree__parse_mutable__OptMutAttrsTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_44_44, (MR_Integer) 1)));
                    if ((parse_tree__parse_mutable__OptMutAttrsTerm_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        parse_tree__parse_mutable__MaybeAttrsTerm_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        parse_tree__parse_mutable__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Word parse_tree__parse_mutable__MutAttrsTerm0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__OptMutAttrsTerm_19, (MR_Integer) 0)));
                        MR_Word parse_tree__parse_mutable__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__OptMutAttrsTerm_19, (MR_Integer) 1)));

                        parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (parse_tree__parse_mutable__succeeded)
                          {
                            {
                              parse_tree__parse_mutable__MaybeAttrsTerm_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeAttrsTerm_20, 0) = ((MR_Box) (parse_tree__parse_mutable__MutAttrsTerm0_21));
                            }
                            parse_tree__parse_mutable__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    if (parse_tree__parse_mutable__succeeded)
      {
        MR_Word parse_tree__parse_mutable__TypeCtorInfo_104_104;
        MR_Word parse_tree__parse_mutable__TypeCtorInfo_105_105;
        MR_Word parse_tree__parse_mutable__MaybeName_22;
        MR_Word parse_tree__parse_mutable__MaybeType_23;
        MR_Word parse_tree__parse_mutable__Value_24;
        MR_Word parse_tree__parse_mutable__ProgVarSet_25;
        MR_Word parse_tree__parse_mutable__MaybeInst_26;
        MR_Word parse_tree__parse_mutable__MaybeMutAttrs_27;
        MR_String parse_tree__parse_mutable__Name_29;
        MR_Word parse_tree__parse_mutable__Type_30;
        MR_Word parse_tree__parse_mutable__Inst_31;
        MR_Word parse_tree__parse_mutable__MutAttrs_32;

        {
          parse_tree__parse_mutable__parse_mutable_name_2_p_0(parse_tree__parse_mutable__NameTerm_15, &parse_tree__parse_mutable__MaybeName_22);
        }
        {
          parse_tree__parse_mutable__parse_mutable_type_3_p_0(parse_tree__parse_mutable__VarSet_9, parse_tree__parse_mutable__TypeTerm_16, &parse_tree__parse_mutable__MaybeType_23);
        }
        parse_tree__parse_mutable__TypeCtorInfo_104_104 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        parse_tree__parse_mutable__TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          mercury__term__coerce_2_p_0(parse_tree__parse_mutable__TypeCtorInfo_104_104, parse_tree__parse_mutable__TypeCtorInfo_105_105, parse_tree__parse_mutable__ValueTerm_17, &parse_tree__parse_mutable__Value_24);
        }
        {
          mercury__varset__coerce_2_p_0(parse_tree__parse_mutable__TypeCtorInfo_104_104, parse_tree__parse_mutable__TypeCtorInfo_105_105, parse_tree__parse_mutable__VarSet_9, &parse_tree__parse_mutable__ProgVarSet_25);
        }
        {
          parse_tree__parse_mutable__parse_mutable_inst_3_p_0(parse_tree__parse_mutable__VarSet_9, parse_tree__parse_mutable__InstTerm_18, &parse_tree__parse_mutable__MaybeInst_26);
        }
        if ((parse_tree__parse_mutable__MaybeAttrsTerm_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__parse_mutable__V_46_46;

            {
              parse_tree__parse_mutable__V_46_46 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
            }
            {
              parse_tree__parse_mutable__MaybeMutAttrs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeMutAttrs_27, 0) = ((MR_Box) (parse_tree__parse_mutable__V_46_46));
            }
          }
        else
          {
            MR_Word parse_tree__parse_mutable__MutAttrsTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeAttrsTerm_20, (MR_Integer) 0)));

            {
              parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(parse_tree__parse_mutable__VarSet_9, parse_tree__parse_mutable__MutAttrsTerm_28, &parse_tree__parse_mutable__MaybeMutAttrs_27);
            }
          }
        parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__MaybeName_22)) == (MR_mktag((MR_Integer) 1)));
        if (parse_tree__parse_mutable__succeeded)
          {
            parse_tree__parse_mutable__Name_29 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeName_22, (MR_Integer) 0)));
            parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__MaybeType_23)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_mutable__succeeded)
              {
                parse_tree__parse_mutable__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeType_23, (MR_Integer) 0)));
                parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__MaybeInst_26)) == (MR_mktag((MR_Integer) 1)));
                if (parse_tree__parse_mutable__succeeded)
                  {
                    parse_tree__parse_mutable__Inst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeInst_26, (MR_Integer) 0)));
                    parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__MaybeMutAttrs_27)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_mutable__succeeded)
                      parse_tree__parse_mutable__MutAttrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeMutAttrs_27, (MR_Integer) 0)));
                  }
              }
          }
        if (parse_tree__parse_mutable__succeeded)
          {
            MR_Word parse_tree__parse_mutable__ItemMutableInfo_33;

            {
              parse_tree__parse_mutable__ItemMutableInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 0) = ((MR_Box) (parse_tree__parse_mutable__Name_29));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 1) = ((MR_Box) (parse_tree__parse_mutable__Type_30));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 2) = ((MR_Box) (parse_tree__parse_mutable__Type_30));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 3) = ((MR_Box) (parse_tree__parse_mutable__Inst_31));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 4) = ((MR_Box) (parse_tree__parse_mutable__Inst_31));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 5) = ((MR_Box) (parse_tree__parse_mutable__Value_24));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 6) = ((MR_Box) (parse_tree__parse_mutable__ProgVarSet_25));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 7) = ((MR_Box) (parse_tree__parse_mutable__MutAttrs_32));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 8) = ((MR_Box) (parse_tree__parse_mutable__Context_11));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemMutableInfo_33, 9) = ((MR_Box) (parse_tree__parse_mutable__SeqNum_12));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_mutable__MaybeItemMutableInfo_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_mutable__ItemMutableInfo_33));
            }
          }
        else
          {
            MR_Word parse_tree__parse_mutable__TypeCtorInfo_106_106 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
            MR_Word parse_tree__parse_mutable__Specs_34;
            MR_Word parse_tree__parse_mutable__V_49_49;
            MR_Word parse_tree__parse_mutable__V_50_50;
            MR_Word parse_tree__parse_mutable__V_51_51;
            MR_Word parse_tree__parse_mutable__V_52_52;
            MR_Word parse_tree__parse_mutable__V_53_53;
            MR_Word parse_tree__parse_mutable__V_54_54;

            {
              parse_tree__parse_mutable__V_49_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__parse_mutable__MaybeName_22);
            }
            {
              parse_tree__parse_mutable__V_51_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__parse_mutable__MaybeType_23);
            }
            {
              parse_tree__parse_mutable__V_53_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__parse_mutable__MaybeInst_26);
            }
            {
              parse_tree__parse_mutable__V_54_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, parse_tree__parse_mutable__MaybeMutAttrs_27);
            }
            {
              parse_tree__parse_mutable__V_52_52 = mercury__list__f_43_43_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_106_106, parse_tree__parse_mutable__V_53_53, parse_tree__parse_mutable__V_54_54);
            }
            {
              parse_tree__parse_mutable__V_50_50 = mercury__list__f_43_43_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_106_106, parse_tree__parse_mutable__V_51_51, parse_tree__parse_mutable__V_52_52);
            }
            {
              parse_tree__parse_mutable__Specs_34 = mercury__list__f_43_43_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_106_106, parse_tree__parse_mutable__V_49_49, parse_tree__parse_mutable__V_50_50);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_mutable__MaybeItemMutableInfo_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__Specs_34));
            }
          }
      }
    else
      {
        MR_Word parse_tree__parse_mutable__WhatPieces_37;
        MR_String parse_tree__parse_mutable__Prefix_38;
        MR_String parse_tree__parse_mutable__Suffix1_39;
        MR_Word parse_tree__parse_mutable__Pieces_40;
        MR_Word parse_tree__parse_mutable__Spec_41;
        MR_Word parse_tree__parse_mutable__V_73_73;
        MR_Word parse_tree__parse_mutable__V_76_76;
        MR_Word parse_tree__parse_mutable__V_79_79;
        MR_Word parse_tree__parse_mutable__V_80_80;
        MR_String parse_tree__parse_mutable__V_81_81;
        MR_String parse_tree__parse_mutable__V_82_82;
        MR_Word parse_tree__parse_mutable__V_83_83;
        MR_Word parse_tree__parse_mutable__V_86_86;
        MR_Word parse_tree__parse_mutable__V_87_87;
        MR_String parse_tree__parse_mutable__V_88_88;
        MR_Word parse_tree__parse_mutable__V_96_96;
        MR_Word parse_tree__parse_mutable__V_97_97;
        MR_Word parse_tree__parse_mutable__V_98_98;
        MR_Word parse_tree__parse_mutable__V_99_99;
        MR_Word parse_tree__parse_mutable__V_102_102;

        switch (parse_tree__parse_mutable__MutableLocn_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              parse_tree__parse_mutable__WhatPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[34]);
              parse_tree__parse_mutable__Prefix_38 = (MR_String) "";
              parse_tree__parse_mutable__Suffix1_39 = (MR_String) "";
            }
            break;
          case (MR_Integer) 0:
            {
              parse_tree__parse_mutable__WhatPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[37]);
              parse_tree__parse_mutable__Prefix_38 = (MR_String) ":- ";
              parse_tree__parse_mutable__Suffix1_39 = (MR_String) ".";
            }
            break;
        }
        {
          parse_tree__parse_mutable__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_73_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[81])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_73_73, 1) = ((MR_Box) (parse_tree__parse_mutable__WhatPieces_37));
        }
        {
          parse_tree__parse_mutable__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) "mutable(name, type, init_value, inst)", parse_tree__parse_mutable__Suffix1_39);
        }
        {
          parse_tree__parse_mutable__V_81_81 = mercury__string__f_43_43_2_f_0(parse_tree__parse_mutable__Prefix_38, parse_tree__parse_mutable__V_82_82);
        }
        {
          parse_tree__parse_mutable__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_80_80, 1) = ((MR_Box) (parse_tree__parse_mutable__V_81_81));
        }
        {
          parse_tree__parse_mutable__V_88_88 = mercury__string__f_43_43_2_f_0(parse_tree__parse_mutable__Prefix_38, (MR_String) "mutable(name, type, init_value, inst, [attr1, ...]).");
        }
        {
          parse_tree__parse_mutable__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_87_87, 1) = ((MR_Box) (parse_tree__parse_mutable__V_88_88));
        }
        {
          parse_tree__parse_mutable__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_86_86, 0) = ((MR_Box) (parse_tree__parse_mutable__V_87_87));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])));
        }
        {
          parse_tree__parse_mutable__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[90])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_83_83, 1) = ((MR_Box) (parse_tree__parse_mutable__V_86_86));
        }
        {
          parse_tree__parse_mutable__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_79_79, 0) = ((MR_Box) (parse_tree__parse_mutable__V_80_80));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_79_79, 1) = ((MR_Box) (parse_tree__parse_mutable__V_83_83));
        }
        {
          parse_tree__parse_mutable__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_76_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[89])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_76_76, 1) = ((MR_Box) (parse_tree__parse_mutable__V_79_79));
        }
        {
          parse_tree__parse_mutable__Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__parse_mutable__V_73_73, parse_tree__parse_mutable__V_76_76);
        }
        {
          parse_tree__parse_mutable__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_99_99, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_40));
        }
        {
          parse_tree__parse_mutable__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_98_98, 0) = ((MR_Box) (parse_tree__parse_mutable__V_99_99));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__V_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_97_97, 0) = ((MR_Box) (parse_tree__parse_mutable__Context_11));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_97_97, 1) = ((MR_Box) (parse_tree__parse_mutable__V_98_98));
        }
        {
          parse_tree__parse_mutable__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_96_96, 0) = ((MR_Box) (parse_tree__parse_mutable__V_97_97));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_41, 2) = ((MR_Box) (parse_tree__parse_mutable__V_96_96));
        }
        {
          parse_tree__parse_mutable__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_102_102, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_41));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_mutable__MaybeItemMutableInfo_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_102_102));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_8,
  MR_Word parse_tree__parse_mutable__ArgTerms_9,
  MR_Word parse_tree__parse_mutable__Context_10,
  MR_Integer parse_tree__parse_mutable__SeqNum_11,
  MR_Word * parse_tree__parse_mutable__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;
    MR_Word parse_tree__parse_mutable__MaybeItemMutableInfo_13;

    {
      parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__ArgTerms_9, parse_tree__parse_mutable__Context_10, parse_tree__parse_mutable__SeqNum_11, (MR_Integer) 0, &parse_tree__parse_mutable__MaybeItemMutableInfo_13);
    }
    if (((MR_tag((MR_Word) parse_tree__parse_mutable__MaybeItemMutableInfo_13)) == (MR_mktag((MR_Integer) 0))))
      *parse_tree__parse_mutable__MaybeIOM_12 = (MR_Word) parse_tree__parse_mutable__MaybeItemMutableInfo_13;
    else
      {
        MR_Word parse_tree__parse_mutable__ItemMutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeItemMutableInfo_13, (MR_Integer) 0)));
        MR_Word parse_tree__parse_mutable__V_17_17;
        MR_Word parse_tree__parse_mutable__V_18_18;

        {
          parse_tree__parse_mutable__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_18_18, 1) = ((MR_Box) (parse_tree__parse_mutable__ItemMutableInfo_14));
        }
        {
          parse_tree__parse_mutable__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_17_17, 0) = ((MR_Box) (parse_tree__parse_mutable__V_18_18));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__parse_mutable__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_17_17));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_8,
  MR_Word parse_tree__parse_mutable__ArgTerms_9,
  MR_Word parse_tree__parse_mutable__Context_10,
  MR_Integer parse_tree__parse_mutable__SeqNum_11,
  MR_Word * parse_tree__parse_mutable__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_mutable__Term_13;
    MR_Word parse_tree__parse_mutable__V_25_25;

    if (parse_tree__parse_mutable__succeeded)
      {
        parse_tree__parse_mutable__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__ArgTerms_9, (MR_Integer) 0)));
        parse_tree__parse_mutable__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__ArgTerms_9, (MR_Integer) 1)));
        parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_mutable__succeeded)
      {
        MR_Word parse_tree__parse_mutable__MaybeSymNameSpecifier_14;

        {
          parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__Term_13, &parse_tree__parse_mutable__MaybeSymNameSpecifier_14);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_mutable__MaybeSymNameSpecifier_14)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_mutable__MaybeIOM_12 = (MR_Word) parse_tree__parse_mutable__MaybeSymNameSpecifier_14;
        else
          {
            MR_Word parse_tree__parse_mutable__SymNameSpecifier_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeSymNameSpecifier_14, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) parse_tree__parse_mutable__SymNameSpecifier_16)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_mutable__TypeCtorInfo_126_126 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                MR_String parse_tree__parse_mutable__TermStr_18;
                MR_Word parse_tree__parse_mutable__Pieces_19;
                MR_Word parse_tree__parse_mutable__Spec_20;
                MR_Word parse_tree__parse_mutable__V_60_60;
                MR_Word parse_tree__parse_mutable__V_63_63;
                MR_Word parse_tree__parse_mutable__V_66_66;
                MR_Word parse_tree__parse_mutable__V_69_69;
                MR_Word parse_tree__parse_mutable__V_70_70;
                MR_Word parse_tree__parse_mutable__V_79_79;
                MR_Word parse_tree__parse_mutable__V_80_80;
                MR_Word parse_tree__parse_mutable__V_81_81;
                MR_Word parse_tree__parse_mutable__V_82_82;
                MR_Word parse_tree__parse_mutable__V_83_83;
                MR_Word parse_tree__parse_mutable__V_86_86;

                {
                  parse_tree__parse_mutable__TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_126_126, parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__Term_13);
                }
                {
                  parse_tree__parse_mutable__V_70_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), parse_tree__parse_mutable__V_70_70, 0) = ((MR_Box) (parse_tree__parse_mutable__TermStr_18));
                }
                {
                  parse_tree__parse_mutable__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_69_69, 0) = ((MR_Box) (parse_tree__parse_mutable__V_70_70));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
                }
                {
                  parse_tree__parse_mutable__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[85])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_66_66, 1) = ((MR_Box) (parse_tree__parse_mutable__V_69_69));
                }
                {
                  parse_tree__parse_mutable__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[79])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_63_63, 1) = ((MR_Box) (parse_tree__parse_mutable__V_66_66));
                }
                {
                  parse_tree__parse_mutable__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[84])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_60_60, 1) = ((MR_Box) (parse_tree__parse_mutable__V_63_63));
                }
                {
                  parse_tree__parse_mutable__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[81])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_19, 1) = ((MR_Box) (parse_tree__parse_mutable__V_60_60));
                }
                {
                  parse_tree__parse_mutable__V_81_81 = mercury__term__get_term_context_1_f_0(parse_tree__parse_mutable__TypeCtorInfo_126_126, parse_tree__parse_mutable__Term_13);
                }
                {
                  parse_tree__parse_mutable__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_83_83, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_19));
                }
                {
                  parse_tree__parse_mutable__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_82_82, 0) = ((MR_Box) (parse_tree__parse_mutable__V_83_83));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_mutable__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_80_80, 0) = ((MR_Box) (parse_tree__parse_mutable__V_81_81));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_80_80, 1) = ((MR_Box) (parse_tree__parse_mutable__V_82_82));
                }
                {
                  parse_tree__parse_mutable__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_79_79, 0) = ((MR_Box) (parse_tree__parse_mutable__V_80_80));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_mutable__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_20, 2) = ((MR_Box) (parse_tree__parse_mutable__V_79_79));
                }
                {
                  parse_tree__parse_mutable__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_86_86, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_20));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_mutable__MaybeIOM_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_86_86));
                }
              }
            else
              {
                MR_Word parse_tree__parse_mutable__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__SymNameSpecifier_16, (MR_Integer) 0)));
                MR_Integer parse_tree__parse_mutable__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__SymNameSpecifier_16, (MR_Integer) 1)));

                switch (parse_tree__parse_mutable__Arity_22) {
                  default:
                    parse_tree__parse_mutable__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    parse_tree__parse_mutable__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    parse_tree__parse_mutable__succeeded = MR_TRUE;
                    break;
                }
                if (parse_tree__parse_mutable__succeeded)
                  {
                    MR_Word parse_tree__parse_mutable__ItemFinalise_23;
                    MR_Word parse_tree__parse_mutable__Item_24;
                    MR_Word parse_tree__parse_mutable__V_27_27;

                    {
                      parse_tree__parse_mutable__ItemFinalise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemFinalise_23, 0) = ((MR_Box) (parse_tree__parse_mutable__SymName_21));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemFinalise_23, 1) = ((MR_Box) (parse_tree__parse_mutable__Arity_22));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemFinalise_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemFinalise_23, 3) = ((MR_Box) (parse_tree__parse_mutable__Context_10));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemFinalise_23, 4) = ((MR_Box) (parse_tree__parse_mutable__SeqNum_11));
                    }
                    {
                      parse_tree__parse_mutable__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__Item_24, 1) = ((MR_Box) (parse_tree__parse_mutable__ItemFinalise_23));
                    }
                    {
                      parse_tree__parse_mutable__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__parse_mutable__Item_24));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_mutable__MaybeIOM_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_27_27));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_mutable__TypeCtorInfo_127_127 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                    MR_Word parse_tree__parse_mutable__V_30_30;
                    MR_Word parse_tree__parse_mutable__V_33_33;
                    MR_Word parse_tree__parse_mutable__V_36_36;
                    MR_Word parse_tree__parse_mutable__V_39_39;
                    MR_Word parse_tree__parse_mutable__V_40_40;
                    MR_Word parse_tree__parse_mutable__V_49_49;
                    MR_Word parse_tree__parse_mutable__V_50_50;
                    MR_Word parse_tree__parse_mutable__V_51_51;
                    MR_Word parse_tree__parse_mutable__V_52_52;
                    MR_Word parse_tree__parse_mutable__V_53_53;
                    MR_Word parse_tree__parse_mutable__V_56_56;
                    MR_String parse_tree__parse_mutable__TermStr_115;
                    MR_Word parse_tree__parse_mutable__Pieces_116;
                    MR_Word parse_tree__parse_mutable__Spec_117;

                    {
                      parse_tree__parse_mutable__TermStr_115 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_127_127, parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__Term_13);
                    }
                    {
                      parse_tree__parse_mutable__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_40_40, 1) = ((MR_Box) (parse_tree__parse_mutable__TermStr_115));
                    }
                    {
                      parse_tree__parse_mutable__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_39_39, 0) = ((MR_Box) (parse_tree__parse_mutable__V_40_40));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
                    }
                    {
                      parse_tree__parse_mutable__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[87])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_36_36, 1) = ((MR_Box) (parse_tree__parse_mutable__V_39_39));
                    }
                    {
                      parse_tree__parse_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[86])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_33_33, 1) = ((MR_Box) (parse_tree__parse_mutable__V_36_36));
                    }
                    {
                      parse_tree__parse_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[84])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__parse_mutable__V_33_33));
                    }
                    {
                      parse_tree__parse_mutable__Pieces_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[81])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_116, 1) = ((MR_Box) (parse_tree__parse_mutable__V_30_30));
                    }
                    {
                      parse_tree__parse_mutable__V_51_51 = mercury__term__get_term_context_1_f_0(parse_tree__parse_mutable__TypeCtorInfo_127_127, parse_tree__parse_mutable__Term_13);
                    }
                    {
                      parse_tree__parse_mutable__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_116));
                    }
                    {
                      parse_tree__parse_mutable__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_52_52, 0) = ((MR_Box) (parse_tree__parse_mutable__V_53_53));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_mutable__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_50_50, 0) = ((MR_Box) (parse_tree__parse_mutable__V_51_51));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_50_50, 1) = ((MR_Box) (parse_tree__parse_mutable__V_52_52));
                    }
                    {
                      parse_tree__parse_mutable__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_49_49, 0) = ((MR_Box) (parse_tree__parse_mutable__V_50_50));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_mutable__Spec_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_117, 2) = ((MR_Box) (parse_tree__parse_mutable__V_49_49));
                    }
                    {
                      parse_tree__parse_mutable__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_56_56, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_117));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_mutable__MaybeIOM_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_56_56));
                    }
                  }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_mutable__V_107_107;
        MR_Word parse_tree__parse_mutable__V_108_108;
        MR_Word parse_tree__parse_mutable__V_113_113;
        MR_Word parse_tree__parse_mutable__Spec_125;

        {
          parse_tree__parse_mutable__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_108_108, 0) = ((MR_Box) (parse_tree__parse_mutable__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[88])));
        }
        {
          parse_tree__parse_mutable__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_107_107, 0) = ((MR_Box) (parse_tree__parse_mutable__V_108_108));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_125, 2) = ((MR_Box) (parse_tree__parse_mutable__V_107_107));
        }
        {
          parse_tree__parse_mutable__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_113_113, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_125));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_mutable__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_113_113));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_8,
  MR_Word parse_tree__parse_mutable__ArgTerms_9,
  MR_Word parse_tree__parse_mutable__Context_10,
  MR_Integer parse_tree__parse_mutable__SeqNum_11,
  MR_Word * parse_tree__parse_mutable__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word parse_tree__parse_mutable__Term_13;
    MR_Word parse_tree__parse_mutable__V_25_25;

    if (parse_tree__parse_mutable__succeeded)
      {
        parse_tree__parse_mutable__Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__ArgTerms_9, (MR_Integer) 0)));
        parse_tree__parse_mutable__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__ArgTerms_9, (MR_Integer) 1)));
        parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (parse_tree__parse_mutable__succeeded)
      {
        MR_Word parse_tree__parse_mutable__MaybeSymNameSpecifier_14;

        {
          parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__Term_13, &parse_tree__parse_mutable__MaybeSymNameSpecifier_14);
        }
        if (((MR_tag((MR_Word) parse_tree__parse_mutable__MaybeSymNameSpecifier_14)) == (MR_mktag((MR_Integer) 0))))
          *parse_tree__parse_mutable__MaybeIOM_12 = (MR_Word) parse_tree__parse_mutable__MaybeSymNameSpecifier_14;
        else
          {
            MR_Word parse_tree__parse_mutable__SymNameSpecifier_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeSymNameSpecifier_14, (MR_Integer) 0)));

            if (((MR_tag((MR_Word) parse_tree__parse_mutable__SymNameSpecifier_16)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__parse_mutable__TypeCtorInfo_129_129 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                MR_String parse_tree__parse_mutable__TermStr_18;
                MR_Word parse_tree__parse_mutable__Pieces_19;
                MR_Word parse_tree__parse_mutable__Spec_20;
                MR_Word parse_tree__parse_mutable__V_63_63;
                MR_Word parse_tree__parse_mutable__V_66_66;
                MR_Word parse_tree__parse_mutable__V_69_69;
                MR_Word parse_tree__parse_mutable__V_72_72;
                MR_Word parse_tree__parse_mutable__V_73_73;
                MR_Word parse_tree__parse_mutable__V_82_82;
                MR_Word parse_tree__parse_mutable__V_83_83;
                MR_Word parse_tree__parse_mutable__V_84_84;
                MR_Word parse_tree__parse_mutable__V_85_85;
                MR_Word parse_tree__parse_mutable__V_86_86;
                MR_Word parse_tree__parse_mutable__V_89_89;

                {
                  parse_tree__parse_mutable__TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_129_129, parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__Term_13);
                }
                {
                  parse_tree__parse_mutable__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_73_73, 1) = ((MR_Box) (parse_tree__parse_mutable__TermStr_18));
                }
                {
                  parse_tree__parse_mutable__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_72_72, 0) = ((MR_Box) (parse_tree__parse_mutable__V_73_73));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[2])));
                }
                {
                  parse_tree__parse_mutable__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_69_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[80])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_69_69, 1) = ((MR_Box) (parse_tree__parse_mutable__V_72_72));
                }
                {
                  parse_tree__parse_mutable__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[79])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_66_66, 1) = ((MR_Box) (parse_tree__parse_mutable__V_69_69));
                }
                {
                  parse_tree__parse_mutable__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[78])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_63_63, 1) = ((MR_Box) (parse_tree__parse_mutable__V_66_66));
                }
                {
                  parse_tree__parse_mutable__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[77])));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_19, 1) = ((MR_Box) (parse_tree__parse_mutable__V_63_63));
                }
                {
                  parse_tree__parse_mutable__V_84_84 = mercury__term__get_term_context_1_f_0(parse_tree__parse_mutable__TypeCtorInfo_129_129, parse_tree__parse_mutable__Term_13);
                }
                {
                  parse_tree__parse_mutable__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_86_86, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_19));
                }
                {
                  parse_tree__parse_mutable__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_85_85, 0) = ((MR_Box) (parse_tree__parse_mutable__V_86_86));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_mutable__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_83_83, 0) = ((MR_Box) (parse_tree__parse_mutable__V_84_84));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_83_83, 1) = ((MR_Box) (parse_tree__parse_mutable__V_85_85));
                }
                {
                  parse_tree__parse_mutable__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_82_82, 0) = ((MR_Box) (parse_tree__parse_mutable__V_83_83));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__parse_mutable__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_20, 2) = ((MR_Box) (parse_tree__parse_mutable__V_82_82));
                }
                {
                  parse_tree__parse_mutable__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_89_89, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_20));
                  MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *parse_tree__parse_mutable__MaybeIOM_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_89_89));
                }
              }
            else
              {
                MR_Word parse_tree__parse_mutable__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__SymNameSpecifier_16, (MR_Integer) 0)));
                MR_Integer parse_tree__parse_mutable__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__SymNameSpecifier_16, (MR_Integer) 1)));

                switch (parse_tree__parse_mutable__Arity_22) {
                  default:
                    parse_tree__parse_mutable__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    parse_tree__parse_mutable__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    parse_tree__parse_mutable__succeeded = MR_TRUE;
                    break;
                }
                if (parse_tree__parse_mutable__succeeded)
                  {
                    MR_Word parse_tree__parse_mutable__ItemInitialise_23;
                    MR_Word parse_tree__parse_mutable__Item_24;
                    MR_Word parse_tree__parse_mutable__V_27_27;

                    {
                      parse_tree__parse_mutable__ItemInitialise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemInitialise_23, 0) = ((MR_Box) (parse_tree__parse_mutable__SymName_21));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemInitialise_23, 1) = ((MR_Box) (parse_tree__parse_mutable__Arity_22));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemInitialise_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemInitialise_23, 3) = ((MR_Box) (parse_tree__parse_mutable__Context_10));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ItemInitialise_23, 4) = ((MR_Box) (parse_tree__parse_mutable__SeqNum_11));
                    }
                    {
                      parse_tree__parse_mutable__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__Item_24, 1) = ((MR_Box) (parse_tree__parse_mutable__ItemInitialise_23));
                    }
                    {
                      parse_tree__parse_mutable__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_27_27, 0) = ((MR_Box) (parse_tree__parse_mutable__Item_24));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__parse_mutable__MaybeIOM_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_27_27));
                    }
                  }
                else
                  {
                    MR_Word parse_tree__parse_mutable__TypeCtorInfo_130_130 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
                    MR_Word parse_tree__parse_mutable__V_30_30;
                    MR_Word parse_tree__parse_mutable__V_33_33;
                    MR_Word parse_tree__parse_mutable__V_36_36;
                    MR_Word parse_tree__parse_mutable__V_37_37;
                    MR_Word parse_tree__parse_mutable__V_52_52;
                    MR_Word parse_tree__parse_mutable__V_53_53;
                    MR_Word parse_tree__parse_mutable__V_54_54;
                    MR_Word parse_tree__parse_mutable__V_55_55;
                    MR_Word parse_tree__parse_mutable__V_56_56;
                    MR_Word parse_tree__parse_mutable__V_59_59;
                    MR_String parse_tree__parse_mutable__TermStr_118;
                    MR_Word parse_tree__parse_mutable__Pieces_119;
                    MR_Word parse_tree__parse_mutable__Spec_120;

                    {
                      parse_tree__parse_mutable__TermStr_118 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_130_130, parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__Term_13);
                    }
                    {
                      parse_tree__parse_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_37_37, 1) = ((MR_Box) (parse_tree__parse_mutable__TermStr_118));
                    }
                    {
                      parse_tree__parse_mutable__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_36_36, 0) = ((MR_Box) (parse_tree__parse_mutable__V_37_37));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[8])));
                    }
                    {
                      parse_tree__parse_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[82])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_33_33, 1) = ((MR_Box) (parse_tree__parse_mutable__V_36_36));
                    }
                    {
                      parse_tree__parse_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_30_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[78])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__parse_mutable__V_33_33));
                    }
                    {
                      parse_tree__parse_mutable__Pieces_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[81])));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_119, 1) = ((MR_Box) (parse_tree__parse_mutable__V_30_30));
                    }
                    {
                      parse_tree__parse_mutable__V_54_54 = mercury__term__get_term_context_1_f_0(parse_tree__parse_mutable__TypeCtorInfo_130_130, parse_tree__parse_mutable__Term_13);
                    }
                    {
                      parse_tree__parse_mutable__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_56_56, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_119));
                    }
                    {
                      parse_tree__parse_mutable__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_55_55, 0) = ((MR_Box) (parse_tree__parse_mutable__V_56_56));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_mutable__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_53_53, 0) = ((MR_Box) (parse_tree__parse_mutable__V_54_54));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_53_53, 1) = ((MR_Box) (parse_tree__parse_mutable__V_55_55));
                    }
                    {
                      parse_tree__parse_mutable__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_52_52, 0) = ((MR_Box) (parse_tree__parse_mutable__V_53_53));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__parse_mutable__Spec_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_120, 2) = ((MR_Box) (parse_tree__parse_mutable__V_52_52));
                    }
                    {
                      parse_tree__parse_mutable__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_59_59, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_120));
                      MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      *parse_tree__parse_mutable__MaybeIOM_12 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_59_59));
                    }
                  }
              }
          }
      }
    else
      {
        MR_Word parse_tree__parse_mutable__V_110_110;
        MR_Word parse_tree__parse_mutable__V_111_111;
        MR_Word parse_tree__parse_mutable__V_116_116;
        MR_Word parse_tree__parse_mutable__Spec_128;

        {
          parse_tree__parse_mutable__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_111_111, 0) = ((MR_Box) (parse_tree__parse_mutable__Context_10));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[83])));
        }
        {
          parse_tree__parse_mutable__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_110_110, 0) = ((MR_Box) (parse_tree__parse_mutable__V_111_111));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__Spec_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_128, 2) = ((MR_Box) (parse_tree__parse_mutable__V_110_110));
        }
        {
          parse_tree__parse_mutable__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_116_116, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_128));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_mutable__MaybeIOM_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_116_116));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0(
  MR_Word * parse_tree__parse_mutable__HeadVar__1_1,
  MR_Word parse_tree__parse_mutable__HeadVar__2_2,
  MR_Word parse_tree__parse_mutable__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;
    MR_Integer parse_tree__parse_mutable__Cast_HeadVar1_4 = (MR_Integer) parse_tree__parse_mutable__HeadVar__2_2;
    MR_Integer parse_tree__parse_mutable__Cast_HeadVar2_5 = (MR_Integer) parse_tree__parse_mutable__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_mutable__HeadVar__1_1, parse_tree__parse_mutable__Cast_HeadVar1_4, parse_tree__parse_mutable__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____mutable_locn_0_0(
  MR_Word parse_tree__parse_mutable__HeadVar__2_1,
  MR_Word parse_tree__parse_mutable__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__HeadVar__2_1 == parse_tree__parse_mutable__HeadVar__2_2);

    return parse_tree__parse_mutable__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(
  MR_Word * parse_tree__parse_mutable__HeadVar__1_1,
  MR_Word parse_tree__parse_mutable__HeadVar__2_2,
  MR_Word parse_tree__parse_mutable__HeadVar__3_3)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;
    MR_Integer parse_tree__parse_mutable__CastX_54 = (MR_Integer) parse_tree__parse_mutable__HeadVar__2_2;
    MR_Integer parse_tree__parse_mutable__CastY_55 = (MR_Integer) parse_tree__parse_mutable__HeadVar__3_3;

    parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__CastX_54 == parse_tree__parse_mutable__CastY_55);
    if (parse_tree__parse_mutable__succeeded)
      *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_mutable__V_63_63 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_mutable__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__parse_mutable__V_17_17 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_mutable__HeadVar__3_3), (MR_Integer) 0);

                  {
                    parse_tree__prog_item____Compare____foreign_name_0_0(parse_tree__parse_mutable__HeadVar__1_1, parse_tree__parse_mutable__V_63_63, parse_tree__parse_mutable__V_17_17);
                  }
                }
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_mutable__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word parse_tree__parse_mutable__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__parse_mutable__V_72_72 = (MR_Integer) parse_tree__parse_mutable__V_65_65;
                  MR_Integer parse_tree__parse_mutable__V_73_73 = (MR_Integer) parse_tree__parse_mutable__V_5_5;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_mutable__HeadVar__1_1, parse_tree__parse_mutable__V_72_72, parse_tree__parse_mutable__V_73_73);
                  }
                }
                break;
              case (MR_Integer) 2:
                *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_mutable__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word parse_tree__parse_mutable__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer parse_tree__parse_mutable__V_66_66 = (MR_Integer) parse_tree__parse_mutable__V_61_61;
                  MR_Integer parse_tree__parse_mutable__V_67_67 = (MR_Integer) parse_tree__parse_mutable__V_29_29;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_mutable__HeadVar__1_1, parse_tree__parse_mutable__V_66_66, parse_tree__parse_mutable__V_67_67);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__parse_mutable__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word parse_tree__parse_mutable__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer parse_tree__parse_mutable__V_68_68 = (MR_Integer) parse_tree__parse_mutable__V_62_62;
                          MR_Integer parse_tree__parse_mutable__V_69_69 = (MR_Integer) parse_tree__parse_mutable__V_41_41;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_mutable__HeadVar__1_1, parse_tree__parse_mutable__V_68_68, parse_tree__parse_mutable__V_69_69);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__parse_mutable__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *parse_tree__parse_mutable__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word parse_tree__parse_mutable__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer parse_tree__parse_mutable__V_70_70 = (MR_Integer) parse_tree__parse_mutable__V_64_64;
                          MR_Integer parse_tree__parse_mutable__V_71_71 = (MR_Integer) parse_tree__parse_mutable__V_53_53;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__parse_mutable__HeadVar__1_1, parse_tree__parse_mutable__V_70_70, parse_tree__parse_mutable__V_71_71);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0(
  MR_Word parse_tree__parse_mutable__HeadVar__1_1,
  MR_Word parse_tree__parse_mutable__HeadVar__2_2)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;
    MR_Integer parse_tree__parse_mutable__CastX_13 = (MR_Integer) parse_tree__parse_mutable__HeadVar__1_1;
    MR_Integer parse_tree__parse_mutable__CastY_14 = (MR_Integer) parse_tree__parse_mutable__HeadVar__2_2;

    parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__CastX_13 == parse_tree__parse_mutable__CastY_14);
    if (parse_tree__parse_mutable__succeeded)
      parse_tree__parse_mutable__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__parse_mutable__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_mutable__HeadVar__1_1), (MR_Integer) 0);
            MR_Word parse_tree__parse_mutable__V_6_6;

            parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_mutable__succeeded)
              {
                parse_tree__parse_mutable__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_mutable__HeadVar__2_2), (MR_Integer) 0);
                {
                  parse_tree__parse_mutable__succeeded = parse_tree__prog_item____Unify____foreign_name_0_0(parse_tree__parse_mutable__V_5_5, parse_tree__parse_mutable__V_6_6);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word parse_tree__parse_mutable__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_mutable__V_4_4;

            parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (parse_tree__parse_mutable__succeeded)
              {
                parse_tree__parse_mutable__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_3_3 == parse_tree__parse_mutable__V_4_4);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word parse_tree__parse_mutable__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__parse_mutable__V_8_8;

            parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (parse_tree__parse_mutable__succeeded)
              {
                parse_tree__parse_mutable__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 0)));
                parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_7_7 == parse_tree__parse_mutable__V_8_8);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word parse_tree__parse_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_mutable__V_10_10;

                parse_tree__parse_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (parse_tree__parse_mutable__succeeded)
                  {
                    parse_tree__parse_mutable__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_9_9 == parse_tree__parse_mutable__V_10_10);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word parse_tree__parse_mutable__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word parse_tree__parse_mutable__V_12_12;

                parse_tree__parse_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (parse_tree__parse_mutable__succeeded)
                  {
                    parse_tree__parse_mutable__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__2_2, (MR_Integer) 1)));
                    parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_11_11 == parse_tree__parse_mutable__V_12_12);
                  }
              }
              break;
          }
          break;
      }
    return parse_tree__parse_mutable__succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attr_2_p_0(
  MR_Word parse_tree__parse_mutable__MutAttrTerm_3,
  MR_Word * parse_tree__parse_mutable__MutAttrResult_4)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word parse_tree__parse_mutable__MutAttr_7;
    MR_String parse_tree__parse_mutable__String_5;
    MR_Word parse_tree__parse_mutable__V_17_17;
    MR_Word parse_tree__parse_mutable__V_18_18;
    MR_Word parse_tree__parse_mutable__V_6_6;
    MR_Integer parse_tree__parse_mutable__lo_0;
    MR_Integer parse_tree__parse_mutable__hi_1;
    MR_Integer parse_tree__parse_mutable__mid_2;
    MR_Integer parse_tree__parse_mutable__result_3;

    if (parse_tree__parse_mutable__succeeded)
      {
        parse_tree__parse_mutable__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__MutAttrTerm_3, (MR_Integer) 0)));
        parse_tree__parse_mutable__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__MutAttrTerm_3, (MR_Integer) 1)));
        parse_tree__parse_mutable__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__MutAttrTerm_3, (MR_Integer) 2)));
        parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_mutable__succeeded)
          {
            parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__V_17_17)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_mutable__succeeded)
              {
                parse_tree__parse_mutable__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_17_17, (MR_Integer) 0)));
                /* binary string simple lookup switch */
                parse_tree__parse_mutable__lo_0 = (MR_Integer) 0;
                parse_tree__parse_mutable__hi_1 = (MR_Integer) 4;
                do
                  {
                    parse_tree__parse_mutable__mid_2 = (((parse_tree__parse_mutable__lo_0 + parse_tree__parse_mutable__hi_1)) / (MR_Integer) 2);
                    parse_tree__parse_mutable__result_3 = MR_strcmp(parse_tree__parse_mutable__String_5, ((&parse_tree__parse_mutable_vector_common_6[0 + parse_tree__parse_mutable__mid_2]))->parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_0);
                    if ((parse_tree__parse_mutable__result_3 == (MR_Integer) 0))
                      {
                        parse_tree__parse_mutable__MutAttr_7 = ((&parse_tree__parse_mutable_vector_common_6[0 + parse_tree__parse_mutable__mid_2]))->parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_1;
                        parse_tree__parse_mutable__succeeded = MR_TRUE;
                        /* jump out of search loop */
                        goto label_0;
                      }
                    else
                    if ((parse_tree__parse_mutable__result_3 < (MR_Integer) 0))
                      parse_tree__parse_mutable__hi_1 = (parse_tree__parse_mutable__mid_2 - (MR_Integer) 1);
                    else
                      parse_tree__parse_mutable__lo_0 = (parse_tree__parse_mutable__mid_2 + (MR_Integer) 1);
                  }
                while ((parse_tree__parse_mutable__lo_0 <= parse_tree__parse_mutable__hi_1));
                parse_tree__parse_mutable__succeeded = MR_FALSE;
              label_0:;
              }
          }
      }
    if (parse_tree__parse_mutable__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_mutable__MutAttrResult_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_mutable__MutAttr_7));
      }
    else
      {
        MR_Word parse_tree__parse_mutable__Lang_12;
        MR_String parse_tree__parse_mutable__ForeignName_13;
        MR_Word parse_tree__parse_mutable__Args_8;
        MR_Word parse_tree__parse_mutable__LangTerm_10;
        MR_Word parse_tree__parse_mutable__ForeignNameTerm_11;
        MR_Word parse_tree__parse_mutable__V_24_24;
        MR_String parse_tree__parse_mutable__V_25_25;
        MR_Word parse_tree__parse_mutable__V_26_26;
        MR_Word parse_tree__parse_mutable__V_27_27;
        MR_Word parse_tree__parse_mutable__V_28_28;
        MR_Word parse_tree__parse_mutable__V_29_29;
        MR_Word parse_tree__parse_mutable__V_9_9;
        MR_Word parse_tree__parse_mutable__V_14_14;

        parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__parse_mutable__succeeded)
          {
            parse_tree__parse_mutable__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__MutAttrTerm_3, (MR_Integer) 0)));
            parse_tree__parse_mutable__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__MutAttrTerm_3, (MR_Integer) 1)));
            parse_tree__parse_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__MutAttrTerm_3, (MR_Integer) 2)));
            parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__V_24_24)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_mutable__succeeded)
              {
                parse_tree__parse_mutable__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_24_24, (MR_Integer) 0)));
                parse_tree__parse_mutable__succeeded = (strcmp(parse_tree__parse_mutable__V_25_25, (MR_String) "foreign_name") == 0);
                if (parse_tree__parse_mutable__succeeded)
                  {
                    parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__Args_8)) == (MR_mktag((MR_Integer) 1)));
                    if (parse_tree__parse_mutable__succeeded)
                      {
                        parse_tree__parse_mutable__LangTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Args_8, (MR_Integer) 0)));
                        parse_tree__parse_mutable__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Args_8, (MR_Integer) 1)));
                        parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__V_26_26)) == (MR_mktag((MR_Integer) 1)));
                        if (parse_tree__parse_mutable__succeeded)
                          {
                            parse_tree__parse_mutable__ForeignNameTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_26_26, (MR_Integer) 0)));
                            parse_tree__parse_mutable__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_26_26, (MR_Integer) 1)));
                            parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (parse_tree__parse_mutable__succeeded)
                              {
                                {
                                  parse_tree__parse_mutable__succeeded = parse_tree__parse_pragma__term_to_foreign_language_2_p_0(parse_tree__parse_mutable__LangTerm_10, &parse_tree__parse_mutable__Lang_12);
                                }
                                if (parse_tree__parse_mutable__succeeded)
                                  {
                                    parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__ForeignNameTerm_11)) == (MR_mktag((MR_Integer) 0)));
                                    if (parse_tree__parse_mutable__succeeded)
                                      {
                                        parse_tree__parse_mutable__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ForeignNameTerm_11, (MR_Integer) 0)));
                                        parse_tree__parse_mutable__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ForeignNameTerm_11, (MR_Integer) 1)));
                                        parse_tree__parse_mutable__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__ForeignNameTerm_11, (MR_Integer) 2)));
                                        parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (parse_tree__parse_mutable__succeeded)
                                          {
                                            parse_tree__parse_mutable__succeeded = ((((MR_tag((MR_Word) parse_tree__parse_mutable__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                            if (parse_tree__parse_mutable__succeeded)
                                              parse_tree__parse_mutable__ForeignName_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_28_28, (MR_Integer) 1)));
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (parse_tree__parse_mutable__succeeded)
          {
            MR_Word parse_tree__parse_mutable__V_30_30;
            MR_Word parse_tree__parse_mutable__MutAttr_56;

            {
              parse_tree__parse_mutable__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__parse_mutable__Lang_12));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_30_30, 1) = ((MR_Box) (parse_tree__parse_mutable__ForeignName_13));
            }
            parse_tree__parse_mutable__MutAttr_56 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__parse_mutable__V_30_30);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__parse_mutable__MutAttrResult_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_mutable__MutAttr_56));
            }
          }
        else
          {
            MR_Word parse_tree__parse_mutable__Spec_16;
            MR_Word parse_tree__parse_mutable__V_47_47;
            MR_Word parse_tree__parse_mutable__V_48_48;
            MR_Word parse_tree__parse_mutable__V_49_49;
            MR_Word parse_tree__parse_mutable__V_54_54;

            {
              parse_tree__parse_mutable__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_mutable__MutAttrTerm_3);
            }
            {
              parse_tree__parse_mutable__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_48_48, 0) = ((MR_Box) (parse_tree__parse_mutable__V_49_49));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[76])));
            }
            {
              parse_tree__parse_mutable__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_47_47, 0) = ((MR_Box) (parse_tree__parse_mutable__V_48_48));
              MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__parse_mutable__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_16, 2) = ((MR_Box) (parse_tree__parse_mutable__V_47_47));
            }
            {
              parse_tree__parse_mutable__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_54_54, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_16));
              MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *parse_tree__parse_mutable__MutAttrResult_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_54_54));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__process_mutable_attribute_3_p_0(
  MR_Word parse_tree__parse_mutable__HeadVar__1_1,
  MR_Word parse_tree__parse_mutable__STATE_VARIABLE_Attributes_0_2,
  MR_Word * parse_tree__parse_mutable__STATE_VARIABLE_Attributes_3)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;

    switch (MR_tag((MR_Word) parse_tree__parse_mutable__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__parse_mutable__ForeignName_9 = (MR_Word) MR_body(((MR_Word) parse_tree__parse_mutable__HeadVar__1_1), (MR_Integer) 0);

          {
            parse_tree__prog_item__set_mutable_add_foreign_name_3_p_0(parse_tree__parse_mutable__ForeignName_9, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_3);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__parse_mutable__Trailed_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 0)));

          {
            parse_tree__prog_item__set_mutable_var_trailed_3_p_0(parse_tree__parse_mutable__Trailed_4, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_3);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__parse_mutable__AttachToIOState_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 0)));

          {
            parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0(parse_tree__parse_mutable__AttachToIOState_14, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_3);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__parse_mutable__Constant_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word parse_tree__parse_mutable__STATE_VARIABLE_Attributes_23_23;

              {
                parse_tree__prog_item__set_mutable_var_constant_3_p_0(parse_tree__parse_mutable__Constant_19, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_0_2, &parse_tree__parse_mutable__STATE_VARIABLE_Attributes_23_23);
              }
              switch (parse_tree__parse_mutable__Constant_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word parse_tree__parse_mutable__STATE_VARIABLE_Attributes_25_25;

                    {
                      parse_tree__prog_item__set_mutable_var_trailed_3_p_0((MR_Integer) 0, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_23_23, &parse_tree__parse_mutable__STATE_VARIABLE_Attributes_25_25);
                    }
                    {
                      parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0((MR_Integer) 0, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_25_25, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_3);
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  *parse_tree__parse_mutable__STATE_VARIABLE_Attributes_3 = parse_tree__parse_mutable__STATE_VARIABLE_Attributes_23_23;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__parse_mutable__ThrLocal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__HeadVar__1_1, (MR_Integer) 1)));

              {
                parse_tree__prog_item__set_mutable_var_thread_local_3_p_0(parse_tree__parse_mutable__ThrLocal_28, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_0_2, parse_tree__parse_mutable__STATE_VARIABLE_Attributes_3);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_6(
  MR_Box parse_tree__parse_mutable__closure_arg,
  MR_Box parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box parse_tree__parse_mutable__wrapper_arg_2,
  MR_Box * parse_tree__parse_mutable__wrapper_arg_3)
{
  {
    MR_Box parse_tree__parse_mutable__closure = parse_tree__parse_mutable__closure_arg;
    MR_Word parse_tree__parse_mutable__conv2_STATE_VARIABLE_Attributes_3;

    {
      parse_tree__parse_mutable__process_mutable_attribute_3_p_0(((MR_Word) parse_tree__parse_mutable__wrapper_arg_1), ((MR_Word) parse_tree__parse_mutable__wrapper_arg_2), &parse_tree__parse_mutable__conv2_STATE_VARIABLE_Attributes_3);
    }
    *parse_tree__parse_mutable__wrapper_arg_3 = ((MR_Box) (parse_tree__parse_mutable__conv2_STATE_VARIABLE_Attributes_3));
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_1(
  MR_Box parse_tree__parse_mutable__closure_arg,
  MR_Box parse_tree__parse_mutable__wrapper_arg_1,
  MR_Box * parse_tree__parse_mutable__wrapper_arg_2)
{
  {
    MR_Box parse_tree__parse_mutable__closure = parse_tree__parse_mutable__closure_arg;
    MR_Word parse_tree__parse_mutable__conv0_MutAttrResult_4;

    {
      parse_tree__parse_mutable__parse_mutable_attr_2_p_0(((MR_Word) parse_tree__parse_mutable__wrapper_arg_1), &parse_tree__parse_mutable__conv0_MutAttrResult_4);
    }
    *parse_tree__parse_mutable__wrapper_arg_2 = ((MR_Box) (parse_tree__parse_mutable__conv0_MutAttrResult_4));
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2(
  void * parse_tree__parse_mutable__env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__parse_mutable__env_ptr = (struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__parse_mutable__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_4(
  void * parse_tree__parse_mutable__env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__parse_mutable__env_ptr = (struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__parse_mutable__env_ptr_arg;

    (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49 = ((MR_Word) (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49);
    {
      parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_3(parse_tree__parse_mutable__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_3(
  void * parse_tree__parse_mutable__env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__parse_mutable__env_ptr = (struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__parse_mutable__env_ptr_arg;

    (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49, (MR_Integer) 0)));
    (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__V_49_49, (MR_Integer) 1)));
    (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0;
    {
      (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116, ((MR_Box) ((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12)), (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
    }
    if ((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
      {
        {
          (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116, ((MR_Box) ((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13)), (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
        }
        if ((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
          {
            parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2(parse_tree__parse_mutable__env_ptr);
          }
      }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_5(
  void * parse_tree__parse_mutable__env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s * parse_tree__parse_mutable__env_ptr = (struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s *) parse_tree__parse_mutable__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &parse_tree__parse_mutable_scalar_common_1[0], &(parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_V_49_49, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[56]), parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_4, parse_tree__parse_mutable__env_ptr);
          }
        }
        (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_4,
  MR_Word parse_tree__parse_mutable__MutAttrsTerm_5,
  MR_Word * parse_tree__parse_mutable__MaybeMutAttrs_6)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s parse_tree__parse_mutable__env;

    {
      MR_Word parse_tree__parse_mutable__Attributes0_7;
      MR_Word parse_tree__parse_mutable__TypeCtorInfo_114_114;
      MR_Word parse_tree__parse_mutable__MutAttrTerms_9;
      MR_Word parse_tree__parse_mutable__MaybeAttrList_10;
      MR_Word parse_tree__parse_mutable__V_48_48;

      {
        parse_tree__parse_mutable__Attributes0_7 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
      }
      {
        (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(parse_tree__parse_mutable__MutAttrsTerm_5, &parse_tree__parse_mutable__MutAttrTerms_9);
      }
      if ((parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
        {
          parse_tree__parse_mutable__V_48_48 = (MR_Word) &parse_tree__parse_mutable_scalar_common_1[1];
          parse_tree__parse_mutable__TypeCtorInfo_114_114 = (MR_Word) &parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0;
          {
            parse_tree__parse_util__map_parser_3_p_0(parse_tree__parse_mutable__TypeCtorInfo_114_114, parse_tree__parse_mutable__V_48_48, parse_tree__parse_mutable__MutAttrTerms_9, &parse_tree__parse_mutable__MaybeAttrList_10);
          }
          (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__MaybeAttrList_10)) == (MR_mktag((MR_Integer) 1)));
          if ((parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
            (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__MaybeAttrList_10, (MR_Integer) 0)));
        }
      if ((parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
        {
          {
            parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_5(&parse_tree__parse_mutable__env);
          }
          if ((parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
            {
              MR_Word parse_tree__parse_mutable__TypeCtorInfo_117_117 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
              MR_String parse_tree__parse_mutable__MutAttrsStr_14;
              MR_Word parse_tree__parse_mutable__Pieces_15;
              MR_Word parse_tree__parse_mutable__Spec_16;
              MR_Word parse_tree__parse_mutable__V_53_53;
              MR_Word parse_tree__parse_mutable__V_56_56;
              MR_Word parse_tree__parse_mutable__V_58_58;
              MR_Word parse_tree__parse_mutable__V_59_59;
              MR_Word parse_tree__parse_mutable__V_68_68;
              MR_Word parse_tree__parse_mutable__V_69_69;
              MR_Word parse_tree__parse_mutable__V_70_70;
              MR_Word parse_tree__parse_mutable__V_71_71;
              MR_Word parse_tree__parse_mutable__V_72_72;
              MR_Word parse_tree__parse_mutable__V_75_75;

              {
                parse_tree__parse_mutable__MutAttrsStr_14 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(parse_tree__parse_mutable__TypeCtorInfo_117_117, parse_tree__parse_mutable__VarSet_4, (MR_Integer) 0, parse_tree__parse_mutable__MutAttrsTerm_5);
              }
              {
                parse_tree__parse_mutable__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_59_59, 1) = ((MR_Box) (parse_tree__parse_mutable__MutAttrsStr_14));
              }
              {
                parse_tree__parse_mutable__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_58_58, 0) = ((MR_Box) (parse_tree__parse_mutable__V_59_59));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
              }
              {
                parse_tree__parse_mutable__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_56_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_56_56, 1) = ((MR_Box) (parse_tree__parse_mutable__V_58_58));
              }
              {
                parse_tree__parse_mutable__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[70])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_53_53, 1) = ((MR_Box) (parse_tree__parse_mutable__V_56_56));
              }
              {
                parse_tree__parse_mutable__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[69])));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_15, 1) = ((MR_Box) (parse_tree__parse_mutable__V_53_53));
              }
              {
                parse_tree__parse_mutable__V_70_70 = mercury__term__get_term_context_1_f_0(parse_tree__parse_mutable__TypeCtorInfo_117_117, parse_tree__parse_mutable__MutAttrsTerm_5);
              }
              {
                parse_tree__parse_mutable__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_72_72, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_15));
              }
              {
                parse_tree__parse_mutable__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_71_71, 0) = ((MR_Box) (parse_tree__parse_mutable__V_72_72));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_mutable__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_69_69, 0) = ((MR_Box) (parse_tree__parse_mutable__V_70_70));
                MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_69_69, 1) = ((MR_Box) (parse_tree__parse_mutable__V_71_71));
              }
              {
                parse_tree__parse_mutable__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_68_68, 0) = ((MR_Box) (parse_tree__parse_mutable__V_69_69));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__parse_mutable__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_16, 2) = ((MR_Box) (parse_tree__parse_mutable__V_68_68));
              }
              {
                parse_tree__parse_mutable__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_75_75, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_16));
                MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *parse_tree__parse_mutable__MaybeMutAttrs_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_75_75));
              }
            }
          else
            {
              MR_Word parse_tree__parse_mutable__Attributes_17;
              MR_Box parse_tree__parse_mutable__conv3_Attributes_17;

              {
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, (MR_Word) &parse_tree__parse_mutable_scalar_common_1[2], (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11, ((MR_Box) (parse_tree__parse_mutable__Attributes0_7)), &parse_tree__parse_mutable__conv3_Attributes_17);
              }
              parse_tree__parse_mutable__Attributes_17 = ((MR_Word) parse_tree__parse_mutable__conv3_Attributes_17);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__parse_mutable__MaybeMutAttrs_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_mutable__Attributes_17));
              }
            }
        }
      else
        {
          MR_Word parse_tree__parse_mutable__TypeCtorInfo_123_123 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_Word parse_tree__parse_mutable__V_81_81;
          MR_Word parse_tree__parse_mutable__V_84_84;
          MR_Word parse_tree__parse_mutable__V_87_87;
          MR_Word parse_tree__parse_mutable__V_90_90;
          MR_Word parse_tree__parse_mutable__V_91_91;
          MR_Word parse_tree__parse_mutable__V_100_100;
          MR_Word parse_tree__parse_mutable__V_101_101;
          MR_Word parse_tree__parse_mutable__V_102_102;
          MR_Word parse_tree__parse_mutable__V_103_103;
          MR_Word parse_tree__parse_mutable__V_104_104;
          MR_Word parse_tree__parse_mutable__V_107_107;
          MR_String parse_tree__parse_mutable__MutAttrsStr_109;
          MR_Word parse_tree__parse_mutable__Pieces_110;
          MR_Word parse_tree__parse_mutable__Spec_111;

          {
            parse_tree__parse_mutable__MutAttrsStr_109 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(parse_tree__parse_mutable__TypeCtorInfo_123_123, parse_tree__parse_mutable__VarSet_4, (MR_Integer) 0, parse_tree__parse_mutable__MutAttrsTerm_5);
          }
          {
            parse_tree__parse_mutable__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_91_91, 1) = ((MR_Box) (parse_tree__parse_mutable__MutAttrsStr_109));
          }
          {
            parse_tree__parse_mutable__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_90_90, 0) = ((MR_Box) (parse_tree__parse_mutable__V_91_91));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
          }
          {
            parse_tree__parse_mutable__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_87_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[73])));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_87_87, 1) = ((MR_Box) (parse_tree__parse_mutable__V_90_90));
          }
          {
            parse_tree__parse_mutable__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[66])));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_84_84, 1) = ((MR_Box) (parse_tree__parse_mutable__V_87_87));
          }
          {
            parse_tree__parse_mutable__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[72])));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_81_81, 1) = ((MR_Box) (parse_tree__parse_mutable__V_84_84));
          }
          {
            parse_tree__parse_mutable__Pieces_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[71])));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_110, 1) = ((MR_Box) (parse_tree__parse_mutable__V_81_81));
          }
          {
            parse_tree__parse_mutable__V_102_102 = mercury__term__get_term_context_1_f_0(parse_tree__parse_mutable__TypeCtorInfo_123_123, parse_tree__parse_mutable__MutAttrsTerm_5);
          }
          {
            parse_tree__parse_mutable__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_104_104, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_110));
          }
          {
            parse_tree__parse_mutable__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_103_103, 0) = ((MR_Box) (parse_tree__parse_mutable__V_104_104));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_mutable__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_101_101, 0) = ((MR_Box) (parse_tree__parse_mutable__V_102_102));
            MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_101_101, 1) = ((MR_Box) (parse_tree__parse_mutable__V_103_103));
          }
          {
            parse_tree__parse_mutable__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_100_100, 0) = ((MR_Box) (parse_tree__parse_mutable__V_101_101));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__parse_mutable__Spec_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_111, 2) = ((MR_Box) (parse_tree__parse_mutable__V_100_100));
          }
          {
            parse_tree__parse_mutable__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_107_107, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_111));
            MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__parse_mutable__MaybeMutAttrs_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_107_107));
          }
        }
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_1(
  void * parse_tree__parse_mutable__env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s * parse_tree__parse_mutable__env_ptr = (struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s *) parse_tree__parse_mutable__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_2(
  void * parse_tree__parse_mutable__env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s * parse_tree__parse_mutable__env_ptr = (struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s *) parse_tree__parse_mutable__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word parse_tree__parse_mutable__V_7_7;

          {
            mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &parse_tree__parse_mutable__V_7_7, parse_tree__parse_mutable__parse_mutable_inst_3_p_0_1, parse_tree__parse_mutable__env_ptr);
          }
        }
        (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_4,
  MR_Word parse_tree__parse_mutable__InstTerm_5,
  MR_Word * parse_tree__parse_mutable__MaybeInst_6)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s parse_tree__parse_mutable__env;

    (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5 = parse_tree__parse_mutable__InstTerm_5;
    {
      parse_tree__parse_mutable__parse_mutable_inst_3_p_0_2(&parse_tree__parse_mutable__env);
    }
    if ((parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
      {
        MR_Word parse_tree__parse_mutable__TypeCtorInfo_52_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_String parse_tree__parse_mutable__InstTermStr_8;
        MR_Word parse_tree__parse_mutable__Pieces_9;
        MR_Word parse_tree__parse_mutable__Spec_10;
        MR_Word parse_tree__parse_mutable__V_14_14;
        MR_Word parse_tree__parse_mutable__V_17_17;
        MR_Word parse_tree__parse_mutable__V_20_20;
        MR_Word parse_tree__parse_mutable__V_21_21;
        MR_Word parse_tree__parse_mutable__V_30_30;
        MR_Word parse_tree__parse_mutable__V_31_31;
        MR_Word parse_tree__parse_mutable__V_32_32;
        MR_Word parse_tree__parse_mutable__V_33_33;
        MR_Word parse_tree__parse_mutable__V_34_34;
        MR_Word parse_tree__parse_mutable__V_37_37;

        {
          parse_tree__parse_mutable__InstTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_52_52, parse_tree__parse_mutable__VarSet_4, (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
        }
        {
          parse_tree__parse_mutable__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_21_21, 1) = ((MR_Box) (parse_tree__parse_mutable__InstTermStr_8));
        }
        {
          parse_tree__parse_mutable__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_20_20, 0) = ((MR_Box) (parse_tree__parse_mutable__V_21_21));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
        }
        {
          parse_tree__parse_mutable__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[67])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_17_17, 1) = ((MR_Box) (parse_tree__parse_mutable__V_20_20));
        }
        {
          parse_tree__parse_mutable__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[66])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_14_14, 1) = ((MR_Box) (parse_tree__parse_mutable__V_17_17));
        }
        {
          parse_tree__parse_mutable__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[68])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_9, 1) = ((MR_Box) (parse_tree__parse_mutable__V_14_14));
        }
        {
          parse_tree__parse_mutable__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__parse_mutable__TypeCtorInfo_52_52, (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
        }
        {
          parse_tree__parse_mutable__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_9));
        }
        {
          parse_tree__parse_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_33_33, 0) = ((MR_Box) (parse_tree__parse_mutable__V_34_34));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_31_31, 0) = ((MR_Box) (parse_tree__parse_mutable__V_32_32));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_31_31, 1) = ((MR_Box) (parse_tree__parse_mutable__V_33_33));
        }
        {
          parse_tree__parse_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__parse_mutable__V_31_31));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_10, 2) = ((MR_Box) (parse_tree__parse_mutable__V_30_30));
        }
        {
          parse_tree__parse_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_37_37, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_10));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_mutable__MaybeInst_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_37_37));
        }
      }
    else
      {
        MR_Word parse_tree__parse_mutable__ContextPieces_11;

        {
          parse_tree__parse_mutable__ContextPieces_11 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[44]));
        }
        {
          parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[5]), parse_tree__parse_mutable__VarSet_4, parse_tree__parse_mutable__ContextPieces_11, (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, parse_tree__parse_mutable__MaybeInst_6);
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_1(
  void * parse_tree__parse_mutable__env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s * parse_tree__parse_mutable__env_ptr = (struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s *) parse_tree__parse_mutable__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_2(
  void * parse_tree__parse_mutable__env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s * parse_tree__parse_mutable__env_ptr = (struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s *) parse_tree__parse_mutable__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word parse_tree__parse_mutable__V_7_7;

          {
            mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, &parse_tree__parse_mutable__V_7_7, parse_tree__parse_mutable__parse_mutable_type_3_p_0_1, parse_tree__parse_mutable__env_ptr);
          }
        }
        (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__parse_mutable__env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0(
  MR_Word parse_tree__parse_mutable__VarSet_4,
  MR_Word parse_tree__parse_mutable__TypeTerm_5,
  MR_Word * parse_tree__parse_mutable__MaybeType_6)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s parse_tree__parse_mutable__env;

    (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5 = parse_tree__parse_mutable__TypeTerm_5;
    {
      parse_tree__parse_mutable__parse_mutable_type_3_p_0_2(&parse_tree__parse_mutable__env);
    }
    if ((parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded)
      {
        MR_Word parse_tree__parse_mutable__TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_String parse_tree__parse_mutable__TypeTermStr_8;
        MR_Word parse_tree__parse_mutable__Pieces_9;
        MR_Word parse_tree__parse_mutable__Spec_10;
        MR_Word parse_tree__parse_mutable__V_14_14;
        MR_Word parse_tree__parse_mutable__V_17_17;
        MR_Word parse_tree__parse_mutable__V_20_20;
        MR_Word parse_tree__parse_mutable__V_21_21;
        MR_Word parse_tree__parse_mutable__V_30_30;
        MR_Word parse_tree__parse_mutable__V_31_31;
        MR_Word parse_tree__parse_mutable__V_32_32;
        MR_Word parse_tree__parse_mutable__V_33_33;
        MR_Word parse_tree__parse_mutable__V_34_34;
        MR_Word parse_tree__parse_mutable__V_37_37;

        {
          parse_tree__parse_mutable__TypeTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__parse_mutable__TypeCtorInfo_42_42, parse_tree__parse_mutable__VarSet_4, (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
        }
        {
          parse_tree__parse_mutable__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), parse_tree__parse_mutable__V_21_21, 1) = ((MR_Box) (parse_tree__parse_mutable__TypeTermStr_8));
        }
        {
          parse_tree__parse_mutable__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_20_20, 0) = ((MR_Box) (parse_tree__parse_mutable__V_21_21));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
        }
        {
          parse_tree__parse_mutable__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[67])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_17_17, 1) = ((MR_Box) (parse_tree__parse_mutable__V_20_20));
        }
        {
          parse_tree__parse_mutable__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[66])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_14_14, 1) = ((MR_Box) (parse_tree__parse_mutable__V_17_17));
        }
        {
          parse_tree__parse_mutable__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[65])));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__Pieces_9, 1) = ((MR_Box) (parse_tree__parse_mutable__V_14_14));
        }
        {
          parse_tree__parse_mutable__V_32_32 = mercury__term__get_term_context_1_f_0(parse_tree__parse_mutable__TypeCtorInfo_42_42, (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
        }
        {
          parse_tree__parse_mutable__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_34_34, 0) = ((MR_Box) (parse_tree__parse_mutable__Pieces_9));
        }
        {
          parse_tree__parse_mutable__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_33_33, 0) = ((MR_Box) (parse_tree__parse_mutable__V_34_34));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_31_31, 0) = ((MR_Box) (parse_tree__parse_mutable__V_32_32));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_31_31, 1) = ((MR_Box) (parse_tree__parse_mutable__V_33_33));
        }
        {
          parse_tree__parse_mutable__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_30_30, 0) = ((MR_Box) (parse_tree__parse_mutable__V_31_31));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_10, 2) = ((MR_Box) (parse_tree__parse_mutable__V_30_30));
        }
        {
          parse_tree__parse_mutable__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_37_37, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_10));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_mutable__MaybeType_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_37_37));
        }
      }
    else
      {
        MR_Word parse_tree__parse_mutable__ContextPieces_11;

        {
          parse_tree__parse_mutable__ContextPieces_11 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        }
        {
          parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[4]), parse_tree__parse_mutable__VarSet_4, parse_tree__parse_mutable__ContextPieces_11, (parse_tree__parse_mutable__env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, parse_tree__parse_mutable__MaybeType_6);
        }
      }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_name_2_p_0(
  MR_Word parse_tree__parse_mutable__NameTerm_3,
  MR_Word * parse_tree__parse_mutable__MaybeName_4)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__NameTerm_3)) == (MR_mktag((MR_Integer) 0)));
    MR_String parse_tree__parse_mutable__Name_5;
    MR_Word parse_tree__parse_mutable__V_9_9;
    MR_Word parse_tree__parse_mutable__V_10_10;
    MR_Word parse_tree__parse_mutable__V_6_6;

    if (parse_tree__parse_mutable__succeeded)
      {
        parse_tree__parse_mutable__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__NameTerm_3, (MR_Integer) 0)));
        parse_tree__parse_mutable__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__NameTerm_3, (MR_Integer) 1)));
        parse_tree__parse_mutable__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__NameTerm_3, (MR_Integer) 2)));
        parse_tree__parse_mutable__succeeded = (parse_tree__parse_mutable__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (parse_tree__parse_mutable__succeeded)
          {
            parse_tree__parse_mutable__succeeded = ((MR_tag((MR_Word) parse_tree__parse_mutable__V_9_9)) == (MR_mktag((MR_Integer) 0)));
            if (parse_tree__parse_mutable__succeeded)
              parse_tree__parse_mutable__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_9_9, (MR_Integer) 0)));
          }
      }
    if (parse_tree__parse_mutable__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *parse_tree__parse_mutable__MaybeName_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__parse_mutable__Name_5));
      }
    else
      {
        MR_Word parse_tree__parse_mutable__Spec_8;
        MR_Word parse_tree__parse_mutable__V_18_18;
        MR_Word parse_tree__parse_mutable__V_19_19;
        MR_Word parse_tree__parse_mutable__V_20_20;
        MR_Word parse_tree__parse_mutable__V_25_25;

        {
          parse_tree__parse_mutable__V_20_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__parse_mutable__NameTerm_3);
        }
        {
          parse_tree__parse_mutable__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_19_19, 0) = ((MR_Box) (parse_tree__parse_mutable__V_20_20));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[64])));
        }
        {
          parse_tree__parse_mutable__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_18_18, 0) = ((MR_Box) (parse_tree__parse_mutable__V_19_19));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__parse_mutable__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), parse_tree__parse_mutable__Spec_8, 2) = ((MR_Box) (parse_tree__parse_mutable__V_18_18));
        }
        {
          parse_tree__parse_mutable__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_25_25, 0) = ((MR_Box) (parse_tree__parse_mutable__Spec_8));
          MR_hl_field(MR_mktag(1), parse_tree__parse_mutable__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__parse_mutable__MaybeName_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__parse_mutable__V_25_25));
        }
      }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_mutable_decl_info_7_p_0(
  MR_Word parse_tree__parse_mutable___ModuleName_8,
  MR_Word parse_tree__parse_mutable__VarSet_9,
  MR_Word parse_tree__parse_mutable__ArgTerms_10,
  MR_Word parse_tree__parse_mutable__Context_11,
  MR_Integer parse_tree__parse_mutable__SeqNum_12,
  MR_Word parse_tree__parse_mutable__MutableLocn_13,
  MR_Word * parse_tree__parse_mutable__MaybeItemMutableInfo_14)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;

    {
      parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(parse_tree__parse_mutable__VarSet_9, parse_tree__parse_mutable__ArgTerms_10, parse_tree__parse_mutable__Context_11, parse_tree__parse_mutable__SeqNum_12, parse_tree__parse_mutable__MutableLocn_13, parse_tree__parse_mutable__MaybeItemMutableInfo_14);
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_mutable_item_6_p_0(
  MR_Word parse_tree__parse_mutable__ModuleName_7,
  MR_Word parse_tree__parse_mutable__VarSet_8,
  MR_Word parse_tree__parse_mutable__ArgTerms_9,
  MR_Word parse_tree__parse_mutable__Context_10,
  MR_Integer parse_tree__parse_mutable__SeqNum_11,
  MR_Word * parse_tree__parse_mutable__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;

    {
      parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__ArgTerms_9, parse_tree__parse_mutable__Context_10, parse_tree__parse_mutable__SeqNum_11, parse_tree__parse_mutable__MaybeIOM_12);
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_finalise_item_6_p_0(
  MR_Word parse_tree__parse_mutable___ModuleName_7,
  MR_Word parse_tree__parse_mutable__VarSet_8,
  MR_Word parse_tree__parse_mutable__ArgTerms_9,
  MR_Word parse_tree__parse_mutable__Context_10,
  MR_Integer parse_tree__parse_mutable__SeqNum_11,
  MR_Word * parse_tree__parse_mutable__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;

    {
      parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__ArgTerms_9, parse_tree__parse_mutable__Context_10, parse_tree__parse_mutable__SeqNum_11, parse_tree__parse_mutable__MaybeIOM_12);
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_initialise_item_6_p_0(
  MR_Word parse_tree__parse_mutable___ModuleName_7,
  MR_Word parse_tree__parse_mutable__VarSet_8,
  MR_Word parse_tree__parse_mutable__ArgTerms_9,
  MR_Word parse_tree__parse_mutable__Context_10,
  MR_Integer parse_tree__parse_mutable__SeqNum_11,
  MR_Word * parse_tree__parse_mutable__MaybeIOM_12)
{
  {
    MR_bool parse_tree__parse_mutable__succeeded;

    {
      parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(parse_tree__parse_mutable__VarSet_8, parse_tree__parse_mutable__ArgTerms_9, parse_tree__parse_mutable__Context_10, parse_tree__parse_mutable__SeqNum_11, parse_tree__parse_mutable__MaybeIOM_12);
    }
  }
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

/* :- end_module parse_tree.parse_mutable. */
