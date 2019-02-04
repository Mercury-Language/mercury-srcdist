/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version 2018-10-03
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
  MR_Word STATE_VARIABLE_Info_0_107,
  MR_Word * STATE_VARIABLE_Info_108,
  MR_Word STATE_VARIABLE_Specs_0_109,
  MR_Word * STATE_VARIABLE_Specs_110);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_110,
  MR_Word * STATE_VARIABLE_Info_111,
  MR_Word STATE_VARIABLE_Specs_0_112,
  MR_Word * STATE_VARIABLE_Specs_113);

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
parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word InstDefn0_11,
  MR_Word * InstDefn_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

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
    MR_Word SrcSection_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 0))));
    MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 1))));
    MR_Word Incls_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 2))));
    MR_Word Avails_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 3))));
    MR_Word Items0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 4))));
    MR_Word InInt_24;
    MR_Word Items_29;
    MR_Word STATE_VARIABLE_Info_34_34;
    MR_Word STATE_VARIABLE_Info_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word * AddrSrcItemBlocks_41;

    switch (SrcSection_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        InInt_24 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        InInt_24 = (MR_Integer) 1;
        break;
    }
    if ((Incls_21 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word ShouldWarnUnusedImportsInParents_27;

      parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(STATE_VARIABLE_Info_0_3, &ShouldWarnUnusedImportsInParents_27);
      switch (ShouldWarnUnusedImportsInParents_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word UnusedModules_28;

            mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), &UnusedModules_28);
            parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedModules_28, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_34_34);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_0_3;
          break;
      }
    }
    parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(InInt_24, Items0_23, &Items_29, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_36_36);
    {
      SrcItemBlock_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 0) = ((MR_Box) (SrcSection_19));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 1) = ((MR_Box) (Context_20));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 2) = ((MR_Box) (Incls_21));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 3) = ((MR_Box) (Avails_22));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 4) = ((MR_Box) (Items_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SrcItemBlock_15));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrSrcItemBlocks_41 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__2_2, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_module_qualify_items_in_src_item_blocks_1_6_p_0(SrcItemBlocks0_14, AddrSrcItemBlocks_41, STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Info_4, STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_6);
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_module_qualify_items_in_src_item_blocks_1_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_42,
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
      *AddrOfHeadVar__2_42 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    }
    else
    {
      MR_Word SrcItemBlock0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SrcItemBlocks0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word SrcItemBlock_15;
      MR_Word SrcSection_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 0))));
      MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 1))));
      MR_Word Incls_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 2))));
      MR_Word Avails_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 3))));
      MR_Word Items0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 4))));
      MR_Word InInt_24;
      MR_Word Items_29;
      MR_Word STATE_VARIABLE_Info_34_34;
      MR_Word STATE_VARIABLE_Info_35_35;
      MR_Word STATE_VARIABLE_Specs_36_36;
      MR_Word * AddrSrcItemBlocks_41;
      MR_Word HeadVar__2_43;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_42;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      switch (SrcSection_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          InInt_24 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
          InInt_24 = (MR_Integer) 1;
          break;
      }
      if ((Incls_21 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_0_3;
      else
      {
        MR_Word ShouldWarnUnusedImportsInParents_27;

        parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(STATE_VARIABLE_Info_0_3, &ShouldWarnUnusedImportsInParents_27);
        switch (ShouldWarnUnusedImportsInParents_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word UnusedModules_28;

              mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[0]), &UnusedModules_28);
              parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(UnusedModules_28, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_34_34);
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Info_34_34 = STATE_VARIABLE_Info_0_3;
            break;
        }
      }
      parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(InInt_24, Items0_23, &Items_29, STATE_VARIABLE_Info_34_34, &STATE_VARIABLE_Info_35_35, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_36_36);
      {
        SrcItemBlock_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 0) = ((MR_Box) (SrcSection_19));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 1) = ((MR_Box) (Context_20));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 2) = ((MR_Box) (Incls_21));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 3) = ((MR_Box) (Avails_22));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 4) = ((MR_Box) (Items_29));
      }
      {
        HeadVar__2_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_43, 0) = ((MR_Box) (SrcItemBlock_15));
        MR_hl_field(MR_mktag(1), HeadVar__2_43, 1) = NULL;
      }
      AddrSrcItemBlocks_41 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__2_43, (MR_Integer) 1)));
      *AddrOfHeadVar__2_42 = HeadVar__2_43;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SrcItemBlocks0_14;
      next_value_of_AddrOfHeadVar__2_42 = AddrSrcItemBlocks_41;
      next_value_of_STATE_VARIABLE_Info_0_3 = STATE_VARIABLE_Info_35_35;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_36_36;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_42 = next_value_of_AddrOfHeadVar__2_42;
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
  MR_Word STATE_VARIABLE_Info_0_107,
  MR_Word * STATE_VARIABLE_Info_108,
  MR_Word STATE_VARIABLE_Specs_0_109,
  MR_Word * STATE_VARIABLE_Specs_110)
{
  switch (MR_tag((MR_Word) Item0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Item_10 = Item0_9;
        *STATE_VARIABLE_Info_108 = STATE_VARIABLE_Info_0_107;
        *STATE_VARIABLE_Specs_110 = STATE_VARIABLE_Specs_0_109;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemTypeDefn0_18 = (MR_Word) (MR_body((MR_Word) (Item0_9), (MR_Integer) 1));
        MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_18, (MR_Integer) 0))));
        MR_Word Params_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_18, (MR_Integer) 1))));
        MR_Word TypeDefn0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_18, (MR_Integer) 2))));
        MR_Word TVarSet_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_18, (MR_Integer) 3))));
        MR_Word Context_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_18, (MR_Integer) 4))));
        MR_Integer SeqNum_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_18, (MR_Integer) 5))));
        MR_Integer Arity_25;
        MR_Word TypeCtor_26;
        MR_Word TypeDefn_27;
        MR_Word ItemTypeDefn_28;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Params_20, &Arity_25);
        {
          TypeCtor_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeCtor_26, 0) = ((MR_Box) (SymName_19));
          MR_hl_field(MR_mktag(0), TypeCtor_26, 1) = ((MR_Box) (Arity_25));
        }
        parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(InInt_8, Context_23, TypeCtor_26, TypeDefn0_21, &TypeDefn_27, STATE_VARIABLE_Info_0_107, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_0_109, STATE_VARIABLE_Specs_110);
        {
          ItemTypeDefn_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 0) = ((MR_Box) (SymName_19));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 1) = ((MR_Box) (Params_20));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 2) = ((MR_Box) (TypeDefn_27));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 3) = ((MR_Box) (TVarSet_22));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 4) = ((MR_Box) (Context_23));
          MR_hl_field(MR_mktag(0), ItemTypeDefn_28, 5) = ((MR_Box) (SeqNum_24));
        }
        *Item_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemTypeDefn_28)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ItemInstDefn0_29 = (MR_Word) (MR_body((MR_Word) (Item0_9), (MR_Integer) 2));
        MR_Word MaybeForTypeCtor0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_29, (MR_Integer) 2))));
        MR_Word InstDefn0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_29, (MR_Integer) 3))));
        MR_Word InstVarSet_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_29, (MR_Integer) 4))));
        MR_Word ErrorContext_33;
        MR_Word InstDefn_34;
        MR_Word MaybeForTypeCtor_37;
        MR_Word ItemInstDefn_38;
        MR_Word Var_148;
        MR_Word STATE_VARIABLE_Info_149_149;
        MR_Word STATE_VARIABLE_Specs_150_150;
        MR_Word SymName_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_29, (MR_Integer) 0))));
        MR_Word Params_156 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_29, (MR_Integer) 1))));
        MR_Word Context_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_29, (MR_Integer) 5))));
        MR_Integer SeqNum_158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_29, (MR_Integer) 6))));
        MR_Integer Arity_159;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), Params_156, &Arity_159);
        {
          Var_148 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_148, 0) = ((MR_Box) (SymName_155));
          MR_hl_field(MR_mktag(0), Var_148, 1) = ((MR_Box) (Arity_159));
        }
        {
          ErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), ErrorContext_33, 1) = ((MR_Box) (Context_157));
          MR_hl_field(MR_mktag(3), ErrorContext_33, 2) = ((MR_Box) (Var_148));
        }
        parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(InInt_8, ErrorContext_33, InstDefn0_31, &InstDefn_34, STATE_VARIABLE_Info_0_107, &STATE_VARIABLE_Info_149_149, STATE_VARIABLE_Specs_0_109, &STATE_VARIABLE_Specs_150_150);
        if ((MaybeForTypeCtor0_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeForTypeCtor_37 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_108 = STATE_VARIABLE_Info_149_149;
          *STATE_VARIABLE_Specs_110 = STATE_VARIABLE_Specs_150_150;
        }
        else
        {
          MR_Word ForTypeCtor0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor0_30, (MR_Integer) 0))));
          MR_Word ForTypeCtor_36;

          parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_8, ErrorContext_33, ForTypeCtor0_35, &ForTypeCtor_36, STATE_VARIABLE_Info_149_149, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_150_150, STATE_VARIABLE_Specs_110);
          {
            MaybeForTypeCtor_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeForTypeCtor_37, 0) = ((MR_Box) (ForTypeCtor_36));
          }
        }
        {
          ItemInstDefn_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemInstDefn_38, 0) = ((MR_Box) (SymName_155));
          MR_hl_field(MR_mktag(0), ItemInstDefn_38, 1) = ((MR_Box) (Params_156));
          MR_hl_field(MR_mktag(0), ItemInstDefn_38, 2) = ((MR_Box) (MaybeForTypeCtor_37));
          MR_hl_field(MR_mktag(0), ItemInstDefn_38, 3) = ((MR_Box) (InstDefn_34));
          MR_hl_field(MR_mktag(0), ItemInstDefn_38, 4) = ((MR_Box) (InstVarSet_32));
          MR_hl_field(MR_mktag(0), ItemInstDefn_38, 5) = ((MR_Box) (Context_157));
          MR_hl_field(MR_mktag(0), ItemInstDefn_38, 6) = ((MR_Box) (SeqNum_158));
        }
        *Item_10 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ItemInstDefn_38)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemModeDefn0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word ModeDefn0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_39, (MR_Integer) 2))));
            MR_Word ModeDefn_41;
            MR_Word ItemModeDefn_42;
            MR_Word Var_145;
            MR_Word SymName_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_39, (MR_Integer) 0))));
            MR_Word Params_161 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_39, (MR_Integer) 1))));
            MR_Word Context_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_39, (MR_Integer) 4))));
            MR_Integer SeqNum_163 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_39, (MR_Integer) 5))));
            MR_Integer Arity_164;
            MR_Word InstVarSet_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_39, (MR_Integer) 3))));
            MR_Word ErrorContext_166;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), Params_161, &Arity_164);
            {
              Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (SymName_160));
              MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (Arity_164));
            }
            {
              ErrorContext_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_166, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), ErrorContext_166, 1) = ((MR_Box) (Context_162));
              MR_hl_field(MR_mktag(3), ErrorContext_166, 2) = ((MR_Box) (Var_145));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(InInt_8, ErrorContext_166, ModeDefn0_40, &ModeDefn_41, STATE_VARIABLE_Info_0_107, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_0_109, STATE_VARIABLE_Specs_110);
            {
              ItemModeDefn_42 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemModeDefn_42, 0) = ((MR_Box) (SymName_160));
              MR_hl_field(MR_mktag(0), ItemModeDefn_42, 1) = ((MR_Box) (Params_161));
              MR_hl_field(MR_mktag(0), ItemModeDefn_42, 2) = ((MR_Box) (ModeDefn_41));
              MR_hl_field(MR_mktag(0), ItemModeDefn_42, 3) = ((MR_Box) (InstVarSet_165));
              MR_hl_field(MR_mktag(0), ItemModeDefn_42, 4) = ((MR_Box) (Context_162));
              MR_hl_field(MR_mktag(0), ItemModeDefn_42, 5) = ((MR_Box) (SeqNum_163));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemModeDefn_42));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemPredDecl0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word PredOrFunc_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word TypesAndModes0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 2))));
            MR_Word MaybeWithType0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 3))));
            MR_Word MaybeWithInst0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 4))));
            MR_Word MaybeDetism_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 5))));
            MR_Word Origin_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 6))));
            MR_Word TypeVarSet_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 7))));
            MR_Word ExistQVars_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 9))));
            MR_Word Purity_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 10))) & (MR_Integer) 3);
            MR_Word Constraints0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 11))));
            MR_Word TypesAndModes_54;
            MR_Word ConstraintErrorContext_55;
            MR_Word Constraints_56;
            MR_Word MaybeWithType_59;
            MR_Word MaybeWithInst_62;
            MR_Word ItemPredDecl_63;
            MR_Word Var_136;
            MR_Word STATE_VARIABLE_Info_137_137;
            MR_Word STATE_VARIABLE_Specs_138_138;
            MR_Word STATE_VARIABLE_Info_139_139;
            MR_Word STATE_VARIABLE_Specs_140_140;
            MR_Word STATE_VARIABLE_Info_141_141;
            MR_Word STATE_VARIABLE_Specs_142_142;
            MR_Word SymName_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 0))));
            MR_Word Context_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 12))));
            MR_Integer SeqNum_169 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 13))));
            MR_Integer Arity_170;
            MR_Word InstVarSet_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_43, (MR_Integer) 8))));
            MR_Word ErrorContext_172;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_45, &Arity_170);
            {
              Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (SymName_167));
              MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (Arity_170));
            }
            {
              ErrorContext_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_172, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), ErrorContext_172, 1) = ((MR_Box) (Context_168));
              MR_hl_field(MR_mktag(3), ErrorContext_172, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_44));
              MR_hl_field(MR_mktag(3), ErrorContext_172, 3) = ((MR_Box) (Var_136));
            }
            parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_8, ErrorContext_172, TypesAndModes0_45, &TypesAndModes_54, STATE_VARIABLE_Info_0_107, &STATE_VARIABLE_Info_137_137, STATE_VARIABLE_Specs_0_109, &STATE_VARIABLE_Specs_138_138);
            {
              ConstraintErrorContext_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_55, 1) = ((MR_Box) (Context_168));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_55, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_44));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_55, 3) = ((MR_Box) (SymName_167));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_55, 4) = ((MR_Box) (Arity_170));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(InInt_8, ConstraintErrorContext_55, Constraints0_53, &Constraints_56, STATE_VARIABLE_Info_137_137, &STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Specs_138_138, &STATE_VARIABLE_Specs_140_140);
            if ((MaybeWithType0_46 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithType_59 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_141_141 = STATE_VARIABLE_Info_139_139;
              STATE_VARIABLE_Specs_142_142 = STATE_VARIABLE_Specs_140_140;
            }
            else
            {
              MR_Word WithType0_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_46, (MR_Integer) 0))));
              MR_Word WithType_58;

              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_172, WithType0_57, &WithType_58, STATE_VARIABLE_Info_139_139, &STATE_VARIABLE_Info_141_141, STATE_VARIABLE_Specs_140_140, &STATE_VARIABLE_Specs_142_142);
              {
                MaybeWithType_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithType_59, 0) = ((MR_Box) (WithType_58));
              }
            }
            if ((MaybeWithInst0_47 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithInst_62 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_108 = STATE_VARIABLE_Info_141_141;
              *STATE_VARIABLE_Specs_110 = STATE_VARIABLE_Specs_142_142;
            }
            else
            {
              MR_Word WithInst0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_47, (MR_Integer) 0))));
              MR_Word WithInst_61;

              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_172, WithInst0_60, &WithInst_61, STATE_VARIABLE_Info_141_141, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_142_142, STATE_VARIABLE_Specs_110);
              {
                MaybeWithInst_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithInst_62, 0) = ((MR_Box) (WithInst_61));
              }
            }
            {
              ItemPredDecl_63 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 0) = ((MR_Box) (SymName_167));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_44));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 2) = ((MR_Box) (TypesAndModes_54));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 3) = ((MR_Box) (MaybeWithType_59));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 4) = ((MR_Box) (MaybeWithInst_62));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 5) = ((MR_Box) (MaybeDetism_48));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 6) = ((MR_Box) (Origin_49));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 7) = ((MR_Box) (TypeVarSet_50));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 8) = ((MR_Box) (InstVarSet_171));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 9) = ((MR_Box) (ExistQVars_51));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 10) = (MR_Box) ((MR_Unsigned) (Purity_52));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 11) = ((MR_Box) (Constraints_56));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 12) = ((MR_Box) (Context_168));
              MR_hl_field(MR_mktag(0), ItemPredDecl_63, 13) = ((MR_Box) (SeqNum_169));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemPredDecl_63));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemModeDecl0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Modes0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_64, (MR_Integer) 2))));
            MR_Word Modes_66;
            MR_Word ItemModeDecl_67;
            MR_Word Var_131;
            MR_Word STATE_VARIABLE_Info_132_132;
            MR_Word STATE_VARIABLE_Specs_133_133;
            MR_Word SymName_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_64, (MR_Integer) 0))));
            MR_Word Context_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_64, (MR_Integer) 6))));
            MR_Integer SeqNum_179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_64, (MR_Integer) 7))));
            MR_Integer Arity_180;
            MR_Word InstVarSet_181 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_64, (MR_Integer) 5))));
            MR_Word ErrorContext_182;
            MR_Word PredOrFunc_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_64, (MR_Integer) 1))));
            MR_Word MaybeWithInst0_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_64, (MR_Integer) 3))));
            MR_Word MaybeDetism_185 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_64, (MR_Integer) 4))));
            MR_Word MaybeWithInst_188;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_65, &Arity_180);
            {
              Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_131, 0) = ((MR_Box) (SymName_177));
              MR_hl_field(MR_mktag(0), Var_131, 1) = ((MR_Box) (Arity_180));
            }
            {
              ErrorContext_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_182, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), ErrorContext_182, 1) = ((MR_Box) (Context_178));
              MR_hl_field(MR_mktag(3), ErrorContext_182, 2) = ((MR_Box) (PredOrFunc_183));
              MR_hl_field(MR_mktag(3), ErrorContext_182, 3) = ((MR_Box) (Var_131));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_182, Modes0_65, &Modes_66, STATE_VARIABLE_Info_0_107, &STATE_VARIABLE_Info_132_132, STATE_VARIABLE_Specs_0_109, &STATE_VARIABLE_Specs_133_133);
            if ((MaybeWithInst0_184 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithInst_188 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_108 = STATE_VARIABLE_Info_132_132;
              *STATE_VARIABLE_Specs_110 = STATE_VARIABLE_Specs_133_133;
            }
            else
            {
              MR_Word WithInst0_173 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_184, (MR_Integer) 0))));
              MR_Word WithInst_174;

              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_182, WithInst0_173, &WithInst_174, STATE_VARIABLE_Info_132_132, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_133_133, STATE_VARIABLE_Specs_110);
              {
                MaybeWithInst_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithInst_188, 0) = ((MR_Box) (WithInst_174));
              }
            }
            {
              ItemModeDecl_67 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemModeDecl_67, 0) = ((MR_Box) (SymName_177));
              MR_hl_field(MR_mktag(0), ItemModeDecl_67, 1) = ((MR_Box) (PredOrFunc_183));
              MR_hl_field(MR_mktag(0), ItemModeDecl_67, 2) = ((MR_Box) (Modes_66));
              MR_hl_field(MR_mktag(0), ItemModeDecl_67, 3) = ((MR_Box) (MaybeWithInst_188));
              MR_hl_field(MR_mktag(0), ItemModeDecl_67, 4) = ((MR_Box) (MaybeDetism_185));
              MR_hl_field(MR_mktag(0), ItemModeDecl_67, 5) = ((MR_Box) (InstVarSet_181));
              MR_hl_field(MR_mktag(0), ItemModeDecl_67, 6) = ((MR_Box) (Context_178));
              MR_hl_field(MR_mktag(0), ItemModeDecl_67, 7) = ((MR_Box) (SeqNum_179));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemModeDecl_67));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemPragma0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Pragma0_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_103, (MR_Integer) 0))));
            MR_Word Pragma_105;
            MR_Word ItemPragma_106;
            MR_Word Context_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_103, (MR_Integer) 2))));
            MR_Integer SeqNum_217 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPragma0_103, (MR_Integer) 3))));
            MR_Word Origin_218 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_103, (MR_Integer) 1))));

            parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(InInt_8, Context_216, Pragma0_104, &Pragma_105, STATE_VARIABLE_Info_0_107, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_0_109, STATE_VARIABLE_Specs_110);
            {
              ItemPragma_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_106, 0) = ((MR_Box) (Pragma_105));
              MR_hl_field(MR_mktag(0), ItemPragma_106, 1) = ((MR_Box) (Origin_218));
              MR_hl_field(MR_mktag(0), ItemPragma_106, 2) = ((MR_Box) (Context_216));
              MR_hl_field(MR_mktag(0), ItemPragma_106, 3) = ((MR_Box) (SeqNum_217));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemPragma_106));
            }
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 11:
          {
            *Item_10 = Item0_9;
            *STATE_VARIABLE_Info_108 = STATE_VARIABLE_Info_0_107;
            *STATE_VARIABLE_Specs_110 = STATE_VARIABLE_Specs_0_109;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemTypeClass0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Name_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_68, (MR_Integer) 0))));
            MR_Word Vars_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_68, (MR_Integer) 1))));
            MR_Word FunDeps_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_68, (MR_Integer) 3))));
            MR_Word Interface0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_68, (MR_Integer) 4))));
            MR_Word VarSet_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_68, (MR_Integer) 5))));
            MR_Word Interface_74;
            MR_Word ItemTypeClass_77;
            MR_Word STATE_VARIABLE_Info_126_126;
            MR_Word STATE_VARIABLE_Specs_127_127;
            MR_Word Context_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_68, (MR_Integer) 6))));
            MR_Integer SeqNum_192 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_68, (MR_Integer) 7))));
            MR_Integer Arity_193;
            MR_Word Constraints0_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_68, (MR_Integer) 2))));
            MR_Word ConstraintErrorContext_196;
            MR_Word Constraints_197;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Vars_70, &Arity_193);
            {
              ConstraintErrorContext_196 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_196, 0) = ((MR_Box) (Context_191));
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_196, 1) = ((MR_Box) (Name_69));
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_196, 2) = ((MR_Box) (Arity_193));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_196, Constraints0_195, &Constraints_197, STATE_VARIABLE_Info_0_107, &STATE_VARIABLE_Info_126_126, STATE_VARIABLE_Specs_0_109, &STATE_VARIABLE_Specs_127_127);
            if ((Interface0_72 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Interface_74 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_108 = STATE_VARIABLE_Info_126_126;
              *STATE_VARIABLE_Specs_110 = STATE_VARIABLE_Specs_127_127;
            }
            else
            {
              MR_Word Methods0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface0_72, (MR_Integer) 0))));
              MR_Word Methods_76;
              MR_Word Var_128;
              MR_Word ErrorContext_189;

              {
                Var_128 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_128, 0) = ((MR_Box) (Name_69));
                MR_hl_field(MR_mktag(0), Var_128, 1) = ((MR_Box) (Arity_193));
              }
              {
                ErrorContext_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ErrorContext_189, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), ErrorContext_189, 1) = ((MR_Box) (Context_191));
                MR_hl_field(MR_mktag(3), ErrorContext_189, 2) = ((MR_Box) (Var_128));
              }
              parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(InInt_8, ErrorContext_189, Methods0_75, &Methods_76, STATE_VARIABLE_Info_126_126, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_127_127, STATE_VARIABLE_Specs_110);
              {
                Interface_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Interface_74, 0) = ((MR_Box) (Methods_76));
              }
            }
            {
              ItemTypeClass_77 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemTypeClass_77, 0) = ((MR_Box) (Name_69));
              MR_hl_field(MR_mktag(0), ItemTypeClass_77, 1) = ((MR_Box) (Vars_70));
              MR_hl_field(MR_mktag(0), ItemTypeClass_77, 2) = ((MR_Box) (Constraints_197));
              MR_hl_field(MR_mktag(0), ItemTypeClass_77, 3) = ((MR_Box) (FunDeps_71));
              MR_hl_field(MR_mktag(0), ItemTypeClass_77, 4) = ((MR_Box) (Interface_74));
              MR_hl_field(MR_mktag(0), ItemTypeClass_77, 5) = ((MR_Box) (VarSet_73));
              MR_hl_field(MR_mktag(0), ItemTypeClass_77, 6) = ((MR_Box) (Context_191));
              MR_hl_field(MR_mktag(0), ItemTypeClass_77, 7) = ((MR_Box) (SeqNum_192));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemTypeClass_77));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemInstance0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Name0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 0))));
            MR_Word Types0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 1))));
            MR_Word OriginalTypes0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 2))));
            MR_Word Body0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 4))));
            MR_Word ModName_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 6))));
            MR_Word Id0_84;
            MR_Word Types_85;
            MR_Word OriginalTypes_86;
            MR_Word Body_88;
            MR_Word ItemInstance_89;
            MR_Word STATE_VARIABLE_Info_118_118;
            MR_Word STATE_VARIABLE_Info_119_119;
            MR_Word STATE_VARIABLE_Specs_120_120;
            MR_Word STATE_VARIABLE_Info_121_121;
            MR_Word STATE_VARIABLE_Specs_122_122;
            MR_Word STATE_VARIABLE_Info_123_123;
            MR_Word Context_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 7))));
            MR_Integer SeqNum_199 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 8))));
            MR_Integer Arity_200;
            MR_Word ErrorContext_201;
            MR_Word Constraints0_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 3))));
            MR_Word ConstraintErrorContext_203;
            MR_Word Constraints_204;
            MR_Word Name_205;
            MR_Word VarSet_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_78, (MR_Integer) 5))));
            MR_Word Var_87;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_80, &Arity_200);
            {
              Id0_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Id0_84, 0) = ((MR_Box) (Name0_79));
              MR_hl_field(MR_mktag(0), Id0_84, 1) = ((MR_Box) (Arity_200));
            }
            {
              ErrorContext_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_201, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), ErrorContext_201, 1) = ((MR_Box) (Context_198));
              MR_hl_field(MR_mktag(3), ErrorContext_201, 2) = ((MR_Box) (Id0_84));
            }
            switch (InInt_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Info_118_118 = STATE_VARIABLE_Info_0_107;
                break;
              case (MR_Integer) 1:
                {
                  parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_107, &STATE_VARIABLE_Info_118_118);
                }
                break;
            }
            {
              ConstraintErrorContext_203 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_203, 0) = ((MR_Box) (Context_198));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_203, 1) = ((MR_Box) (Name0_79));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_203, 2) = ((MR_Box) (OriginalTypes0_81));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_203, Constraints0_202, &Constraints_204, STATE_VARIABLE_Info_118_118, &STATE_VARIABLE_Info_119_119, STATE_VARIABLE_Specs_0_109, &STATE_VARIABLE_Specs_120_120);
            parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(InInt_8, ErrorContext_201, Id0_84, &Name_205, STATE_VARIABLE_Info_119_119, &STATE_VARIABLE_Info_121_121, STATE_VARIABLE_Specs_120_120, &STATE_VARIABLE_Specs_122_122);
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_201, Types0_80, &Types_85, STATE_VARIABLE_Info_121_121, &STATE_VARIABLE_Info_123_123, STATE_VARIABLE_Specs_122_122, STATE_VARIABLE_Specs_110);
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_201, OriginalTypes0_81, &OriginalTypes_86, STATE_VARIABLE_Info_123_123, STATE_VARIABLE_Info_108, *STATE_VARIABLE_Specs_110, &Var_87);
            parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(Name_205, Body0_82, &Body_88);
            {
              ItemInstance_89 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemInstance_89, 0) = ((MR_Box) (Name_205));
              MR_hl_field(MR_mktag(0), ItemInstance_89, 1) = ((MR_Box) (Types_85));
              MR_hl_field(MR_mktag(0), ItemInstance_89, 2) = ((MR_Box) (OriginalTypes_86));
              MR_hl_field(MR_mktag(0), ItemInstance_89, 3) = ((MR_Box) (Constraints_204));
              MR_hl_field(MR_mktag(0), ItemInstance_89, 4) = ((MR_Box) (Body_88));
              MR_hl_field(MR_mktag(0), ItemInstance_89, 5) = ((MR_Box) (VarSet_206));
              MR_hl_field(MR_mktag(0), ItemInstance_89, 6) = ((MR_Box) (ModName_83));
              MR_hl_field(MR_mktag(0), ItemInstance_89, 7) = ((MR_Box) (Context_198));
              MR_hl_field(MR_mktag(0), ItemInstance_89, 8) = ((MR_Box) (SeqNum_199));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemInstance_89));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemMutable0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word ItemMutable_91;

            parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(InInt_8, ItemMutable0_90, &ItemMutable_91, STATE_VARIABLE_Info_0_107, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_0_109, STATE_VARIABLE_Specs_110);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemMutable_91));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ItemTypeRepnInfo0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word TypeCtorSymName_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_92, (MR_Integer) 0))));
            MR_Word ArgTVars_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_92, (MR_Integer) 1))));
            MR_Word RepInfo0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_92, (MR_Integer) 2))));
            MR_Word RepInfo_98;
            MR_Word ItemTypeRepnInfo_102;
            MR_Word TVarSet_211 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_92, (MR_Integer) 3))));
            MR_Word Context_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_92, (MR_Integer) 4))));
            MR_Integer SeqNum_213 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_92, (MR_Integer) 5))));

            switch (MR_tag((MR_Word) RepInfo0_95)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RepInfo_98 = RepInfo0_95;
                  *STATE_VARIABLE_Info_108 = STATE_VARIABLE_Info_0_107;
                  *STATE_VARIABLE_Specs_110 = STATE_VARIABLE_Specs_0_109;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word EqvType0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RepInfo0_95, (MR_Integer) 0))));
                  MR_Integer TypeCtorArity_100;
                  MR_Word EqvType_101;
                  MR_Word TypeCtor_207;
                  MR_Word ErrorContext_208;

                  mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), ArgTVars_94, &TypeCtorArity_100);
                  {
                    TypeCtor_207 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeCtor_207, 0) = ((MR_Box) (TypeCtorSymName_93));
                    MR_hl_field(MR_mktag(0), TypeCtor_207, 1) = ((MR_Box) (TypeCtorArity_100));
                  }
                  {
                    ErrorContext_208 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ErrorContext_208, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                    MR_hl_field(MR_mktag(3), ErrorContext_208, 1) = ((MR_Box) (Context_212));
                    MR_hl_field(MR_mktag(3), ErrorContext_208, 2) = ((MR_Box) (TypeCtor_207));
                  }
                  parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_208, EqvType0_99, &EqvType_101, STATE_VARIABLE_Info_0_107, STATE_VARIABLE_Info_108, STATE_VARIABLE_Specs_0_109, STATE_VARIABLE_Specs_110);
                  {
                    RepInfo_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), RepInfo_98, 0) = ((MR_Box) (EqvType_101));
                  }
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  RepInfo_98 = RepInfo0_95;
                  *STATE_VARIABLE_Info_108 = STATE_VARIABLE_Info_0_107;
                  *STATE_VARIABLE_Specs_110 = STATE_VARIABLE_Specs_0_109;
                }
                break;
            }
            {
              ItemTypeRepnInfo_102 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_102, 0) = ((MR_Box) (TypeCtorSymName_93));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_102, 1) = ((MR_Box) (ArgTVars_94));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_102, 2) = ((MR_Box) (RepInfo_98));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_102, 3) = ((MR_Box) (TVarSet_211));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_102, 4) = ((MR_Box) (Context_212));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_102, 5) = ((MR_Box) (SeqNum_213));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemTypeRepnInfo_102));
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
  MR_Word STATE_VARIABLE_Info_0_110,
  MR_Word * STATE_VARIABLE_Info_111,
  MR_Word STATE_VARIABLE_Specs_0_112,
  MR_Word * STATE_VARIABLE_Specs_113)
{
  switch (MR_tag((MR_Word) Pragma0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Pragma_12 = Pragma0_11;
        *STATE_VARIABLE_Info_111 = STATE_VARIABLE_Info_0_110;
        *STATE_VARIABLE_Specs_113 = STATE_VARIABLE_Specs_0_112;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPInfo0_50 = (MR_Word) (MR_body((MR_Word) (Pragma0_11), (MR_Integer) 2));
        MR_Word Attrs0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_50, (MR_Integer) 0))));
        MR_Word Name_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_50, (MR_Integer) 1))));
        MR_Word PredOrFunc_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo0_50, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Word Vars0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_50, (MR_Integer) 3))));
        MR_Word Varset_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_50, (MR_Integer) 4))));
        MR_Word InstVarset_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_50, (MR_Integer) 5))));
        MR_Word Impl_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_50, (MR_Integer) 6))));
        MR_Word Vars_58;
        MR_Word UserSharing0_59;
        MR_Word UserSharing_60;
        MR_Word Attrs_61;
        MR_Word FPInfo_62;
        MR_Word STATE_VARIABLE_Info_132_132;
        MR_Word STATE_VARIABLE_Specs_133_133;
        MR_Word ErrorContext_147;

        {
          ErrorContext_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_147, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), ErrorContext_147, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), ErrorContext_147, 2) = ((MR_Box) (Pragma0_11));
        }
        parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(InInt_9, ErrorContext_147, Vars0_54, &Vars_58, STATE_VARIABLE_Info_0_110, &STATE_VARIABLE_Info_132_132, STATE_VARIABLE_Specs_0_112, &STATE_VARIABLE_Specs_133_133);
        UserSharing0_59 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_51);
        parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(InInt_9, ErrorContext_147, UserSharing0_59, &UserSharing_60, STATE_VARIABLE_Info_132_132, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_133_133, STATE_VARIABLE_Specs_113);
        parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_60, Attrs0_51, &Attrs_61);
        {
          FPInfo_62 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FPInfo_62, 0) = ((MR_Box) (Attrs_61));
          MR_hl_field(MR_mktag(0), FPInfo_62, 1) = ((MR_Box) (Name_52));
          MR_hl_field(MR_mktag(0), FPInfo_62, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_53));
          MR_hl_field(MR_mktag(0), FPInfo_62, 3) = ((MR_Box) (Vars_58));
          MR_hl_field(MR_mktag(0), FPInfo_62, 4) = ((MR_Box) (Varset_55));
          MR_hl_field(MR_mktag(0), FPInfo_62, 5) = ((MR_Box) (InstVarset_56));
          MR_hl_field(MR_mktag(0), FPInfo_62, 6) = ((MR_Box) (Impl_57));
        }
        *Pragma_12 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (FPInfo_62)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPEInfo0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo0_76, (MR_Integer) 1))));
            MR_String CFunc_78 = ((MR_String) ((MR_hl_field(MR_mktag(0), FPEInfo0_76, (MR_Integer) 2))));
            MR_Word PredNameModesPF_79;
            MR_Word FPEInfo_80;
            MR_Word Lang_155 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo0_76, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ErrorContext_156;
            MR_Word Name_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_77, (MR_Integer) 0))));
            MR_Word PredOrFunc_158 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_77, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Modes0_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_77, (MR_Integer) 1))));
            MR_Word Modes_160;

            {
              ErrorContext_156 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_156, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_156, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_156, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_156, Modes0_159, &Modes_160, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
            {
              PredNameModesPF_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_79, 0) = ((MR_Box) (Name_157));
              MR_hl_field(MR_mktag(0), PredNameModesPF_79, 1) = ((MR_Box) (Modes_160));
              MR_hl_field(MR_mktag(0), PredNameModesPF_79, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_158));
            }
            {
              FPEInfo_80 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FPEInfo_80, 0) = (MR_Box) ((MR_Unsigned) (Lang_155));
              MR_hl_field(MR_mktag(0), FPEInfo_80, 1) = ((MR_Box) (PredNameModesPF_79));
              MR_hl_field(MR_mktag(0), FPEInfo_80, 2) = ((MR_Box) (CFunc_78));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FPEInfo_80));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FEEInfo0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Lang_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEEInfo0_38, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo0_38, (MR_Integer) 1))));
            MR_Word Attributes_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo0_38, (MR_Integer) 2))));
            MR_Word Overrides_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEEInfo0_38, (MR_Integer) 3))));
            MR_Word ErrorContext_43;
            MR_Word OldSuppressUndef_44;
            MR_Word TypeCtor_45;
            MR_Word FEEInfo_46;
            MR_Word STATE_VARIABLE_Info_139_139;
            MR_Word STATE_VARIABLE_Info_140_140;

            {
              ErrorContext_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_43, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_43, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__mq_info_get_suppress_found_undef_2_p_0(STATE_VARIABLE_Info_0_110, &OldSuppressUndef_44);
            parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_110, &STATE_VARIABLE_Info_139_139);
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_43, TypeCtor0_40, &TypeCtor_45, STATE_VARIABLE_Info_139_139, &STATE_VARIABLE_Info_140_140, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
            parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0(OldSuppressUndef_44, STATE_VARIABLE_Info_140_140, STATE_VARIABLE_Info_111);
            {
              FEEInfo_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FEEInfo_46, 0) = (MR_Box) ((MR_Unsigned) (Lang_39));
              MR_hl_field(MR_mktag(0), FEEInfo_46, 1) = ((MR_Box) (TypeCtor_45));
              MR_hl_field(MR_mktag(0), FEEInfo_46, 2) = ((MR_Box) (Attributes_41));
              MR_hl_field(MR_mktag(0), FEEInfo_46, 3) = ((MR_Box) (Overrides_42));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FEEInfo_46));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FEInfo0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Values_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo0_47, (MR_Integer) 2))));
            MR_Word FEInfo_49;
            MR_Word Lang_143 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FEInfo0_47, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor0_144 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FEInfo0_47, (MR_Integer) 1))));
            MR_Word ErrorContext_145;
            MR_Word TypeCtor_146;

            {
              ErrorContext_145 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_145, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_145, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_145, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_145, TypeCtor0_144, &TypeCtor_146, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
            {
              FEInfo_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FEInfo_49, 0) = (MR_Box) ((MR_Unsigned) (Lang_143));
              MR_hl_field(MR_mktag(0), FEInfo_49, 1) = ((MR_Box) (TypeCtor_146));
              MR_hl_field(MR_mktag(0), FEInfo_49, 2) = ((MR_Box) (Values_48));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FEInfo_49));
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
        case (MR_Integer) 30:
          {
            *Pragma_12 = Pragma0_11;
            *STATE_VARIABLE_Info_111 = STATE_VARIABLE_Info_0_110;
            *STATE_VARIABLE_Specs_113 = STATE_VARIABLE_Specs_0_112;
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word TypeSpecInfo0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word PredName_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_81, (MR_Integer) 0))));
            MR_Word SpecializedPredName_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_81, (MR_Integer) 1))));
            MR_Integer Arity_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_81, (MR_Integer) 2))));
            MR_Word MaybeModes0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_81, (MR_Integer) 4))));
            MR_Word Subst0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_81, (MR_Integer) 5))));
            MR_Word TVarSet_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_81, (MR_Integer) 6))));
            MR_Word Items_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_81, (MR_Integer) 7))));
            MR_Word MaybeModes_89;
            MR_Word Subst_90;
            MR_Word TypeSpecInfo_91;
            MR_Word STATE_VARIABLE_Info_122_122;
            MR_Word STATE_VARIABLE_Specs_123_123;
            MR_Word ErrorContext_165;
            MR_Word PredOrFunc_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_81, (MR_Integer) 3))));

            {
              ErrorContext_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_165, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_165, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_165, 2) = ((MR_Box) (Pragma0_11));
            }
            if ((MaybeModes0_85 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeModes_89 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_122_122 = STATE_VARIABLE_Info_0_110;
              STATE_VARIABLE_Specs_123_123 = STATE_VARIABLE_Specs_0_112;
            }
            else
            {
              MR_Word Modes0_161 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes0_85, (MR_Integer) 0))));
              MR_Word Modes_162;

              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_165, Modes0_161, &Modes_162, STATE_VARIABLE_Info_0_110, &STATE_VARIABLE_Info_122_122, STATE_VARIABLE_Specs_0_112, &STATE_VARIABLE_Specs_123_123);
              {
                MaybeModes_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeModes_89, 0) = ((MR_Box) (Modes_162));
              }
            }
            parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(InInt_9, ErrorContext_165, Subst0_86, &Subst_90, STATE_VARIABLE_Info_122_122, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_123_123, STATE_VARIABLE_Specs_113);
            {
              TypeSpecInfo_91 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeSpecInfo_91, 0) = ((MR_Box) (PredName_82));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_91, 1) = ((MR_Box) (SpecializedPredName_83));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_91, 2) = ((MR_Box) (Arity_84));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_91, 3) = ((MR_Box) (PredOrFunc_166));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_91, 4) = ((MR_Box) (MaybeModes_89));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_91, 5) = ((MR_Box) (Subst_90));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_91, 6) = ((MR_Box) (TVarSet_87));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_91, 7) = ((MR_Box) (Items_88));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TypeSpecInfo_91));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word TabledInfo0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word EvalMethod_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_68, (MR_Integer) 0))));
            MR_Word PredNameArityPF_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_68, (MR_Integer) 1))));
            MR_Word MModes0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_68, (MR_Integer) 2))));
            MR_Word MModes_74;
            MR_Word TabledInfo_75;
            MR_Word Attrs_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_68, (MR_Integer) 3))));

            if ((MModes0_71 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MModes_74 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_111 = STATE_VARIABLE_Info_0_110;
              *STATE_VARIABLE_Specs_113 = STATE_VARIABLE_Specs_0_112;
            }
            else
            {
              MR_Word Modes0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MModes0_71, (MR_Integer) 0))));
              MR_Word Modes_73;
              MR_Word ErrorContext_151;

              {
                ErrorContext_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ErrorContext_151, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), ErrorContext_151, 1) = ((MR_Box) (Context_10));
                MR_hl_field(MR_mktag(3), ErrorContext_151, 2) = ((MR_Box) (Pragma0_11));
              }
              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_151, Modes0_72, &Modes_73, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
              {
                MModes_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MModes_74, 0) = ((MR_Box) (Modes_73));
              }
            }
            {
              TabledInfo_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TabledInfo_75, 0) = ((MR_Box) (EvalMethod_69));
              MR_hl_field(MR_mktag(0), TabledInfo_75, 1) = ((MR_Box) (PredNameArityPF_70));
              MR_hl_field(MR_mktag(0), TabledInfo_75, 2) = ((MR_Box) (MModes_74));
              MR_hl_field(MR_mktag(0), TabledInfo_75, 3) = ((MR_Box) (Attrs_154));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TabledInfo_75));
            }
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word OISUInfo0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word CreatorPreds_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_63, (MR_Integer) 1))));
            MR_Word MutatorPreds_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_63, (MR_Integer) 2))));
            MR_Word DestructorPreds_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_63, (MR_Integer) 3))));
            MR_Word OISUInfo_67;
            MR_Word TypeCtor0_148 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_63, (MR_Integer) 0))));
            MR_Word ErrorContext_149;
            MR_Word TypeCtor_150;

            {
              ErrorContext_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_149, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_149, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_149, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_149, TypeCtor0_148, &TypeCtor_150, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
            {
              OISUInfo_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), OISUInfo_67, 0) = ((MR_Box) (TypeCtor_150));
              MR_hl_field(MR_mktag(0), OISUInfo_67, 1) = ((MR_Box) (CreatorPreds_64));
              MR_hl_field(MR_mktag(0), OISUInfo_67, 2) = ((MR_Box) (MutatorPreds_65));
              MR_hl_field(MR_mktag(0), OISUInfo_67, 3) = ((MR_Box) (DestructorPreds_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OISUInfo_67));
            }
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word TermInfo0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Args_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_92, (MR_Integer) 1))));
            MR_Word Term_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_92, (MR_Integer) 2))));
            MR_Word SymName_95;
            MR_Word ModeList0_96;
            MR_Word ModeList_97;
            MR_Word TermInfo_98;
            MR_Word ErrorContext_169;
            MR_Word PredOrFunc_170;
            MR_Word PredNameModesPF0_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_92, (MR_Integer) 0))));
            MR_Word PredNameModesPF_172;

            SymName_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_171, (MR_Integer) 0))));
            ModeList0_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_171, (MR_Integer) 1))));
            PredOrFunc_170 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_171, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_169, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_169, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_169, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_169, ModeList0_96, &ModeList_97, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
            {
              PredNameModesPF_172 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_172, 0) = ((MR_Box) (SymName_95));
              MR_hl_field(MR_mktag(0), PredNameModesPF_172, 1) = ((MR_Box) (ModeList_97));
              MR_hl_field(MR_mktag(0), PredNameModesPF_172, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_170));
            }
            {
              TermInfo_98 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TermInfo_98, 0) = ((MR_Box) (PredNameModesPF_172));
              MR_hl_field(MR_mktag(0), TermInfo_98, 1) = ((MR_Box) (Args_93));
              MR_hl_field(MR_mktag(0), TermInfo_98, 2) = ((MR_Box) (Term_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 21U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TermInfo_98));
            }
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Term2Info0_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word SuccessArgs_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_106, (MR_Integer) 1))));
            MR_Word FailureArgs_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_106, (MR_Integer) 2))));
            MR_Word Term2Info_109;
            MR_Word ErrorContext_190;
            MR_Word PredOrFunc_191;
            MR_Word PredNameModesPF0_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_106, (MR_Integer) 0))));
            MR_Word PredNameModesPF_193;
            MR_Word Term_194 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_106, (MR_Integer) 3))));
            MR_Word SymName_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_192, (MR_Integer) 0))));
            MR_Word ModeList0_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_192, (MR_Integer) 1))));
            MR_Word ModeList_197;

            PredOrFunc_191 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_192, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_190, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_190, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_190, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_190, ModeList0_196, &ModeList_197, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
            {
              PredNameModesPF_193 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_193, 0) = ((MR_Box) (SymName_195));
              MR_hl_field(MR_mktag(0), PredNameModesPF_193, 1) = ((MR_Box) (ModeList_197));
              MR_hl_field(MR_mktag(0), PredNameModesPF_193, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_191));
            }
            {
              Term2Info_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Term2Info_109, 0) = ((MR_Box) (PredNameModesPF_193));
              MR_hl_field(MR_mktag(0), Term2Info_109, 1) = ((MR_Box) (SuccessArgs_107));
              MR_hl_field(MR_mktag(0), Term2Info_109, 2) = ((MR_Box) (FailureArgs_108));
              MR_hl_field(MR_mktag(0), Term2Info_109, 3) = ((MR_Box) (Term_194));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 22U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term2Info_109));
            }
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word SharingInfo0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Types_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_99, (MR_Integer) 2))));
            MR_Word Sharing_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_99, (MR_Integer) 3))));
            MR_Word SharingInfo_102;
            MR_Word ErrorContext_173;
            MR_Word PredOrFunc_174;
            MR_Word Vars_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_99, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_99, (MR_Integer) 0))));
            MR_Word PredNameModesPF_177;
            MR_Word SymName_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_176, (MR_Integer) 0))));
            MR_Word ModeList0_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_176, (MR_Integer) 1))));
            MR_Word ModeList_180;

            PredOrFunc_174 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_176, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_173, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_173, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_173, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_173, ModeList0_179, &ModeList_180, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
            {
              PredNameModesPF_177 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_177, 0) = ((MR_Box) (SymName_178));
              MR_hl_field(MR_mktag(0), PredNameModesPF_177, 1) = ((MR_Box) (ModeList_180));
              MR_hl_field(MR_mktag(0), PredNameModesPF_177, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_174));
            }
            {
              SharingInfo_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SharingInfo_102, 0) = ((MR_Box) (PredNameModesPF_177));
              MR_hl_field(MR_mktag(0), SharingInfo_102, 1) = ((MR_Box) (Vars_175));
              MR_hl_field(MR_mktag(0), SharingInfo_102, 2) = ((MR_Box) (Types_100));
              MR_hl_field(MR_mktag(0), SharingInfo_102, 3) = ((MR_Box) (Sharing_101));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SharingInfo_102));
            }
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word ReuseInfo0_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word ReuseTuples_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_103, (MR_Integer) 3))));
            MR_Word ReuseInfo_105;
            MR_Word ErrorContext_181;
            MR_Word PredOrFunc_182;
            MR_Word Vars_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_103, (MR_Integer) 1))));
            MR_Word PredNameModesPF0_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_103, (MR_Integer) 0))));
            MR_Word PredNameModesPF_185;
            MR_Word SymName_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_184, (MR_Integer) 0))));
            MR_Word ModeList0_187 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_184, (MR_Integer) 1))));
            MR_Word ModeList_188;
            MR_Word Types_189 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_103, (MR_Integer) 2))));

            PredOrFunc_182 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_184, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_181 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_181, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_181, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_181, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_181, ModeList0_187, &ModeList_188, STATE_VARIABLE_Info_0_110, STATE_VARIABLE_Info_111, STATE_VARIABLE_Specs_0_112, STATE_VARIABLE_Specs_113);
            {
              PredNameModesPF_185 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_185, 0) = ((MR_Box) (SymName_186));
              MR_hl_field(MR_mktag(0), PredNameModesPF_185, 1) = ((MR_Box) (ModeList_188));
              MR_hl_field(MR_mktag(0), PredNameModesPF_185, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_182));
            }
            {
              ReuseInfo_105 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ReuseInfo_105, 0) = ((MR_Box) (PredNameModesPF_185));
              MR_hl_field(MR_mktag(0), ReuseInfo_105, 1) = ((MR_Box) (Vars_183));
              MR_hl_field(MR_mktag(0), ReuseInfo_105, 2) = ((MR_Box) (Types_189));
              MR_hl_field(MR_mktag(0), ReuseInfo_105, 3) = ((MR_Box) (ReuseTuples_104));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 28U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ReuseInfo_105));
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
parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word Mode0_11 = (MR_Word) (HeadVar__3_3);
    MR_Word Mode_12;

    parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_9, ErrorContext_10, Mode0_11, &Mode_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
    *HeadVar__4_4 = (MR_Word) (Mode_12);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word InstDefn0_11,
  MR_Word * InstDefn_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  if ((InstDefn0_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *InstDefn_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
  }
  else
  {
    MR_Word Inst0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstDefn0_11, (MR_Integer) 0))));
    MR_Word Inst_16;

    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, Inst0_15, &Inst_16, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *InstDefn_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Inst_16));
    }
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
        MR_Word DetailsDu0_17 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_13), (MR_Integer) 0));
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
        *TypeDefn_14 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (DetailsDu_24)));
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
    MR_Integer Ordinal_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 0))));
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
      MR_hl_field(MR_mktag(0), Ctor_21, 0) = ((MR_Box) (Ordinal_43));
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
      MR_Integer Ordinal_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_19, (MR_Integer) 0))));
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
        MR_hl_field(MR_mktag(0), Ctor_21, 0) = ((MR_Box) (Ordinal_43));
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
