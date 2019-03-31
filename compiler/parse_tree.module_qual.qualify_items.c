/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version rotd-2019-03-31
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


// :- module parse_tree.module_qual.qualify_items.
// :- implementation.

/*
INIT mercury__parse_tree__module_qual__qualify_items__init
ENDINIT
*/

#include "parse_tree.module_qual.qualify_items.mih"


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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
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
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(
  MR_Word InInt_11,
  MR_String EventName_12,
  MR_String FileName_13,
  MR_Integer LineNumber_14,
  MR_Word Attr0_15,
  MR_Word * Attr_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word DefaultModuleName_4,
  MR_Word InstanceMethod0_5,
  MR_Word * InstanceMethod_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_event_specs_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(
  MR_Word InInt_8,
  MR_Word Item0_9,
  MR_Word * Item_10,
  MR_Word STATE_VARIABLE_Info_0_126,
  MR_Word * STATE_VARIABLE_Info_127,
  MR_Word STATE_VARIABLE_Specs_0_128,
  MR_Word * STATE_VARIABLE_Specs_129);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_109,
  MR_Word * STATE_VARIABLE_Info_110,
  MR_Word STATE_VARIABLE_Specs_0_111,
  MR_Word * STATE_VARIABLE_Specs_112);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word UserSharing0_11,
  MR_Word * UserSharing_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_spec_subst_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_37,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_pragma_vars_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_51,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemMutable0_9,
  MR_Word * ItemMutable_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(
  MR_Word ClassName_4,
  MR_Word InstanceBody0_5,
  MR_Word * InstanceBody_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_class_methods_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Method0_11,
  MR_Word * Method_12,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Class0_11,
  MR_Word * Name_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(
  MR_Word InInt_9,
  MR_Word ConstraintErrorContext_10,
  MR_Word Constraints0_11,
  MR_Word * Constraints_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_types_and_modes_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_56,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word TypeCtor0_11,
  MR_Word * TypeCtor_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word TypeCtor_12,
  MR_Word TypeDefn0_13,
  MR_Word * TypeDefn_14,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_constructors_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_66,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_prog_constraint_list_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_71,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_constructor_args_1_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_61,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_constraint_stores_1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_65,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HOInstInfo0_11,
  MR_Word * HOInstInfo_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * AddrOfInst_87,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_91,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_list_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_ho_inst_info_1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HOInstInfo0_11,
  MR_Word * AddrOfHOInstInfo_28,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_name_1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word InstName0_11,
  MR_Word * AddrOfInstName_58,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);


static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[1][8];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[13][1];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[1][13];




static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[13][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "int16"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "int32"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "int64"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "int8"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "uint"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "uint16"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "uint32"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "uint64"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "uint8"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(
  MR_Word InInt_11,
  MR_String EventName_12,
  MR_String FileName_13,
  MR_Integer LineNumber_14,
  MR_Word Attr0_15,
  MR_Word * Attr_16,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Integer AttrNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 0))));
    MR_String AttrName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 1))));
    MR_Word AttrType0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 2))));
    MR_Word AttrMode0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 3))));
    MR_Word MaybeSynthCall_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Attr0_15, (MR_Integer) 4))));
    MR_Word Context_24;
    MR_Word ErrorContext_25;
    MR_Word AttrType_26;
    MR_Word AttrMode_27;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Specs_33_33;

    {
      Context_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Context_24, 0) = ((MR_Box) (FileName_13));
      MR_hl_field(MR_mktag(0), Context_24, 1) = ((MR_Box) (LineNumber_14));
    }
    {
      ErrorContext_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_25, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), ErrorContext_25, 1) = ((MR_Box) (Context_24));
      MR_hl_field(MR_mktag(3), ErrorContext_25, 2) = ((MR_Box) (EventName_12));
      MR_hl_field(MR_mktag(3), ErrorContext_25, 3) = ((MR_Box) (AttrName_20));
    }
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_11, ErrorContext_25, AttrType0_21, &AttrType_26, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_30, &STATE_VARIABLE_Specs_33_33);
    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_11, ErrorContext_25, AttrMode0_22, &AttrMode_27, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_29, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_31);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Attr_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AttrNum_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (AttrName_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AttrType_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (AttrMode_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeSynthCall_23));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word DefaultModuleName_4,
  MR_Word InstanceMethod0_5,
  MR_Word * InstanceMethod_6)
{
  {
    MR_bool succeeded;
    MR_Word PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word MethodSymName0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 1))));
    MR_Word InstanceProcDef_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 2))));
    MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 3))));
    MR_Word DeclContext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceMethod0_5, (MR_Integer) 4))));
    MR_Word MethodSymName_13;

    if (((MR_tag((MR_Word) MethodSymName0_8)) == (MR_Integer) 1))
    {
      MR_Word MethodModuleName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MethodSymName0_8, (MR_Integer) 0))));
      MR_String MethodBaseName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MethodSymName0_8, (MR_Integer) 1))));

      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(MethodModuleName_14, DefaultModuleName_4);
      if (succeeded)
        {
          MethodSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MethodSymName_13, 0) = ((MR_Box) (DefaultModuleName_4));
          MR_hl_field(MR_mktag(1), MethodSymName_13, 1) = ((MR_Box) (MethodBaseName_15));
        }
      else
        MethodSymName_13 = MethodSymName0_8;
    }
    else
    {
      MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), MethodSymName0_8, (MR_Integer) 0))));

      {
        MethodSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MethodSymName_13, 0) = ((MR_Box) (DefaultModuleName_4));
        MR_hl_field(MR_mktag(1), MethodSymName_13, 1) = ((MR_Box) (Name_12));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *InstanceMethod_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MethodSymName_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (InstanceProcDef_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Arity_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (DeclContext_11));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Attr_16;
    MR_Word conv1_STATE_VARIABLE_Info_29;
    MR_Word conv0_STATE_VARIABLE_Specs_31;

    parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Attr_16, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_31);
    *wrapper_arg_2 = ((MR_Box) (conv2_Attr_16));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_29));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_31));
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_String Name_19;
    MR_Word Spec0_20;
    MR_Word NameSpecs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Spec_22;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Integer EventNumber_46;
    MR_String EventName_47;
    MR_Integer EventLineNumber_48;
    MR_Word Attrs0_49;
    MR_Word SynthAttrNumOrder_50;
    MR_Word Attrs_51;
    MR_Word Var_52;
    MR_Box conv4_STATE_VARIABLE_Info_32_32;
    MR_Box conv3_STATE_VARIABLE_Specs_33_33;
    MR_Word * AddrNameSpecs_64;

    Name_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
    Spec0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
    EventNumber_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 0))));
    EventName_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 1))));
    EventLineNumber_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 2))));
    Attrs0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 3))));
    SynthAttrNumOrder_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 4))));
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (EventName_47));
      MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (FileName_2));
      MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (EventLineNumber_48));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Var_52, Attrs0_49, &Attrs_51, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_33_33);
    STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_32_32));
    STATE_VARIABLE_Specs_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_33_33));
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (EventNumber_46));
      MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (EventName_47));
      MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (EventLineNumber_48));
      MR_hl_field(MR_mktag(0), Spec_22, 3) = ((MR_Box) (Attrs_51));
      MR_hl_field(MR_mktag(0), Spec_22, 4) = ((MR_Box) (SynthAttrNumOrder_50));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_19));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Spec_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrNameSpecs_64 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_event_specs_1_8_p_0(HeadVar__1_1, FileName_2, NameSpecs0_21, AddrNameSpecs_64, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_event_specs_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Attr_16;
    MR_Word conv1_STATE_VARIABLE_Info_29;
    MR_Word conv0_STATE_VARIABLE_Specs_31;

    parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv2_Attr_16, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_29, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Specs_31);
    *wrapper_arg_2 = ((MR_Box) (conv2_Attr_16));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_29));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_31));
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_event_specs_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_65,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_65 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_String Name_19;
      MR_Word Spec0_20;
      MR_Word NameSpecs0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Spec_22;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Integer EventNumber_46;
      MR_String EventName_47;
      MR_Integer EventLineNumber_48;
      MR_Word Attrs0_49;
      MR_Word SynthAttrNumOrder_50;
      MR_Word Attrs_51;
      MR_Word Var_52;
      MR_Box conv4_STATE_VARIABLE_Info_32_32;
      MR_Box conv3_STATE_VARIABLE_Specs_33_33;
      MR_Word * AddrNameSpecs_64;
      MR_Word HeadVar__4_66;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_65;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      Name_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      Spec0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      EventNumber_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 0))));
      EventName_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 1))));
      EventLineNumber_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 2))));
      Attrs0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 3))));
      SynthAttrNumOrder_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec0_20, (MR_Integer) 4))));
      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMCpr_qualify_event_specs_1_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) (EventName_47));
        MR_hl_field(MR_mktag(0), Var_52, 5) = ((MR_Box) (FileName_2));
        MR_hl_field(MR_mktag(0), Var_52, 6) = ((MR_Box) (EventLineNumber_48));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_attribute_0), (MR_Word) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[3]), Var_52, Attrs0_49, &Attrs_51, ((MR_Box) (STATE_VARIABLE_Info_0_5)), &conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (STATE_VARIABLE_Specs_0_7)), &conv3_STATE_VARIABLE_Specs_33_33);
      STATE_VARIABLE_Info_32_32 = ((MR_Word) (conv4_STATE_VARIABLE_Info_32_32));
      STATE_VARIABLE_Specs_33_33 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_33_33));
      {
        Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (EventNumber_46));
        MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) (EventName_47));
        MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (EventLineNumber_48));
        MR_hl_field(MR_mktag(0), Spec_22, 3) = ((MR_Box) (Attrs_51));
        MR_hl_field(MR_mktag(0), Spec_22, 4) = ((MR_Box) (SynthAttrNumOrder_50));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_19));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Spec_22));
      }
      {
        HeadVar__4_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_66, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), HeadVar__4_66, 1) = NULL;
      }
      AddrNameSpecs_64 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_66, (MR_Integer) 1)));
      *AddrOfHeadVar__4_65 = HeadVar__4_66;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NameSpecs0_21;
      next_value_of_AddrOfHeadVar__4_65 = AddrNameSpecs_64;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_32_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_33_33;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_65 = next_value_of_AddrOfHeadVar__4_65;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_items_in_src_item_blocks_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word SrcItemBlock0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word SrcItemBlocks0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word SrcItemBlock_15;
    MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 0))));
    MR_Word SrcSection_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 1))));
    MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 2))));
    MR_Word Incls_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 3))));
    MR_Word Avails_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 4))));
    MR_Word Items0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 5))));
    MR_Word InInt_25;
    MR_Word Items_30;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word * AddrSrcItemBlocks_42;

    switch (SrcSection_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        InInt_25 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        InInt_25 = (MR_Integer) 1;
        break;
    }
    if ((Incls_22 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word ShouldWarnUnusedImportsInParents_28;

      parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(STATE_VARIABLE_Info_0_3, &ShouldWarnUnusedImportsInParents_28);
      switch (ShouldWarnUnusedImportsInParents_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word UnusedModules_29;

            mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), &UnusedModules_29);
            parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedModules_29, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_35_35);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_3;
          break;
      }
    }
    parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(InInt_25, Items0_24, &Items_30, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_37_37);
    {
      SrcItemBlock_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 0) = ((MR_Box) (ModuleName_19));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 1) = ((MR_Box) (SrcSection_20));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 2) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 3) = ((MR_Box) (Incls_22));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 4) = ((MR_Box) (Avails_23));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 5) = ((MR_Box) (Items_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SrcItemBlock_15));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrSrcItemBlocks_42 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_module_qualify_items_in_src_item_blocks_1_6_p_0(SrcItemBlocks0_14, AddrSrcItemBlocks_42, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_4, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_6);
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_module_qualify_items_in_src_item_blocks_1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_43,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_43 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    }
    else
    {
      MR_Word SrcItemBlock0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SrcItemBlocks0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SrcItemBlock_15;
      MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 0))));
      MR_Word SrcSection_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 1))));
      MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 2))));
      MR_Word Incls_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 3))));
      MR_Word Avails_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 4))));
      MR_Word Items0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 5))));
      MR_Word InInt_25;
      MR_Word Items_30;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word STATE_VARIABLE_Info_36_36;
      MR_Word STATE_VARIABLE_Specs_37_37;
      MR_Word * AddrSrcItemBlocks_42;
      MR_Word HeadVar__2_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_43;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      switch (SrcSection_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          InInt_25 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
          InInt_25 = (MR_Integer) 1;
          break;
      }
      if ((Incls_22 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_3;
      else
      {
        MR_Word ShouldWarnUnusedImportsInParents_28;

        parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(STATE_VARIABLE_Info_0_3, &ShouldWarnUnusedImportsInParents_28);
        switch (ShouldWarnUnusedImportsInParents_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UnusedModules_29;

              mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), &UnusedModules_29);
              parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedModules_29, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_35_35);
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Info_35_35 = STATE_VARIABLE_Info_0_3;
            break;
        }
      }
      parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(InInt_25, Items0_24, &Items_30, STATE_VARIABLE_Info_35_35, &STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_37_37);
      {
        SrcItemBlock_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 0) = ((MR_Box) (ModuleName_19));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 1) = ((MR_Box) (SrcSection_20));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 2) = ((MR_Box) (Context_21));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 3) = ((MR_Box) (Incls_22));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 4) = ((MR_Box) (Avails_23));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 5) = ((MR_Box) (Items_30));
      }
      {
        HeadVar__2_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_44, 0) = ((MR_Box) (SrcItemBlock_15));
        MR_hl_field(MR_mktag(1), HeadVar__2_44, 1) = NULL;
      }
      AddrSrcItemBlocks_42 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_44, (MR_Integer) 1)));
      *AddrOfHeadVar__2_43 = HeadVar__2_44;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SrcItemBlocks0_14;
      next_value_of_AddrOfHeadVar__2_43 = AddrSrcItemBlocks_42;
      next_value_of_STATE_VARIABLE_Info_0_3 = STATE_VARIABLE_Info_36_36;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_43 = next_value_of_AddrOfHeadVar__2_43;
      STATE_VARIABLE_Info_0_3 = next_value_of_STATE_VARIABLE_Info_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word HeadItem0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TailItems0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word HeadItem_21;
    MR_Word STATE_VARIABLE_Info_27_27;
    MR_Word STATE_VARIABLE_Specs_28_28;
    MR_Word * AddrTailItems_31;

    parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(HeadVar__1_1, HeadItem0_16, &HeadItem_21, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_28_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadItem_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTailItems_31 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_module_qualify_items_loop_1_7_p_0(HeadVar__1_1, TailItems0_17, AddrTailItems_31, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_5, STATE_VARIABLE_Specs_28_28, STATE_VARIABLE_Specs_7);
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_module_qualify_items_loop_1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_32,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word HeadItem0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailItems0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadItem_21;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word * AddrTailItems_31;
      MR_Word HeadVar__3_33;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_32;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(HeadVar__1_1, HeadItem0_16, &HeadItem_21, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_28_28);
      {
        HeadVar__3_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_33, 0) = ((MR_Box) (HeadItem_21));
        MR_hl_field(MR_mktag(1), HeadVar__3_33, 1) = NULL;
      }
      AddrTailItems_31 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_33, (MR_Integer) 1)));
      *AddrOfHeadVar__3_32 = HeadVar__3_33;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = TailItems0_17;
      next_value_of_AddrOfHeadVar__3_32 = AddrTailItems_31;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_27_27;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_28_28;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_32 = next_value_of_AddrOfHeadVar__3_32;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(
  MR_Word InInt_8,
  MR_Word Item0_9,
  MR_Word * Item_10,
  MR_Word STATE_VARIABLE_Info_0_126,
  MR_Word * STATE_VARIABLE_Info_127,
  MR_Word STATE_VARIABLE_Specs_0_128,
  MR_Word * STATE_VARIABLE_Specs_129)
{
  switch (MR_tag((MR_Word) Item0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Item_10 = Item0_9;
        *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_0_126;
        *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_0_128;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemTypeDefn0_19 = (MR_Word) (MR_body((MR_Word) (Item0_9), (MR_Integer) 1));
        MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_19, (MR_Integer) 0))));
        MR_Word Params_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_19, (MR_Integer) 1))));
        MR_Word TypeDefn0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_19, (MR_Integer) 2))));
        MR_Word TVarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_19, (MR_Integer) 3))));
        MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_19, (MR_Integer) 4))));
        MR_Integer SeqNum_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_19, (MR_Integer) 5))));
        MR_Integer Arity_26;
        MR_Word TypeCtor_27;
        MR_Word TypeDefn_28;
        MR_Word ItemTypeDefn_29;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Params_21, &Arity_26);
        {
          TypeCtor_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_27, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(MR_mktag(0), TypeCtor_27, 1) = ((MR_Box) (Arity_26));
        }
        parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(InInt_8, Context_24, TypeCtor_27, TypeDefn0_22, &TypeDefn_28, STATE_VARIABLE_Info_0_126, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_0_128, STATE_VARIABLE_Specs_129);
        {
          ItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_29, 0) = ((MR_Box) (SymName_20));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_29, 1) = ((MR_Box) (Params_21));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_29, 2) = ((MR_Box) (TypeDefn_28));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_29, 3) = ((MR_Box) (TVarSet_23));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_29, 4) = ((MR_Box) (Context_24));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_29, 5) = ((MR_Box) (SeqNum_25));
        }
        *Item_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_29)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ItemInstDefn0_30 = (MR_Word) (MR_body((MR_Word) (Item0_9), (MR_Integer) 2));
        MR_Word MaybeForTypeCtor0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_30, (MR_Integer) 2))));
        MR_Word MaybeAbstractInstDefn0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_30, (MR_Integer) 3))));
        MR_Word InstVarSet_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_30, (MR_Integer) 4))));
        MR_Word ErrorContext_34;
        MR_Word MaybeAbstractInstDefn_35;
        MR_Word MaybeForTypeCtor_42;
        MR_Word ItemInstDefn_43;
        MR_Word Var_170;
        MR_Word STATE_VARIABLE_Info_171_171;
        MR_Word STATE_VARIABLE_Specs_172_172;
        MR_Word SymName_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_30, (MR_Integer) 0))));
        MR_Word Params_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_30, (MR_Integer) 1))));
        MR_Word Context_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_30, (MR_Integer) 5))));
        MR_Integer SeqNum_180 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_30, (MR_Integer) 6))));
        MR_Integer Arity_181;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), Params_178, &Arity_181);
        {
          Var_170 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_170, 0) = ((MR_Box) (SymName_177));
          MR_hl_field(MR_mktag(0), Var_170, 1) = ((MR_Box) (Arity_181));
        }
        {
          ErrorContext_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), ErrorContext_34, 1) = ((MR_Box) (Context_179));
          MR_hl_field(MR_mktag(3), ErrorContext_34, 2) = ((MR_Box) (Var_170));
        }
        if ((MaybeAbstractInstDefn0_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeAbstractInstDefn_35 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_171_171 = STATE_VARIABLE_Info_0_126;
          STATE_VARIABLE_Specs_172_172 = STATE_VARIABLE_Specs_0_128;
        }
        else
        {
          MR_Word InstDefn0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn0_32, (MR_Integer) 0))));
          MR_Word Inst0_37 = (MR_Word) (InstDefn0_36);
          MR_Word Inst_38;
          MR_Word InstDefn_39;

          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_34, Inst0_37, &Inst_38, STATE_VARIABLE_Info_0_126, &STATE_VARIABLE_Info_171_171, STATE_VARIABLE_Specs_0_128, &STATE_VARIABLE_Specs_172_172);
          InstDefn_39 = (MR_Word) (Inst_38);
          {
            MaybeAbstractInstDefn_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_35, 0) = ((MR_Box) (InstDefn_39));
          }
        }
        if ((MaybeForTypeCtor0_31 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeForTypeCtor_42 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_171_171;
          *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_172_172;
        }
        else
        {
          MR_Word ForTypeCtor0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor0_31, (MR_Integer) 0))));
          MR_Word ForTypeCtor_41;

          parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_8, ErrorContext_34, ForTypeCtor0_40, &ForTypeCtor_41, STATE_VARIABLE_Info_171_171, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_172_172, STATE_VARIABLE_Specs_129);
          {
            MaybeForTypeCtor_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeForTypeCtor_42, 0) = ((MR_Box) (ForTypeCtor_41));
          }
        }
        {
          ItemInstDefn_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemInstDefn_43, 0) = ((MR_Box) (SymName_177));
          MR_hl_field(MR_mktag(0), ItemInstDefn_43, 1) = ((MR_Box) (Params_178));
          MR_hl_field(MR_mktag(0), ItemInstDefn_43, 2) = ((MR_Box) (MaybeForTypeCtor_42));
          MR_hl_field(MR_mktag(0), ItemInstDefn_43, 3) = ((MR_Box) (MaybeAbstractInstDefn_35));
          MR_hl_field(MR_mktag(0), ItemInstDefn_43, 4) = ((MR_Box) (InstVarSet_33));
          MR_hl_field(MR_mktag(0), ItemInstDefn_43, 5) = ((MR_Box) (Context_179));
          MR_hl_field(MR_mktag(0), ItemInstDefn_43, 6) = ((MR_Box) (SeqNum_180));
        }
        *Item_10 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ItemInstDefn_43)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemModeDefn0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word MaybeAbstractModeDefn0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_44, (MR_Integer) 2))));
            MR_Word MaybeAbstractModeDefn_46;
            MR_Word ItemModeDefn_51;
            MR_Word SymName_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_44, (MR_Integer) 0))));
            MR_Word Params_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_44, (MR_Integer) 1))));
            MR_Word Context_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_44, (MR_Integer) 4))));
            MR_Integer SeqNum_189 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_44, (MR_Integer) 5))));
            MR_Word InstVarSet_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_44, (MR_Integer) 3))));

            if ((MaybeAbstractModeDefn0_45 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeAbstractModeDefn_46 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_0_126;
              *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_0_128;
            }
            else
            {
              MR_Word ModeDefn0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn0_45, (MR_Integer) 0))));
              MR_Word Mode0_48;
              MR_Word Mode_49;
              MR_Word ModeDefn_50;
              MR_Word Var_167;
              MR_Integer Arity_182;
              MR_Word ErrorContext_183;

              mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), Params_187, &Arity_182);
              {
                Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (SymName_186));
                MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (Arity_182));
              }
              {
                ErrorContext_183 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ErrorContext_183, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), ErrorContext_183, 1) = ((MR_Box) (Context_188));
                MR_hl_field(MR_mktag(3), ErrorContext_183, 2) = ((MR_Box) (Var_167));
              }
              Mode0_48 = (MR_Word) (ModeDefn0_47);
              parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_8, ErrorContext_183, Mode0_48, &Mode_49, STATE_VARIABLE_Info_0_126, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_0_128, STATE_VARIABLE_Specs_129);
              ModeDefn_50 = (MR_Word) (Mode_49);
              {
                MaybeAbstractModeDefn_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_46, 0) = ((MR_Box) (ModeDefn_50));
              }
            }
            {
              ItemModeDefn_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemModeDefn_51, 0) = ((MR_Box) (SymName_186));
              MR_hl_field(MR_mktag(0), ItemModeDefn_51, 1) = ((MR_Box) (Params_187));
              MR_hl_field(MR_mktag(0), ItemModeDefn_51, 2) = ((MR_Box) (MaybeAbstractModeDefn_46));
              MR_hl_field(MR_mktag(0), ItemModeDefn_51, 3) = ((MR_Box) (InstVarSet_191));
              MR_hl_field(MR_mktag(0), ItemModeDefn_51, 4) = ((MR_Box) (Context_188));
              MR_hl_field(MR_mktag(0), ItemModeDefn_51, 5) = ((MR_Box) (SeqNum_189));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemModeDefn_51));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word PredOrFunc_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word TypesAndModes0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 2))));
            MR_Word MaybeWithType0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 3))));
            MR_Word MaybeWithInst0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 4))));
            MR_Word MaybeDetism_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 5))));
            MR_Word Origin_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 6))));
            MR_Word TypeVarSet_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 7))));
            MR_Word ExistQVars_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 9))));
            MR_Word Purity_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 10))) & (MR_Integer) 3);
            MR_Word Constraints0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 11))));
            MR_Word TypesAndModes_63;
            MR_Word ConstraintErrorContext_64;
            MR_Word Constraints_65;
            MR_Word MaybeWithType_68;
            MR_Word MaybeWithInst_71;
            MR_Word ItemPredDecl_72;
            MR_Word Var_158;
            MR_Word STATE_VARIABLE_Info_159_159;
            MR_Word STATE_VARIABLE_Specs_160_160;
            MR_Word STATE_VARIABLE_Info_161_161;
            MR_Word STATE_VARIABLE_Specs_162_162;
            MR_Word STATE_VARIABLE_Info_163_163;
            MR_Word STATE_VARIABLE_Specs_164_164;
            MR_Word SymName_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 0))));
            MR_Word Context_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 12))));
            MR_Integer SeqNum_195 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 13))));
            MR_Integer Arity_196;
            MR_Word InstVarSet_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_52, (MR_Integer) 8))));
            MR_Word ErrorContext_198;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_54, &Arity_196);
            {
              Var_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (SymName_193));
              MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (Arity_196));
            }
            {
              ErrorContext_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_198, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), ErrorContext_198, 1) = ((MR_Box) (Context_194));
              MR_hl_field(MR_mktag(3), ErrorContext_198, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_53));
              MR_hl_field(MR_mktag(3), ErrorContext_198, 3) = ((MR_Box) (Var_158));
            }
            parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_8, ErrorContext_198, TypesAndModes0_54, &TypesAndModes_63, STATE_VARIABLE_Info_0_126, &STATE_VARIABLE_Info_159_159, STATE_VARIABLE_Specs_0_128, &STATE_VARIABLE_Specs_160_160);
            {
              ConstraintErrorContext_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_64, 1) = ((MR_Box) (Context_194));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_64, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_53));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_64, 3) = ((MR_Box) (SymName_193));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_64, 4) = ((MR_Box) (Arity_196));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(InInt_8, ConstraintErrorContext_64, Constraints0_62, &Constraints_65, STATE_VARIABLE_Info_159_159, &STATE_VARIABLE_Info_161_161, STATE_VARIABLE_Specs_160_160, &STATE_VARIABLE_Specs_162_162);
            if ((MaybeWithType0_55 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithType_68 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_163_163 = STATE_VARIABLE_Info_161_161;
              STATE_VARIABLE_Specs_164_164 = STATE_VARIABLE_Specs_162_162;
            }
            else
            {
              MR_Word WithType0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_55, (MR_Integer) 0))));
              MR_Word WithType_67;

              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_198, WithType0_66, &WithType_67, STATE_VARIABLE_Info_161_161, &STATE_VARIABLE_Info_163_163, STATE_VARIABLE_Specs_162_162, &STATE_VARIABLE_Specs_164_164);
              {
                MaybeWithType_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithType_68, 0) = ((MR_Box) (WithType_67));
              }
            }
            if ((MaybeWithInst0_56 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithInst_71 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_163_163;
              *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_164_164;
            }
            else
            {
              MR_Word WithInst0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_56, (MR_Integer) 0))));
              MR_Word WithInst_70;

              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_198, WithInst0_69, &WithInst_70, STATE_VARIABLE_Info_163_163, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_164_164, STATE_VARIABLE_Specs_129);
              {
                MaybeWithInst_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithInst_71, 0) = ((MR_Box) (WithInst_70));
              }
            }
            {
              ItemPredDecl_72 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 0) = ((MR_Box) (SymName_193));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_53));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 2) = ((MR_Box) (TypesAndModes_63));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 3) = ((MR_Box) (MaybeWithType_68));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 4) = ((MR_Box) (MaybeWithInst_71));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 5) = ((MR_Box) (MaybeDetism_57));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 6) = ((MR_Box) (Origin_58));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 7) = ((MR_Box) (TypeVarSet_59));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 8) = ((MR_Box) (InstVarSet_197));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 9) = ((MR_Box) (ExistQVars_60));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 10) = (MR_Box) ((MR_Unsigned) (Purity_61));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 11) = ((MR_Box) (Constraints_65));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 12) = ((MR_Box) (Context_194));
              MR_hl_field(MR_mktag(0), ItemPredDecl_72, 13) = ((MR_Box) (SeqNum_195));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemPredDecl_72));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Modes0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_73, (MR_Integer) 2))));
            MR_Word Modes_75;
            MR_Word ItemModeDecl_76;
            MR_Word Var_153;
            MR_Word STATE_VARIABLE_Info_154_154;
            MR_Word STATE_VARIABLE_Specs_155_155;
            MR_Word SymName_203 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_73, (MR_Integer) 0))));
            MR_Word Context_204 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_73, (MR_Integer) 6))));
            MR_Integer SeqNum_205 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_73, (MR_Integer) 7))));
            MR_Integer Arity_206;
            MR_Word InstVarSet_207 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_73, (MR_Integer) 5))));
            MR_Word ErrorContext_208;
            MR_Word PredOrFunc_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_73, (MR_Integer) 1))));
            MR_Word MaybeWithInst0_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_73, (MR_Integer) 3))));
            MR_Word MaybeDetism_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_73, (MR_Integer) 4))));
            MR_Word MaybeWithInst_214;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_74, &Arity_206);
            {
              Var_153 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_153, 0) = ((MR_Box) (SymName_203));
              MR_hl_field(MR_mktag(0), Var_153, 1) = ((MR_Box) (Arity_206));
            }
            {
              ErrorContext_208 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_208, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), ErrorContext_208, 1) = ((MR_Box) (Context_204));
              MR_hl_field(MR_mktag(3), ErrorContext_208, 2) = ((MR_Box) (PredOrFunc_209));
              MR_hl_field(MR_mktag(3), ErrorContext_208, 3) = ((MR_Box) (Var_153));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_208, Modes0_74, &Modes_75, STATE_VARIABLE_Info_0_126, &STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Specs_0_128, &STATE_VARIABLE_Specs_155_155);
            if ((MaybeWithInst0_210 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithInst_214 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_154_154;
              *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_155_155;
            }
            else
            {
              MR_Word WithInst0_199 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_210, (MR_Integer) 0))));
              MR_Word WithInst_200;

              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_208, WithInst0_199, &WithInst_200, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_155_155, STATE_VARIABLE_Specs_129);
              {
                MaybeWithInst_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithInst_214, 0) = ((MR_Box) (WithInst_200));
              }
            }
            {
              ItemModeDecl_76 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemModeDecl_76, 0) = ((MR_Box) (SymName_203));
              MR_hl_field(MR_mktag(0), ItemModeDecl_76, 1) = ((MR_Box) (PredOrFunc_209));
              MR_hl_field(MR_mktag(0), ItemModeDecl_76, 2) = ((MR_Box) (Modes_75));
              MR_hl_field(MR_mktag(0), ItemModeDecl_76, 3) = ((MR_Box) (MaybeWithInst_214));
              MR_hl_field(MR_mktag(0), ItemModeDecl_76, 4) = ((MR_Box) (MaybeDetism_211));
              MR_hl_field(MR_mktag(0), ItemModeDecl_76, 5) = ((MR_Box) (InstVarSet_207));
              MR_hl_field(MR_mktag(0), ItemModeDecl_76, 6) = ((MR_Box) (Context_204));
              MR_hl_field(MR_mktag(0), ItemModeDecl_76, 7) = ((MR_Box) (SeqNum_205));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemModeDecl_76));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemPragma0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Pragma0_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_122, (MR_Integer) 0))));
            MR_Word Pragma_124;
            MR_Word ItemPragma_125;
            MR_Word Context_266 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_122, (MR_Integer) 2))));
            MR_Integer SeqNum_267 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPragma0_122, (MR_Integer) 3))));
            MR_Word Origin_268 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_122, (MR_Integer) 1))));

            parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(InInt_8, Context_266, Pragma0_123, &Pragma_124, STATE_VARIABLE_Info_0_126, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_0_128, STATE_VARIABLE_Specs_129);
            {
              ItemPragma_125 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_125, 0) = ((MR_Box) (Pragma_124));
              MR_hl_field(MR_mktag(0), ItemPragma_125, 1) = ((MR_Box) (Origin_268));
              MR_hl_field(MR_mktag(0), ItemPragma_125, 2) = ((MR_Box) (Context_266));
              MR_hl_field(MR_mktag(0), ItemPragma_125, 3) = ((MR_Box) (SeqNum_267));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemPragma_125));
            }
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 10:
        case (MR_Integer) 12:
          {
            *Item_10 = Item0_9;
            *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_0_126;
            *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_0_128;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemTypeClass0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Name_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_77, (MR_Integer) 0))));
            MR_Word Vars_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_77, (MR_Integer) 1))));
            MR_Word FunDeps_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_77, (MR_Integer) 3))));
            MR_Word Interface0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_77, (MR_Integer) 4))));
            MR_Word VarSet_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_77, (MR_Integer) 5))));
            MR_Word Interface_83;
            MR_Word ItemTypeClass_86;
            MR_Word STATE_VARIABLE_Info_148_148;
            MR_Word STATE_VARIABLE_Specs_149_149;
            MR_Word Context_217 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_77, (MR_Integer) 6))));
            MR_Integer SeqNum_218 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_77, (MR_Integer) 7))));
            MR_Integer Arity_219;
            MR_Word Constraints0_221 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_77, (MR_Integer) 2))));
            MR_Word ConstraintErrorContext_222;
            MR_Word Constraints_223;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Vars_79, &Arity_219);
            {
              ConstraintErrorContext_222 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_222, 0) = ((MR_Box) (Context_217));
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_222, 1) = ((MR_Box) (Name_78));
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_222, 2) = ((MR_Box) (Arity_219));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_222, Constraints0_221, &Constraints_223, STATE_VARIABLE_Info_0_126, &STATE_VARIABLE_Info_148_148, STATE_VARIABLE_Specs_0_128, &STATE_VARIABLE_Specs_149_149);
            if ((Interface0_81 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Interface_83 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_148_148;
              *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_149_149;
            }
            else
            {
              MR_Word Methods0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface0_81, (MR_Integer) 0))));
              MR_Word Methods_85;
              MR_Word Var_150;
              MR_Word ErrorContext_215;

              {
                Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_150, 0) = ((MR_Box) (Name_78));
                MR_hl_field(MR_mktag(0), Var_150, 1) = ((MR_Box) (Arity_219));
              }
              {
                ErrorContext_215 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ErrorContext_215, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), ErrorContext_215, 1) = ((MR_Box) (Context_217));
                MR_hl_field(MR_mktag(3), ErrorContext_215, 2) = ((MR_Box) (Var_150));
              }
              parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(InInt_8, ErrorContext_215, Methods0_84, &Methods_85, STATE_VARIABLE_Info_148_148, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_149_149, STATE_VARIABLE_Specs_129);
              {
                Interface_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Interface_83, 0) = ((MR_Box) (Methods_85));
              }
            }
            {
              ItemTypeClass_86 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemTypeClass_86, 0) = ((MR_Box) (Name_78));
              MR_hl_field(MR_mktag(0), ItemTypeClass_86, 1) = ((MR_Box) (Vars_79));
              MR_hl_field(MR_mktag(0), ItemTypeClass_86, 2) = ((MR_Box) (Constraints_223));
              MR_hl_field(MR_mktag(0), ItemTypeClass_86, 3) = ((MR_Box) (FunDeps_80));
              MR_hl_field(MR_mktag(0), ItemTypeClass_86, 4) = ((MR_Box) (Interface_83));
              MR_hl_field(MR_mktag(0), ItemTypeClass_86, 5) = ((MR_Box) (VarSet_82));
              MR_hl_field(MR_mktag(0), ItemTypeClass_86, 6) = ((MR_Box) (Context_217));
              MR_hl_field(MR_mktag(0), ItemTypeClass_86, 7) = ((MR_Box) (SeqNum_218));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemTypeClass_86));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemInstance0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Name0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 0))));
            MR_Word Types0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 1))));
            MR_Word OriginalTypes0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 2))));
            MR_Word Body0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 4))));
            MR_Word ModName_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 6))));
            MR_Word Id0_93;
            MR_Word Types_94;
            MR_Word OriginalTypes_95;
            MR_Word Body_97;
            MR_Word ItemInstance_98;
            MR_Word STATE_VARIABLE_Info_140_140;
            MR_Word STATE_VARIABLE_Info_141_141;
            MR_Word STATE_VARIABLE_Specs_142_142;
            MR_Word STATE_VARIABLE_Info_143_143;
            MR_Word STATE_VARIABLE_Specs_144_144;
            MR_Word STATE_VARIABLE_Info_145_145;
            MR_Word Context_224 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 7))));
            MR_Integer SeqNum_225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 8))));
            MR_Integer Arity_226;
            MR_Word ErrorContext_227;
            MR_Word Constraints0_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 3))));
            MR_Word ConstraintErrorContext_229;
            MR_Word Constraints_230;
            MR_Word Name_231;
            MR_Word VarSet_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_87, (MR_Integer) 5))));
            MR_Word Var_96;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_89, &Arity_226);
            {
              Id0_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Id0_93, 0) = ((MR_Box) (Name0_88));
              MR_hl_field(MR_mktag(0), Id0_93, 1) = ((MR_Box) (Arity_226));
            }
            {
              ErrorContext_227 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_227, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), ErrorContext_227, 1) = ((MR_Box) (Context_224));
              MR_hl_field(MR_mktag(3), ErrorContext_227, 2) = ((MR_Box) (Id0_93));
            }
            switch (InInt_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Info_140_140 = STATE_VARIABLE_Info_0_126;
                break;
              case (MR_Integer) 1:
                {
                  parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_126, &STATE_VARIABLE_Info_140_140);
                }
                break;
            }
            {
              ConstraintErrorContext_229 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_229, 0) = ((MR_Box) (Context_224));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_229, 1) = ((MR_Box) (Name0_88));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_229, 2) = ((MR_Box) (OriginalTypes0_90));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_229, Constraints0_228, &Constraints_230, STATE_VARIABLE_Info_140_140, &STATE_VARIABLE_Info_141_141, STATE_VARIABLE_Specs_0_128, &STATE_VARIABLE_Specs_142_142);
            parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(InInt_8, ErrorContext_227, Id0_93, &Name_231, STATE_VARIABLE_Info_141_141, &STATE_VARIABLE_Info_143_143, STATE_VARIABLE_Specs_142_142, &STATE_VARIABLE_Specs_144_144);
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_227, Types0_89, &Types_94, STATE_VARIABLE_Info_143_143, &STATE_VARIABLE_Info_145_145, STATE_VARIABLE_Specs_144_144, STATE_VARIABLE_Specs_129);
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_227, OriginalTypes0_90, &OriginalTypes_95, STATE_VARIABLE_Info_145_145, STATE_VARIABLE_Info_127, *STATE_VARIABLE_Specs_129, &Var_96);
            parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(Name_231, Body0_91, &Body_97);
            {
              ItemInstance_98 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemInstance_98, 0) = ((MR_Box) (Name_231));
              MR_hl_field(MR_mktag(0), ItemInstance_98, 1) = ((MR_Box) (Types_94));
              MR_hl_field(MR_mktag(0), ItemInstance_98, 2) = ((MR_Box) (OriginalTypes_95));
              MR_hl_field(MR_mktag(0), ItemInstance_98, 3) = ((MR_Box) (Constraints_230));
              MR_hl_field(MR_mktag(0), ItemInstance_98, 4) = ((MR_Box) (Body_97));
              MR_hl_field(MR_mktag(0), ItemInstance_98, 5) = ((MR_Box) (VarSet_232));
              MR_hl_field(MR_mktag(0), ItemInstance_98, 6) = ((MR_Box) (ModName_92));
              MR_hl_field(MR_mktag(0), ItemInstance_98, 7) = ((MR_Box) (Context_224));
              MR_hl_field(MR_mktag(0), ItemInstance_98, 8) = ((MR_Box) (SeqNum_225));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemInstance_98));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemMutable0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word ItemMutable_100;

            parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(InInt_8, ItemMutable0_99, &ItemMutable_100, STATE_VARIABLE_Info_0_126, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_0_128, STATE_VARIABLE_Specs_129);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemMutable_100));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemTypeRepnInfo0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word TypeCtorSymName_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_101, (MR_Integer) 0))));
            MR_Word ArgTVars_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_101, (MR_Integer) 1))));
            MR_Word RepInfo0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_101, (MR_Integer) 2))));
            MR_Word RepInfo_111;
            MR_Word ItemTypeRepnInfo_121;
            MR_Word TVarSet_259 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_101, (MR_Integer) 3))));
            MR_Word Context_260 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_101, (MR_Integer) 4))));
            MR_Integer SeqNum_261 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_101, (MR_Integer) 5))));

            switch (MR_tag((MR_Word) RepInfo0_104)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RepInfo_111 = RepInfo0_104;
                  *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_0_126;
                  *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_0_128;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word EqvType0_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepInfo0_104, (MR_Integer) 0))));
                  MR_Integer TypeCtorArity_113;
                  MR_Word EqvType_114;
                  MR_Word TypeCtor_233;
                  MR_Word ErrorContext_234;

                  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), ArgTVars_103, &TypeCtorArity_113);
                  {
                    TypeCtor_233 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeCtor_233, 0) = ((MR_Box) (TypeCtorSymName_102));
                    MR_hl_field(MR_mktag(0), TypeCtor_233, 1) = ((MR_Box) (TypeCtorArity_113));
                  }
                  {
                    ErrorContext_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ErrorContext_234, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(3), ErrorContext_234, 1) = ((MR_Box) (Context_260));
                    MR_hl_field(MR_mktag(3), ErrorContext_234, 2) = ((MR_Box) (TypeCtor_233));
                  }
                  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_234, EqvType0_112, &EqvType_114, STATE_VARIABLE_Info_0_126, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_0_128, STATE_VARIABLE_Specs_129);
                  {
                    RepInfo_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RepInfo_111, 0) = ((MR_Box) (EqvType_114));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  RepInfo_111 = RepInfo0_104;
                  *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_0_126;
                  *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_0_128;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), RepInfo0_104, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word WAP0_115 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RepInfo0_104, (MR_Integer) 1))));
                      MR_Word WAP_116;

                      if ((WAP0_115 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        WAP_116 = WAP0_115;
                        *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_0_126;
                        *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_0_128;
                      }
                      else
                      {
                        MR_Word WAPTypeSNA0_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WAP0_115, (MR_Integer) 0))));
                        MR_Word SymName0_118;
                        MR_Word TypeCtorId0_119;
                        MR_Word WAPTypeSNA_120;
                        MR_Word SymName_235;
                        MR_Integer Arity_236;
                        MR_Word TypeCtor_237;
                        MR_Word ErrorContext_238;
                        MR_Word Types_239;
                        MR_Integer TypeCtorArity_240;

                        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), ArgTVars_103, &TypeCtorArity_240);
                        {
                          TypeCtor_237 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), TypeCtor_237, 0) = ((MR_Box) (TypeCtorSymName_102));
                          MR_hl_field(MR_mktag(0), TypeCtor_237, 1) = ((MR_Box) (TypeCtorArity_240));
                        }
                        {
                          ErrorContext_238 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ErrorContext_238, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                          MR_hl_field(MR_mktag(3), ErrorContext_238, 1) = ((MR_Box) (Context_260));
                          MR_hl_field(MR_mktag(3), ErrorContext_238, 2) = ((MR_Box) (TypeCtor_237));
                        }
                        SymName0_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WAPTypeSNA0_117, (MR_Integer) 0))));
                        Arity_236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), WAPTypeSNA0_117, (MR_Integer) 1))));
                        {
                          TypeCtorId0_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), TypeCtorId0_119, 0) = ((MR_Box) (SymName0_118));
                          MR_hl_field(MR_mktag(0), TypeCtorId0_119, 1) = ((MR_Box) (Arity_236));
                        }
                        parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_126, &Types_239);
                        parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_8, ErrorContext_238, Types_239, (MR_Integer) 0, TypeCtorId0_119, &SymName_235, STATE_VARIABLE_Info_0_126, STATE_VARIABLE_Info_127, STATE_VARIABLE_Specs_0_128, STATE_VARIABLE_Specs_129);
                        {
                          WAPTypeSNA_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), WAPTypeSNA_120, 0) = ((MR_Box) (SymName_235));
                          MR_hl_field(MR_mktag(0), WAPTypeSNA_120, 1) = ((MR_Box) (Arity_236));
                        }
                        {
                          WAP_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), WAP_116, 0) = ((MR_Box) (WAPTypeSNA_120));
                        }
                      }
                      {
                        RepInfo_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), RepInfo_111, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), RepInfo_111, 1) = ((MR_Box) (WAP_116));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    {
                      RepInfo_111 = RepInfo0_104;
                      *STATE_VARIABLE_Info_127 = STATE_VARIABLE_Info_0_126;
                      *STATE_VARIABLE_Specs_129 = STATE_VARIABLE_Specs_0_128;
                    }
                    break;
                }
                break;
            }
            {
              ItemTypeRepnInfo_121 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_121, 0) = ((MR_Box) (TypeCtorSymName_102));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_121, 1) = ((MR_Box) (ArgTVars_103));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_121, 2) = ((MR_Box) (RepInfo_111));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_121, 3) = ((MR_Box) (TVarSet_259));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_121, 4) = ((MR_Box) (Context_260));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_121, 5) = ((MR_Box) (SeqNum_261));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemTypeRepnInfo_121));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_109,
  MR_Word * STATE_VARIABLE_Info_110,
  MR_Word STATE_VARIABLE_Specs_0_111,
  MR_Word * STATE_VARIABLE_Specs_112)
{
  switch (MR_tag((MR_Word) Pragma0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Pragma_12 = Pragma0_11;
        *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_0_109;
        *STATE_VARIABLE_Specs_112 = STATE_VARIABLE_Specs_0_111;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPInfo0_49 = (MR_Word) (MR_body((MR_Word) (Pragma0_11), (MR_Integer) 2));
        MR_Word Attrs0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_49, (MR_Integer) 0))));
        MR_Word Name_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_49, (MR_Integer) 1))));
        MR_Word PredOrFunc_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo0_49, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Word Vars0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_49, (MR_Integer) 3))));
        MR_Word Varset_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_49, (MR_Integer) 4))));
        MR_Word InstVarset_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_49, (MR_Integer) 5))));
        MR_Word Impl_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_49, (MR_Integer) 6))));
        MR_Word Vars_57;
        MR_Word UserSharing0_58;
        MR_Word UserSharing_59;
        MR_Word Attrs_60;
        MR_Word FPInfo_61;
        MR_Word STATE_VARIABLE_Info_131_131;
        MR_Word STATE_VARIABLE_Specs_132_132;
        MR_Word ErrorContext_146;

        {
          ErrorContext_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_146, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), ErrorContext_146, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), ErrorContext_146, 2) = ((MR_Box) (Pragma0_11));
        }
        parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(InInt_9, ErrorContext_146, Vars0_53, &Vars_57, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_131_131, STATE_VARIABLE_Specs_0_111, &STATE_VARIABLE_Specs_132_132);
        UserSharing0_58 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_50);
        parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(InInt_9, ErrorContext_146, UserSharing0_58, &UserSharing_59, STATE_VARIABLE_Info_131_131, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_132_132, STATE_VARIABLE_Specs_112);
        parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_59, Attrs0_50, &Attrs_60);
        {
          FPInfo_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FPInfo_61, 0) = ((MR_Box) (Attrs_60));
          MR_hl_field(MR_mktag(0), FPInfo_61, 1) = ((MR_Box) (Name_51));
          MR_hl_field(MR_mktag(0), FPInfo_61, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_52));
          MR_hl_field(MR_mktag(0), FPInfo_61, 3) = ((MR_Box) (Vars_57));
          MR_hl_field(MR_mktag(0), FPInfo_61, 4) = ((MR_Box) (Varset_54));
          MR_hl_field(MR_mktag(0), FPInfo_61, 5) = ((MR_Box) (InstVarset_55));
          MR_hl_field(MR_mktag(0), FPInfo_61, 6) = ((MR_Box) (Impl_56));
        }
        *Pragma_12 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (FPInfo_61)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPEInfo0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo0_75, (MR_Integer) 1))));
            MR_String CFunc_77 = ((MR_String) ((MR_hl_field(MR_mktag(0), FPEInfo0_75, (MR_Integer) 2))));
            MR_Word PredNameModesPF_78;
            MR_Word FPEInfo_79;
            MR_Word Lang_154 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo0_75, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ErrorContext_155;
            MR_Word Name_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_76, (MR_Integer) 0))));
            MR_Word PredOrFunc_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_76, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Modes0_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_76, (MR_Integer) 1))));
            MR_Word Modes_159;

            {
              ErrorContext_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_155, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_155, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_155, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_155, Modes0_158, &Modes_159, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
            {
              PredNameModesPF_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_78, 0) = ((MR_Box) (Name_156));
              MR_hl_field(MR_mktag(0), PredNameModesPF_78, 1) = ((MR_Box) (Modes_159));
              MR_hl_field(MR_mktag(0), PredNameModesPF_78, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_157));
            }
            {
              FPEInfo_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FPEInfo_79, 0) = (MR_Box) ((MR_Unsigned) (Lang_154));
              MR_hl_field(MR_mktag(0), FPEInfo_79, 1) = ((MR_Box) (PredNameModesPF_78));
              MR_hl_field(MR_mktag(0), FPEInfo_79, 2) = ((MR_Box) (CFunc_77));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FPEInfo_79));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FEEInfo0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Lang_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEEInfo0_37, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo0_37, (MR_Integer) 1))));
            MR_Word Attributes_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo0_37, (MR_Integer) 2))));
            MR_Word Overrides_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo0_37, (MR_Integer) 3))));
            MR_Word ErrorContext_42;
            MR_Word OldSuppressUndef_43;
            MR_Word TypeCtor_44;
            MR_Word FEEInfo_45;
            MR_Word STATE_VARIABLE_Info_138_138;
            MR_Word STATE_VARIABLE_Info_139_139;

            {
              ErrorContext_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_42, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_42, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_42, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__mq_info_get_suppress_found_undef_2_p_0(STATE_VARIABLE_Info_0_109, &OldSuppressUndef_43);
            parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_138_138);
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_42, TypeCtor0_39, &TypeCtor_44, STATE_VARIABLE_Info_138_138, &STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
            parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0(OldSuppressUndef_43, STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Info_110);
            {
              FEEInfo_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FEEInfo_45, 0) = (MR_Box) ((MR_Unsigned) (Lang_38));
              MR_hl_field(MR_mktag(0), FEEInfo_45, 1) = ((MR_Box) (TypeCtor_44));
              MR_hl_field(MR_mktag(0), FEEInfo_45, 2) = ((MR_Box) (Attributes_40));
              MR_hl_field(MR_mktag(0), FEEInfo_45, 3) = ((MR_Box) (Overrides_41));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FEEInfo_45));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FEInfo0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Values_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo0_46, (MR_Integer) 2))));
            MR_Word FEInfo_48;
            MR_Word Lang_142 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo0_46, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor0_143 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo0_46, (MR_Integer) 1))));
            MR_Word ErrorContext_144;
            MR_Word TypeCtor_145;

            {
              ErrorContext_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_144, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_144, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_144, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_144, TypeCtor0_143, &TypeCtor_145, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
            {
              FEInfo_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FEInfo_48, 0) = (MR_Box) ((MR_Unsigned) (Lang_142));
              MR_hl_field(MR_mktag(0), FEInfo_48, 1) = ((MR_Box) (TypeCtor_145));
              MR_hl_field(MR_mktag(0), FEInfo_48, 2) = ((MR_Box) (Values_47));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FEInfo_48));
            }
          }
          break;
        case (MR_Integer) 3:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 16:
        case (MR_Integer) 18:
        case (MR_Integer) 19:
        case (MR_Integer) 20:
        case (MR_Integer) 23:
        case (MR_Integer) 24:
        case (MR_Integer) 25:
        case (MR_Integer) 26:
        case (MR_Integer) 29:
          {
            *Pragma_12 = Pragma0_11;
            *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_0_109;
            *STATE_VARIABLE_Specs_112 = STATE_VARIABLE_Specs_0_111;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TypeSpecInfo0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word PredName_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 0))));
            MR_Word SpecializedPredName_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 1))));
            MR_Integer Arity_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 2))));
            MR_Word MaybeModes0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 4))));
            MR_Word Subst0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 5))));
            MR_Word TVarSet_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 6))));
            MR_Word Items_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 7))));
            MR_Word MaybeModes_88;
            MR_Word Subst_89;
            MR_Word TypeSpecInfo_90;
            MR_Word STATE_VARIABLE_Info_121_121;
            MR_Word STATE_VARIABLE_Specs_122_122;
            MR_Word ErrorContext_164;
            MR_Word PredOrFunc_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 3))));

            {
              ErrorContext_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_164, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_164, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_164, 2) = ((MR_Box) (Pragma0_11));
            }
            if ((MaybeModes0_84 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeModes_88 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_121_121 = STATE_VARIABLE_Info_0_109;
              STATE_VARIABLE_Specs_122_122 = STATE_VARIABLE_Specs_0_111;
            }
            else
            {
              MR_Word Modes0_160 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes0_84, (MR_Integer) 0))));
              MR_Word Modes_161;

              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_164, Modes0_160, &Modes_161, STATE_VARIABLE_Info_0_109, &STATE_VARIABLE_Info_121_121, STATE_VARIABLE_Specs_0_111, &STATE_VARIABLE_Specs_122_122);
              {
                MaybeModes_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeModes_88, 0) = ((MR_Box) (Modes_161));
              }
            }
            parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(InInt_9, ErrorContext_164, Subst0_85, &Subst_89, STATE_VARIABLE_Info_121_121, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_122_122, STATE_VARIABLE_Specs_112);
            {
              TypeSpecInfo_90 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeSpecInfo_90, 0) = ((MR_Box) (PredName_81));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_90, 1) = ((MR_Box) (SpecializedPredName_82));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_90, 2) = ((MR_Box) (Arity_83));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_90, 3) = ((MR_Box) (PredOrFunc_165));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_90, 4) = ((MR_Box) (MaybeModes_88));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_90, 5) = ((MR_Box) (Subst_89));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_90, 6) = ((MR_Box) (TVarSet_86));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_90, 7) = ((MR_Box) (Items_87));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TypeSpecInfo_90));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word TabledInfo0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word EvalMethod_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_67, (MR_Integer) 0))));
            MR_Word PredNameArityPF_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_67, (MR_Integer) 1))));
            MR_Word MModes0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_67, (MR_Integer) 2))));
            MR_Word MModes_73;
            MR_Word TabledInfo_74;
            MR_Word Attrs_153 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_67, (MR_Integer) 3))));

            if ((MModes0_70 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MModes_73 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_110 = STATE_VARIABLE_Info_0_109;
              *STATE_VARIABLE_Specs_112 = STATE_VARIABLE_Specs_0_111;
            }
            else
            {
              MR_Word Modes0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MModes0_70, (MR_Integer) 0))));
              MR_Word Modes_72;
              MR_Word ErrorContext_150;

              {
                ErrorContext_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ErrorContext_150, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), ErrorContext_150, 1) = ((MR_Box) (Context_10));
                MR_hl_field(MR_mktag(3), ErrorContext_150, 2) = ((MR_Box) (Pragma0_11));
              }
              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_150, Modes0_71, &Modes_72, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
              {
                MModes_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MModes_73, 0) = ((MR_Box) (Modes_72));
              }
            }
            {
              TabledInfo_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TabledInfo_74, 0) = ((MR_Box) (EvalMethod_68));
              MR_hl_field(MR_mktag(0), TabledInfo_74, 1) = ((MR_Box) (PredNameArityPF_69));
              MR_hl_field(MR_mktag(0), TabledInfo_74, 2) = ((MR_Box) (MModes_73));
              MR_hl_field(MR_mktag(0), TabledInfo_74, 3) = ((MR_Box) (Attrs_153));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TabledInfo_74));
            }
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word OISUInfo0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word CreatorPreds_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_62, (MR_Integer) 1))));
            MR_Word MutatorPreds_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_62, (MR_Integer) 2))));
            MR_Word DestructorPreds_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_62, (MR_Integer) 3))));
            MR_Word OISUInfo_66;
            MR_Word TypeCtor0_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_62, (MR_Integer) 0))));
            MR_Word ErrorContext_148;
            MR_Word TypeCtor_149;

            {
              ErrorContext_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_148, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_148, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_148, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_148, TypeCtor0_147, &TypeCtor_149, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
            {
              OISUInfo_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), OISUInfo_66, 0) = ((MR_Box) (TypeCtor_149));
              MR_hl_field(MR_mktag(0), OISUInfo_66, 1) = ((MR_Box) (CreatorPreds_63));
              MR_hl_field(MR_mktag(0), OISUInfo_66, 2) = ((MR_Box) (MutatorPreds_64));
              MR_hl_field(MR_mktag(0), OISUInfo_66, 3) = ((MR_Box) (DestructorPreds_65));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OISUInfo_66));
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word TermInfo0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Args_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_91, (MR_Integer) 1))));
            MR_Word Term_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_91, (MR_Integer) 2))));
            MR_Word SymName_94;
            MR_Word ModeList0_95;
            MR_Word ModeList_96;
            MR_Word TermInfo_97;
            MR_Word ErrorContext_168;
            MR_Word PredOrFunc_169;
            MR_Word PredNameModesPF0_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_91, (MR_Integer) 0))));
            MR_Word PredNameModesPF_171;

            SymName_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_170, (MR_Integer) 0))));
            ModeList0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_170, (MR_Integer) 1))));
            PredOrFunc_169 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_170, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_168, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_168, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_168, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_168, ModeList0_95, &ModeList_96, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
            {
              PredNameModesPF_171 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_171, 0) = ((MR_Box) (SymName_94));
              MR_hl_field(MR_mktag(0), PredNameModesPF_171, 1) = ((MR_Box) (ModeList_96));
              MR_hl_field(MR_mktag(0), PredNameModesPF_171, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_169));
            }
            {
              TermInfo_97 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TermInfo_97, 0) = ((MR_Box) (PredNameModesPF_171));
              MR_hl_field(MR_mktag(0), TermInfo_97, 1) = ((MR_Box) (Args_92));
              MR_hl_field(MR_mktag(0), TermInfo_97, 2) = ((MR_Box) (Term_93));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TermInfo_97));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Term2Info0_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word SuccessArgs_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_105, (MR_Integer) 1))));
            MR_Word FailureArgs_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_105, (MR_Integer) 2))));
            MR_Word Term2Info_108;
            MR_Word ErrorContext_189;
            MR_Word PredOrFunc_190;
            MR_Word PredNameModesPF0_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_105, (MR_Integer) 0))));
            MR_Word PredNameModesPF_192;
            MR_Word Term_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_105, (MR_Integer) 3))));
            MR_Word SymName_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_191, (MR_Integer) 0))));
            MR_Word ModeList0_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_191, (MR_Integer) 1))));
            MR_Word ModeList_196;

            PredOrFunc_190 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_191, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_189, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_189, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_189, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_189, ModeList0_195, &ModeList_196, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
            {
              PredNameModesPF_192 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_192, 0) = ((MR_Box) (SymName_194));
              MR_hl_field(MR_mktag(0), PredNameModesPF_192, 1) = ((MR_Box) (ModeList_196));
              MR_hl_field(MR_mktag(0), PredNameModesPF_192, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_190));
            }
            {
              Term2Info_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Term2Info_108, 0) = ((MR_Box) (PredNameModesPF_192));
              MR_hl_field(MR_mktag(0), Term2Info_108, 1) = ((MR_Box) (SuccessArgs_106));
              MR_hl_field(MR_mktag(0), Term2Info_108, 2) = ((MR_Box) (FailureArgs_107));
              MR_hl_field(MR_mktag(0), Term2Info_108, 3) = ((MR_Box) (Term_193));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 22U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term2Info_108));
            }
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word SharingInfo0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Types_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_98, (MR_Integer) 2))));
            MR_Word Sharing_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_98, (MR_Integer) 3))));
            MR_Word SharingInfo_101;
            MR_Word ErrorContext_172;
            MR_Word PredOrFunc_173;
            MR_Word Vars_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_98, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_98, (MR_Integer) 0))));
            MR_Word PredNameModesPF_176;
            MR_Word SymName_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_175, (MR_Integer) 0))));
            MR_Word ModeList0_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_175, (MR_Integer) 1))));
            MR_Word ModeList_179;

            PredOrFunc_173 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_175, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_172, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_172, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_172, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_172, ModeList0_178, &ModeList_179, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
            {
              PredNameModesPF_176 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_176, 0) = ((MR_Box) (SymName_177));
              MR_hl_field(MR_mktag(0), PredNameModesPF_176, 1) = ((MR_Box) (ModeList_179));
              MR_hl_field(MR_mktag(0), PredNameModesPF_176, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_173));
            }
            {
              SharingInfo_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SharingInfo_101, 0) = ((MR_Box) (PredNameModesPF_176));
              MR_hl_field(MR_mktag(0), SharingInfo_101, 1) = ((MR_Box) (Vars_174));
              MR_hl_field(MR_mktag(0), SharingInfo_101, 2) = ((MR_Box) (Types_99));
              MR_hl_field(MR_mktag(0), SharingInfo_101, 3) = ((MR_Box) (Sharing_100));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SharingInfo_101));
            }
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word ReuseInfo0_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word ReuseTuples_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_102, (MR_Integer) 3))));
            MR_Word ReuseInfo_104;
            MR_Word ErrorContext_180;
            MR_Word PredOrFunc_181;
            MR_Word Vars_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_102, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_102, (MR_Integer) 0))));
            MR_Word PredNameModesPF_184;
            MR_Word SymName_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_183, (MR_Integer) 0))));
            MR_Word ModeList0_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_183, (MR_Integer) 1))));
            MR_Word ModeList_187;
            MR_Word Types_188 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_102, (MR_Integer) 2))));

            PredOrFunc_181 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_183, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_180 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_180, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_180, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_180, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_180, ModeList0_186, &ModeList_187, STATE_VARIABLE_Info_0_109, STATE_VARIABLE_Info_110, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
            {
              PredNameModesPF_184 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_184, 0) = ((MR_Box) (SymName_185));
              MR_hl_field(MR_mktag(0), PredNameModesPF_184, 1) = ((MR_Box) (ModeList_187));
              MR_hl_field(MR_mktag(0), PredNameModesPF_184, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_181));
            }
            {
              ReuseInfo_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ReuseInfo_104, 0) = ((MR_Box) (PredNameModesPF_184));
              MR_hl_field(MR_mktag(0), ReuseInfo_104, 1) = ((MR_Box) (Vars_182));
              MR_hl_field(MR_mktag(0), ReuseInfo_104, 2) = ((MR_Box) (Types_188));
              MR_hl_field(MR_mktag(0), ReuseInfo_104, 3) = ((MR_Box) (ReuseTuples_103));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ReuseInfo_104));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word UserSharing0_11,
  MR_Word * UserSharing_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  if ((UserSharing0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *UserSharing_12 = UserSharing0_11;
    *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  }
  else
  {
    MR_Word Sharing_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing0_11, (MR_Integer) 0))));
    MR_Word MaybeTypes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UserSharing0_11, (MR_Integer) 1))));

    if ((MaybeTypes0_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *UserSharing_12 = UserSharing0_11;
      *STATE_VARIABLE_Info_22 = STATE_VARIABLE_Info_0_21;
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    }
    else
    {
      MR_Word Types0_17;
      MR_Word TVarset_18;
      MR_Word Types_19;
      MR_Word MaybeTypes_20;
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypes0_16, (MR_Integer) 0))));
      MR_Word Var_28;

      Types0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));
      TVarset_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Types0_17, &Types_19, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Types_19));
        MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (TVarset_18));
      }
      {
        MaybeTypes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTypes_20, 0) = ((MR_Box) (Var_28));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *UserSharing_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Sharing_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeTypes_20));
      }
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Var_19;
    MR_Word Type0_20;
    MR_Word Subst0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_22;
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Specs_33_33;
    MR_Word * AddrSubst_36;

    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
    Type0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_20, &Type_22, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_33_33);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Type_22));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrSubst_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_spec_subst_1_8_p_0(HeadVar__1_1, HeadVar__2_2, Subst0_21, AddrSubst_36, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_33_33, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_spec_subst_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_37,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_37 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Var_19;
      MR_Word Type0_20;
      MR_Word Subst0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Type_22;
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_Info_32_32;
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Word * AddrSubst_36;
      MR_Word HeadVar__4_38;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_37;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      Type0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_20, &Type_22, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_33_33);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Type_22));
      }
      {
        HeadVar__4_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_38, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), HeadVar__4_38, 1) = NULL;
      }
      AddrSubst_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_38, (MR_Integer) 1)));
      *AddrOfHeadVar__4_37 = HeadVar__4_38;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Subst0_21;
      next_value_of_AddrOfHeadVar__4_37 = AddrSubst_36;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_32_32;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_33_33;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_37 = next_value_of_AddrOfHeadVar__4_37;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word PragmaVar0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word PragmaVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word PragmaVar_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 0))));
    MR_String Name_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 1))));
    MR_Word Mode0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 2))));
    MR_Word Box_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word Mode_47;
    MR_Word * AddrPragmaVars_50;

    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_45, &Mode_47, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PragmaVar_21, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), PragmaVar_21, 1) = ((MR_Box) (Name_44));
      MR_hl_field(MR_mktag(0), PragmaVar_21, 2) = ((MR_Box) (Mode_47));
      MR_hl_field(MR_mktag(0), PragmaVar_21, 3) = (MR_Box) ((MR_Unsigned) (Box_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaVar_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrPragmaVars_50 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_pragma_vars_1_8_p_0(HeadVar__1_1, HeadVar__2_2, PragmaVars0_20, AddrPragmaVars_50, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_pragma_vars_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_51,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_51 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word PragmaVar0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PragmaVars0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PragmaVar_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 0))));
      MR_String Name_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 1))));
      MR_Word Mode0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 2))));
      MR_Word Box_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PragmaVar0_19, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word Mode_47;
      MR_Word * AddrPragmaVars_50;
      MR_Word HeadVar__4_52;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_51;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_45, &Mode_47, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PragmaVar_21, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), PragmaVar_21, 1) = ((MR_Box) (Name_44));
        MR_hl_field(MR_mktag(0), PragmaVar_21, 2) = ((MR_Box) (Mode_47));
        MR_hl_field(MR_mktag(0), PragmaVar_21, 3) = (MR_Box) ((MR_Unsigned) (Box_46));
      }
      {
        HeadVar__4_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_52, 0) = ((MR_Box) (PragmaVar_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_52, 1) = NULL;
      }
      AddrPragmaVars_50 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_52, (MR_Integer) 1)));
      *AddrOfHeadVar__4_51 = HeadVar__4_52;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PragmaVars0_20;
      next_value_of_AddrOfHeadVar__4_51 = AddrPragmaVars_50;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_51 = next_value_of_AddrOfHeadVar__4_51;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(
  MR_Word InInt_8,
  MR_Word ItemMutable0_9,
  MR_Word * ItemMutable_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_String Name_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 0))));
    MR_Word OrigType0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 1))));
    MR_Word Type0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 2))));
    MR_Word OrigInst0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 3))));
    MR_Word Inst0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 4))));
    MR_Word InitTerm_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 5))));
    MR_Word Attrs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 6))));
    MR_Word Varset_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 7))));
    MR_Word Context_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 8))));
    MR_Integer SeqNum_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemMutable0_9, (MR_Integer) 9))));
    MR_Word ErrorContext_23;
    MR_Word OrigType_24;
    MR_Word Type_26;
    MR_Word OrigInst_27;
    MR_Word Inst_29;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word STATE_VARIABLE_Info_38_38;
    MR_Word Var_25;
    MR_Word Var_28;

    {
      ErrorContext_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), ErrorContext_23, 1) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(3), ErrorContext_23, 2) = ((MR_Box) (Name_13));
    }
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_23, OrigType0_14, &OrigType_24, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_34_34, (MR_Word) ((MR_Unsigned) 0U), &Var_25);
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_23, Type0_15, &Type_26, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Specs_0_32, &STATE_VARIABLE_Specs_37_37);
    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_23, OrigInst0_16, &OrigInst_27, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_38_38, (MR_Word) ((MR_Unsigned) 0U), &Var_28);
    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_23, Inst0_17, &Inst_29, STATE_VARIABLE_Info_38_38, STATE_VARIABLE_Info_31, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_33);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *ItemMutable_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigType_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Type_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (OrigInst_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Inst_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (InitTerm_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Attrs_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Varset_20));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Context_21));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (SeqNum_22));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_InstanceMethod_6;

    parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_InstanceMethod_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_InstanceMethod_6));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(
  MR_Word ClassName_4,
  MR_Word InstanceBody0_5,
  MR_Word * InstanceBody_6)
{
  if ((InstanceBody0_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *InstanceBody_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Methods0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstanceBody0_5, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) ClassName_4)) == (MR_Integer) 1))
    {
      MR_Word DefaultModuleName_11;
      MR_Word Methods_12;
      MR_Word Var_15;

      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(ClassName_4, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[12]), &DefaultModuleName_11);
      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (DefaultModuleName_11));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0), Var_15, Methods0_7, &Methods_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *InstanceBody_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Methods_12));
      }
    }
    else
      *InstanceBody_6 = InstanceBody0_5;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Method0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Methods0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Method_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrMethods_33;

    parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(HeadVar__1_1, HeadVar__2_2, Method0_19, &Method_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Method_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrMethods_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_class_methods_1_8_p_0(HeadVar__1_1, HeadVar__2_2, Methods0_20, AddrMethods_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_class_methods_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Method0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Methods0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Method_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrMethods_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(HeadVar__1_1, HeadVar__2_2, Method0_19, &Method_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Method_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrMethods_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Methods0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrMethods_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Method0_11,
  MR_Word * Method_12,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  if (((MR_tag((MR_Word) Method0_11)) == (MR_Integer) 0))
  {
    MR_Word Name_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 0))));
    MR_Word PredOrFunc_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 2))));
    MR_Word MaybeWithType0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 3))));
    MR_Word MaybeWithInst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 4))));
    MR_Word MaybeDetism_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 5))));
    MR_Word TypeVarset_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 6))));
    MR_Word InstVarset_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 7))));
    MR_Word ExistQVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 8))));
    MR_Word Purity_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 9))) & (MR_Integer) 3);
    MR_Word Constraints0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 10))));
    MR_Word Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Method0_11, (MR_Integer) 11))));
    MR_Word TypesAndModes_27;
    MR_Word ConstraintErrorContext_28;
    MR_Word Constraints_29;
    MR_Word MaybeWithType_32;
    MR_Word MaybeWithInst_35;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Specs_48_48;
    MR_String Var_49;
    MR_Word STATE_VARIABLE_Info_50_50;
    MR_Word STATE_VARIABLE_Specs_51_51;
    MR_Word STATE_VARIABLE_Info_52_52;
    MR_Word STATE_VARIABLE_Specs_53_53;
    MR_Word UnivCs0_78;
    MR_Word ExistCs0_79;
    MR_Word UnivCs_80;
    MR_Word ExistCs_81;
    MR_Word STATE_VARIABLE_Info_23_82;
    MR_Word STATE_VARIABLE_Specs_24_83;

    parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_9, ErrorContext_10, TypesAndModes0_17, &TypesAndModes_27, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Specs_0_41, &STATE_VARIABLE_Specs_48_48);
    Var_49 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_15);
    {
      ConstraintErrorContext_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_28, 0) = ((MR_Box) (Context_26));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_28, 2) = ((MR_Box) (Var_49));
    }
    UnivCs0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_25, (MR_Integer) 0))));
    ExistCs0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_25, (MR_Integer) 1))));
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_28, UnivCs0_78, &UnivCs_80, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_23_82, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_24_83);
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_28, ExistCs0_79, &ExistCs_81, STATE_VARIABLE_Info_23_82, &STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Specs_24_83, &STATE_VARIABLE_Specs_51_51);
    {
      Constraints_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraints_29, 0) = ((MR_Box) (UnivCs_80));
      MR_hl_field(MR_mktag(0), Constraints_29, 1) = ((MR_Box) (ExistCs_81));
    }
    if ((MaybeWithType0_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithType_32 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_52_52 = STATE_VARIABLE_Info_50_50;
      STATE_VARIABLE_Specs_53_53 = STATE_VARIABLE_Specs_51_51;
    }
    else
    {
      MR_Word WithType0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_18, (MR_Integer) 0))));
      MR_Word WithType_31;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_9, ErrorContext_10, WithType0_30, &WithType_31, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_53_53);
      {
        MaybeWithType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithType_32, 0) = ((MR_Box) (WithType_31));
      }
    }
    if ((MaybeWithInst0_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithInst_35 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_52_52;
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_53_53;
    }
    else
    {
      MR_Word WithInst0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_19, (MR_Integer) 0))));
      MR_Word WithInst_34;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, WithInst0_33, &WithInst_34, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_40, STATE_VARIABLE_Specs_53_53, STATE_VARIABLE_Specs_42);
      {
        MaybeWithInst_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithInst_35, 0) = ((MR_Box) (WithInst_34));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      *Method_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_15));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypesAndModes_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeWithType_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeWithInst_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeDetism_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (TypeVarset_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (InstVarset_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ExistQVars_23));
      MR_hl_field(MR_mktag(0), base, 9) = (MR_Box) ((MR_Unsigned) (Purity_24));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Constraints_29));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Context_26));
    }
  }
  else
  {
    MR_Word Modes0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_11, (MR_Integer) 2))));
    MR_Word Varset_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_11, (MR_Integer) 5))));
    MR_Word Modes_38;
    MR_Word STATE_VARIABLE_Info_43_43;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word Name_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_11, (MR_Integer) 1))));
    MR_Word PredOrFunc_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_11, (MR_Integer) 0))));
    MR_Word MaybeWithInst0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_11, (MR_Integer) 3))));
    MR_Word MaybeDetism_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_11, (MR_Integer) 4))));
    MR_Word Context_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Method0_11, (MR_Integer) 6))));
    MR_Word MaybeWithInst_67;

    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_36, &Modes_38, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Specs_0_41, &STATE_VARIABLE_Specs_44_44);
    if ((MaybeWithInst0_62 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithInst_67 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_43_43;
      *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_44_44;
    }
    else
    {
      MR_Word WithInst0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_62, (MR_Integer) 0))));
      MR_Word WithInst_57;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, WithInst0_56, &WithInst_57, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_40, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_42);
      {
        MaybeWithInst_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithInst_67, 0) = ((MR_Box) (WithInst_57));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *Method_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredOrFunc_61));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Name_60));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Modes_38));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (MaybeWithInst_67));
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (MaybeDetism_63));
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (Varset_37));
      MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (Context_64));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Class0_11,
  MR_Word * Name_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word ClassIdSet_15;

    parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_16, &ClassIdSet_15);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, ClassIdSet_15, (MR_Integer) 3, Class0_11, Name_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(
  MR_Word InInt_9,
  MR_Word ConstraintErrorContext_10,
  MR_Word Constraints0_11,
  MR_Word * Constraints_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word UnivCs0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_11, (MR_Integer) 0))));
    MR_Word ExistCs0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_11, (MR_Integer) 1))));
    MR_Word UnivCs_17;
    MR_Word ExistCs_18;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word STATE_VARIABLE_Specs_24_24;

    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_10, UnivCs0_15, &UnivCs_17, STATE_VARIABLE_Info_0_19, &STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_24_24);
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_10, ExistCs0_16, &ExistCs_18, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20, STATE_VARIABLE_Specs_24_24, STATE_VARIABLE_Specs_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Constraints_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (UnivCs_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExistCs_18));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word TypeAndMode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word TypesAndModes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word TypeAndMode_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrTypesAndModes_55;

    if (((MR_tag((MR_Word) TypeAndMode0_19)) == (MR_Integer) 1))
    {
      MR_Word Mode0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_19, (MR_Integer) 1))));
      MR_Word Mode_46;
      MR_Word STATE_VARIABLE_Info_23_47;
      MR_Word STATE_VARIABLE_Specs_24_48;
      MR_Word Type0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_19, (MR_Integer) 0))));
      MR_Word Type_54;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_53, &Type_54, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_47, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_24_48);
      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_45, &Mode_46, STATE_VARIABLE_Info_23_47, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_24_48, &STATE_VARIABLE_Specs_30_30);
      {
        TypeAndMode_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TypeAndMode_21, 0) = ((MR_Box) (Type_54));
        MR_hl_field(MR_mktag(1), TypeAndMode_21, 1) = ((MR_Box) (Mode_46));
      }
    }
    else
    {
      MR_Word Type0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAndMode0_19, (MR_Integer) 0))));
      MR_Word Type_44;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_43, &Type_44, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeAndMode_21, 0) = ((MR_Box) (Type_44));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeAndMode_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTypesAndModes_55 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_types_and_modes_1_8_p_0(HeadVar__1_1, HeadVar__2_2, TypesAndModes0_20, AddrTypesAndModes_55, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_types_and_modes_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_56,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_56 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word TypeAndMode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TypesAndModes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word TypeAndMode_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrTypesAndModes_55;
      MR_Word HeadVar__4_57;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_56;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      if (((MR_tag((MR_Word) TypeAndMode0_19)) == (MR_Integer) 1))
      {
        MR_Word Mode0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_19, (MR_Integer) 1))));
        MR_Word Mode_46;
        MR_Word STATE_VARIABLE_Info_23_47;
        MR_Word STATE_VARIABLE_Specs_24_48;
        MR_Word Type0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeAndMode0_19, (MR_Integer) 0))));
        MR_Word Type_54;

        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_53, &Type_54, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_23_47, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_24_48);
        parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_45, &Mode_46, STATE_VARIABLE_Info_23_47, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_24_48, &STATE_VARIABLE_Specs_30_30);
        {
          TypeAndMode_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TypeAndMode_21, 0) = ((MR_Box) (Type_54));
          MR_hl_field(MR_mktag(1), TypeAndMode_21, 1) = ((MR_Box) (Mode_46));
        }
      }
      else
      {
        MR_Word Type0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeAndMode0_19, (MR_Integer) 0))));
        MR_Word Type_44;

        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_43, &Type_44, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
        {
          TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeAndMode_21, 0) = ((MR_Box) (Type_44));
        }
      }
      {
        HeadVar__4_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_57, 0) = ((MR_Box) (TypeAndMode_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_57, 1) = NULL;
      }
      AddrTypesAndModes_55 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_57, (MR_Integer) 1)));
      *AddrOfHeadVar__4_56 = HeadVar__4_57;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = TypesAndModes0_20;
      next_value_of_AddrOfHeadVar__4_56 = AddrTypesAndModes_55;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_56 = next_value_of_AddrOfHeadVar__4_56;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word TypeCtor0_11,
  MR_Word * TypeCtor_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_bool succeeded;
    MR_Word SymName0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 0))));
    MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 1))));
    MR_Word SymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 0))));
    MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor0_11, (MR_Integer) 1))));

    succeeded = (Var_29 == (MR_Integer) 0);
    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(SymName_28);
    if (succeeded)
    {
      *TypeCtor_12 = TypeCtor0_11;
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    }
    else
    {
      MR_Word TypeCtorId0_17;
      MR_Word Types_18;
      MR_Word SymName_19;

      {
        TypeCtorId0_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtorId0_17, 0) = ((MR_Box) (SymName0_15));
        MR_hl_field(MR_mktag(0), TypeCtorId0_17, 1) = ((MR_Box) (Arity_16));
      }
      parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_20, &Types_18);
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_18, (MR_Integer) 0, TypeCtorId0_17, &SymName_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeCtor_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SymName_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_16));
      }
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(
  MR_Word InInt_10,
  MR_Word Context_11,
  MR_Word TypeCtor_12,
  MR_Word TypeDefn0_13,
  MR_Word * TypeDefn_14,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43,
  MR_Word STATE_VARIABLE_Specs_0_44,
  MR_Word * STATE_VARIABLE_Specs_45)
{
  switch (MR_tag((MR_Word) TypeDefn0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_17 = (MR_Word) ((MR_Word) (TypeDefn0_13));
        MR_Word Ctors0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_17, (MR_Integer) 0))));
        MR_Word Ctors_21;
        MR_Word MaybeUserEqComp_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_17, (MR_Integer) 1))));
        MR_Word MaybeDirectArgCtors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_17, (MR_Integer) 2))));
        MR_Word DetailsDu_24;

        parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(InInt_10, TypeCtor_12, Ctors0_18, &Ctors_21, STATE_VARIABLE_Info_0_42, STATE_VARIABLE_Info_43, STATE_VARIABLE_Specs_0_44, STATE_VARIABLE_Specs_45);
        {
          DetailsDu_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsDu_24, 0) = ((MR_Box) (Ctors_21));
          MR_hl_field(MR_mktag(0), DetailsDu_24, 1) = ((MR_Box) (MaybeUserEqComp_22));
          MR_hl_field(MR_mktag(0), DetailsDu_24, 2) = ((MR_Box) (MaybeDirectArgCtors_23));
        }
        *TypeDefn_14 = (MR_Word) ((MR_Word) (DetailsDu_24));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSolver0_30 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_13), (MR_Integer) 1));
        MR_Word SolverTypeDetails0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_30, (MR_Integer) 0))));
        MR_Word RepnType0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_31, (MR_Integer) 0))));
        MR_Word GroundInst0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_31, (MR_Integer) 1))));
        MR_Word AnyInst0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_31, (MR_Integer) 2))));
        MR_Word MutableItems0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_31, (MR_Integer) 3))));
        MR_Word RepnType_36;
        MR_Word GroundInst_37;
        MR_Word AnyInst_38;
        MR_Word MutableItems_39;
        MR_Word SolverTypeDetails_40;
        MR_Word DetailsSolver_41;
        MR_Word STATE_VARIABLE_Info_46_46;
        MR_Word STATE_VARIABLE_Specs_47_47;
        MR_Word STATE_VARIABLE_Info_48_48;
        MR_Word STATE_VARIABLE_Specs_49_49;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word STATE_VARIABLE_Specs_51_51;
        MR_Word MaybeUserEqComp_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_30, (MR_Integer) 1))));
        MR_Word ErrorContext_61;

        {
          ErrorContext_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErrorContext_61, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), ErrorContext_61, 1) = ((MR_Box) (TypeCtor_12));
        }
        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_61, RepnType0_32, &RepnType_36, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Specs_0_44, &STATE_VARIABLE_Specs_47_47);
        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_61, GroundInst0_33, &GroundInst_37, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Specs_47_47, &STATE_VARIABLE_Specs_49_49);
        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_61, AnyInst0_34, &AnyInst_38, STATE_VARIABLE_Info_48_48, &STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Specs_49_49, &STATE_VARIABLE_Specs_51_51);
        parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(InInt_10, MutableItems0_35, &MutableItems_39, STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Info_43, STATE_VARIABLE_Specs_51_51, STATE_VARIABLE_Specs_45);
        {
          SolverTypeDetails_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverTypeDetails_40, 0) = ((MR_Box) (RepnType_36));
          MR_hl_field(MR_mktag(0), SolverTypeDetails_40, 1) = ((MR_Box) (GroundInst_37));
          MR_hl_field(MR_mktag(0), SolverTypeDetails_40, 2) = ((MR_Box) (AnyInst_38));
          MR_hl_field(MR_mktag(0), SolverTypeDetails_40, 3) = ((MR_Box) (MutableItems_39));
        }
        {
          DetailsSolver_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsSolver_41, 0) = ((MR_Box) (SolverTypeDetails_40));
          MR_hl_field(MR_mktag(0), DetailsSolver_41, 1) = ((MR_Box) (MaybeUserEqComp_60));
        }
        *TypeDefn_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSolver_41)));
      }
      break;
    case (MR_Integer) 2:
      {
        *TypeDefn_14 = TypeDefn0_13;
        *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
        *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type0_25;
            MR_Word ErrorContext_26;
            MR_Word Type_27;
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn0_13, (MR_Integer) 1))));
            MR_Word Var_57;

            Type0_25 = (MR_Word) (Var_54);
            {
              ErrorContext_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ErrorContext_26, 0) = ((MR_Box) (Context_11));
              MR_hl_field(MR_mktag(0), ErrorContext_26, 1) = ((MR_Box) (TypeCtor_12));
            }
            parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_26, Type0_25, &Type_27, STATE_VARIABLE_Info_0_42, STATE_VARIABLE_Info_43, STATE_VARIABLE_Specs_0_44, STATE_VARIABLE_Specs_45);
            Var_57 = (MR_Word) (Type_27);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *TypeDefn_14 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_57));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *TypeDefn_14 = TypeDefn0_13;
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
            *STATE_VARIABLE_Specs_45 = STATE_VARIABLE_Specs_0_44;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Ctor0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Ctors0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Ctor_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    uint32_t Ordinal_43 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 1))));
    MR_Word FunctionSymbolSymName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 2))));
    MR_Word Args0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 3))));
    MR_Integer Arity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 4))));
    MR_Word Context_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 5))));
    MR_String FunctionSymbolName_49;
    MR_Word MaybeExistConstraints_50;
    MR_Word Args_59;
    MR_Word STATE_VARIABLE_Info_36_60;
    MR_Word STATE_VARIABLE_Specs_37_61;
    MR_Word * AddrCtors_65;

    FunctionSymbolName_49 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_45);
    if ((MaybeExistConstraints0_44 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeExistConstraints_50 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_36_60 = STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_37_61 = STATE_VARIABLE_Specs_0_7;
    }
    else
    {
      MR_Word ExistConstraints0_51 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_44), (MR_Integer) 1));
      MR_Word ExistQVars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 0))));
      MR_Word Constraints0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 1))));
      MR_Word UnconstrainedExistQVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 2))));
      MR_Word ConstrainedExistQVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 3))));
      MR_Word ConstraintErrorContext_56;
      MR_Word Constraints_57;
      MR_Word ExistConstraints_58;

      {
        ConstraintErrorContext_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 1) = ((MR_Box) (Context_48));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 2) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 3) = ((MR_Box) (FunctionSymbolName_49));
      }
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_56, Constraints0_53, &Constraints_57, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_36_60, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_37_61);
      {
        ExistConstraints_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ExistConstraints_58, 0) = ((MR_Box) (ExistQVars_52));
        MR_hl_field(MR_mktag(0), ExistConstraints_58, 1) = ((MR_Box) (Constraints_57));
        MR_hl_field(MR_mktag(0), ExistConstraints_58, 2) = ((MR_Box) (UnconstrainedExistQVars_54));
        MR_hl_field(MR_mktag(0), ExistConstraints_58, 3) = ((MR_Box) (ConstrainedExistQVars_55));
      }
      MaybeExistConstraints_50 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_58)));
    }
    parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(HeadVar__1_1, HeadVar__2_2, FunctionSymbolName_49, (MR_Integer) 0, Args0_46, &Args_59, STATE_VARIABLE_Info_36_60, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_37_61, &STATE_VARIABLE_Specs_30_30);
    {
      Ctor_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Ctor_21, 0) = ((MR_Box) (MR_Word) (Ordinal_43));
      MR_hl_field(MR_mktag(0), Ctor_21, 1) = ((MR_Box) (MaybeExistConstraints_50));
      MR_hl_field(MR_mktag(0), Ctor_21, 2) = ((MR_Box) (FunctionSymbolSymName_45));
      MR_hl_field(MR_mktag(0), Ctor_21, 3) = ((MR_Box) (Args_59));
      MR_hl_field(MR_mktag(0), Ctor_21, 4) = ((MR_Box) (Arity_47));
      MR_hl_field(MR_mktag(0), Ctor_21, 5) = ((MR_Box) (Context_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrCtors_65 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_constructors_1_8_p_0(HeadVar__1_1, HeadVar__2_2, Ctors0_20, AddrCtors_65, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_constructors_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_66,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_66 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Ctor0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ctors0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Ctor_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      uint32_t Ordinal_43 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 0)));
      MR_Word MaybeExistConstraints0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 1))));
      MR_Word FunctionSymbolSymName_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 2))));
      MR_Word Args0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 3))));
      MR_Integer Arity_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 4))));
      MR_Word Context_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 5))));
      MR_String FunctionSymbolName_49;
      MR_Word MaybeExistConstraints_50;
      MR_Word Args_59;
      MR_Word STATE_VARIABLE_Info_36_60;
      MR_Word STATE_VARIABLE_Specs_37_61;
      MR_Word * AddrCtors_65;
      MR_Word HeadVar__4_67;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_66;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      FunctionSymbolName_49 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_45);
      if ((MaybeExistConstraints0_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeExistConstraints_50 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_36_60 = STATE_VARIABLE_Info_0_5;
        STATE_VARIABLE_Specs_37_61 = STATE_VARIABLE_Specs_0_7;
      }
      else
      {
        MR_Word ExistConstraints0_51 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_44), (MR_Integer) 1));
        MR_Word ExistQVars_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 0))));
        MR_Word Constraints0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 1))));
        MR_Word UnconstrainedExistQVars_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 2))));
        MR_Word ConstrainedExistQVars_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_51, (MR_Integer) 3))));
        MR_Word ConstraintErrorContext_56;
        MR_Word Constraints_57;
        MR_Word ExistConstraints_58;

        {
          ConstraintErrorContext_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 1) = ((MR_Box) (Context_48));
          MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 2) = ((MR_Box) (HeadVar__2_2));
          MR_hl_field(MR_mktag(3), ConstraintErrorContext_56, 3) = ((MR_Box) (FunctionSymbolName_49));
        }
        parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(HeadVar__1_1, ConstraintErrorContext_56, Constraints0_53, &Constraints_57, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_36_60, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_37_61);
        {
          ExistConstraints_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ExistConstraints_58, 0) = ((MR_Box) (ExistQVars_52));
          MR_hl_field(MR_mktag(0), ExistConstraints_58, 1) = ((MR_Box) (Constraints_57));
          MR_hl_field(MR_mktag(0), ExistConstraints_58, 2) = ((MR_Box) (UnconstrainedExistQVars_54));
          MR_hl_field(MR_mktag(0), ExistConstraints_58, 3) = ((MR_Box) (ConstrainedExistQVars_55));
        }
        MaybeExistConstraints_50 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_58)));
      }
      parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(HeadVar__1_1, HeadVar__2_2, FunctionSymbolName_49, (MR_Integer) 0, Args0_46, &Args_59, STATE_VARIABLE_Info_36_60, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_37_61, &STATE_VARIABLE_Specs_30_30);
      {
        Ctor_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Ctor_21, 0) = ((MR_Box) (MR_Word) (Ordinal_43));
        MR_hl_field(MR_mktag(0), Ctor_21, 1) = ((MR_Box) (MaybeExistConstraints_50));
        MR_hl_field(MR_mktag(0), Ctor_21, 2) = ((MR_Box) (FunctionSymbolSymName_45));
        MR_hl_field(MR_mktag(0), Ctor_21, 3) = ((MR_Box) (Args_59));
        MR_hl_field(MR_mktag(0), Ctor_21, 4) = ((MR_Box) (Arity_47));
        MR_hl_field(MR_mktag(0), Ctor_21, 5) = ((MR_Box) (Context_48));
      }
      {
        HeadVar__4_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_67, 0) = ((MR_Box) (Ctor_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_67, 1) = NULL;
      }
      AddrCtors_65 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_67, (MR_Integer) 1)));
      *AddrOfHeadVar__4_66 = HeadVar__4_67;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Ctors0_20;
      next_value_of_AddrOfHeadVar__4_66 = AddrCtors_65;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_66 = next_value_of_AddrOfHeadVar__4_66;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Constraint_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word ClassName0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_19, (MR_Integer) 0))));
    MR_Word Types0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_19, (MR_Integer) 1))));
    MR_Integer Arity_45;
    MR_Word OutsideContext_46;
    MR_Word ClassName_47;
    MR_Word ErrorContext_48;
    MR_Word Types_49;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Info_27_51;
    MR_Word STATE_VARIABLE_Specs_28_52;
    MR_Word ClassIdSet_66;
    MR_Word * AddrConstraints_70;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_44, &Arity_45);
    {
      OutsideContext_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), OutsideContext_46, 0) = ((MR_Box) (HeadVar__2_2));
    }
    {
      Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (ClassName0_43));
      MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Arity_45));
    }
    parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_66);
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, OutsideContext_46, ClassIdSet_66, (MR_Integer) 3, Var_50, &ClassName_47, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_51, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_28_52);
    {
      ErrorContext_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), ErrorContext_48, 1) = ((MR_Box) (ClassName0_43));
      MR_hl_field(MR_mktag(3), ErrorContext_48, 2) = ((MR_Box) (Arity_45));
      MR_hl_field(MR_mktag(3), ErrorContext_48, 3) = ((MR_Box) (HeadVar__2_2));
    }
    parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(HeadVar__1_1, ErrorContext_48, Types0_44, &Types_49, STATE_VARIABLE_Info_27_51, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_28_52, &STATE_VARIABLE_Specs_30_30);
    {
      Constraint_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraint_21, 0) = ((MR_Box) (ClassName_47));
      MR_hl_field(MR_mktag(0), Constraint_21, 1) = ((MR_Box) (Types_49));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Constraint_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrConstraints_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_prog_constraint_list_1_8_p_0(HeadVar__1_1, HeadVar__2_2, Constraints0_20, AddrConstraints_70, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_prog_constraint_list_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_71,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_71 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Constraint0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Constraints0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Constraint_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word ClassName0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_19, (MR_Integer) 0))));
      MR_Word Types0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraint0_19, (MR_Integer) 1))));
      MR_Integer Arity_45;
      MR_Word OutsideContext_46;
      MR_Word ClassName_47;
      MR_Word ErrorContext_48;
      MR_Word Types_49;
      MR_Word Var_50;
      MR_Word STATE_VARIABLE_Info_27_51;
      MR_Word STATE_VARIABLE_Specs_28_52;
      MR_Word ClassIdSet_66;
      MR_Word * AddrConstraints_70;
      MR_Word HeadVar__4_72;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_71;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_44, &Arity_45);
      {
        OutsideContext_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), OutsideContext_46, 0) = ((MR_Box) (HeadVar__2_2));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (ClassName0_43));
        MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (Arity_45));
      }
      parse_tree__module_qual__mq_info_get_classes_2_p_0(STATE_VARIABLE_Info_0_5, &ClassIdSet_66);
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(HeadVar__1_1, OutsideContext_46, ClassIdSet_66, (MR_Integer) 3, Var_50, &ClassName_47, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_27_51, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_28_52);
      {
        ErrorContext_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ErrorContext_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), ErrorContext_48, 1) = ((MR_Box) (ClassName0_43));
        MR_hl_field(MR_mktag(3), ErrorContext_48, 2) = ((MR_Box) (Arity_45));
        MR_hl_field(MR_mktag(3), ErrorContext_48, 3) = ((MR_Box) (HeadVar__2_2));
      }
      parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(HeadVar__1_1, ErrorContext_48, Types0_44, &Types_49, STATE_VARIABLE_Info_27_51, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_28_52, &STATE_VARIABLE_Specs_30_30);
      {
        Constraint_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Constraint_21, 0) = ((MR_Box) (ClassName_47));
        MR_hl_field(MR_mktag(0), Constraint_21, 1) = ((MR_Box) (Types_49));
      }
      {
        HeadVar__4_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_72, 0) = ((MR_Box) (Constraint_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_72, 1) = NULL;
      }
      AddrConstraints_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_72, (MR_Integer) 1)));
      *AddrOfHeadVar__4_71 = HeadVar__4_72;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Constraints0_20;
      next_value_of_AddrOfHeadVar__4_71 = AddrConstraints_70;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_71 = next_value_of_AddrOfHeadVar__4_71;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
    *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
  }
  else
  {
    MR_Word Arg0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Args0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Arg_27;
    MR_Integer CurArgNum_31 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Info_37_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word MaybeFieldName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 0))));
    MR_Word Type0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 1))));
    MR_Word Context_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 2))));
    MR_Word ErrorContext_56;
    MR_Word Type_57;
    MR_Word * AddrArgs_60;

    {
      ErrorContext_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ErrorContext_56, 0) = ((MR_Box) (Context_55));
      MR_hl_field(MR_mktag(1), ErrorContext_56, 1) = ((MR_Box) (ContainingTypeCtor_2));
      MR_hl_field(MR_mktag(1), ErrorContext_56, 2) = ((MR_Box) (FunctionSymbol_3));
      MR_hl_field(MR_mktag(1), ErrorContext_56, 3) = ((MR_Box) (CurArgNum_31));
      MR_hl_field(MR_mktag(1), ErrorContext_56, 4) = ((MR_Box) (MaybeFieldName_53));
    }
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_56, Type0_54, &Type_57, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_38_38);
    {
      Arg_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_27, 0) = ((MR_Box) (MaybeFieldName_53));
      MR_hl_field(MR_mktag(0), Arg_27, 1) = ((MR_Box) (Type_57));
      MR_hl_field(MR_mktag(0), Arg_27, 2) = ((MR_Box) (Context_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_27));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrArgs_60 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__6_6, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_constructor_args_1_10_p_0(HeadVar__1_1, ContainingTypeCtor_2, FunctionSymbol_3, CurArgNum_31, Args0_26, AddrArgs_60, STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Info_8, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_10);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_constructor_args_1_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ContainingTypeCtor_2,
  MR_String FunctionSymbol_3,
  MR_Integer LastArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * AddrOfHeadVar__6_61,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__6_61 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word Arg0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Args0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Arg_27;
      MR_Integer CurArgNum_31 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) (MR_Integer) 1);
      MR_Word STATE_VARIABLE_Info_37_37;
      MR_Word STATE_VARIABLE_Specs_38_38;
      MR_Word MaybeFieldName_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 0))));
      MR_Word Type0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 1))));
      MR_Word Context_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg0_25, (MR_Integer) 2))));
      MR_Word ErrorContext_56;
      MR_Word Type_57;
      MR_Word * AddrArgs_60;
      MR_Word HeadVar__6_62;
      MR_Integer next_value_of_LastArgNum_4;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word * next_value_of_AddrOfHeadVar__6_61;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      {
        ErrorContext_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ErrorContext_56, 0) = ((MR_Box) (Context_55));
        MR_hl_field(MR_mktag(1), ErrorContext_56, 1) = ((MR_Box) (ContainingTypeCtor_2));
        MR_hl_field(MR_mktag(1), ErrorContext_56, 2) = ((MR_Box) (FunctionSymbol_3));
        MR_hl_field(MR_mktag(1), ErrorContext_56, 3) = ((MR_Box) (CurArgNum_31));
        MR_hl_field(MR_mktag(1), ErrorContext_56, 4) = ((MR_Box) (MaybeFieldName_53));
      }
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_56, Type0_54, &Type_57, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_37_37, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_38_38);
      {
        Arg_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Arg_27, 0) = ((MR_Box) (MaybeFieldName_53));
        MR_hl_field(MR_mktag(0), Arg_27, 1) = ((MR_Box) (Type_57));
        MR_hl_field(MR_mktag(0), Arg_27, 2) = ((MR_Box) (Context_55));
      }
      {
        HeadVar__6_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__6_62, 0) = ((MR_Box) (Arg_27));
        MR_hl_field(MR_mktag(1), HeadVar__6_62, 1) = NULL;
      }
      AddrArgs_60 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__6_62, (MR_Integer) 1)));
      *AddrOfHeadVar__6_61 = HeadVar__6_62;
      // direct tailcall eliminated
      ;
      next_value_of_LastArgNum_4 = CurArgNum_31;
      next_value_of_HeadVar__5_5 = Args0_26;
      next_value_of_AddrOfHeadVar__6_61 = AddrArgs_60;
      next_value_of_STATE_VARIABLE_Info_0_7 = STATE_VARIABLE_Info_37_37;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_38_38;
      LastArgNum_4 = next_value_of_LastArgNum_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      AddrOfHeadVar__6_61 = next_value_of_AddrOfHeadVar__6_61;
      STATE_VARIABLE_Info_0_7 = next_value_of_STATE_VARIABLE_Info_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
  }
  else
  {
    MR_Word Mutable0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Mutables0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Mutable_18;
    MR_Word STATE_VARIABLE_Info_26_26;
    MR_Word STATE_VARIABLE_Specs_27_27;
    MR_String Name_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 0))));
    MR_Word OrigType0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 1))));
    MR_Word Type0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 2))));
    MR_Word OrigInst0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 3))));
    MR_Word Inst0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 4))));
    MR_Word InitTerm_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 5))));
    MR_Word Attrs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 6))));
    MR_Word Varset_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 7))));
    MR_Word Context_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 8))));
    MR_Integer SeqNum_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 9))));
    MR_Word ErrorContext_49;
    MR_Word OrigType_50;
    MR_Word Type_52;
    MR_Word OrigInst_53;
    MR_Word Inst_55;
    MR_Word STATE_VARIABLE_Info_34_56;
    MR_Word STATE_VARIABLE_Info_36_58;
    MR_Word STATE_VARIABLE_Specs_37_59;
    MR_Word STATE_VARIABLE_Info_38_60;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word * AddrMutables_64;

    {
      ErrorContext_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ErrorContext_49, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(MR_mktag(3), ErrorContext_49, 1) = ((MR_Box) (Context_47));
      MR_hl_field(MR_mktag(3), ErrorContext_49, 2) = ((MR_Box) (Name_39));
    }
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_49, OrigType0_40, &OrigType_50, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_34_56, (MR_Word) ((MR_Unsigned) 0U), &Var_51);
    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_49, Type0_41, &Type_52, STATE_VARIABLE_Info_34_56, &STATE_VARIABLE_Info_36_58, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_37_59);
    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, ErrorContext_49, OrigInst0_42, &OrigInst_53, STATE_VARIABLE_Info_36_58, &STATE_VARIABLE_Info_38_60, (MR_Word) ((MR_Unsigned) 0U), &Var_54);
    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, ErrorContext_49, Inst0_43, &Inst_55, STATE_VARIABLE_Info_38_60, &STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Specs_37_59, &STATE_VARIABLE_Specs_27_27);
    {
      Mutable_18 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Mutable_18, 0) = ((MR_Box) (Name_39));
      MR_hl_field(MR_mktag(0), Mutable_18, 1) = ((MR_Box) (OrigType_50));
      MR_hl_field(MR_mktag(0), Mutable_18, 2) = ((MR_Box) (Type_52));
      MR_hl_field(MR_mktag(0), Mutable_18, 3) = ((MR_Box) (OrigInst_53));
      MR_hl_field(MR_mktag(0), Mutable_18, 4) = ((MR_Box) (Inst_55));
      MR_hl_field(MR_mktag(0), Mutable_18, 5) = ((MR_Box) (InitTerm_44));
      MR_hl_field(MR_mktag(0), Mutable_18, 6) = ((MR_Box) (Attrs_45));
      MR_hl_field(MR_mktag(0), Mutable_18, 7) = ((MR_Box) (Varset_46));
      MR_hl_field(MR_mktag(0), Mutable_18, 8) = ((MR_Box) (Context_47));
      MR_hl_field(MR_mktag(0), Mutable_18, 9) = ((MR_Box) (SeqNum_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mutable_18));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrMutables_64 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_constraint_stores_1_7_p_0(HeadVar__1_1, Mutables0_17, AddrMutables_64, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_5, STATE_VARIABLE_Specs_27_27, STATE_VARIABLE_Specs_7);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_constraint_stores_1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_65,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_65 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    }
    else
    {
      MR_Word Mutable0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Mutables0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Mutable_18;
      MR_Word STATE_VARIABLE_Info_26_26;
      MR_Word STATE_VARIABLE_Specs_27_27;
      MR_String Name_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 0))));
      MR_Word OrigType0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 1))));
      MR_Word Type0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 2))));
      MR_Word OrigInst0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 3))));
      MR_Word Inst0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 4))));
      MR_Word InitTerm_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 5))));
      MR_Word Attrs_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 6))));
      MR_Word Varset_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 7))));
      MR_Word Context_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 8))));
      MR_Integer SeqNum_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Mutable0_16, (MR_Integer) 9))));
      MR_Word ErrorContext_49;
      MR_Word OrigType_50;
      MR_Word Type_52;
      MR_Word OrigInst_53;
      MR_Word Inst_55;
      MR_Word STATE_VARIABLE_Info_34_56;
      MR_Word STATE_VARIABLE_Info_36_58;
      MR_Word STATE_VARIABLE_Specs_37_59;
      MR_Word STATE_VARIABLE_Info_38_60;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word * AddrMutables_64;
      MR_Word HeadVar__3_66;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_65;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      {
        ErrorContext_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ErrorContext_49, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), ErrorContext_49, 1) = ((MR_Box) (Context_47));
        MR_hl_field(MR_mktag(3), ErrorContext_49, 2) = ((MR_Box) (Name_39));
      }
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_49, OrigType0_40, &OrigType_50, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_34_56, (MR_Word) ((MR_Unsigned) 0U), &Var_51);
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, ErrorContext_49, Type0_41, &Type_52, STATE_VARIABLE_Info_34_56, &STATE_VARIABLE_Info_36_58, STATE_VARIABLE_Specs_0_6, &STATE_VARIABLE_Specs_37_59);
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, ErrorContext_49, OrigInst0_42, &OrigInst_53, STATE_VARIABLE_Info_36_58, &STATE_VARIABLE_Info_38_60, (MR_Word) ((MR_Unsigned) 0U), &Var_54);
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, ErrorContext_49, Inst0_43, &Inst_55, STATE_VARIABLE_Info_38_60, &STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Specs_37_59, &STATE_VARIABLE_Specs_27_27);
      {
        Mutable_18 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Mutable_18, 0) = ((MR_Box) (Name_39));
        MR_hl_field(MR_mktag(0), Mutable_18, 1) = ((MR_Box) (OrigType_50));
        MR_hl_field(MR_mktag(0), Mutable_18, 2) = ((MR_Box) (Type_52));
        MR_hl_field(MR_mktag(0), Mutable_18, 3) = ((MR_Box) (OrigInst_53));
        MR_hl_field(MR_mktag(0), Mutable_18, 4) = ((MR_Box) (Inst_55));
        MR_hl_field(MR_mktag(0), Mutable_18, 5) = ((MR_Box) (InitTerm_44));
        MR_hl_field(MR_mktag(0), Mutable_18, 6) = ((MR_Box) (Attrs_45));
        MR_hl_field(MR_mktag(0), Mutable_18, 7) = ((MR_Box) (Varset_46));
        MR_hl_field(MR_mktag(0), Mutable_18, 8) = ((MR_Box) (Context_47));
        MR_hl_field(MR_mktag(0), Mutable_18, 9) = ((MR_Box) (SeqNum_48));
      }
      {
        HeadVar__3_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_66, 0) = ((MR_Box) (Mutable_18));
        MR_hl_field(MR_mktag(1), HeadVar__3_66, 1) = NULL;
      }
      AddrMutables_64 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_66, (MR_Integer) 1)));
      *AddrOfHeadVar__3_65 = HeadVar__3_66;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Mutables0_17;
      next_value_of_AddrOfHeadVar__3_65 = AddrMutables_64;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_26_26;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_65 = next_value_of_AddrOfHeadVar__3_65;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Type0_11,
  MR_Word * AddrOfType_114,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfType_114 = Type0_11;
          *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 0))));
          MR_Word Args0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 1))));
          MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 2))));
          MR_Integer Arity_20;
          MR_Word TypeCtorId0_21;
          MR_Word Types_22;
          MR_Word SymName_23;
          MR_Word STATE_VARIABLE_Info_95_95;
          MR_Word STATE_VARIABLE_Specs_96_96;
          MR_Word * AddrArgs_111;
          MR_Word Type_116;

          Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_18);
          {
            TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeCtorId0_21, 0) = ((MR_Box) (SymName0_17));
            MR_hl_field(MR_mktag(0), TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
          }
          parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_22);
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_96_96);
          {
            Type_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Type_116, 0) = ((MR_Box) (SymName_23));
            MR_hl_field(MR_mktag(1), Type_116, 1) = NULL;
            MR_hl_field(MR_mktag(1), Type_116, 2) = ((MR_Box) (Kind_19));
          }
          AddrArgs_111 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), Type_116, (MR_Integer) 1)));
          *AddrOfType_114 = Type_116;
          parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_18, AddrArgs_111, STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_96_96, STATE_VARIABLE_Specs_37);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type0_11, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) BuiltinType_25)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_25)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[0]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[11]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_25, (MR_Integer) 0))) & (MR_Integer) 15);

                switch (Var_109) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[1]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[2]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[3]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[4]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[5]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[6]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[7]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[8]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[9]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[10]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    }
                    break;
                }
              }
              break;
          }
          *AddrOfType_114 = Type0_11;
          *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Args0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
              MR_Word Kind_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
              MR_Word * AddrArgs_113;
              MR_Word Type_123;

              {
                Type_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Type_123, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Type_123, 1) = NULL;
                MR_hl_field(MR_mktag(3), Type_123, 2) = ((MR_Box) (Kind_102));
              }
              AddrArgs_113 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Type_123, (MR_Integer) 1)));
              *AddrOfType_114 = Type_123;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_101, AddrArgs_113, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 3))));
              MR_Word Purity_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 4))) & (MR_Integer) 3);
              MR_Word HOInstInfo_30;
              MR_Word STATE_VARIABLE_Info_44_44;
              MR_Word STATE_VARIABLE_Specs_45_45;
              MR_Word Args0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
              MR_Word Args_100;
              MR_Word Type_119;

              parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Args0_99, &Args_100, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_45_45);
              parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_27, &HOInstInfo_30, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_45_45, STATE_VARIABLE_Specs_37);
              {
                Type_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Type_119, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Type_119, 1) = (MR_Box) ((MR_Unsigned) (PorF_26));
                MR_hl_field(MR_mktag(3), Type_119, 2) = ((MR_Box) (Args_100));
                MR_hl_field(MR_mktag(3), Type_119, 3) = ((MR_Box) (HOInstInfo_30));
                MR_hl_field(MR_mktag(3), Type_119, 4) = (MR_Box) ((MR_Unsigned) (Purity_28));
                MR_hl_field(MR_mktag(3), Type_119, 5) = NULL;
              }
              *AddrOfType_114 = Type_119;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
              MR_Word Args0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
              MR_Word Kind_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 3))));
              MR_Word Type_12;
              MR_Word * AddrArgs_110;

              {
                Type_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Type_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Type_12, 1) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(3), Type_12, 2) = NULL;
                MR_hl_field(MR_mktag(3), Type_12, 3) = ((MR_Box) (Kind_105));
              }
              AddrArgs_110 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Type_12, (MR_Integer) 2)));
              *AddrOfType_114 = Type_12;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_104, AddrArgs_110, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
              MR_Word Kind_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
              MR_Word * AddrSubType_112;
              MR_Word Type_120;
              MR_Word next_value_of_Type0_11;
              MR_Word * next_value_of_AddrOfType_114;

              {
                Type_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Type_120, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Type_120, 1) = NULL;
                MR_hl_field(MR_mktag(3), Type_120, 2) = ((MR_Box) (Kind_107));
              }
              AddrSubType_112 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Type_120, (MR_Integer) 1)));
              *AddrOfType_114 = Type_120;
              // direct tailcall eliminated
              ;
              next_value_of_Type0_11 = SubType0_32;
              next_value_of_AddrOfType_114 = AddrSubType_112;
              Type0_11 = next_value_of_Type0_11;
              AddrOfType_114 = next_value_of_AddrOfType_114;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Type_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrTypes_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Type_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrTypes_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrTypes_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrTypes_33;

    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(HeadVar__1_1, HeadVar__2_2, Type0_19, &Type_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTypes_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(HeadVar__1_1, HeadVar__2_2, Types0_20, AddrTypes_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Type0_11,
  MR_Word * Type_12,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37)
{
  switch (MR_tag((MR_Word) Type0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_12 = Type0_11;
        *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 0))));
        MR_Word Args0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 1))));
        MR_Word Kind_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type0_11, (MR_Integer) 2))));
        MR_Integer Arity_20;
        MR_Word TypeCtorId0_21;
        MR_Word Types_22;
        MR_Word SymName_23;
        MR_Word STATE_VARIABLE_Info_95_95;
        MR_Word STATE_VARIABLE_Specs_96_96;
        MR_Word * AddrArgs_111;

        Arity_20 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Args0_18);
        {
          TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtorId0_21, 0) = ((MR_Box) (SymName0_17));
          MR_hl_field(MR_mktag(0), TypeCtorId0_21, 1) = ((MR_Box) (Arity_20));
        }
        parse_tree__module_qual__mq_info_get_types_2_p_0(STATE_VARIABLE_Info_0_34, &Types_22);
        parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Types_22, (MR_Integer) 0, TypeCtorId0_21, &SymName_23, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_96_96);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_23));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Kind_19));
        }
        AddrArgs_111 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *Type_12, (MR_Integer) 1)));
        parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_18, AddrArgs_111, STATE_VARIABLE_Info_95_95, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_96_96, STATE_VARIABLE_Specs_37);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Type0_11, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) BuiltinType_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(BuiltinType_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[0]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                }
                break;
              case (MR_Integer) 1:
                {
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[11]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                }
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_Info_35 = STATE_VARIABLE_Info_0_34;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_109 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_25, (MR_Integer) 0))) & (MR_Integer) 15);

              switch (Var_109) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[1]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[2]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[3]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[4]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[5]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[6]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[7]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[8]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[9]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[10]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  }
                  break;
              }
            }
            break;
        }
        *Type_12 = Type0_11;
        *STATE_VARIABLE_Specs_37 = STATE_VARIABLE_Specs_0_36;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Args0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
            MR_Word Kind_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
            MR_Word * AddrArgs_113;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = NULL;
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_102));
            }
            AddrArgs_113 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Type_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_101, AddrArgs_113, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word HOInstInfo0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 3))));
            MR_Word Purity_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word HOInstInfo_30;
            MR_Word STATE_VARIABLE_Info_44_44;
            MR_Word STATE_VARIABLE_Specs_45_45;
            MR_Word Args0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
            MR_Word Args_100;

            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_9, ErrorContext_10, Args0_99, &Args_100, STATE_VARIABLE_Info_0_34, &STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_45_45);
            parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_27, &HOInstInfo_30, STATE_VARIABLE_Info_44_44, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_45_45, STATE_VARIABLE_Specs_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (PorF_26));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Args_100));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HOInstInfo_30));
              MR_hl_field(MR_mktag(3), base, 4) = (MR_Box) ((MR_Unsigned) (Purity_28));
              MR_hl_field(MR_mktag(3), base, 5) = NULL;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
            MR_Word Args0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
            MR_Word Kind_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 3))));
            MR_Word * AddrArgs_110;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_31));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Kind_105));
            }
            AddrArgs_110 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Type_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_104, AddrArgs_110, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubType0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 1))));
            MR_Word Kind_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type0_11, (MR_Integer) 2))));
            MR_Word * AddrSubType_112;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = NULL;
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Kind_107));
            }
            AddrSubType_112 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Type_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_type_1_8_p_0(InInt_9, ErrorContext_10, SubType0_32, AddrSubType_112, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35, STATE_VARIABLE_Specs_0_36, STATE_VARIABLE_Specs_37);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HOInstInfo0_11,
  MR_Word * HOInstInfo_12,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  if ((HOInstInfo0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HOInstInfo_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
  else
  {
    MR_Word PredOrFunc_15;
    MR_Word Modes0_16;
    MR_Word MaybeArgRegs_17;
    MR_Word Detism_18;
    MR_Word Modes_19;
    MR_Word Var_24 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_11), (MR_Integer) 1));
    MR_Word Var_27;

    PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))) & (MR_Integer) 1);
    Modes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
    MaybeArgRegs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 2))));
    Detism_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 3))) & (MR_Integer) 7);
    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_16, &Modes_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Modes_19));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MaybeArgRegs_17));
      MR_hl_field(MR_mktag(0), Var_27, 3) = (MR_Box) ((MR_Unsigned) (Detism_18));
    }
    *HOInstInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_27)));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * AddrOfInst_87,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Inst0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfInst_87 = Inst0_11;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 1))));
          MR_Word HOInstInfo_17;
          MR_Word Inst_88;

          if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          else
          {
            MR_Word PredOrFunc_73;
            MR_Word Modes0_74;
            MR_Word MaybeArgRegs_75;
            MR_Word Detism_76;
            MR_Word Modes_77;
            MR_Word Var_78 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
            MR_Word Var_81;

            PredOrFunc_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))) & (MR_Integer) 1);
            Modes0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 1))));
            MaybeArgRegs_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 2))));
            Detism_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 3))) & (MR_Integer) 7);
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_74, &Modes_77, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_73));
              MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (Modes_77));
              MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MaybeArgRegs_75));
              MR_hl_field(MR_mktag(0), Var_81, 3) = (MR_Box) ((MR_Unsigned) (Detism_76));
            }
            HOInstInfo_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_81)));
          }
          {
            Inst_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Inst_88, 0) = (MR_Box) ((MR_Unsigned) (Uniq_15));
            MR_hl_field(MR_mktag(2), Inst_88, 1) = ((MR_Box) (HOInstInfo_17));
          }
          *AddrOfInst_87 = Inst_88;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 3))));
              MR_Word Uniq_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word * AddrBoundInsts_83;
              MR_Word Inst_89;

              switch (MR_tag((MR_Word) InstResults0_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(InstResults0_20)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
                      return;
                    }
                  }
                  break;
              }
              {
                Inst_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Inst_89, 1) = (MR_Box) ((MR_Unsigned) (Uniq_59));
                MR_hl_field(MR_mktag(3), Inst_89, 2) = ((MR_Box) (InstResults0_20));
                MR_hl_field(MR_mktag(3), Inst_89, 3) = NULL;
              }
              AddrBoundInsts_83 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_89, (MR_Integer) 3)));
              *AddrOfInst_87 = Inst_89;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_21, AddrBoundInsts_83, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word * AddrHOInstInfo_86;
              MR_Word Inst_99;

              {
                Inst_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Inst_99, 1) = (MR_Box) ((MR_Unsigned) (Uniq_60));
                MR_hl_field(MR_mktag(3), Inst_99, 2) = NULL;
              }
              AddrHOInstInfo_86 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_99, (MR_Integer) 2)));
              *AddrOfInst_87 = Inst_99;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_ho_inst_info_1_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_61, AddrHOInstInfo_86, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 2:
            {
              *AddrOfInst_87 = Inst0_11;
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
              *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word SubInst0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word * AddrSubInst_84;
              MR_Word Inst_92;
              MR_Word next_value_of_Inst0_11;
              MR_Word * next_value_of_AddrOfInst_87;

              {
                Inst_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_92, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Inst_92, 1) = ((MR_Box) (Vars_29));
                MR_hl_field(MR_mktag(3), Inst_92, 2) = NULL;
              }
              AddrSubInst_84 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_92, (MR_Integer) 2)));
              *AddrOfInst_87 = Inst_92;
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_11 = SubInst0_30;
              next_value_of_AddrOfInst_87 = AddrSubInst_84;
              Inst0_11 = next_value_of_Inst0_11;
              AddrOfInst_87 = next_value_of_AddrOfInst_87;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word * AddrInstName_85;
              MR_Word Inst_95;

              {
                Inst_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_95, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Inst_95, 1) = NULL;
              }
              AddrInstName_85 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_95, (MR_Integer) 1)));
              *AddrOfInst_87 = Inst_95;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_name_1_8_p_0(InInt_9, ErrorContext_10, InstName0_32, AddrInstName_85, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word Inst_12;
              MR_Word * AddrArgs_82;

              {
                Inst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_12, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Inst_12, 1) = ((MR_Box) (Name_34));
                MR_hl_field(MR_mktag(3), Inst_12, 2) = NULL;
              }
              AddrArgs_82 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 2)));
              *AddrOfInst_87 = Inst_12;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_35, AddrArgs_82, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    recompilation__record_used_item_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_91,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_91 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word BoundInst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BoundInsts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word BoundInst_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word ConsId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_19, (MR_Integer) 0))));
      MR_Word Insts0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BoundInst0_19, (MR_Integer) 1))));
      MR_Word Insts_81;
      MR_Word STATE_VARIABLE_Info_59_83;
      MR_Word * AddrBoundInsts_90;
      MR_Word HeadVar__4_92;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_91;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      switch (MR_tag((MR_Word) ConsId_43)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 2:
          STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_43, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Name_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_43, (MR_Integer) 1))));
                MR_Integer Arity_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_43, (MR_Integer) 2))));
                MR_Word Id_48;
                MR_Word Var_82;

                {
                  Id_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Id_48, 0) = ((MR_Box) (Name_45));
                  MR_hl_field(MR_mktag(0), Id_48, 1) = ((MR_Box) (Arity_46));
                }
                {
                  Var_82 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]));
                  MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) (Id_48));
                  MR_hl_field(MR_mktag(0), Var_82, 5) = ((MR_Box) (Id_48));
                }
                parse_tree__module_qual__update_recompilation_info_3_p_0(Var_82, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_59_83);
              }
              break;
            case (MR_Integer) 3:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 4:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 5:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 6:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 7:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 8:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 9:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 10:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 11:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 12:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 13:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 14:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 15:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 16:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 17:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 18:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 19:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 20:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 21:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 22:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
            case (MR_Integer) 23:
              STATE_VARIABLE_Info_59_83 = STATE_VARIABLE_Info_0_5;
              break;
          }
          break;
      }
      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_44, &Insts_81, STATE_VARIABLE_Info_59_83, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        BoundInst_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), BoundInst_21, 0) = ((MR_Box) (ConsId_43));
        MR_hl_field(MR_mktag(0), BoundInst_21, 1) = ((MR_Box) (Insts_81));
      }
      {
        HeadVar__4_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_92, 0) = ((MR_Box) (BoundInst_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_92, 1) = NULL;
      }
      AddrBoundInsts_90 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_92, (MR_Integer) 1)));
      *AddrOfHeadVar__4_91 = HeadVar__4_92;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = BoundInsts0_20;
      next_value_of_AddrOfHeadVar__4_91 = AddrBoundInsts_90;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_91 = next_value_of_AddrOfHeadVar__4_91;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_list_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Inst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Inst_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrInsts_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, Inst0_19, &Inst_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Inst_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrInsts_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Insts0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrInsts_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_mode_list_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__4_34 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    }
    else
    {
      MR_Word Mode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Modes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Mode_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrModes_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_19, &Mode_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Mode_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrModes_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Modes0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrModes_33;
      next_value_of_STATE_VARIABLE_Info_0_5 = STATE_VARIABLE_Info_29_29;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      AddrOfHeadVar__4_34 = next_value_of_AddrOfHeadVar__4_34;
      STATE_VARIABLE_Info_0_5 = next_value_of_STATE_VARIABLE_Info_0_5;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_ho_inst_info_1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HOInstInfo0_11,
  MR_Word * AddrOfHOInstInfo_28,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  if ((HOInstInfo0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *AddrOfHOInstInfo_28 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
  else
  {
    MR_Word HOInstInfo_12;
    MR_Word PredOrFunc_15;
    MR_Word Modes0_16;
    MR_Word MaybeArgRegs_17;
    MR_Word Detism_18;
    MR_Word Modes_19;
    MR_Word Var_24 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_11), (MR_Integer) 1));
    MR_Word Var_27;

    PredOrFunc_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0))) & (MR_Integer) 1);
    Modes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 1))));
    MaybeArgRegs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 2))));
    Detism_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 3))) & (MR_Integer) 7);
    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_16, &Modes_19, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Modes_19));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MaybeArgRegs_17));
      MR_hl_field(MR_mktag(0), Var_27, 3) = (MR_Box) ((MR_Unsigned) (Detism_18));
    }
    HOInstInfo_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_27)));
    *AddrOfHOInstInfo_28 = HOInstInfo_12;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_name_1_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word InstName0_11,
  MR_Word * AddrOfInstName_58,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) InstName0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word InstName_12;
          MR_Word SymName0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_11, (MR_Integer) 0))));
          MR_Word Insts0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstName0_11, (MR_Integer) 1))));
          MR_Word Insts_17;
          MR_Word SymName_18;
          MR_Word STATE_VARIABLE_Info_48_48;
          MR_Word STATE_VARIABLE_Specs_49_49;
          MR_String Var_50;

          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_16, &Insts_17, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_49_49);
          succeeded = ((MR_tag((MR_Word) SymName0_15)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_50 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName0_15, (MR_Integer) 0))));
            succeeded = (strcmp(Var_50, (MR_String) "") == 0);
          }
          if (succeeded)
          {
            parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(SymName0_15, Insts_17, ErrorContext_10, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_44);
            parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_42);
            SymName_18 = SymName0_15;
          }
          else
          {
            MR_Integer Arity_19;
            MR_Word InstIdSet_20;
            MR_Word Var_54;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_16, &Arity_19);
            parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_48_48, &InstIdSet_20);
            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (SymName0_15));
              MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Arity_19));
            }
            parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, InstIdSet_20, (MR_Integer) 2, Var_54, &SymName_18, STATE_VARIABLE_Info_48_48, STATE_VARIABLE_Info_42, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_44);
          }
          {
            InstName_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InstName_12, 0) = ((MR_Box) (SymName_18));
            MR_hl_field(MR_mktag(0), InstName_12, 1) = ((MR_Box) (Insts_17));
          }
          *AddrOfInstName_58 = InstName_12;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Inst0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Inst_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrInsts_33;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(HeadVar__1_1, HeadVar__2_2, Inst0_19, &Inst_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrInsts_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_list_1_8_p_0(HeadVar__1_1, HeadVar__2_2, Insts0_20, AddrInsts_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word STATE_VARIABLE_Info_0_37,
  MR_Word * STATE_VARIABLE_Info_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  switch (MR_tag((MR_Word) Inst0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Inst_12 = Inst0_11;
        *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
        *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
      }
      break;
    case (MR_Integer) 1:
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
          return;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
        MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 1))));
        MR_Word HOInstInfo_17;

        if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        else
        {
          MR_Word PredOrFunc_73;
          MR_Word Modes0_74;
          MR_Word MaybeArgRegs_75;
          MR_Word Detism_76;
          MR_Word Modes_77;
          MR_Word Var_78 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
          MR_Word Var_81;

          PredOrFunc_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 0))) & (MR_Integer) 1);
          Modes0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 1))));
          MaybeArgRegs_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 2))));
          Detism_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_78, (MR_Integer) 3))) & (MR_Integer) 7);
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_74, &Modes_77, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_73));
            MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (Modes_77));
            MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) (MaybeArgRegs_75));
            MR_hl_field(MR_mktag(0), Var_81, 3) = (MR_Box) ((MR_Unsigned) (Detism_76));
          }
          HOInstInfo_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_81)));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Inst_12 = base;
          MR_hl_field(MR_mktag(2), base, 0) = (MR_Box) ((MR_Unsigned) (Uniq_15));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (HOInstInfo_17));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 3))));
            MR_Word Uniq_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word * AddrBoundInsts_83;

            switch (MR_tag((MR_Word) InstResults0_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(InstResults0_20)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
                    return;
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_59));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_20));
              MR_hl_field(MR_mktag(3), base, 3) = NULL;
            }
            AddrBoundInsts_83 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 3)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_21, AddrBoundInsts_83, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrHOInstInfo_86;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_60));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrHOInstInfo_86 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_ho_inst_info_1_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_61, AddrHOInstInfo_86, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 2:
          {
            *Inst_12 = Inst0_11;
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
            MR_Word SubInst0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrSubInst_84;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_29));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrSubInst_84 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_1_8_p_0(InInt_9, ErrorContext_10, SubInst0_30, AddrSubInst_84, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
            MR_Word * AddrInstName_85;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = NULL;
            }
            AddrInstName_85 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_name_1_8_p_0(InInt_9, ErrorContext_10, InstName0_32, AddrInstName_85, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Name_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
            MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrArgs_82;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_34));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrArgs_82 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_35, AddrArgs_82, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Mode0_11,
  MR_Word * Mode_12,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  if (((MR_tag((MR_Word) Mode0_11)) == (MR_Integer) 0))
  {
    MR_Word InstA0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_11, (MR_Integer) 0))));
    MR_Word InstB0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Mode0_11, (MR_Integer) 1))));
    MR_Word InstA_17;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word * AddrInstB_40;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, InstA0_15, &InstA_17, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_36_36);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Mode_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InstA_17));
      MR_hl_field(MR_mktag(0), base, 1) = NULL;
    }
    AddrInstB_40 = (MR_Word *) (&(MR_hl_field(MR_mktag(0), *Mode_12, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_1_8_p_0(InInt_9, ErrorContext_10, InstB0_16, AddrInstB_40, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_28);
  }
  else
  {
    MR_Word SymName0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_11, (MR_Integer) 0))));
    MR_Word Insts0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Mode0_11, (MR_Integer) 1))));
    MR_Word Insts_21;
    MR_Integer Arity_22;
    MR_Word Modes_23;
    MR_Word SymName_24;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word Var_32;

    parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_20, &Insts_21, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_30_30);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts_21, &Arity_22);
    parse_tree__module_qual__mq_info_get_modes_2_p_0(STATE_VARIABLE_Info_29_29, &Modes_23);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (SymName0_19));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Arity_22));
    }
    parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, Modes_23, (MR_Integer) 1, Var_32, &SymName_24, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_26, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_28);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Mode_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SymName_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Insts_21));
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Mode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Modes0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Mode_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrModes_33;

    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(HeadVar__1_1, HeadVar__2_2, Mode0_19, &Mode_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrModes_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_mode_list_1_8_p_0(HeadVar__1_1, HeadVar__2_2, Modes0_20, AddrModes_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

void mercury__parse_tree__module_qual__qualify_items__init(void)
{
}

void mercury__parse_tree__module_qual__qualify_items__init_type_tables(void)
{
}

void mercury__parse_tree__module_qual__qualify_items__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_qual__qualify_items__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_qual.qualify_items.
