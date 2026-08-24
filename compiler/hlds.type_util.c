/*
** Automatically generated from `type_util.m'
** by the Mercury compiler,
** version rotd-2026-08-24
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


// :- module hlds.type_util.
// :- implementation.

/*
INIT mercury__hlds__type_util__init
ENDINIT
*/

#include "hlds.type_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.string_encoding.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_classify.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s {
  MR_bool hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
  MR_Word hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5;
  jmp_buf hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0;
  MR_Word hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8;
  MR_Word hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9;
  MR_Box hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9;
};


static const MR_FA_TypeInfo_Struct1 hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_VA_PseudoTypeInfo_Struct3 hlds__type_util____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0;

static const MR_PseudoTypeInfo hlds__type_util__hlds__type_util__field_types_ctor_defn_0_0[5];

static const MR_ConstString hlds__type_util__hlds__type_util__field_names_ctor_defn_0_0[5];

static const MR_DuFunctorDesc hlds__type_util__hlds__type_util__du_functor_desc_ctor_defn_0_0;

static const MR_DuFunctorDescPtr hlds__type_util__hlds__type_util__du_stag_ordered_ctor_defn_0_0[1];

static const MR_DuPtagLayout hlds__type_util__hlds__type_util__du_ptag_ordered_ctor_defn_0[1];

static const MR_DuFunctorDescPtr hlds__type_util__hlds__type_util__du_name_ordered_ctor_defn_0[1];

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_ctor_defn_0[1];

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_0;

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_1;

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_ordinal_ordered_exist_qvar_action_0[2];

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_name_ordered_exist_qvar_action_0[2];

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_exist_qvar_action_0[2];

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0;

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1;

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_ordinal_ordered_is_either_dummy_type_0[2];

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_name_ordered_is_either_dummy_type_0[2];

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_is_either_dummy_type_0[2];

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_ctor_arg_types__1013__1_1_f_0(
  MR_Word LambdaHeadVar__1_20);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__975__2_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__975__1_1_f_0(
  MR_Word LambdaHeadVar__1_30);

static MR_bool MR_CALL 
hlds__type_util__IntroducedFrom__pred__du_ctor_adjusted_arity__1132__1_2_p_0(
  MR_Integer NumUnconstrainedExistQTVarsEC_24,
  MR_Integer NumTypeInfos_27);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1080__1_1_f_0(
  MR_Word LambdaHeadVar__1_24);

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__type_constructors__801__1_2_f_0(
  MR_Word Context_10,
  MR_Word LambdaHeadVar__1_19);

static void MR_CALL 
hlds__type_util____Compare____exist_qvar_action_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__type_util____Unify____exist_qvar_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__type_util__var_is_introduced_type_info_type_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4);

static MR_Box MR_CALL 
hlds__type_util__get_user_ctor_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__get_user_ctor_arg_types_4_p_0(
  MR_Word TypeParams_5,
  MR_Word TypeCtorArgTypes_6,
  MR_Word Ctor_7,
  MR_Tuple * HeadVar__4_4);

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__du_ctor_adjusted_arity_3_f_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__type_util__find_cons_repn_with_given_arity_4_p_0(
  MR_Integer ConsArity_5,
  MR_Word HeadConsRepn_6,
  MR_Word TailConsRepns_7,
  MR_Word * DuCtorConsRepn_8);

static MR_bool MR_CALL 
hlds__type_util__all_du_ctor_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__type_util__get_du_ctor_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__type_util__is_type_a_dummy_loop_3_f_0(
  MR_Word TypeTable_5,
  MR_Word Type_6,
  MR_Word CoveredTypes_7);

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_4(
  void * env_ptr_arg);

static MR_Box MR_CALL 
hlds__type_util__type_constructors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__type_util__substitute_type_args_ctors_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__type_util__substitute_type_args_ctor_args_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
hlds__type_util____Unify____ctor_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__type_util____Compare____ctor_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__type_util____Unify____exist_qvar_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__type_util____Compare____exist_qvar_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__type_util____Unify____is_either_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__type_util____Compare____is_either_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__type_util_scalar_common_1[5][2];

static /* final */ const MR_Box hlds__type_util_scalar_common_2[4][5];

static /* final */ const MR_Box hlds__type_util_scalar_common_3[5][3];

static /* final */ const MR_Box hlds__type_util_scalar_common_4[2][1];

static /* final */ const MR_Box hlds__type_util_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__type_util_scalar_common_8[1][7];


struct hlds__type_util__vector_common_type_6_0_s {
  const MR_String hlds__type_util__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct hlds__type_util__vector_common_type_6_0_s hlds__type_util_vector_common_6[4];

struct hlds__type_util__vector_common_type_7_0_s {
  const MR_String hlds__type_util__vector_common_type_7_0__vct_7_f_0;
  const MR_Integer hlds__type_util__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct hlds__type_util__vector_common_type_7_0_s hlds__type_util_vector_common_7[4];



static /* final */ const MR_Box hlds__type_util_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_2[4][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__type_util_scalar_common_1[1]))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_3[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__type_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__get_du_ctor_arg_types_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__get_existq_cons_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__type_util_scalar_common_2[1])),
    ((MR_Box) (hlds__type_util__get_user_ctor_arg_types_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_4[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "builtin")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "{}")) },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
};

static /* final */ const MR_Box hlds__type_util_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__type_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__type_util____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};


static /* final */ const struct hlds__type_util__vector_common_type_6_0_s hlds__type_util_vector_common_6[4] = {
  /* row   0 */   { (MR_String) "base_typeclass_info" },
  /* row   1 */   { (MR_String) "type_ctor_info" },
  /* row   2 */   { (MR_String) "type_info" },
  /* row   3 */   { (MR_String) "typeclass_info" },
};

static /* final */ const struct hlds__type_util__vector_common_type_7_0_s hlds__type_util_vector_common_7[4] = {
  /* row   0 */
  {
    (MR_String) "int16",
    (MR_Integer) 65536
  },
  /* row   1 */
  {
    (MR_String) "int8",
    (MR_Integer) 256
  },
  /* row   2 */
  {
    (MR_String) "uint16",
    (MR_Integer) 65536
  },
  /* row   3 */
  {
    (MR_String) "uint8",
    (MR_Integer) 256
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_VA_PseudoTypeInfo_Struct3 hlds__type_util____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
  }
};

static const MR_PseudoTypeInfo hlds__type_util__hlds__type_util__field_types_ctor_defn_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__type_util__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__type_util__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_kind_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0),
  (MR_PseudoTypeInfo) (&hlds__type_util__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_ConstString hlds__type_util__hlds__type_util__field_names_ctor_defn_0_0[5] = {
  (MR_String) "ctor_tvars",
  (MR_String) "ctor_tvar_kinds",
  (MR_String) "ctor_maybe_exist",
  (MR_String) "ctor_arg_types",
  (MR_String) "ctor_result_type"
};

static const MR_DuFunctorDesc hlds__type_util__hlds__type_util__du_functor_desc_ctor_defn_0_0 = {
  (MR_String) "ctor_defn",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__type_util__hlds__type_util__field_types_ctor_defn_0_0,
  hlds__type_util__hlds__type_util__field_names_ctor_defn_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__type_util__hlds__type_util__du_stag_ordered_ctor_defn_0_0[1] = { &hlds__type_util__hlds__type_util__du_functor_desc_ctor_defn_0_0 };

static const MR_DuPtagLayout hlds__type_util__hlds__type_util__du_ptag_ordered_ctor_defn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__type_util__hlds__type_util__du_stag_ordered_ctor_defn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__type_util__hlds__type_util__du_name_ordered_ctor_defn_0[1] = { &hlds__type_util__hlds__type_util__du_functor_desc_ctor_defn_0_0 };

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_ctor_defn_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__type_util__hlds__type_util__type_ctor_info_ctor_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__type_util____Unify____ctor_defn_0_0_10001)),
  ((MR_Box) (hlds__type_util____Compare____ctor_defn_0_0_10001)),
  (MR_String) "hlds.type_util",
  (MR_String) "ctor_defn",
  { hlds__type_util__hlds__type_util__du_name_ordered_ctor_defn_0 },
  { hlds__type_util__hlds__type_util__du_ptag_ordered_ctor_defn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__type_util__hlds__type_util__functor_number_map_ctor_defn_0,

};

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_0 = {
  (MR_String) "fail_on_exist_qvar",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_1 = {
  (MR_String) "abort_on_exist_qvar",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_ordinal_ordered_exist_qvar_action_0[2] = {
  &hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_0,
  &hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_1
};

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_name_ordered_exist_qvar_action_0[2] = {
  &hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_1,
  &hlds__type_util__hlds__type_util__enum_functor_desc_exist_qvar_action_0_0
};

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_exist_qvar_action_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__type_util__hlds__type_util__type_ctor_info_exist_qvar_action_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__type_util____Unify____exist_qvar_action_0_0_10001)),
  ((MR_Box) (hlds__type_util____Compare____exist_qvar_action_0_0_10001)),
  (MR_String) "hlds.type_util",
  (MR_String) "exist_qvar_action",
  { hlds__type_util__hlds__type_util__enum_name_ordered_exist_qvar_action_0 },
  { hlds__type_util__hlds__type_util__enum_ordinal_ordered_exist_qvar_action_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__type_util__hlds__type_util__functor_number_map_exist_qvar_action_0,

};

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0 = {
  (MR_String) "at_least_one_is_dummy_type",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1 = {
  (MR_String) "neither_is_dummy_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_ordinal_ordered_is_either_dummy_type_0[2] = {
  &hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0,
  &hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1
};

static const MR_EnumFunctorDescPtr hlds__type_util__hlds__type_util__enum_name_ordered_is_either_dummy_type_0[2] = {
  &hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_0,
  &hlds__type_util__hlds__type_util__enum_functor_desc_is_either_dummy_type_0_1
};

static const MR_Integer hlds__type_util__hlds__type_util__functor_number_map_is_either_dummy_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__type_util__hlds__type_util__type_ctor_info_is_either_dummy_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__type_util____Unify____is_either_dummy_type_0_0_10001)),
  ((MR_Box) (hlds__type_util____Compare____is_either_dummy_type_0_0_10001)),
  (MR_String) "hlds.type_util",
  (MR_String) "is_either_dummy_type",
  { hlds__type_util__hlds__type_util__enum_name_ordered_is_either_dummy_type_0 },
  { hlds__type_util__hlds__type_util__enum_ordinal_ordered_is_either_dummy_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__type_util__hlds__type_util__functor_number_map_is_either_dummy_type_0,

};

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_ctor_arg_types__1013__1_1_f_0(
  MR_Word LambdaHeadVar__1_20)
{
  MR_Word LambdaHeadVar__2_21 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_20, 1))));

  return LambdaHeadVar__2_21;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__975__2_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_30, 1))));

  return LambdaHeadVar__2_31;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__975__1_1_f_0(
  MR_Word LambdaHeadVar__1_30)
{
  MR_Word LambdaHeadVar__2_31 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_30, 1))));

  return LambdaHeadVar__2_31;
}

static MR_bool MR_CALL 
hlds__type_util__IntroducedFrom__pred__du_ctor_adjusted_arity__1132__1_2_p_0(
  MR_Integer NumUnconstrainedExistQTVarsEC_24,
  MR_Integer NumTypeInfos_27)
{
  MR_bool succeeded = (NumTypeInfos_27 == NumUnconstrainedExistQTVarsEC_24);

  return succeeded;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1080__1_1_f_0(
  MR_Word LambdaHeadVar__1_24)
{
  MR_Word LambdaHeadVar__2_25 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_24, 1))));

  return LambdaHeadVar__2_25;
}

static MR_Word MR_CALL 
hlds__type_util__IntroducedFrom__func__type_constructors__801__1_2_f_0(
  MR_Word Context_10,
  MR_Word LambdaHeadVar__1_19)
{
  MR_Word LambdaHeadVar__2_20;

  {
    LambdaHeadVar__2_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, LambdaHeadVar__2_20, 1) = ((MR_Box) (LambdaHeadVar__1_19));
    MR_hl_field(0, LambdaHeadVar__2_20, 2) = ((MR_Box) (Context_10));
  }
  return LambdaHeadVar__2_20;
}

void MR_CALL 
hlds__type_util____Compare____is_either_dummy_type_0_0(
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
hlds__type_util____Unify____is_either_dummy_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__type_util____Compare____exist_qvar_action_0_0(
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

static MR_bool MR_CALL 
hlds__type_util____Unify____exist_qvar_action_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__type_util____Compare____ctor_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__type_util_scalar_common_3[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__prog_data____Compare____maybe_cons_exist_constraints_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__type_util____Unify____ctor_defn_0_0(
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
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__type_util_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&hlds__type_util_scalar_common_3[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_18_18 = (MR_Word) (&hlds__type_util_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__var_is_introduced_type_info_type_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Entry_5;
  MR_Word Type_6;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, Var_4, &Entry_5);
  Type_6 = ((MR_Word) ((MR_hl_field(0, Entry_5, 1))));
  succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(Type_6);
  return succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__get_user_ctor_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_21;

  conv0_LambdaHeadVar__2_21 = hlds__type_util__IntroducedFrom__func__get_user_ctor_arg_types__1013__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__type_util__get_user_ctor_arg_types_4_p_0(
  MR_Word TypeParams_5,
  MR_Word TypeCtorArgTypes_6,
  MR_Word Ctor_7,
  MR_Tuple * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word TypeInfo_25_25;
  MR_Word TypeCtorInfo_26_26;
  MR_Word TypeCtorInfo_27_27;
  MR_String Name_8;
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, Ctor_7, 4))));
  MR_Word CtorArgTypes_10;
  MR_Word MaybeExistConstraints_12 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 1))));
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 2))));
  MR_Word CtorArgs_14 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 3))));
  MR_Word TSubst_16;
  MR_Word CtorArgTypes0_17;
  MR_Word Var_19;

  succeeded = (MaybeExistConstraints_12 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeInfo_25_25 = (MR_Word) (&hlds__type_util_scalar_common_1[0]);
    TypeCtorInfo_26_26 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__map__from_corresponding_lists_3_p_0(TypeInfo_25_25, TypeCtorInfo_26_26, TypeParams_5, TypeCtorArgTypes_6, &TSubst_16);
    TypeCtorInfo_27_27 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
    Var_19 = (MR_Word) (&hlds__type_util_scalar_common_3[4]);
    CtorArgTypes0_17 = mercury__list__map_2_f_0(TypeCtorInfo_27_27, TypeCtorInfo_26_26, Var_19, CtorArgs_14);
    parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(TSubst_16, CtorArgTypes0_17, &CtorArgTypes_10);
    Name_8 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_13);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_8));
      MR_hl_field(0, base, 1) = ((MR_Box) (Arity_9));
      MR_hl_field(0, base, 2) = ((MR_Box) (CtorArgTypes_10));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(
  MR_Word VarTable_4,
  MR_Word VarsSet0_5)
{
  MR_bool succeeded;
  MR_Word VarsSet_6;
  MR_Word VarsList0_7;
  MR_Word VarsList_8;
  MR_Word Var_10;

  VarsList0_7 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsSet0_5);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[3]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (VarTable_4));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), Var_10, VarsList0_7, &VarsList_8);
  VarsSet_6 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarsList_8);
  return VarsSet_6;
}

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__remove_typeinfo_vars_from_set_2_f_0(
  MR_Word VarTable_4,
  MR_Word VarsSet0_5)
{
  MR_bool succeeded;
  MR_Word VarsSet_6;
  MR_Word VarsList0_7;
  MR_Word VarsList_8;
  MR_Word Var_10;

  VarsList0_7 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), VarsSet0_5);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[3]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (VarTable_4));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), Var_10, VarsList0_7, &VarsList_8);
  VarsSet_6 = mercury__set__sorted_list_to_set_1_f_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), VarsList_8);
  return VarsSet_6;
}

static MR_bool MR_CALL 
hlds__type_util__remove_typeinfo_vars_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__remove_typeinfo_vars_2_f_0(
  MR_Word VarTable_4,
  MR_Word Vars_5)
{
  MR_bool succeeded;
  MR_Word NonTypeInfoVars_6;
  MR_Word Var_7;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[3]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (hlds__type_util__remove_typeinfo_vars_2_f_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (VarTable_4));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), Var_7, Vars_5, &NonTypeInfoVars_6);
  return NonTypeInfoVars_6;
}

static MR_bool MR_CALL 
hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__put_typeinfo_vars_first_2_f_0(
  MR_Word VarTable_4,
  MR_Word Vars0_5)
{
  MR_bool succeeded;
  MR_Word Vars_6;
  MR_Word TypeInfoVars_7;
  MR_Word NonTypeInfoVars_8;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[3]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__type_util__put_typeinfo_vars_first_2_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (VarTable_4));
  }
  mercury__list__filter_4_p_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), Var_10, Vars0_5, &TypeInfoVars_7, &NonTypeInfoVars_8);
  Vars_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__type_util_scalar_common_1[3]), TypeInfoVars_7, NonTypeInfoVars_8);
  return Vars_6;
}

MR_bool MR_CALL 
hlds__type_util__is_region_var_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Entry_5;
  MR_Word Var_6;
  MR_Word Var_9;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_3, Var_4, &Entry_5);
  Var_6 = ((MR_Word) ((MR_hl_field(0, Entry_5, 1))));
  Var_9 = parse_tree__builtin_lib_types__region_type_0_f_0();
  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_6, Var_9);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_not_stored_in_region_2_p_0(
  MR_Word Type_3,
  MR_Word ModuleInfo_4)
{
  MR_bool succeeded;

  succeeded = hlds__type_classify__type_is_atomic_2_p_0(ModuleInfo_4, Type_3);
  if (!(succeeded))
  {
    {
      MR_Word Var_5;
      MR_Word TypeTable_10;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_10);
      Var_5 = hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_10, Type_3, (MR_Word) ((MR_Unsigned) 0U));
      succeeded = (Var_5 == (MR_Integer) 0);
    }
    if (!(succeeded))
    {
      {
        MR_Word Var_6;

        Var_6 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_3, Var_6);
      }
      if (!(succeeded))
      {
        {
          MR_Word Var_7;

          Var_7 = parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_3, Var_7);
        }
        if (!(succeeded))
          succeeded = parse_tree__prog_type_test__type_is_var_1_p_0(Type_3);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__du_ctor_adjusted_arity_3_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__type_util__IntroducedFrom__pred__du_ctor_adjusted_arity__1132__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

MR_Integer MR_CALL 
hlds__type_util__du_ctor_adjusted_arity_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word DuCtor_7)
{
  MR_bool succeeded;
  MR_Integer AdjustedArity_8;
  MR_Integer ConsArity_10 = ((MR_Integer) ((MR_hl_field(0, DuCtor_7, 1))));
  MR_Word ConsDefn_12;

  succeeded = hlds__type_util__get_existq_cons_defn_4_p_0(ModuleInfo_5, Type_6, DuCtor_7, &ConsDefn_12);
  if (succeeded)
  {
    MR_Word MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 2))));

    if ((MaybeExistConstraints_15 == (MR_Word) ((MR_Unsigned) 0U)))
      AdjustedArity_8 = ConsArity_10;
    else
    {
      MR_Word ExistConstraints_18 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_15), (MR_Integer) 1));
      MR_Word ExistQTVars_19 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_18, 0))));
      MR_Word Constraints_20 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_18, 1))));
      MR_Word UnconstrainedExistQTVarsEC_21 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_18, 2))));
      MR_Integer NumTypeClassInfos_23;
      MR_Integer NumUnconstrainedExistQTVarsEC_24;
      MR_Word ConstrainedTVars_25;
      MR_Word UnconstrainedExistQTVars_26;
      MR_Integer NumTypeInfos_27;
      MR_Integer Var_28;
      MR_Word Var_29;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_20, &NumTypeClassInfos_23);
      mercury__list__length_2_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), UnconstrainedExistQTVarsEC_21, &NumUnconstrainedExistQTVarsEC_24);
      parse_tree__prog_type_scan__constraint_list_get_tvars_2_p_0(Constraints_20, &ConstrainedTVars_25);
      mercury__list__delete_elems_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), ExistQTVars_19, ConstrainedTVars_25, &UnconstrainedExistQTVars_26);
      mercury__list__length_2_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), UnconstrainedExistQTVars_26, &NumTypeInfos_27);
      Var_28 = (MR_Integer) ((MR_Unsigned) NumTypeInfos_27 + (MR_Unsigned) NumTypeClassInfos_23);
      AdjustedArity_8 = (MR_Integer) ((MR_Unsigned) Var_28 + (MR_Unsigned) ConsArity_10);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__type_util_scalar_common_2[2]));
        MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__type_util__du_ctor_adjusted_arity_3_f_0_1));
        MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_29, 3) = ((MR_Box) (NumUnconstrainedExistQTVarsEC_24));
        MR_hl_field(0, Var_29, 4) = ((MR_Box) (NumTypeInfos_27));
      }
      mercury__require__expect_3_p_0(Var_29, (MR_String) "function \140hlds.type_util.du_ctor_adjusted_arity\'/3", (MR_String) "NumTypeInfos != NumUnconstrainedExistQTVars");
    }
  }
  else
    AdjustedArity_8 = ConsArity_10;
  return AdjustedArity_8;
}

MR_bool MR_CALL 
hlds__type_util__type_is_no_tag_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word _Ctor_5;
  MR_Word _ArgType_6;

  succeeded = hlds__type_util__type_is_no_tag_type_4_p_0(ModuleInfo_3, Type_4, &_Ctor_5, &_ArgType_6);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_is_no_tag_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word * Ctor_7,
  MR_Word * ArgType_8)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_18_18;
  MR_Word TypeCtorInfo_19_19;
  MR_Word TypeCtor_9;
  MR_Word ArgTypes_10;
  MR_Word NoTagTypes_11;
  MR_Word NoTagType_12;
  MR_Word TypeParams_13;
  MR_Word ArgType0_14;
  MR_Box conv0_NoTagType_12;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_9, &ArgTypes_10);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_no_tag_types_2_p_0(ModuleInfo_5, &NoTagTypes_11);
    TypeCtorInfo_18_18 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
    TypeCtorInfo_19_19 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0);
    succeeded = mercury__map__search_3_p_0(TypeCtorInfo_18_18, TypeCtorInfo_19_19, NoTagTypes_11, ((MR_Box) (TypeCtor_9)), &conv0_NoTagType_12);
    if (succeeded)
    {
      NoTagType_12 = ((MR_Word) (conv0_NoTagType_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      TypeParams_13 = ((MR_Word) ((MR_hl_field(0, NoTagType_12, 0))));
      *Ctor_7 = ((MR_Word) ((MR_hl_field(0, NoTagType_12, 1))));
      ArgType0_14 = ((MR_Word) ((MR_hl_field(0, NoTagType_12, 2))));
      if ((TypeParams_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *ArgType_8 = ArgType0_14;
      else
      {
        MR_Word Subn_17;

        mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_13, ArgTypes_10, &Subn_17);
        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subn_17, ArgType0_14, ArgType_8);
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__cons_id_is_existq_cons_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word ConsId_6)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7;
  MR_Word ConsDefn_8;
  MR_Word Var_10;
  MR_Word Ctors_17;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_4, &Ctors_17);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_17, TypeCtor_7, ConsId_6, &ConsDefn_8);
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(0, ConsDefn_8, 4))));
      succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__get_existq_cons_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_25;

  conv0_LambdaHeadVar__2_25 = hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1080__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

MR_bool MR_CALL 
hlds__type_util__get_existq_cons_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * CtorDefn_8)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_29_29;
  MR_Word TypeCtorInfo_30_30;
  MR_Word TypeCtor_9;
  MR_Word ConsDefn_10;
  MR_Word TypeVarSet_12;
  MR_Word TypeParams_13;
  MR_Word KindMap_14;
  MR_Word MaybeExistConstraints_15;
  MR_Word Args_16;
  MR_Word ArgTypes_19;
  MR_Word TypeCtorArgs_21;
  MR_Word RetType_22;
  MR_Word Var_23;
  MR_Word Ctors_31;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_6, &TypeCtor_9);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_31);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_31, TypeCtor_9, ConsId_7, &ConsDefn_10);
    if (succeeded)
    {
      TypeVarSet_12 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 1))));
      TypeParams_13 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 2))));
      KindMap_14 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 3))));
      MaybeExistConstraints_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 4))));
      Args_16 = ((MR_Word) ((MR_hl_field(0, ConsDefn_10, 5))));
      succeeded = (MaybeExistConstraints_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeCtorInfo_29_29 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
        TypeCtorInfo_30_30 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        Var_23 = (MR_Word) (&hlds__type_util_scalar_common_3[3]);
        ArgTypes_19 = mercury__list__map_2_f_0(TypeCtorInfo_29_29, TypeCtorInfo_30_30, Var_23, Args_16);
        parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_14, TypeParams_13, &TypeCtorArgs_21);
        parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_9, TypeCtorArgs_21, &RetType_22);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *CtorDefn_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (TypeVarSet_12));
          MR_hl_field(0, base, 1) = ((MR_Box) (KindMap_14));
          MR_hl_field(0, base, 2) = ((MR_Box) (MaybeExistConstraints_15));
          MR_hl_field(0, base, 3) = ((MR_Box) (ArgTypes_19));
          MR_hl_field(0, base, 4) = ((MR_Box) (RetType_22));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__get_cons_id_repn_defn_det_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word ConsId_5,
  MR_Word * ConsRepnDefn_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_5)) == (MR_Integer) 1);
  MR_Word ConsRepnDefnPrime_8;
  MR_Word DuCtor_7;

  if (succeeded)
  {
    DuCtor_7 = (MR_Word) (MR_body((MR_Word) (ConsId_5), (MR_Integer) 1));
    succeeded = hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_4, DuCtor_7, &ConsRepnDefnPrime_8);
  }
  if (succeeded)
    *ConsRepnDefn_6 = ConsRepnDefnPrime_8;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_cons_id_repn_defn_det\'/3", (MR_String) "get_cons_repn_defn failed");
      return;
    }
}

void MR_CALL 
hlds__type_util__get_cons_repn_defn_det_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word DuCtor_5,
  MR_Word * ConsRepnDefn_6)
{
  MR_bool succeeded;
  MR_Word ConsRepnDefnPrime_7;

  succeeded = hlds__type_util__get_cons_repn_defn_3_p_0(ModuleInfo_4, DuCtor_5, &ConsRepnDefnPrime_7);
  if (succeeded)
    *ConsRepnDefn_6 = ConsRepnDefnPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_cons_repn_defn_det\'/3", (MR_String) "get_cons_repn_defn failed");
      return;
    }
}

MR_bool MR_CALL 
hlds__type_util__get_cons_repn_defn_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word DuCtor_5,
  MR_Word * UserDataCTorConsRepn_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_30_30;
  MR_Word TypeInfo_31_31;
  MR_Word ConsSymName_7 = ((MR_Word) ((MR_hl_field(0, DuCtor_5, 0))));
  MR_Integer ConsArity_8 = ((MR_Integer) ((MR_hl_field(0, DuCtor_5, 1))));
  MR_Word TypeCtor_9 = ((MR_Word) ((MR_hl_field(0, DuCtor_5, 2))));
  MR_Word TypeTable_10;
  MR_Word TypeDefn_11;
  MR_Word TypeBody_12;
  MR_Word MaybeRepn_17;
  MR_Word Repn_19;
  MR_Word ConsRepnMap_21;
  MR_String ConsName_25;
  MR_Word MatchingConsRepns_26;
  MR_Word HeadConsRepn_27;
  MR_Word TailConsRepns_28;
  MR_Word Var_29;
  MR_Box conv0_MatchingConsRepns_26;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_10);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_10, TypeCtor_9, &TypeDefn_11);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_12);
    succeeded = ((MR_tag((MR_Word) TypeBody_12)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_29 = (MR_Word) ((MR_Word) (TypeBody_12));
      MaybeRepn_17 = ((MR_Word) ((MR_hl_field(0, Var_29, 4))));
      succeeded = (MaybeRepn_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Repn_19 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_17, 0))));
        ConsRepnMap_21 = ((MR_Word) ((MR_hl_field(0, Repn_19, 1))));
        ConsName_25 = mdbcomp__sym_name__unqualify_name_1_f_0(ConsSymName_7);
        TypeCtorInfo_30_30 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        TypeInfo_31_31 = (MR_Word) (&hlds__type_util_scalar_common_1[2]);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_30_30, TypeInfo_31_31, ConsRepnMap_21, ((MR_Box) (ConsName_25)), &conv0_MatchingConsRepns_26);
        if (succeeded)
        {
          MatchingConsRepns_26 = ((MR_Word) (conv0_MatchingConsRepns_26));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          HeadConsRepn_27 = ((MR_Word) ((MR_hl_field(0, MatchingConsRepns_26, 0))));
          TailConsRepns_28 = ((MR_Word) ((MR_hl_field(0, MatchingConsRepns_26, 1))));
          succeeded = hlds__type_util__find_cons_repn_with_given_arity_4_p_0(ConsArity_8, HeadConsRepn_27, TailConsRepns_28, UserDataCTorConsRepn_6);
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__find_cons_repn_with_given_arity_4_p_0(
  MR_Integer ConsArity_5,
  MR_Word HeadConsRepn_6,
  MR_Word TailConsRepns_7,
  MR_Word * DuCtorConsRepn_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(0, HeadConsRepn_6, 5))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (ConsArity_5 == Var_17);
    if (succeeded)
    {
      *DuCtorConsRepn_8 = HeadConsRepn_6;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word HeadTailConsRepn_9;
      MR_Word TailTailConsRepns_10;
      MR_Word next_value_of_HeadConsRepn_6;
      MR_Word next_value_of_TailConsRepns_7;

      succeeded = (TailConsRepns_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadTailConsRepn_9 = ((MR_Word) ((MR_hl_field(1, TailConsRepns_7, 0))));
        TailTailConsRepns_10 = ((MR_Word) ((MR_hl_field(1, TailConsRepns_7, 1))));
        // direct tailcall eliminated
        ;
        next_value_of_HeadConsRepn_6 = HeadTailConsRepn_9;
        next_value_of_TailConsRepns_7 = TailTailConsRepns_10;
        HeadConsRepn_6 = next_value_of_HeadConsRepn_6;
        TailConsRepns_7 = next_value_of_TailConsRepns_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
hlds__type_util__get_cons_defn_det_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word DuCtor_7,
  MR_Word * ConsDefn_8)
{
  MR_bool succeeded;
  MR_Word ConsDefnPrime_9;
  MR_Word Ctors_12;

  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_12);
  succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_12, TypeCtor_6, DuCtor_7, &ConsDefnPrime_9);
  if (succeeded)
    *ConsDefn_8 = ConsDefnPrime_9;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_cons_defn_det\'/4", (MR_String) "get_cons_defn failed");
      return;
    }
}

MR_bool MR_CALL 
hlds__type_util__get_cons_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word DuCtor_7,
  MR_Word * ConsDefn_8)
{
  MR_bool succeeded;
  MR_Word Ctors_9;

  hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_9);
  succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_9, TypeCtor_6, DuCtor_7, ConsDefn_8);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__type_util__all_du_ctor_arg_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__4_4;

  succeeded = hlds__type_util__get_user_ctor_arg_types_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__all_du_ctor_arg_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * NamesAritiesArgTypes_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorArgTypes_8;
  MR_Word TypeDefn_10;
  MR_Word TypeBodyDu_12;
  MR_Word TypeCtor_7;
  MR_Word TypeTable_9;
  MR_Word TypeDefnBody_11;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_5, &TypeCtor_7, &TypeCtorArgTypes_8);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_9);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_7, &TypeDefn_10);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_10, &TypeDefnBody_11);
      succeeded = ((MR_tag((MR_Word) TypeDefnBody_11)) == (MR_Integer) 0);
      if (succeeded)
        TypeBodyDu_12 = (MR_Word) ((MR_Word) (TypeDefnBody_11));
    }
  }
  if (succeeded)
  {
    MR_Word TypeParams_13;
    MR_Word OoMCtors_14;
    MR_Word Ctors_20;
    MR_Word Var_21;

    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_10, &TypeParams_13);
    OoMCtors_14 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_12, 0))));
    Ctors_20 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_14);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__type_util_scalar_common_8[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__type_util__all_du_ctor_arg_types_3_p_0_1));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (TypeParams_13));
      MR_hl_field(0, Var_21, 4) = ((MR_Box) (TypeCtorArgTypes_8));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__type_util_scalar_common_2[0]), Var_21, Ctors_20, NamesAritiesArgTypes_6);
  }
  else
    *NamesAritiesArgTypes_6 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_bool MR_CALL 
hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 1);
  MR_Word DuCtor_9;

  if (succeeded)
  {
    DuCtor_9 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
    succeeded = hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0(ModuleInfo_5, Type_6, DuCtor_9, ArgTypes_8);
  }
  else
  {
    MR_Word ArgTypesPrime_11;
    MR_Word TypeCtor_10;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_10, &ArgTypesPrime_11);
    if (succeeded)
      succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_10);
    if (succeeded)
      *ArgTypes_8 = ArgTypesPrime_11;
    else
      *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_31;

  conv0_LambdaHeadVar__2_31 = hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__975__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
  return wrapper_arg_2;
}

MR_bool MR_CALL 
hlds__type_util__get_du_ctor_non_existential_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word DuCtor_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded;
  MR_Word TypeCtor_10;
  MR_Word TypeArgs_11;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_10, &TypeArgs_11);
  if (succeeded)
  {
    MR_Word TypeParams_15;
    MR_Word MaybeExistConstraints0_17;
    MR_Word Args_18;
    MR_Word ConsDefn_12;
    MR_Word Ctors_28;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_28);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_28, TypeCtor_10, DuCtor_7, &ConsDefn_12);
    if (succeeded)
    {
      TypeParams_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 2))));
      MaybeExistConstraints0_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 4))));
      Args_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 5))));
      succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word TypeInfo_35_25;
      MR_Word TypeCtorInfo_36_26;
      MR_Word TypeCtorInfo_37_27;
      MR_Word TSubst_22;
      MR_Word ArgTypes0_23;
      MR_Word Var_24;

      succeeded = (MaybeExistConstraints0_17 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeInfo_35_25 = (MR_Word) (&hlds__type_util_scalar_common_1[0]);
        TypeCtorInfo_36_26 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        mercury__map__from_corresponding_lists_3_p_0(TypeInfo_35_25, TypeCtorInfo_36_26, TypeParams_15, TypeArgs_11, &TSubst_22);
        TypeCtorInfo_37_27 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0);
        Var_24 = (MR_Word) (&hlds__type_util_scalar_common_3[2]);
        ArgTypes0_23 = mercury__list__map_2_f_0(TypeCtorInfo_37_27, TypeCtorInfo_36_26, Var_24, Args_18);
        parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(TSubst_22, ArgTypes0_23, ArgTypes_8);
        succeeded = MR_TRUE;
      }
    }
    else
    {
      *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__get_cons_id_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word ConsId_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_7)) == (MR_Integer) 1);
  MR_Word DuCtor_9;

  if (succeeded)
  {
    DuCtor_9 = (MR_Word) (MR_body((MR_Word) (ConsId_7), (MR_Integer) 1));
    hlds__type_util__get_du_ctor_arg_types_4_p_0(ModuleInfo_5, Type_6, DuCtor_9, ArgTypes_8);
  }
  else
  {
    MR_Word ArgTypesPrime_11;
    MR_Word TypeCtor_10;

    succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_10, &ArgTypesPrime_11);
    if (succeeded)
      succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_10);
    if (succeeded)
      *ArgTypes_8 = ArgTypesPrime_11;
    else
      *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_Box MR_CALL 
hlds__type_util__get_du_ctor_arg_types_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_31;

  conv0_LambdaHeadVar__2_31 = hlds__type_util__IntroducedFrom__func__get_user_data_arg_types_2__975__2_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_31));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__type_util__get_du_ctor_arg_types_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Type_6,
  MR_Word DuCtor_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded;
  MR_Word TypeCtor_10;
  MR_Word TypeArgs_11;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_10, &TypeArgs_11);
  if (succeeded)
  {
    MR_Word TypeParams_15;
    MR_Word MaybeExistConstraints0_17;
    MR_Word Args_18;
    MR_Word ConsDefn_12;
    MR_Word Ctors_30;

    hlds__hlds_module__module_info_get_cons_table_2_p_0(ModuleInfo_5, &Ctors_30);
    succeeded = hlds__hlds_cons__search_cons_table_of_type_ctor_4_p_0(Ctors_30, TypeCtor_10, DuCtor_7, &ConsDefn_12);
    if (succeeded)
    {
      TypeParams_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 2))));
      MaybeExistConstraints0_17 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 4))));
      Args_18 = ((MR_Word) ((MR_hl_field(0, ConsDefn_12, 5))));
      succeeded = (Args_18 != (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word TSubst_22;
      MR_Word ArgTypes0_23;

      if (!((MaybeExistConstraints0_17 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_user_data_arg_types_2\'/5", (MR_String) "existentially typed cons_id");
          return;
        }
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_15, TypeArgs_11, &TSubst_22);
      ArgTypes0_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__type_util_scalar_common_3[1]), Args_18);
      parse_tree__prog_type_subst__apply_subst_to_types_3_p_0(TSubst_22, ArgTypes0_23, ArgTypes_8);
    }
    else
      *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
    *ArgTypes_8 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_bool MR_CALL 
hlds__type_util__switch_type_num_functors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Integer * NumFunctors_6)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7;
  MR_Word Var_25;
  MR_String Var_26;
  MR_Integer Var_27;

  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_7);
  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(0, TypeCtor_7, 0))));
    Var_27 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_7, 1))));
    succeeded = (Var_27 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = ((MR_String) ((MR_hl_field(0, Var_25, 0))));
        succeeded = (strcmp(Var_26, (MR_String) "character") == 0);
      }
    }
    if (succeeded)
    {
      MR_Word Globals_8;
      MR_Word Target_9;
      MR_Integer MinChar_10;
      MR_Integer MaxChar_11;
      MR_Integer Var_28;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_8);
      libs__globals__get_target_2_p_0(Globals_8, &Target_9);
      backend_libs__string_encoding__target_char_range_3_p_0(Target_9, &MinChar_10, &MaxChar_11);
      Var_28 = (MR_Integer) ((MR_Unsigned) MaxChar_11 - (MR_Unsigned) MinChar_10);
      *NumFunctors_6 = (MR_Integer) ((MR_Unsigned) Var_28 + (MR_Unsigned) 1);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer NumFunctors0_13;
      MR_String IntType_12;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, TypeCtor_7, 0))));
      MR_Integer Var_31 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_7, 1))));
      MR_Integer lo_0;
      MR_Integer hi_1;
      MR_Integer mid_2;
      MR_Integer result_3;

      succeeded = (Var_31 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
        if (succeeded)
        {
          IntType_12 = ((MR_String) ((MR_hl_field(0, Var_30, 0))));
          // binary string simple lookup switch
          ;
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(IntType_12, ((&hlds__type_util_vector_common_7[0 + mid_2]))->hlds__type_util__vector_common_type_7_0__vct_7_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              NumFunctors0_13 = ((&hlds__type_util_vector_common_7[0 + mid_2]))->hlds__type_util__vector_common_type_7_0__vct_7_f_1;
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
      if (succeeded)
      {
        *NumFunctors_6 = NumFunctors0_13;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_7);
        if (succeeded)
        {
          *NumFunctors_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_35_35;
          MR_Word TypeTable_14;
          MR_Word TypeDefn_15;
          MR_Word TypeBody_16;
          MR_Word OoMConstructors_17;
          MR_Word TailCtors_24;
          MR_Word Var_32;
          MR_Integer Var_33;
          MR_Integer Var_34;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_14);
          succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_14, TypeCtor_7, &TypeDefn_15);
          if (succeeded)
          {
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &TypeBody_16);
            succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_32 = (MR_Word) ((MR_Word) (TypeBody_16));
              OoMConstructors_17 = ((MR_Word) ((MR_hl_field(0, Var_32, 0))));
              TailCtors_24 = ((MR_Word) ((MR_hl_field(0, OoMConstructors_17, 1))));
              Var_33 = (MR_Integer) 1;
              TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
              Var_34 = mercury__list__length_1_f_0(TypeCtorInfo_35_35, TailCtors_24);
              *NumFunctors_6 = (MR_Integer) ((MR_Unsigned) Var_33 + (MR_Unsigned) Var_34);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__get_supertype_5_p_0(
  MR_Word TypeTable_6,
  MR_Word TVarSet_7,
  MR_Word TypeCtor_8,
  MR_Word ArgTypes_9,
  MR_Word * SuperType_10)
{
  MR_bool succeeded;
  MR_Word TypeDefn_11;
  MR_Word TypeBodyDu_12;
  MR_Word SuperType0_15;
  MR_Word Var_19;
  MR_Word TypeBody_20;

  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_6, TypeCtor_8, &TypeDefn_11);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_20);
    succeeded = ((MR_tag((MR_Word) TypeBody_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      TypeBodyDu_12 = (MR_Word) ((MR_Word) (TypeBody_20));
      Var_19 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_12, 2))));
      succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SuperType0_15 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
        hlds__type_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_117_112_101_114_116_121_112_101_95_111_102_95_115_117_98_116_121_112_101_95_95_91_50_93_95_48_6_p_0(TVarSet_7, ArgTypes_9, TypeDefn_11, SuperType0_15, SuperType_10);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__type_util__get_supertype_of_subtype_6_p_0(
  MR_Word TVarSet_7,
  MR_Word _TypeCtor_8,
  MR_Word ArgTypes_9,
  MR_Word TypeDefn_10,
  MR_Word SuperType0_11,
  MR_Word * SuperType_12)
{
  hlds__type_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_117_112_101_114_116_121_112_101_95_111_102_95_115_117_98_116_121_112_101_95_95_91_50_93_95_48_6_p_0(TVarSet_7, ArgTypes_9, TypeDefn_10, SuperType0_11, SuperType_12);
}

void MR_CALL 
hlds__type_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_115_117_112_101_114_116_121_112_101_95_111_102_95_115_117_98_116_121_112_101_95_95_91_50_93_95_48_6_p_0(
  MR_Word TVarSet_7,
  MR_Word ArgTypes_9,
  MR_Word TypeDefn_10,
  MR_Word SuperType0_11,
  MR_Word * SuperType_12)
{
  MR_Word TVarSet0_13;
  MR_Word TypeParams0_14;
  MR_Word Renaming_16;
  MR_Word TypeParams_17;
  MR_Word TSubst_18;
  MR_Word SuperType1_19;
  MR_Word _NewTVarSet_15;

  hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_10, &TVarSet0_13);
  hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_10, &TypeParams0_14);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_7, TVarSet0_13, &_NewTVarSet_15, &Renaming_16);
  parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(Renaming_16, TypeParams0_14, &TypeParams_17);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_17, ArgTypes_9, &TSubst_18);
  parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_16, SuperType0_11, &SuperType1_19);
  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_18, SuperType1_19, SuperType_12);
}

MR_bool MR_CALL 
hlds__type_util__get_base_type_ctor_3_p_0(
  MR_Word TypeTable_4,
  MR_Word TypeCtor_5,
  MR_Word * BaseTypeCtor_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeDefn_7;
    MR_Word TypeBody_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_4, TypeCtor_5, &TypeDefn_7);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, &TypeBody_8);
      switch (MR_tag((MR_Word) TypeBody_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeBodyDu_9 = (MR_Word) ((MR_Word) (TypeBody_8));
            MR_Word MaybeSuperType_12 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_9, 2))));

            if ((MaybeSuperType_12 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *BaseTypeCtor_6 = TypeCtor_5;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word SuperType_16 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_12, 0))));
              MR_Word SuperTypeCtor_17;
              MR_Word next_value_of_TypeCtor_5;

              succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(SuperType_16, &SuperTypeCtor_17);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_TypeCtor_5 = SuperTypeCtor_17;
                TypeCtor_5 = next_value_of_TypeCtor_5;
                continue;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_base_type_ctor\'/3", (MR_String) "foreign type");
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word EqvType_20 = ((MR_Word) ((MR_hl_field(2, TypeBody_8, 0))));
            MR_Word EqvTypeCtor_21;
            MR_Word next_value_of_TypeCtor_5;

            succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(EqvType_20, &EqvTypeCtor_21);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_TypeCtor_5 = EqvTypeCtor_21;
              TypeCtor_5 = next_value_of_TypeCtor_5;
              continue;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeBody_8, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_base_type_ctor\'/3", (MR_String) "solver type");
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AbstractDetails_18 = ((MR_Word) ((MR_hl_field(3, TypeBody_8, 1))));

                switch (MR_tag((MR_Word) AbstractDetails_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(AbstractDetails_18)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                        {
                          *BaseTypeCtor_6 = TypeCtor_5;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.type_util.get_base_type_ctor\'/3", (MR_String) "abstract solver type");
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word SuperTypeCtor_30 = (MR_Word) (MR_body((MR_Word) (AbstractDetails_18), (MR_Integer) 1));
                      MR_Word next_value_of_TypeCtor_5 = SuperTypeCtor_30;

                      // direct tailcall eliminated
                      ;
                      TypeCtor_5 = next_value_of_TypeCtor_5;
                      continue;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      *BaseTypeCtor_6 = TypeCtor_5;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(
  MR_Word Type_3,
  MR_Word Body_4)
{
  MR_bool succeeded;
  MR_String Name_5;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Type_3, 0))));
  MR_Word Var_20;
  MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(0, Type_3, 1))));
  MR_Word Var_22;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(1, Var_19, 0))));
    Name_5 = ((MR_String) ((MR_hl_field(1, Var_19, 1))));
    Var_22 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_20, Var_22);
    if (succeeded)
    {
      succeeded = (Var_21 == (MR_Integer) 0);
      if (succeeded)
      {
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Name_5, ((&hlds__type_util_vector_common_6[0 + mid_2]))->hlds__type_util__vector_common_type_6_0__vct_6_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
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
        if (succeeded)
          switch (MR_tag((MR_Word) Body_4)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                MR_Word TypeBodyDu_6 = (MR_Word) ((MR_Word) (Body_4));
                MR_Word IsForeignType_12 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_6, 5))));

                succeeded = (IsForeignType_12 == (MR_Word) ((MR_Unsigned) 0U));
              }
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Body_4, 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
          }
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
hlds__type_util__is_either_type_a_dummy_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeA_6,
  MR_Word TypeB_7)
{
  MR_Word IsDummy_8;
  MR_Word TypeTable_9;
  MR_Word IsDummyA_10;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_9);
  IsDummyA_10 = hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_9, TypeA_6, (MR_Word) ((MR_Unsigned) 0U));
  switch (IsDummyA_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      IsDummy_8 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word IsDummyB_11;

        IsDummyB_11 = hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_9, TypeB_7, (MR_Word) ((MR_Unsigned) 0U));
        switch (IsDummyB_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsDummy_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            IsDummy_8 = (MR_Integer) 1;
            break;
        }
      }
      break;
  }
  return IsDummy_8;
}

MR_Word MR_CALL 
hlds__type_util__is_type_a_dummy_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5)
{
  MR_Word IsDummy_6;
  MR_Word TypeTable_7;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
  IsDummy_6 = hlds__type_util__is_type_a_dummy_loop_3_f_0(TypeTable_7, Type_5, (MR_Word) ((MR_Unsigned) 0U));
  return IsDummy_6;
}

static MR_Word MR_CALL 
hlds__type_util__is_type_a_dummy_loop_3_f_0(
  MR_Word TypeTable_5,
  MR_Word Type_6,
  MR_Word CoveredTypes_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word IsDummy_8;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Type_6)), CoveredTypes_7);
    if (succeeded)
      IsDummy_8 = (MR_Integer) 1;
    else
    {
      MR_Word TypeCtor_9;
      MR_Word ArgTypes_10;

      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_6, &TypeCtor_9, &ArgTypes_10);
      if (succeeded)
      {
        MR_Word IsBuiltinDummy_11;

        IsBuiltinDummy_11 = parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(TypeCtor_9);
        switch (IsBuiltinDummy_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsDummy_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            IsDummy_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeDefn_12;

              succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_5, TypeCtor_9, &TypeDefn_12);
              if (succeeded)
              {
                MR_Word TypeBody_13;

                hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_12, &TypeBody_13);
                switch (MR_tag((MR_Word) TypeBody_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word TypeBodyDu_14 = (MR_Word) ((MR_Word) (TypeBody_13));
                      MR_Word MaybeTypeRepn_19 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_14, 4))));

                      if ((MaybeTypeRepn_19 == (MR_Word) ((MR_Unsigned) 0U)))
                        IsDummy_8 = (MR_Integer) 0;
                      else
                      {
                        MR_Word TypeRepn_21 = ((MR_Word) ((MR_hl_field(1, MaybeTypeRepn_19, 0))));
                        MR_Word DuTypeKind_22 = ((MR_Word) ((MR_hl_field(0, TypeRepn_21, 3))));

                        switch (MR_tag((MR_Word) DuTypeKind_22)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            switch (MR_unmkbody(DuTypeKind_22)) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                              case (MR_Integer) 2:
                                IsDummy_8 = (MR_Integer) 1;
                                break;
                              case (MR_Integer) 1:
                                IsDummy_8 = (MR_Integer) 0;
                                break;
                            }
                            break;
                          case (MR_Integer) 1:
                            IsDummy_8 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word SingleArgTypeInDefn_25 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_22, 1))));
                              MR_Word TypeParams_27;
                              MR_Word Subst_28;
                              MR_Word SingleArgType_29;
                              MR_Word Var_40;
                              MR_Word next_value_of_Type_6;
                              MR_Word next_value_of_CoveredTypes_7;

                              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_12, &TypeParams_27);
                              mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_27, ArgTypes_10, &Subst_28);
                              parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_28, SingleArgTypeInDefn_25, &SingleArgType_29);
                              {
                                Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(1, Var_40, 0) = ((MR_Box) (Type_6));
                                MR_hl_field(1, Var_40, 1) = ((MR_Box) (CoveredTypes_7));
                              }
                              // direct tailcall eliminated
                              ;
                              next_value_of_Type_6 = SingleArgType_29;
                              next_value_of_CoveredTypes_7 = Var_40;
                              Type_6 = next_value_of_Type_6;
                              CoveredTypes_7 = next_value_of_CoveredTypes_7;
                              continue;
                            }
                            break;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    IsDummy_8 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, TypeBody_13, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        IsDummy_8 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word AbstractDetails_30 = ((MR_Word) ((MR_hl_field(3, TypeBody_13, 1))));

                          switch (MR_tag((MR_Word) AbstractDetails_30)) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              switch (MR_unmkbody(AbstractDetails_30)) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 0:
                                case (MR_Integer) 2:
                                case (MR_Integer) 3:
                                  IsDummy_8 = (MR_Integer) 1;
                                  break;
                                case (MR_Integer) 1:
                                  IsDummy_8 = (MR_Integer) 0;
                                  break;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                MR_Word SuperTypeCtor_32 = (MR_Word) (MR_body((MR_Word) (AbstractDetails_30), (MR_Integer) 1));
                                MR_Integer Arity_34 = ((MR_Integer) ((MR_hl_field(0, SuperTypeCtor_32, 1))));
                                MR_Word FakeArgTypes_35;
                                MR_Word SuperType_36;
                                MR_Word Var_41;
                                MR_Word Var_42;
                                MR_Word next_value_of_Type_6;
                                MR_Word next_value_of_CoveredTypes_7;

                                Var_41 = parse_tree__builtin_lib_types__int_type_0_f_0();
                                mercury__list__duplicate_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Arity_34, ((MR_Box) (Var_41)), &FakeArgTypes_35);
                                parse_tree__prog_type_construct__construct_type_3_p_0(SuperTypeCtor_32, FakeArgTypes_35, &SuperType_36);
                                {
                                  Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Var_42, 0) = ((MR_Box) (Type_6));
                                  MR_hl_field(1, Var_42, 1) = ((MR_Box) (CoveredTypes_7));
                                }
                                // direct tailcall eliminated
                                ;
                                next_value_of_Type_6 = SuperType_36;
                                next_value_of_CoveredTypes_7 = Var_42;
                                Type_6 = next_value_of_Type_6;
                                CoveredTypes_7 = next_value_of_CoveredTypes_7;
                                continue;
                              }
                              break;
                            case (MR_Integer) 2:
                              IsDummy_8 = (MR_Integer) 1;
                              break;
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              else
                IsDummy_8 = (MR_Integer) 1;
            }
            break;
        }
      }
      else
        IsDummy_8 = (MR_Integer) 1;
    }
    return IsDummy_8;
    break;
  }
}

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9 = ((MR_Word) ((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9));
  hlds__type_util__type_is_existq_type_2_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) (env_ptr_arg);

  {
    uint32_t Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Integer Var_13;
    MR_Word Var_14;
    MR_Word Var_7;

    (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_9, 1))));
    (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = ((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Var_8 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
      hlds__type_util__type_is_existq_type_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s * env_ptr = (struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), &(env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_9, (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5, hlds__type_util__type_is_existq_type_2_p_0_3, env_ptr);
      (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
hlds__type_util__type_is_existq_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  struct hlds__type_util__type_is_existq_type_2_p_0_env_0_s env;

  (env).hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = hlds__type_util__type_constructors_3_p_0(ModuleInfo_3, Type_4, &(env).hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5);
  if ((env).hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
    hlds__type_util__type_is_existq_type_2_p_0_4(&env);
  return (env).hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
}

static MR_Box MR_CALL 
hlds__type_util__type_constructors_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_20;

  conv0_LambdaHeadVar__2_20 = hlds__type_util__IntroducedFrom__func__type_constructors__801__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_20));
  return wrapper_arg_2;
}

MR_bool MR_CALL 
hlds__type_util__type_constructors_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * Constructors_6)
{
  MR_bool succeeded;
  MR_Word TypeCtor_7;
  MR_Word ArgTypes_8;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_5, &TypeCtor_7, &ArgTypes_8);
  if (succeeded)
  {
    succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_7);
    if (succeeded)
    {
      MR_Word Context_10;
      MR_Word CtorArgs_11;
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Integer Var_26;

      Context_10 = mercury__term_context__dummy_context_0_f_0();
      {
        Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_18, 0) = ((MR_Box) (&hlds__type_util_scalar_common_5[0]));
        MR_hl_field(0, Var_18, 1) = ((MR_Box) (hlds__type_util__type_constructors_3_p_0_1));
        MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_18, 3) = ((MR_Box) (Context_10));
      }
      CtorArgs_11 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), Var_18, ArgTypes_8);
      Var_26 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), CtorArgs_11);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (MR_Word) (UINT32_C(0)));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) (&hlds__type_util_scalar_common_4[1]));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (CtorArgs_11));
        MR_hl_field(0, Var_22, 4) = ((MR_Box) (Var_26));
        MR_hl_field(0, Var_22, 5) = ((MR_Box) (Context_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Constructors_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_22));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_38_38;
      MR_Word TypeTable_13;
      MR_Word TypeDefn_14;
      MR_Word TypeParams_15;
      MR_Word TypeBody_16;
      MR_Word TypeBodyDu_17;
      MR_Word Var_28;
      MR_Word Var_29;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_13);
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_13, TypeCtor_7, &TypeDefn_14);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_14, &TypeParams_15);
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_16);
        succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_Integer) 0);
        if (succeeded)
        {
          TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_16));
          TypeCtorInfo_38_38 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
          Var_29 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, 0))));
          Var_28 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_38_38, Var_29);
          if ((TypeParams_15 == (MR_Word) ((MR_Unsigned) 0U)))
            *Constructors_6 = Var_28;
          else
          {
            MR_Word Subst_41;

            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__type_util_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_15, ArgTypes_8, &Subst_41);
            hlds__type_util__substitute_type_args_ctors_3_p_0(Subst_41, Var_28, Constructors_6);
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__type_util__substitute_type_args_ctors_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Ctor0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Ctors0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Ctor_8;
    MR_Word Ctors_9;
    uint32_t Ordinal_10 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_6, 0)));
    MR_Word MaybeExistConstraints_11 = ((MR_Word) ((MR_hl_field(0, Ctor0_6, 1))));
    MR_Word Name_12 = ((MR_Word) ((MR_hl_field(0, Ctor0_6, 2))));
    MR_Word Args0_13 = ((MR_Word) ((MR_hl_field(0, Ctor0_6, 3))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, Ctor0_6, 4))));
    MR_Word Ctxt_15 = ((MR_Word) ((MR_hl_field(0, Ctor0_6, 5))));
    MR_Word Args_16;

    hlds__type_util__substitute_type_args_ctor_args_3_p_0(Subst_1, Args0_13, &Args_16);
    {
      Ctor_8 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Ctor_8, 0) = ((MR_Box) (MR_Word) (Ordinal_10));
      MR_hl_field(0, Ctor_8, 1) = ((MR_Box) (MaybeExistConstraints_11));
      MR_hl_field(0, Ctor_8, 2) = ((MR_Box) (Name_12));
      MR_hl_field(0, Ctor_8, 3) = ((MR_Box) (Args_16));
      MR_hl_field(0, Ctor_8, 4) = ((MR_Box) (Arity_14));
      MR_hl_field(0, Ctor_8, 5) = ((MR_Box) (Ctxt_15));
    }
    hlds__type_util__substitute_type_args_ctors_3_p_0(Subst_1, Ctors0_7, &Ctors_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Ctor_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Ctors_9));
    }
  }
}

static void MR_CALL 
hlds__type_util__substitute_type_args_ctor_args_3_p_0(
  MR_Word Subst_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Arg0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Args0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Arg_8;
    MR_Word Args_9;
    MR_Word ArgType_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, Arg0_6, 1))));
    MR_Word Var_14;
    MR_Word Var_16;

    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_1, Var_11, &ArgType_10);
    Var_14 = ((MR_Word) ((MR_hl_field(0, Arg0_6, 0))));
    Var_16 = ((MR_Word) ((MR_hl_field(0, Arg0_6, 2))));
    {
      Arg_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Arg_8, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, Arg_8, 1) = ((MR_Box) (ArgType_10));
      MR_hl_field(0, Arg_8, 2) = ((MR_Box) (Var_16));
    }
    hlds__type_util__substitute_type_args_ctor_args_3_p_0(Subst_1, Args0_7, &Args_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Args_9));
    }
  }
}

MR_bool MR_CALL 
hlds__type_util__type_is_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  MR_bool succeeded;
  MR_Word TypeBody_5;
  MR_Word TypeDefn_6;
  MR_Word TypeTable_7;
  MR_Word TypeCtor_8;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_7);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_8);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_8, &TypeDefn_6);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_6, &TypeBody_5);
      succeeded = hlds__type_util__type_body_is_solver_type_2_p_0(ModuleInfo_3, TypeBody_5);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_body_is_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word TypeBody_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeBody_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_10 = ((MR_Word) ((MR_hl_field(2, TypeBody_4, 0))));
          MR_Word TypeBody_13;
          MR_Word TypeDefn_14;
          MR_Word TypeTable_15;
          MR_Word TypeCtor_16;
          MR_Word next_value_of_TypeBody_4;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_15);
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_10, &TypeCtor_16);
          if (succeeded)
          {
            succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_15, TypeCtor_16, &TypeDefn_14);
            if (succeeded)
            {
              hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_14, &TypeBody_13);
              // direct tailcall eliminated
              ;
              next_value_of_TypeBody_4 = TypeBody_13;
              TypeBody_4 = next_value_of_TypeBody_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeBody_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractType_7 = ((MR_Word) ((MR_hl_field(3, TypeBody_4, 1))));

              succeeded = (AbstractType_7 == (MR_Word) ((MR_Unsigned) 12U));
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTable_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word Type_7;

  parse_tree__var_table__lookup_var_type_3_p_0(VarTable_5, Var_6, &Type_7);
  succeeded = hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(ModuleInfo_4, Type_7);
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word Type_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Type_4);
    if (!(succeeded))
    {
      MR_Word TypeBody_5;
      MR_Word TypeDefn_9;
      MR_Word TypeTable_10;
      MR_Word TypeCtor_11;

      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_10);
      succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_4, &TypeCtor_11);
      if (succeeded)
      {
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_10, TypeCtor_11, &TypeDefn_9);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_5);
          switch (MR_tag((MR_Word) TypeBody_5)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word EqvType_7 = ((MR_Word) ((MR_hl_field(2, TypeBody_5, 0))));
                MR_Word next_value_of_Type_4 = EqvType_7;

                // direct tailcall eliminated
                ;
                Type_4 = next_value_of_Type_4;
                continue;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, TypeBody_5, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(3, TypeBody_5, 1))));

                    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 12U));
                  }
                  break;
              }
              break;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
hlds__type_util__type_has_user_defined_equality_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * UserEqComp_6)
{
  MR_bool succeeded;
  MR_Word TypeBody_7;
  MR_Word TypeDefn_8;
  MR_Word TypeTable_9;
  MR_Word TypeCtor_10;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_9);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_10);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_9, TypeCtor_10, &TypeDefn_8);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_8, &TypeBody_7);
      succeeded = hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, TypeBody_7, UserEqComp_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeBody_5,
  MR_Word * NonCanonical_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TypeBody_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_7 = (MR_Word) ((MR_Word) (TypeBody_5));
        MR_Word MaybeForeignType_13 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_7, 5))));
        MR_Word ForeignTypeBody_14;
        MR_Word Globals_15;
        MR_Word Target_16;
        MR_Word Var_21;
        MR_Word Var_30;

        succeeded = (MaybeForeignType_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ForeignTypeBody_14 = ((MR_Word) ((MR_hl_field(1, MaybeForeignType_13, 0))));
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_15);
          libs__globals__get_target_2_p_0(Globals_15, &Target_16);
          Var_21 = (MR_Integer) 1;
          backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_16, ForeignTypeBody_14, &Var_30);
          succeeded = (Var_21 == Var_30);
        }
        if (succeeded)
          succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_4, ForeignTypeBody_14, NonCanonical_6);
        else
        {
          MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_7, 3))));

          succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            *NonCanonical_6 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ForeignTypeBody_24 = (MR_Word) (MR_body((MR_Word) (TypeBody_5), (MR_Integer) 1));

        succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(ModuleInfo_4, ForeignTypeBody_24, NonCanonical_6);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_5, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word DetailsSolver_17 = ((MR_Word) ((MR_hl_field(3, TypeBody_5, 1))));
            MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, DetailsSolver_17, 1))));

            succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              *NonCanonical_6 = ((MR_Word) ((MR_hl_field(1, Var_23, 0))));
          }
          break;
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_to_type_defn_body_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * TypeBody_6)
{
  MR_bool succeeded;
  MR_Word TypeDefn_7;
  MR_Word TypeTable_8;
  MR_Word TypeCtor_9;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_8);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_9);
  if (succeeded)
  {
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_9, &TypeDefn_7);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_7, TypeBody_6);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__type_util__type_to_type_defn_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word * TypeDefn_6)
{
  MR_bool succeeded;
  MR_Word TypeTable_7;
  MR_Word TypeCtor_8;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
  succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_5, &TypeCtor_8);
  if (succeeded)
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_8, TypeDefn_6);
  return succeeded;
}

void MR_CALL 
hlds__type_util__type_ctor_module_name_arity_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * ModuleName_7,
  MR_String * Name_8,
  MR_Integer * Arity_6)
{
  MR_Word TypeSymName_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  *Arity_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  mdbcomp__sym_name__sym_name_get_module_name_default_name_4_p_0(TypeSymName_5, (MR_Word) (&hlds__type_util_scalar_common_4[0]), ModuleName_7, Name_8);
}

MR_Integer MR_CALL 
hlds__type_util__type_ctor_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));

  return Arity_4;
}

MR_String MR_CALL 
hlds__type_util__type_ctor_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word TypeSymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  HeadVar__2_2 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
hlds__type_util__type_ctor_module_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word ModuleName_5;
  MR_Word TypeSymName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

  mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(TypeSymName_3, (MR_Word) (&hlds__type_util_scalar_common_4[0]), &ModuleName_5);
  return ModuleName_5;
}

static MR_bool MR_CALL 
hlds__type_util____Unify____ctor_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__type_util____Unify____ctor_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__type_util____Compare____ctor_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__type_util____Compare____ctor_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__type_util____Unify____exist_qvar_action_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__type_util____Unify____exist_qvar_action_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__type_util____Compare____exist_qvar_action_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__type_util____Compare____exist_qvar_action_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__type_util____Unify____is_either_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__type_util____Unify____is_either_dummy_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__type_util____Compare____is_either_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__type_util____Compare____is_either_dummy_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__type_util__init(void)
{
}

void mercury__hlds__type_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__type_util__hlds__type_util__type_ctor_info_ctor_defn_0);
  MR_register_type_ctor_info(&hlds__type_util__hlds__type_util__type_ctor_info_exist_qvar_action_0);
  MR_register_type_ctor_info(&hlds__type_util__hlds__type_util__type_ctor_info_is_either_dummy_type_0);
}

void mercury__hlds__type_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__type_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.type_util.
