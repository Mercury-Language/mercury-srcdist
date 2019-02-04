/*
** Automatically generated from `parse_mutable.m'
** by the Mercury compiler,
** version rotd-2017-09-02
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
  MR_Word parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Var_49;
  MR_Box parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_Var_49;
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

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attr_2_p_0(
  MR_Word MutAttrTerm_3,
  MR_Word * MutAttrResult_4);

static void MR_CALL 
parse_tree__parse_mutable__process_mutable_attribute_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attributes_0_2,
  MR_Word * STATE_VARIABLE_Attributes_3);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(
  MR_Word VarSet_4,
  MR_Word MutAttrsTerm_5,
  MR_Word * MaybeMutAttrs_6);

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
parse_tree__parse_mutable____Unify____mutable_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the predicate specification in an"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must specify the predicate\'s arity;"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate,"))
  },
  /* row 70 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires arity, found"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration specifies a predicate"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose arity is not zero or two:"))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type in a"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration cannot contain variables:"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the inst in a"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: conflicting attributes"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in attribute list:"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: malformed attribute list"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the form"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 90 */
  {
    ((MR_Box) (&parse_tree__parse_mutable_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[18])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[28])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[39])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[63])))
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
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[88])
  },
  /* row 2 */
  {
    (MR_String) "thread_local",
    (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[89])
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
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_foreign_name_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_1 = {
  (MR_String) "mutable_attr_foreign_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_attach_to_io_state_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_2 = {
  (MR_String) "mutable_attr_attach_to_io_state",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_constant_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_3 = {
  (MR_String) "mutable_attr_constant",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_4[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_thread_local_0
};

static const MR_DuFunctorDesc parse_tree__parse_mutable__parse_tree__parse_mutable__du_functor_desc_collected_mutable_attribute_0_4 = {
  (MR_String) "mutable_attr_thread_local",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__parse_mutable__parse_tree__parse_mutable__field_types_collected_mutable_attribute_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    parse_tree__parse_mutable__parse_tree__parse_mutable__du_stag_ordered_collected_mutable_attribute_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_ENUM,
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

void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____mutable_locn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_54 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_55 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_54 == CastY_55);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_63 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_17 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 0);

                  parse_tree__prog_item____Compare____foreign_name_0_0(HeadVar__1_1, Var_63, ArgY1_17);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer Var_72 = (MR_Integer) Var_65;
                  MR_Integer Var_73 = (MR_Integer) ArgY1_5;

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_72, Var_73);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer Var_66 = (MR_Integer) Var_61;
                  MR_Integer Var_67 = (MR_Integer) ArgY1_29;

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_66, Var_67);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer Var_68 = (MR_Integer) Var_62;
                          MR_Integer Var_69 = (MR_Integer) ArgY1_41;

                          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_68, Var_69);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer Var_70 = (MR_Integer) Var_64;
                          MR_Integer Var_71 = (MR_Integer) ArgY1_53;

                          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_70, Var_71);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_5 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 0);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_6 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 0);
              succeeded = parse_tree__prog_item____Unify____foreign_name_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_9 == ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_11 == ArgY1_12);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attr_2_p_0(
  MR_Word MutAttrTerm_3,
  MR_Word * MutAttrResult_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word MutAttr_7;
    MR_String String_5;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_6;
    MR_Integer lo_0;
    MR_Integer hi_1;
    MR_Integer mid_2;
    MR_Integer result_3;

    if (succeeded)
    {
      Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), MutAttrTerm_3, (MR_Integer) 0)));
      Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), MutAttrTerm_3, (MR_Integer) 1)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), MutAttrTerm_3, (MR_Integer) 2)));
      succeeded = (Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0)));
          /* binary string simple lookup switch */
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 4;
          do
          {
            mid_2 = (((lo_0 + hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(String_5, ((&parse_tree__parse_mutable_vector_common_6[0 + mid_2]))->parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              MutAttr_7 = ((&parse_tree__parse_mutable_vector_common_6[0 + mid_2]))->parse_tree__parse_mutable__vector_common_type_6_0__vct_6_f_1;
              succeeded = MR_TRUE;
              /* jump out of search loop */
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (mid_2 - (MR_Integer) 1);
            else
              lo_0 = (mid_2 + (MR_Integer) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MutAttrResult_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MutAttr_7));
      }
    else
    {
      MR_Word Lang_12;
      MR_String ForeignName_13;
      MR_Word Args_8;
      MR_Word LangTerm_10;
      MR_Word ForeignNameTerm_11;
      MR_Word Var_24;
      MR_String Var_25;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_9;
      MR_Word Var_14;

      succeeded = ((MR_tag((MR_Word) MutAttrTerm_3)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), MutAttrTerm_3, (MR_Integer) 0)));
        Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MutAttrTerm_3, (MR_Integer) 1)));
        Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), MutAttrTerm_3, (MR_Integer) 2)));
        succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0)));
          succeeded = (strcmp(Var_25, (MR_String) "foreign_name") == 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Args_8)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              LangTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_8, (MR_Integer) 0)));
              Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_8, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ForeignNameTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0)));
                Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1)));
                succeeded = (Var_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  succeeded = parse_tree__parse_pragma__term_to_foreign_language_2_p_0(LangTerm_10, &Lang_12);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) ForeignNameTerm_11)) == (MR_mktag((MR_Integer) 0)));
                    if (succeeded)
                    {
                      Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignNameTerm_11, (MR_Integer) 0)));
                      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignNameTerm_11, (MR_Integer) 1)));
                      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignNameTerm_11, (MR_Integer) 2)));
                      succeeded = (Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_28)) == (MR_mktag((MR_Integer) 2)));
                        if (succeeded)
                          ForeignName_13 = ((MR_String) (MR_hl_field(MR_mktag(2), Var_28, (MR_Integer) 0)));
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
        MR_Word Var_30;
        MR_Word MutAttr_56;

        {
          Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Lang_12));
          MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (ForeignName_13));
        }
        MutAttr_56 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MutAttrResult_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MutAttr_56));
        }
      }
      else
      {
        MR_Word Spec_16;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_54;

        Var_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, MutAttrTerm_3);
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[90])));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_47));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Spec_16));
          MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MutAttrResult_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__process_mutable_attribute_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Attributes_0_2,
  MR_Word * STATE_VARIABLE_Attributes_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ForeignName_9 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 0);

        parse_tree__prog_item__set_mutable_add_foreign_name_3_p_0(ForeignName_9, STATE_VARIABLE_Attributes_0_2, STATE_VARIABLE_Attributes_3);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Trailed_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

        parse_tree__prog_item__set_mutable_var_trailed_3_p_0(Trailed_4, STATE_VARIABLE_Attributes_0_2, STATE_VARIABLE_Attributes_3);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word AttachToIOState_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));

        parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0(AttachToIOState_14, STATE_VARIABLE_Attributes_0_2, STATE_VARIABLE_Attributes_3);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Constant_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word STATE_VARIABLE_Attributes_23_23;

            parse_tree__prog_item__set_mutable_var_constant_3_p_0(Constant_19, STATE_VARIABLE_Attributes_0_2, &STATE_VARIABLE_Attributes_23_23);
            switch (Constant_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word STATE_VARIABLE_Attributes_25_25;

                  parse_tree__prog_item__set_mutable_var_trailed_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attributes_23_23, &STATE_VARIABLE_Attributes_25_25);
                  parse_tree__prog_item__set_mutable_var_attach_to_io_state_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attributes_25_25, STATE_VARIABLE_Attributes_3);
                }
                break;
              case (MR_Integer) 0:
                *STATE_VARIABLE_Attributes_3 = STATE_VARIABLE_Attributes_23_23;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ThrLocal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            parse_tree__prog_item__set_mutable_var_thread_local_3_p_0(ThrLocal_28, STATE_VARIABLE_Attributes_0_2, STATE_VARIABLE_Attributes_3);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_mutable_decl_info_7_p_0(
  MR_Word _ModuleName_8,
  MR_Word VarSet_9,
  MR_Word ArgTerms_10,
  MR_Word Context_11,
  MR_Integer SeqNum_12,
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
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, MaybeIOM_12);
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_Word MaybeItemMutableInfo_13;

    parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, (MR_Integer) 0, &MaybeItemMutableInfo_13);
    if (((MR_tag((MR_Word) MaybeItemMutableInfo_13)) == (MR_mktag((MR_Integer) 0))))
      *MaybeIOM_12 = (MR_Word) MaybeItemMutableInfo_13;
    else
    {
      MR_Word ItemMutableInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeItemMutableInfo_13, (MR_Integer) 0)));
      MR_Word Var_17;
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (ItemMutableInfo_14));
      }
      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (Var_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_109_117_116_97_98_108_101_95_100_101_99_108_95_105_110_102_111_95_95_91_49_93_95_48_7_p_0(
  MR_Word VarSet_9,
  MR_Word ArgTerms_10,
  MR_Word Context_11,
  MR_Integer SeqNum_12,
  MR_Word MutableLocn_13,
  MR_Word * MaybeItemMutableInfo_14)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_10)) == (MR_mktag((MR_Integer) 1)));
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
      NameTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 0)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_10, (MR_Integer) 1)));
      succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        TypeTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
        Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          ValueTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0)));
          Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            InstTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0)));
            OptMutAttrsTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 1)));
            if ((OptMutAttrsTerm_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MaybeAttrsTerm_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word MutAttrsTerm0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptMutAttrsTerm_19, (MR_Integer) 0)));
              MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptMutAttrsTerm_19, (MR_Integer) 1)));

              succeeded = (Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                {
                  MaybeAttrsTerm_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
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
      MR_Word TypeCtorInfo_104_104;
      MR_Word TypeCtorInfo_105_105;
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
      TypeCtorInfo_104_104 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      TypeCtorInfo_105_105 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      mercury__term__coerce_2_p_0(TypeCtorInfo_104_104, TypeCtorInfo_105_105, ValueTerm_17, &Value_24);
      mercury__varset__coerce_2_p_0(TypeCtorInfo_104_104, TypeCtorInfo_105_105, VarSet_9, &ProgVarSet_25);
      parse_tree__parse_mutable__parse_mutable_inst_3_p_0(VarSet_9, InstTerm_18, &MaybeInst_26);
      if ((MaybeAttrsTerm_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_46;

        Var_46 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
        {
          MaybeMutAttrs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeMutAttrs_27, 0) = ((MR_Box) (Var_46));
        }
      }
      else
      {
        MR_Word MutAttrsTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAttrsTerm_20, (MR_Integer) 0)));

        parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(VarSet_9, MutAttrsTerm_28, &MaybeMutAttrs_27);
      }
      succeeded = ((MR_tag((MR_Word) MaybeName_22)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Name_29 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeName_22, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) MaybeType_23)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeType_23, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) MaybeInst_26)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Inst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeInst_26, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) MaybeMutAttrs_27)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              MutAttrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMutAttrs_27, (MR_Integer) 0)));
          }
        }
      }
      if (succeeded)
      {
        MR_Word ItemMutableInfo_33;

        {
          ItemMutableInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeItemMutableInfo_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ItemMutableInfo_33));
        }
      }
      else
      {
        MR_Word TypeCtorInfo_106_106 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
        MR_Word Specs_34;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;

        Var_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, MaybeName_22);
        Var_51 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, MaybeType_23);
        Var_53 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, MaybeInst_26);
        Var_54 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, MaybeMutAttrs_27);
        Var_52 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_106_106, Var_53, Var_54);
        Var_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_106_106, Var_51, Var_52);
        Specs_34 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_106_106, Var_49, Var_50);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_102;

      switch (MutableLocn_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            WhatPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[34]);
            Prefix_38 = (MR_String) "";
            Suffix1_39 = (MR_String) "";
          }
          break;
        case (MR_Integer) 0:
          {
            WhatPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[37]);
            Prefix_38 = (MR_String) ":- ";
            Suffix1_39 = (MR_String) ".";
          }
          break;
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[68])));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (WhatPieces_37));
      }
      Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "mutable(name, type, init_value, inst)", Suffix1_39);
      Var_81 = mercury__string__f_43_43_2_f_0(Prefix_38, Var_82);
      {
        Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (Var_81));
      }
      Var_88 = mercury__string__f_43_43_2_f_0(Prefix_38, (MR_String) "mutable(name, type, init_value, inst, [attr1, ...]).");
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[0])));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[87])));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[86])));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
      }
      Pieces_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Var_73, Var_76);
      {
        Var_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (Pieces_40));
      }
      {
        Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Context_11));
        MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (Var_98));
      }
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_41, 2) = ((MR_Box) (Var_96));
      }
      {
        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Spec_41));
        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeItemMutableInfo_14 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Attributes_3;

    parse_tree__parse_mutable__process_mutable_attribute_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Attributes_3);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Attributes_3));
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MutAttrResult_4;

    parse_tree__parse_mutable__parse_mutable_attr_2_p_0(((MR_Word) wrapper_arg_1), &conv0_MutAttrResult_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_MutAttrResult_4));
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Var_49 = ((MR_Word) (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_Var_49);
    parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Var_49, (MR_Integer) 0)));
    (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Var_49, (MR_Integer) 1)));
    (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116 = (MR_Word) &parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0;
    (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116, ((MR_Box) ((env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict1_12)), (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
    if ((env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
    {
      (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__TypeCtorInfo_116_116, ((MR_Box) ((env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__Conflict2_13)), (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11);
      if ((env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
        parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_2(env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_5(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &parse_tree__parse_mutable_scalar_common_1[0], &(env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__conv1_Var_49, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[56]), parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_4, env_ptr);
        }
        (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_attrs_3_p_0(
  MR_Word VarSet_4,
  MR_Word MutAttrsTerm_5,
  MR_Word * MaybeMutAttrs_6)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0_s env;

    {
      MR_Word Attributes0_7;
      MR_Word TypeCtorInfo_114_114;
      MR_Word MutAttrTerms_9;
      MR_Word MaybeAttrList_10;
      MR_Word Var_48;

      Attributes0_7 = parse_tree__prog_item__default_mutable_attributes_0_f_0();
      (env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = parse_tree__parse_util__list_term_to_term_list_2_p_0(MutAttrsTerm_5, &MutAttrTerms_9);
      if ((env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
      {
        Var_48 = (MR_Word) &parse_tree__parse_mutable_scalar_common_1[1];
        TypeCtorInfo_114_114 = (MR_Word) &parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0;
        parse_tree__parse_util__map_parser_3_p_0(TypeCtorInfo_114_114, Var_48, MutAttrTerms_9, &MaybeAttrList_10);
        (env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) MaybeAttrList_10)) == (MR_mktag((MR_Integer) 1)));
        if ((env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
          (env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeAttrList_10, (MR_Integer) 0)));
      }
      if ((env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
      {
        parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_5(&env);
        if ((env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__succeeded)
        {
          MR_Word TypeCtorInfo_117_117 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_String MutAttrsStr_14;
          MR_Word Pieces_15;
          MR_Word Spec_16;
          MR_Word Var_53;
          MR_Word Var_56;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_75;

          MutAttrsStr_14 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(TypeCtorInfo_117_117, VarSet_4, (MR_Integer) 0, MutAttrsTerm_5);
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (MutAttrsStr_14));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[82])));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
          }
          {
            Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[81])));
            MR_hl_field(MR_mktag(1), Pieces_15, 1) = ((MR_Box) (Var_53));
          }
          Var_70 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_117_117, MutAttrsTerm_5);
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Pieces_15));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_68));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Spec_16));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeMutAttrs_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_75));
          }
        }
        else
        {
          MR_Word Attributes_17;
          MR_Box conv3_Attributes_17;

          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__parse_mutable__parse_tree__parse_mutable__type_ctor_info_collected_mutable_attribute_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mutable_var_attributes_0, (MR_Word) &parse_tree__parse_mutable_scalar_common_1[2], (env).parse_tree__parse_mutable__parse_mutable_attrs_3_p_0_env_0__CollectedMutAttrs_11, ((MR_Box) (Attributes0_7)), &conv3_Attributes_17);
          Attributes_17 = ((MR_Word) conv3_Attributes_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMutAttrs_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Attributes_17));
          }
        }
      }
      else
      {
        MR_Word TypeCtorInfo_123_123 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
        MR_Word Var_81;
        MR_Word Var_84;
        MR_Word Var_87;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_100;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_107;
        MR_String MutAttrsStr_109;
        MR_Word Pieces_110;
        MR_Word Spec_111;

        MutAttrsStr_109 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(TypeCtorInfo_123_123, VarSet_4, (MR_Integer) 0, MutAttrsTerm_5);
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (MutAttrsStr_109));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[85])));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[78])));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[84])));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
        }
        {
          Pieces_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[83])));
          MR_hl_field(MR_mktag(1), Pieces_110, 1) = ((MR_Box) (Var_81));
        }
        Var_102 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_123_123, MutAttrsTerm_5);
        {
          Var_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_104, 0) = ((MR_Box) (Pieces_110));
        }
        {
          Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
          MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (Var_103));
        }
        {
          Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
          MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          MR_hl_field(MR_mktag(0), Spec_111, 2) = ((MR_Box) (Var_100));
        }
        {
          Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Spec_111));
          MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMutAttrs_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_107));
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_7;

          mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, &Var_7, parse_tree__parse_mutable__parse_mutable_inst_3_p_0_1, env_ptr);
        }
        (env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_inst_3_p_0(
  MR_Word VarSet_4,
  MR_Word InstTerm_5,
  MR_Word * MaybeInst_6)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0_s env;

    (env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5 = InstTerm_5;
    parse_tree__parse_mutable__parse_mutable_inst_3_p_0_2(&env);
    if ((env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__succeeded)
    {
      MR_Word TypeCtorInfo_52_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_String InstTermStr_8;
      MR_Word Pieces_9;
      MR_Word Spec_10;
      MR_Word Var_14;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_37;

      InstTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_52_52, VarSet_4, (env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (InstTermStr_8));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[79])));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[78])));
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
      }
      {
        Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[80])));
        MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_14));
      }
      Var_32 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_52_52, (env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_9));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_30));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Spec_10));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeInst_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      }
    }
    else
    {
      MR_Word ContextPieces_11;

      ContextPieces_11 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[44]));
      parse_tree__parse_inst_mode_name__parse_inst_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[7]), VarSet_4, ContextPieces_11, (env).parse_tree__parse_mutable__parse_mutable_inst_3_p_0_env_0__InstTerm_5, MaybeInst_6);
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s * env_ptr = (struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_7;

          mercury__term__contains_var_2_p_1((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, &Var_7, parse_tree__parse_mutable__parse_mutable_type_3_p_0_1, env_ptr);
        }
        (env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_type_3_p_0(
  MR_Word VarSet_4,
  MR_Word TypeTerm_5,
  MR_Word * MaybeType_6)
{
  {
    struct parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0_s env;

    (env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5 = TypeTerm_5;
    parse_tree__parse_mutable__parse_mutable_type_3_p_0_2(&env);
    if ((env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__succeeded)
    {
      MR_Word TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
      MR_String TypeTermStr_8;
      MR_Word Pieces_9;
      MR_Word Spec_10;
      MR_Word Var_14;
      MR_Word Var_17;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_37;

      TypeTermStr_8 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_42_42, VarSet_4, (env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (TypeTermStr_8));
      }
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[79])));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
      }
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[78])));
        MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
      }
      {
        Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[77])));
        MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_14));
      }
      Var_32 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_42_42, (env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5);
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_9));
      }
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_30));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Spec_10));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeType_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      }
    }
    else
    {
      MR_Word ContextPieces_11;

      ContextPieces_11 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
      parse_tree__parse_type_name__parse_type_5_p_0((MR_Word) MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_3[6]), VarSet_4, ContextPieces_11, (env).parse_tree__parse_mutable__parse_mutable_type_3_p_0_env_0__TypeTerm_5, MaybeType_6);
    }
  }
}

static void MR_CALL 
parse_tree__parse_mutable__parse_mutable_name_2_p_0(
  MR_Word NameTerm_3,
  MR_Word * MaybeName_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) NameTerm_3)) == (MR_mktag((MR_Integer) 0)));
    MR_String Name_5;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_6;

    if (succeeded)
    {
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), NameTerm_3, (MR_Integer) 0)));
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), NameTerm_3, (MR_Integer) 1)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), NameTerm_3, (MR_Integer) 2)));
      succeeded = (Var_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
          Name_5 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeName_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_5));
      }
    else
    {
      MR_Word Spec_8;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_25;

      Var_20 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, NameTerm_3);
      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[76])));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_18));
      }
      {
        Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Spec_8));
        MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeName_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_finalise_item_6_p_0(
  MR_Word _ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, MaybeIOM_12);
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_102_105_110_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Term_13;
    MR_Word Var_25;

    if (succeeded)
    {
      Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1)));
      succeeded = (Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word MaybeSymNameSpecifier_14;

      parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(VarSet_8, Term_13, &MaybeSymNameSpecifier_14);
      if (((MR_tag((MR_Word) MaybeSymNameSpecifier_14)) == (MR_mktag((MR_Integer) 0))))
        *MaybeIOM_12 = (MR_Word) MaybeSymNameSpecifier_14;
      else
      {
        MR_Word SymNameSpecifier_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSymNameSpecifier_14, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) SymNameSpecifier_16)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word TypeCtorInfo_126_126 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_String TermStr_18;
          MR_Word Pieces_19;
          MR_Word Spec_20;
          MR_Word Var_60;
          MR_Word Var_63;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_86;

          TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_126_126, VarSet_8, Term_13);
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (TermStr_18));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[72])));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[66])));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[71])));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
          }
          {
            Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[68])));
            MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_60));
          }
          Var_81 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_126_126, Term_13);
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Pieces_19));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_79));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Spec_20));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_86));
          }
        }
        else
        {
          MR_Word SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymNameSpecifier_16, (MR_Integer) 0)));
          MR_Integer Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SymNameSpecifier_16, (MR_Integer) 1)));

          switch (Arity_22) {
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
            MR_Word ItemFinalise_23;
            MR_Word Item_24;
            MR_Word Var_27;

            {
              ItemFinalise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemFinalise_23, 0) = ((MR_Box) (SymName_21));
              MR_hl_field(MR_mktag(0), ItemFinalise_23, 1) = ((MR_Box) (Arity_22));
              MR_hl_field(MR_mktag(0), ItemFinalise_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), ItemFinalise_23, 3) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), ItemFinalise_23, 4) = ((MR_Box) (SeqNum_11));
            }
            {
              Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
              MR_hl_field(MR_mktag(3), Item_24, 1) = ((MR_Box) (ItemFinalise_23));
            }
            {
              Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Item_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
            }
          }
          else
          {
            MR_Word TypeCtorInfo_127_127 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            MR_Word Var_30;
            MR_Word Var_33;
            MR_Word Var_36;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_56;
            MR_String TermStr_115;
            MR_Word Pieces_116;
            MR_Word Spec_117;

            TermStr_115 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_127_127, VarSet_8, Term_13);
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (TermStr_115));
            }
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[20])));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[74])));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[73])));
              MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
            }
            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[71])));
              MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
            }
            {
              Pieces_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[68])));
              MR_hl_field(MR_mktag(1), Pieces_116, 1) = ((MR_Box) (Var_30));
            }
            Var_51 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_127_127, Term_13);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Pieces_116));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Var_52));
            }
            {
              Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_117, 2) = ((MR_Box) (Var_49));
            }
            {
              Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Spec_117));
              MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_113;
      MR_Word Spec_125;

      {
        Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[75])));
      }
      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_125, 2) = ((MR_Box) (Var_107));
      }
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Spec_125));
        MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_113));
      }
    }
  }
}

void MR_CALL 
parse_tree__parse_mutable__parse_initialise_item_6_p_0(
  MR_Word _ModuleName_7,
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(VarSet_8, ArgTerms_9, Context_10, SeqNum_11, MaybeIOM_12);
}

void MR_CALL 
parse_tree__parse_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_105_116_105_97_108_105_115_101_95_105_116_101_109_95_95_91_49_93_95_48_6_p_0(
  MR_Word VarSet_8,
  MR_Word ArgTerms_9,
  MR_Word Context_10,
  MR_Integer SeqNum_11,
  MR_Word * MaybeIOM_12)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Term_13;
    MR_Word Var_25;

    if (succeeded)
    {
      Term_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 0)));
      Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgTerms_9, (MR_Integer) 1)));
      succeeded = (Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word MaybeSymNameSpecifier_14;

      parse_tree__parse_sym_name__parse_symbol_name_specifier_3_p_0(VarSet_8, Term_13, &MaybeSymNameSpecifier_14);
      if (((MR_tag((MR_Word) MaybeSymNameSpecifier_14)) == (MR_mktag((MR_Integer) 0))))
        *MaybeIOM_12 = (MR_Word) MaybeSymNameSpecifier_14;
      else
      {
        MR_Word SymNameSpecifier_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeSymNameSpecifier_14, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) SymNameSpecifier_16)) == (MR_mktag((MR_Integer) 0))))
        {
          MR_Word TypeCtorInfo_129_129 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_String TermStr_18;
          MR_Word Pieces_19;
          MR_Word Spec_20;
          MR_Word Var_63;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_89;

          TermStr_18 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_129_129, VarSet_8, Term_13);
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (TermStr_18));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[2])));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[67])));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[66])));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[65])));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
          }
          {
            Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[64])));
            MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_63));
          }
          Var_84 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_129_129, Term_13);
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Pieces_19));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_82));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Spec_20));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeIOM_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
          }
        }
        else
        {
          MR_Word SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), SymNameSpecifier_16, (MR_Integer) 0)));
          MR_Integer Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SymNameSpecifier_16, (MR_Integer) 1)));

          switch (Arity_22) {
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
            MR_Word ItemInitialise_23;
            MR_Word Item_24;
            MR_Word Var_27;

            {
              ItemInitialise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemInitialise_23, 0) = ((MR_Box) (SymName_21));
              MR_hl_field(MR_mktag(0), ItemInitialise_23, 1) = ((MR_Box) (Arity_22));
              MR_hl_field(MR_mktag(0), ItemInitialise_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), ItemInitialise_23, 3) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(0), ItemInitialise_23, 4) = ((MR_Box) (SeqNum_11));
            }
            {
              Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
              MR_hl_field(MR_mktag(3), Item_24, 1) = ((MR_Box) (ItemInitialise_23));
            }
            {
              Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Item_24));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
            }
          }
          else
          {
            MR_Word TypeCtorInfo_130_130 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
            MR_Word Var_30;
            MR_Word Var_33;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_59;
            MR_String TermStr_118;
            MR_Word Pieces_119;
            MR_Word Spec_120;

            TermStr_118 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(TypeCtorInfo_130_130, VarSet_8, Term_13);
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (TermStr_118));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[8])));
            }
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[69])));
              MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
            }
            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[65])));
              MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
            }
            {
              Pieces_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__parse_mutable_scalar_common_2[68])));
              MR_hl_field(MR_mktag(1), Pieces_119, 1) = ((MR_Box) (Var_30));
            }
            Var_54 = mercury__term__get_term_context_1_f_0(TypeCtorInfo_130_130, Term_13);
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Pieces_119));
            }
            {
              Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (Var_55));
            }
            {
              Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
              MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Spec_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), Spec_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), Spec_120, 2) = ((MR_Box) (Var_52));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Spec_120));
              MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeIOM_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_116;
      MR_Word Spec_128;

      {
        Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__parse_mutable_scalar_common_2[70])));
      }
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_128, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        MR_hl_field(MR_mktag(0), Spec_128, 2) = ((MR_Box) (Var_110));
      }
      {
        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Spec_128));
        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeIOM_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_116));
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_mutable____Unify____collected_mutable_attribute_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_mutable____Compare____collected_mutable_attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__parse_mutable____Unify____mutable_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__parse_mutable____Unify____mutable_locn_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__parse_mutable____Compare____mutable_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__parse_mutable____Compare____mutable_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
