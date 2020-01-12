/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version rotd-2020-01-12
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
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
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
  MR_Word STATE_VARIABLE_Info_0_127,
  MR_Word * STATE_VARIABLE_Info_128,
  MR_Word STATE_VARIABLE_Specs_0_129,
  MR_Word * STATE_VARIABLE_Specs_130);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(
  MR_Word InInt_9,
  MR_Word Context_10,
  MR_Word Pragma0_11,
  MR_Word * Pragma_12,
  MR_Word STATE_VARIABLE_Info_0_105,
  MR_Word * STATE_VARIABLE_Info_106,
  MR_Word STATE_VARIABLE_Specs_0_107,
  MR_Word * STATE_VARIABLE_Specs_108);

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
parse_tree__module_qual__qualify_items__qualify_class_decls_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_class_decls_1_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_34,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_decl_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Decl0_11,
  MR_Word * Decl_12,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

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
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_8_p_0(
  MR_Word InInt_9,
  MR_Word ContainingTypeCtor_10,
  MR_Word Ctor0_11,
  MR_Word * Ctor_12,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

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
  MR_Word * AddrOfInst_85,
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
  MR_Word * AddrOfInstName_57,
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



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
      MR_hl_field(MR_mktag(3), ErrorContext_25, 0) = ((MR_Box) ((MR_Unsigned) 15U));
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
    MR_Word Incls_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 2))));
    MR_Word Avails_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 3))));
    MR_Word FIMs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 4))));
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
    if ((Incls_21 == (MR_Word) ((MR_Unsigned) 0U)))
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
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 2) = ((MR_Box) (Incls_21));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 3) = ((MR_Box) (Avails_22));
      MR_hl_field(MR_mktag(0), SrcItemBlock_15, 4) = ((MR_Box) (FIMs_23));
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
      MR_Word Incls_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 2))));
      MR_Word Avails_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 3))));
      MR_Word FIMs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SrcItemBlock0_13, (MR_Integer) 4))));
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
      if ((Incls_21 == (MR_Word) ((MR_Unsigned) 0U)))
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
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 2) = ((MR_Box) (Incls_21));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 3) = ((MR_Box) (Avails_22));
        MR_hl_field(MR_mktag(0), SrcItemBlock_15, 4) = ((MR_Box) (FIMs_23));
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
  MR_Word STATE_VARIABLE_Info_0_127,
  MR_Word * STATE_VARIABLE_Info_128,
  MR_Word STATE_VARIABLE_Specs_0_129,
  MR_Word * STATE_VARIABLE_Specs_130)
{
  switch (MR_tag((MR_Word) Item0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Item_10 = Item0_9;
        *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
        *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_0_129;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemInstDefn0_28 = (MR_Word) (MR_body((MR_Word) (Item0_9), (MR_Integer) 1));
        MR_Word MaybeForTypeCtor0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_28, (MR_Integer) 2))));
        MR_Word MaybeAbstractInstDefn0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_28, (MR_Integer) 3))));
        MR_Word InstVarSet_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_28, (MR_Integer) 4))));
        MR_Word ErrorContext_32;
        MR_Word MaybeAbstractInstDefn_33;
        MR_Word MaybeForTypeCtor_40;
        MR_Word ItemInstDefn_41;
        MR_Word Var_175;
        MR_Word STATE_VARIABLE_Info_176_176;
        MR_Word STATE_VARIABLE_Specs_177_177;
        MR_Word SymName_182 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_28, (MR_Integer) 0))));
        MR_Word Params_183 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_28, (MR_Integer) 1))));
        MR_Word Context_184 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_28, (MR_Integer) 5))));
        MR_Integer SeqNum_185 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstDefn0_28, (MR_Integer) 6))));
        MR_Integer Arity_186;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), Params_183, &Arity_186);
        {
          Var_175 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (SymName_182));
          MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) (Arity_186));
        }
        {
          ErrorContext_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), ErrorContext_32, 1) = ((MR_Box) (Context_184));
          MR_hl_field(MR_mktag(3), ErrorContext_32, 2) = ((MR_Box) (Var_175));
        }
        if ((MaybeAbstractInstDefn0_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeAbstractInstDefn_33 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Info_176_176 = STATE_VARIABLE_Info_0_127;
          STATE_VARIABLE_Specs_177_177 = STATE_VARIABLE_Specs_0_129;
        }
        else
        {
          MR_Word InstDefn0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn0_30, (MR_Integer) 0))));
          MR_Word Inst0_35 = (MR_Word) (InstDefn0_34);
          MR_Word Inst_36;
          MR_Word InstDefn_37;

          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_32, Inst0_35, &Inst_36, STATE_VARIABLE_Info_0_127, &STATE_VARIABLE_Info_176_176, STATE_VARIABLE_Specs_0_129, &STATE_VARIABLE_Specs_177_177);
          InstDefn_37 = (MR_Word) (Inst_36);
          {
            MaybeAbstractInstDefn_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAbstractInstDefn_33, 0) = ((MR_Box) (InstDefn_37));
          }
        }
        if ((MaybeForTypeCtor0_29 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeForTypeCtor_40 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_176_176;
          *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_177_177;
        }
        else
        {
          MR_Word ForTypeCtor0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForTypeCtor0_29, (MR_Integer) 0))));
          MR_Word ForTypeCtor_39;

          parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_8, ErrorContext_32, ForTypeCtor0_38, &ForTypeCtor_39, STATE_VARIABLE_Info_176_176, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_177_177, STATE_VARIABLE_Specs_130);
          {
            MaybeForTypeCtor_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeForTypeCtor_40, 0) = ((MR_Box) (ForTypeCtor_39));
          }
        }
        {
          ItemInstDefn_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 0) = ((MR_Box) (SymName_182));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 1) = ((MR_Box) (Params_183));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 2) = ((MR_Box) (MaybeForTypeCtor_40));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 3) = ((MR_Box) (MaybeAbstractInstDefn_33));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 4) = ((MR_Box) (InstVarSet_31));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 5) = ((MR_Box) (Context_184));
          MR_hl_field(MR_mktag(0), ItemInstDefn_41, 6) = ((MR_Box) (SeqNum_185));
        }
        *Item_10 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ItemInstDefn_41)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ItemModeDefn0_42 = (MR_Word) (MR_body((MR_Word) (Item0_9), (MR_Integer) 2));
        MR_Word MaybeAbstractModeDefn0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_42, (MR_Integer) 2))));
        MR_Word MaybeAbstractModeDefn_44;
        MR_Word ItemModeDefn_49;
        MR_Word SymName_191 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_42, (MR_Integer) 0))));
        MR_Word Params_192 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_42, (MR_Integer) 1))));
        MR_Word Context_193 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_42, (MR_Integer) 4))));
        MR_Integer SeqNum_194 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_42, (MR_Integer) 5))));
        MR_Word InstVarSet_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDefn0_42, (MR_Integer) 3))));

        if ((MaybeAbstractModeDefn0_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeAbstractModeDefn_44 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
          *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_0_129;
        }
        else
        {
          MR_Word ModeDefn0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn0_43, (MR_Integer) 0))));
          MR_Word Mode0_46;
          MR_Word Mode_47;
          MR_Word ModeDefn_48;
          MR_Word Var_172;
          MR_Integer Arity_187;
          MR_Word ErrorContext_188;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[2]), Params_192, &Arity_187);
          {
            Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_172, 0) = ((MR_Box) (SymName_191));
            MR_hl_field(MR_mktag(0), Var_172, 1) = ((MR_Box) (Arity_187));
          }
          {
            ErrorContext_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ErrorContext_188, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ErrorContext_188, 1) = ((MR_Box) (Context_193));
            MR_hl_field(MR_mktag(3), ErrorContext_188, 2) = ((MR_Box) (Var_172));
          }
          Mode0_46 = (MR_Word) (ModeDefn0_45);
          parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(InInt_8, ErrorContext_188, Mode0_46, &Mode_47, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_0_129, STATE_VARIABLE_Specs_130);
          ModeDefn_48 = (MR_Word) (Mode_47);
          {
            MaybeAbstractModeDefn_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAbstractModeDefn_44, 0) = ((MR_Box) (ModeDefn_48));
          }
        }
        {
          ItemModeDefn_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ItemModeDefn_49, 0) = ((MR_Box) (SymName_191));
          MR_hl_field(MR_mktag(0), ItemModeDefn_49, 1) = ((MR_Box) (Params_192));
          MR_hl_field(MR_mktag(0), ItemModeDefn_49, 2) = ((MR_Box) (MaybeAbstractModeDefn_44));
          MR_hl_field(MR_mktag(0), ItemModeDefn_49, 3) = ((MR_Box) (InstVarSet_196));
          MR_hl_field(MR_mktag(0), ItemModeDefn_49, 4) = ((MR_Box) (Context_193));
          MR_hl_field(MR_mktag(0), ItemModeDefn_49, 5) = ((MR_Box) (SeqNum_194));
        }
        *Item_10 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (ItemModeDefn_49)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ItemPredDecl0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word PredOrFunc_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word TypesAndModes0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 2))));
            MR_Word MaybeWithType0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 3))));
            MR_Word MaybeWithInst0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 4))));
            MR_Word MaybeDetism_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 5))));
            MR_Word Origin_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 6))));
            MR_Word TypeVarSet_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 7))));
            MR_Word ExistQVars_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 9))));
            MR_Word Purity_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 10))) & (MR_Integer) 3);
            MR_Word Constraints0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 11))));
            MR_Word TypesAndModes_61;
            MR_Word ConstraintErrorContext_62;
            MR_Word Constraints_63;
            MR_Word MaybeWithType_66;
            MR_Word MaybeWithInst_69;
            MR_Word ItemPredDecl_70;
            MR_Word Var_163;
            MR_Word STATE_VARIABLE_Info_164_164;
            MR_Word STATE_VARIABLE_Specs_165_165;
            MR_Word STATE_VARIABLE_Info_166_166;
            MR_Word STATE_VARIABLE_Specs_167_167;
            MR_Word STATE_VARIABLE_Info_168_168;
            MR_Word STATE_VARIABLE_Specs_169_169;
            MR_Word SymName_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 0))));
            MR_Word Context_199 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 12))));
            MR_Integer SeqNum_200 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 13))));
            MR_Integer Arity_201;
            MR_Word InstVarSet_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPredDecl0_50, (MR_Integer) 8))));
            MR_Word ErrorContext_203;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), TypesAndModes0_52, &Arity_201);
            {
              Var_163 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_163, 0) = ((MR_Box) (SymName_198));
              MR_hl_field(MR_mktag(0), Var_163, 1) = ((MR_Box) (Arity_201));
            }
            {
              ErrorContext_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_203, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), ErrorContext_203, 1) = ((MR_Box) (Context_199));
              MR_hl_field(MR_mktag(3), ErrorContext_203, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_51));
              MR_hl_field(MR_mktag(3), ErrorContext_203, 3) = ((MR_Box) (Var_163));
            }
            parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_8, ErrorContext_203, TypesAndModes0_52, &TypesAndModes_61, STATE_VARIABLE_Info_0_127, &STATE_VARIABLE_Info_164_164, STATE_VARIABLE_Specs_0_129, &STATE_VARIABLE_Specs_165_165);
            {
              ConstraintErrorContext_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_62, 1) = ((MR_Box) (Context_199));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_62, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_51));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_62, 3) = ((MR_Box) (SymName_198));
              MR_hl_field(MR_mktag(3), ConstraintErrorContext_62, 4) = ((MR_Box) (Arity_201));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(InInt_8, ConstraintErrorContext_62, Constraints0_60, &Constraints_63, STATE_VARIABLE_Info_164_164, &STATE_VARIABLE_Info_166_166, STATE_VARIABLE_Specs_165_165, &STATE_VARIABLE_Specs_167_167);
            if ((MaybeWithType0_53 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithType_66 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_168_168 = STATE_VARIABLE_Info_166_166;
              STATE_VARIABLE_Specs_169_169 = STATE_VARIABLE_Specs_167_167;
            }
            else
            {
              MR_Word WithType0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_53, (MR_Integer) 0))));
              MR_Word WithType_65;

              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_203, WithType0_64, &WithType_65, STATE_VARIABLE_Info_166_166, &STATE_VARIABLE_Info_168_168, STATE_VARIABLE_Specs_167_167, &STATE_VARIABLE_Specs_169_169);
              {
                MaybeWithType_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithType_66, 0) = ((MR_Box) (WithType_65));
              }
            }
            if ((MaybeWithInst0_54 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithInst_69 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_168_168;
              *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_169_169;
            }
            else
            {
              MR_Word WithInst0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_54, (MR_Integer) 0))));
              MR_Word WithInst_68;

              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_203, WithInst0_67, &WithInst_68, STATE_VARIABLE_Info_168_168, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_169_169, STATE_VARIABLE_Specs_130);
              {
                MaybeWithInst_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithInst_69, 0) = ((MR_Box) (WithInst_68));
              }
            }
            {
              ItemPredDecl_70 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 0) = ((MR_Box) (SymName_198));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_51));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 2) = ((MR_Box) (TypesAndModes_61));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 3) = ((MR_Box) (MaybeWithType_66));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 4) = ((MR_Box) (MaybeWithInst_69));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 5) = ((MR_Box) (MaybeDetism_55));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 6) = ((MR_Box) (Origin_56));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 7) = ((MR_Box) (TypeVarSet_57));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 8) = ((MR_Box) (InstVarSet_202));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 9) = ((MR_Box) (ExistQVars_58));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 10) = (MR_Box) ((MR_Unsigned) (Purity_59));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 11) = ((MR_Box) (Constraints_63));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 12) = ((MR_Box) (Context_199));
              MR_hl_field(MR_mktag(0), ItemPredDecl_70, 13) = ((MR_Box) (SeqNum_200));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemPredDecl_70));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemModeDecl0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Modes0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_71, (MR_Integer) 2))));
            MR_Word Modes_73;
            MR_Word ItemModeDecl_74;
            MR_Word Var_158;
            MR_Word STATE_VARIABLE_Info_159_159;
            MR_Word STATE_VARIABLE_Specs_160_160;
            MR_Word SymName_208 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_71, (MR_Integer) 0))));
            MR_Word Context_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_71, (MR_Integer) 6))));
            MR_Integer SeqNum_210 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_71, (MR_Integer) 7))));
            MR_Integer Arity_211;
            MR_Word InstVarSet_212 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_71, (MR_Integer) 5))));
            MR_Word ErrorContext_213;
            MR_Word PredOrFunc_214 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_71, (MR_Integer) 1))));
            MR_Word MaybeWithInst0_215 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_71, (MR_Integer) 3))));
            MR_Word MaybeDetism_216 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemModeDecl0_71, (MR_Integer) 4))));
            MR_Word MaybeWithInst_219;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes0_72, &Arity_211);
            {
              Var_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_158, 0) = ((MR_Box) (SymName_208));
              MR_hl_field(MR_mktag(0), Var_158, 1) = ((MR_Box) (Arity_211));
            }
            {
              ErrorContext_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_213, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), ErrorContext_213, 1) = ((MR_Box) (Context_209));
              MR_hl_field(MR_mktag(3), ErrorContext_213, 2) = ((MR_Box) (PredOrFunc_214));
              MR_hl_field(MR_mktag(3), ErrorContext_213, 3) = ((MR_Box) (Var_158));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_8, ErrorContext_213, Modes0_72, &Modes_73, STATE_VARIABLE_Info_0_127, &STATE_VARIABLE_Info_159_159, STATE_VARIABLE_Specs_0_129, &STATE_VARIABLE_Specs_160_160);
            if ((MaybeWithInst0_215 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeWithInst_219 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_159_159;
              *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_160_160;
            }
            else
            {
              MR_Word WithInst0_204 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_215, (MR_Integer) 0))));
              MR_Word WithInst_205;

              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_8, ErrorContext_213, WithInst0_204, &WithInst_205, STATE_VARIABLE_Info_159_159, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_160_160, STATE_VARIABLE_Specs_130);
              {
                MaybeWithInst_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeWithInst_219, 0) = ((MR_Box) (WithInst_205));
              }
            }
            {
              ItemModeDecl_74 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemModeDecl_74, 0) = ((MR_Box) (SymName_208));
              MR_hl_field(MR_mktag(0), ItemModeDecl_74, 1) = ((MR_Box) (PredOrFunc_214));
              MR_hl_field(MR_mktag(0), ItemModeDecl_74, 2) = ((MR_Box) (Modes_73));
              MR_hl_field(MR_mktag(0), ItemModeDecl_74, 3) = ((MR_Box) (MaybeWithInst_219));
              MR_hl_field(MR_mktag(0), ItemModeDecl_74, 4) = ((MR_Box) (MaybeDetism_216));
              MR_hl_field(MR_mktag(0), ItemModeDecl_74, 5) = ((MR_Box) (InstVarSet_212));
              MR_hl_field(MR_mktag(0), ItemModeDecl_74, 6) = ((MR_Box) (Context_209));
              MR_hl_field(MR_mktag(0), ItemModeDecl_74, 7) = ((MR_Box) (SeqNum_210));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemModeDecl_74));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ItemForeignEnum0_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Lang_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_97, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor0_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_97, (MR_Integer) 1))));
            MR_Word Values_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_97, (MR_Integer) 2))));
            MR_Word ItemForeignEnum_101;
            MR_Word Context_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_97, (MR_Integer) 3))));
            MR_Integer SeqNum_239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemForeignEnum0_97, (MR_Integer) 4))));
            MR_Word TypeCtor_240;
            MR_Word ErrorContext_241;

            {
              ErrorContext_241 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_241, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), ErrorContext_241, 1) = ((MR_Box) (Context_238));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_8, ErrorContext_241, TypeCtor0_99, &TypeCtor_240, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_0_129, STATE_VARIABLE_Specs_130);
            {
              ItemForeignEnum_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemForeignEnum_101, 0) = (MR_Box) ((MR_Unsigned) (Lang_98));
              MR_hl_field(MR_mktag(0), ItemForeignEnum_101, 1) = ((MR_Box) (TypeCtor_240));
              MR_hl_field(MR_mktag(0), ItemForeignEnum_101, 2) = ((MR_Box) (Values_100));
              MR_hl_field(MR_mktag(0), ItemForeignEnum_101, 3) = ((MR_Box) (Context_238));
              MR_hl_field(MR_mktag(0), ItemForeignEnum_101, 4) = ((MR_Box) (SeqNum_239));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemForeignEnum_101));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ItemForeignExportEnum0_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Attributes_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum0_102, (MR_Integer) 2))));
            MR_Word Overrides_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum0_102, (MR_Integer) 3))));
            MR_Word OldSuppressUndef_105;
            MR_Word ItemForeignExportEnum_106;
            MR_Word STATE_VARIABLE_Info_138_138;
            MR_Word STATE_VARIABLE_Info_139_139;
            MR_Word Context_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum0_102, (MR_Integer) 4))));
            MR_Integer SeqNum_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum0_102, (MR_Integer) 5))));
            MR_Word TypeCtor_244;
            MR_Word ErrorContext_245;
            MR_Word Lang_246 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum0_102, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word TypeCtor0_247 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemForeignExportEnum0_102, (MR_Integer) 1))));

            {
              ErrorContext_245 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_245, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), ErrorContext_245, 1) = ((MR_Box) (Context_242));
            }
            parse_tree__module_qual__mq_info_get_suppress_found_undef_2_p_0(STATE_VARIABLE_Info_0_127, &OldSuppressUndef_105);
            parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_127, &STATE_VARIABLE_Info_138_138);
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_8, ErrorContext_245, TypeCtor0_247, &TypeCtor_244, STATE_VARIABLE_Info_138_138, &STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Specs_0_129, STATE_VARIABLE_Specs_130);
            parse_tree__module_qual__mq_info_set_suppress_found_undef_3_p_0(OldSuppressUndef_105, STATE_VARIABLE_Info_139_139, STATE_VARIABLE_Info_128);
            {
              ItemForeignExportEnum_106 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemForeignExportEnum_106, 0) = (MR_Box) ((MR_Unsigned) (Lang_246));
              MR_hl_field(MR_mktag(0), ItemForeignExportEnum_106, 1) = ((MR_Box) (TypeCtor_244));
              MR_hl_field(MR_mktag(0), ItemForeignExportEnum_106, 2) = ((MR_Box) (Attributes_103));
              MR_hl_field(MR_mktag(0), ItemForeignExportEnum_106, 3) = ((MR_Box) (Overrides_104));
              MR_hl_field(MR_mktag(0), ItemForeignExportEnum_106, 4) = ((MR_Box) (Context_242));
              MR_hl_field(MR_mktag(0), ItemForeignExportEnum_106, 5) = ((MR_Box) (SeqNum_243));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemForeignExportEnum_106));
            }
          }
          break;
        case (MR_Integer) 4:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
          {
            *Item_10 = Item0_9;
            *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
            *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_0_129;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word ItemTypeClass0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Name_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_75, (MR_Integer) 0))));
            MR_Word Vars_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_75, (MR_Integer) 1))));
            MR_Word FunDeps_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_75, (MR_Integer) 3))));
            MR_Word Interface0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_75, (MR_Integer) 4))));
            MR_Word VarSet_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_75, (MR_Integer) 5))));
            MR_Word Interface_81;
            MR_Word ItemTypeClass_84;
            MR_Word STATE_VARIABLE_Info_153_153;
            MR_Word STATE_VARIABLE_Specs_154_154;
            MR_Word Context_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_75, (MR_Integer) 6))));
            MR_Integer SeqNum_223 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_75, (MR_Integer) 7))));
            MR_Integer Arity_224;
            MR_Word Constraints0_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeClass0_75, (MR_Integer) 2))));
            MR_Word ConstraintErrorContext_227;
            MR_Word Constraints_228;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Vars_77, &Arity_224);
            {
              ConstraintErrorContext_227 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_227, 0) = ((MR_Box) (Context_222));
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_227, 1) = ((MR_Box) (Name_76));
              MR_hl_field(MR_mktag(0), ConstraintErrorContext_227, 2) = ((MR_Box) (Arity_224));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_227, Constraints0_226, &Constraints_228, STATE_VARIABLE_Info_0_127, &STATE_VARIABLE_Info_153_153, STATE_VARIABLE_Specs_0_129, &STATE_VARIABLE_Specs_154_154);
            if ((Interface0_79 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Interface_81 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_153_153;
              *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_154_154;
            }
            else
            {
              MR_Word Methods0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Interface0_79, (MR_Integer) 0))));
              MR_Word Methods_83;
              MR_Word Var_155;
              MR_Word ErrorContext_220;

              {
                Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_155, 0) = ((MR_Box) (Name_76));
                MR_hl_field(MR_mktag(0), Var_155, 1) = ((MR_Box) (Arity_224));
              }
              {
                ErrorContext_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ErrorContext_220, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(MR_mktag(3), ErrorContext_220, 1) = ((MR_Box) (Context_222));
                MR_hl_field(MR_mktag(3), ErrorContext_220, 2) = ((MR_Box) (Var_155));
              }
              parse_tree__module_qual__qualify_items__qualify_class_decls_8_p_0(InInt_8, ErrorContext_220, Methods0_82, &Methods_83, STATE_VARIABLE_Info_153_153, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_154_154, STATE_VARIABLE_Specs_130);
              {
                Interface_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Interface_81, 0) = ((MR_Box) (Methods_83));
              }
            }
            {
              ItemTypeClass_84 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemTypeClass_84, 0) = ((MR_Box) (Name_76));
              MR_hl_field(MR_mktag(0), ItemTypeClass_84, 1) = ((MR_Box) (Vars_77));
              MR_hl_field(MR_mktag(0), ItemTypeClass_84, 2) = ((MR_Box) (Constraints_228));
              MR_hl_field(MR_mktag(0), ItemTypeClass_84, 3) = ((MR_Box) (FunDeps_78));
              MR_hl_field(MR_mktag(0), ItemTypeClass_84, 4) = ((MR_Box) (Interface_81));
              MR_hl_field(MR_mktag(0), ItemTypeClass_84, 5) = ((MR_Box) (VarSet_80));
              MR_hl_field(MR_mktag(0), ItemTypeClass_84, 6) = ((MR_Box) (Context_222));
              MR_hl_field(MR_mktag(0), ItemTypeClass_84, 7) = ((MR_Box) (SeqNum_223));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemTypeClass_84));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ItemInstance0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Name0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 0))));
            MR_Word Types0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 1))));
            MR_Word OriginalTypes0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 2))));
            MR_Word Body0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 4))));
            MR_Word ModName_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 6))));
            MR_Word Id0_91;
            MR_Word Types_92;
            MR_Word OriginalTypes_93;
            MR_Word Body_95;
            MR_Word ItemInstance_96;
            MR_Word STATE_VARIABLE_Info_145_145;
            MR_Word STATE_VARIABLE_Info_146_146;
            MR_Word STATE_VARIABLE_Specs_147_147;
            MR_Word STATE_VARIABLE_Info_148_148;
            MR_Word STATE_VARIABLE_Specs_149_149;
            MR_Word STATE_VARIABLE_Info_150_150;
            MR_Word Context_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 7))));
            MR_Integer SeqNum_230 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 8))));
            MR_Integer Arity_231;
            MR_Word ErrorContext_232;
            MR_Word Constraints0_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 3))));
            MR_Word ConstraintErrorContext_234;
            MR_Word Constraints_235;
            MR_Word Name_236;
            MR_Word VarSet_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemInstance0_85, (MR_Integer) 5))));
            MR_Word Var_94;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types0_87, &Arity_231);
            {
              Id0_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Id0_91, 0) = ((MR_Box) (Name0_86));
              MR_hl_field(MR_mktag(0), Id0_91, 1) = ((MR_Box) (Arity_231));
            }
            {
              ErrorContext_232 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_232, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), ErrorContext_232, 1) = ((MR_Box) (Context_229));
              MR_hl_field(MR_mktag(3), ErrorContext_232, 2) = ((MR_Box) (Id0_91));
            }
            switch (InInt_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Info_145_145 = STATE_VARIABLE_Info_0_127;
                break;
              case (MR_Integer) 1:
                parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_127, &STATE_VARIABLE_Info_145_145);
                break;
            }
            {
              ConstraintErrorContext_234 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_234, 0) = ((MR_Box) (Context_229));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_234, 1) = ((MR_Box) (Name0_86));
              MR_hl_field(MR_mktag(2), ConstraintErrorContext_234, 2) = ((MR_Box) (OriginalTypes0_88));
            }
            parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_8, ConstraintErrorContext_234, Constraints0_233, &Constraints_235, STATE_VARIABLE_Info_145_145, &STATE_VARIABLE_Info_146_146, STATE_VARIABLE_Specs_0_129, &STATE_VARIABLE_Specs_147_147);
            parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(InInt_8, ErrorContext_232, Id0_91, &Name_236, STATE_VARIABLE_Info_146_146, &STATE_VARIABLE_Info_148_148, STATE_VARIABLE_Specs_147_147, &STATE_VARIABLE_Specs_149_149);
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_232, Types0_87, &Types_92, STATE_VARIABLE_Info_148_148, &STATE_VARIABLE_Info_150_150, STATE_VARIABLE_Specs_149_149, STATE_VARIABLE_Specs_130);
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(InInt_8, ErrorContext_232, OriginalTypes0_88, &OriginalTypes_93, STATE_VARIABLE_Info_150_150, STATE_VARIABLE_Info_128, *STATE_VARIABLE_Specs_130, &Var_94);
            parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(Name_236, Body0_89, &Body_95);
            {
              ItemInstance_96 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemInstance_96, 0) = ((MR_Box) (Name_236));
              MR_hl_field(MR_mktag(0), ItemInstance_96, 1) = ((MR_Box) (Types_92));
              MR_hl_field(MR_mktag(0), ItemInstance_96, 2) = ((MR_Box) (OriginalTypes_93));
              MR_hl_field(MR_mktag(0), ItemInstance_96, 3) = ((MR_Box) (Constraints_235));
              MR_hl_field(MR_mktag(0), ItemInstance_96, 4) = ((MR_Box) (Body_95));
              MR_hl_field(MR_mktag(0), ItemInstance_96, 5) = ((MR_Box) (VarSet_237));
              MR_hl_field(MR_mktag(0), ItemInstance_96, 6) = ((MR_Box) (ModName_90));
              MR_hl_field(MR_mktag(0), ItemInstance_96, 7) = ((MR_Box) (Context_229));
              MR_hl_field(MR_mktag(0), ItemInstance_96, 8) = ((MR_Box) (SeqNum_230));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemInstance_96));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ItemMutable0_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word ItemMutable_108;

            parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(InInt_8, ItemMutable0_107, &ItemMutable_108, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_0_129, STATE_VARIABLE_Specs_130);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemMutable_108));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word ItemTypeRepnInfo0_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word TypeCtorSymName_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_109, (MR_Integer) 0))));
            MR_Word ArgTVars_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_109, (MR_Integer) 1))));
            MR_Word RepInfo0_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_109, (MR_Integer) 2))));
            MR_Word RepInfo_118;
            MR_Word ItemTypeRepnInfo_122;
            MR_Word TVarSet_252 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_109, (MR_Integer) 3))));
            MR_Word Context_253 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_109, (MR_Integer) 4))));
            MR_Integer SeqNum_254 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeRepnInfo0_109, (MR_Integer) 5))));

            switch (MR_tag((MR_Word) RepInfo0_112)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  RepInfo_118 = RepInfo0_112;
                  *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
                  *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_0_129;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  RepInfo_118 = RepInfo0_112;
                  *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
                  *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_0_129;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), RepInfo0_112, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word EqvType0_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RepInfo0_112, (MR_Integer) 1))));
                      MR_Integer TypeCtorArity_120;
                      MR_Word EqvType_121;
                      MR_Word TypeCtor_248;
                      MR_Word ErrorContext_249;

                      mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), ArgTVars_111, &TypeCtorArity_120);
                      {
                        TypeCtor_248 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeCtor_248, 0) = ((MR_Box) (TypeCtorSymName_110));
                        MR_hl_field(MR_mktag(0), TypeCtor_248, 1) = ((MR_Box) (TypeCtorArity_120));
                      }
                      {
                        ErrorContext_249 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ErrorContext_249, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                        MR_hl_field(MR_mktag(3), ErrorContext_249, 1) = ((MR_Box) (Context_253));
                        MR_hl_field(MR_mktag(3), ErrorContext_249, 2) = ((MR_Box) (TypeCtor_248));
                      }
                      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_8, ErrorContext_249, EqvType0_119, &EqvType_121, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_0_129, STATE_VARIABLE_Specs_130);
                      {
                        RepInfo_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), RepInfo_118, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(MR_mktag(3), RepInfo_118, 1) = ((MR_Box) (EqvType_121));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      RepInfo_118 = RepInfo0_112;
                      *STATE_VARIABLE_Info_128 = STATE_VARIABLE_Info_0_127;
                      *STATE_VARIABLE_Specs_130 = STATE_VARIABLE_Specs_0_129;
                    }
                    break;
                }
                break;
            }
            {
              ItemTypeRepnInfo_122 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_122, 0) = ((MR_Box) (TypeCtorSymName_110));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_122, 1) = ((MR_Box) (ArgTVars_111));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_122, 2) = ((MR_Box) (RepInfo_118));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_122, 3) = ((MR_Box) (TVarSet_252));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_122, 4) = ((MR_Box) (Context_253));
              MR_hl_field(MR_mktag(0), ItemTypeRepnInfo_122, 5) = ((MR_Box) (SeqNum_254));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemTypeRepnInfo_122));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word ItemTypeDefn0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_17, (MR_Integer) 0))));
            MR_Word Params_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_17, (MR_Integer) 1))));
            MR_Word TypeDefn0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_17, (MR_Integer) 2))));
            MR_Word TVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_17, (MR_Integer) 3))));
            MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_17, (MR_Integer) 4))));
            MR_Integer SeqNum_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemTypeDefn0_17, (MR_Integer) 5))));
            MR_Integer Arity_24;
            MR_Word TypeCtor_25;
            MR_Word TypeDefn_26;
            MR_Word ItemTypeDefn_27;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_1[1]), Params_19, &Arity_24);
            {
              TypeCtor_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeCtor_25, 0) = ((MR_Box) (SymName_18));
              MR_hl_field(MR_mktag(0), TypeCtor_25, 1) = ((MR_Box) (Arity_24));
            }
            parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(InInt_8, Context_22, TypeCtor_25, TypeDefn0_20, &TypeDefn_26, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_0_129, STATE_VARIABLE_Specs_130);
            {
              ItemTypeDefn_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemTypeDefn_27, 0) = ((MR_Box) (SymName_18));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_27, 1) = ((MR_Box) (Params_19));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_27, 2) = ((MR_Box) (TypeDefn_26));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_27, 3) = ((MR_Box) (TVarSet_21));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_27, 4) = ((MR_Box) (Context_22));
              MR_hl_field(MR_mktag(0), ItemTypeDefn_27, 5) = ((MR_Box) (SeqNum_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemTypeDefn_27));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word ItemPragma0_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Item0_9, (MR_Integer) 1))));
            MR_Word Pragma0_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_123, (MR_Integer) 0))));
            MR_Word Pragma_125;
            MR_Word ItemPragma_126;
            MR_Word Context_257 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemPragma0_123, (MR_Integer) 1))));
            MR_Integer SeqNum_258 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ItemPragma0_123, (MR_Integer) 2))));

            parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(InInt_8, Context_257, Pragma0_124, &Pragma_125, STATE_VARIABLE_Info_0_127, STATE_VARIABLE_Info_128, STATE_VARIABLE_Specs_0_129, STATE_VARIABLE_Specs_130);
            {
              ItemPragma_126 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemPragma_126, 0) = ((MR_Box) (Pragma_125));
              MR_hl_field(MR_mktag(0), ItemPragma_126, 1) = ((MR_Box) (Context_257));
              MR_hl_field(MR_mktag(0), ItemPragma_126, 2) = ((MR_Box) (SeqNum_258));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Item_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ItemPragma_126));
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
  MR_Word STATE_VARIABLE_Info_0_105,
  MR_Word * STATE_VARIABLE_Info_106,
  MR_Word STATE_VARIABLE_Specs_0_107,
  MR_Word * STATE_VARIABLE_Specs_108)
{
  switch (MR_tag((MR_Word) Pragma0_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        *Pragma_12 = Pragma0_11;
        *STATE_VARIABLE_Info_106 = STATE_VARIABLE_Info_0_105;
        *STATE_VARIABLE_Specs_108 = STATE_VARIABLE_Specs_0_107;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FPInfo0_38 = (MR_Word) (MR_body((MR_Word) (Pragma0_11), (MR_Integer) 2));
        MR_Word Attrs0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_38, (MR_Integer) 0))));
        MR_Word Name_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_38, (MR_Integer) 1))));
        MR_Word PredOrFunc_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPInfo0_38, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Word Vars0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_38, (MR_Integer) 3))));
        MR_Word Varset_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_38, (MR_Integer) 4))));
        MR_Word InstVarset_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_38, (MR_Integer) 5))));
        MR_Word Impl_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPInfo0_38, (MR_Integer) 6))));
        MR_Word ErrorContext_46;
        MR_Word Vars_47;
        MR_Word UserSharing0_48;
        MR_Word UserSharing_49;
        MR_Word Attrs_50;
        MR_Word FPInfo_51;
        MR_Word STATE_VARIABLE_Info_127_127;
        MR_Word STATE_VARIABLE_Specs_128_128;

        {
          ErrorContext_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ErrorContext_46, 0) = ((MR_Box) ((MR_Unsigned) 7U));
          MR_hl_field(MR_mktag(3), ErrorContext_46, 1) = ((MR_Box) (Context_10));
          MR_hl_field(MR_mktag(3), ErrorContext_46, 2) = ((MR_Box) (Pragma0_11));
        }
        parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(InInt_9, ErrorContext_46, Vars0_42, &Vars_47, STATE_VARIABLE_Info_0_105, &STATE_VARIABLE_Info_127_127, STATE_VARIABLE_Specs_0_107, &STATE_VARIABLE_Specs_128_128);
        UserSharing0_48 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attrs0_39);
        parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(InInt_9, ErrorContext_46, UserSharing0_48, &UserSharing_49, STATE_VARIABLE_Info_127_127, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_128_128, STATE_VARIABLE_Specs_108);
        parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(UserSharing_49, Attrs0_39, &Attrs_50);
        {
          FPInfo_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FPInfo_51, 0) = ((MR_Box) (Attrs_50));
          MR_hl_field(MR_mktag(0), FPInfo_51, 1) = ((MR_Box) (Name_40));
          MR_hl_field(MR_mktag(0), FPInfo_51, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_41));
          MR_hl_field(MR_mktag(0), FPInfo_51, 3) = ((MR_Box) (Vars_47));
          MR_hl_field(MR_mktag(0), FPInfo_51, 4) = ((MR_Box) (Varset_43));
          MR_hl_field(MR_mktag(0), FPInfo_51, 5) = ((MR_Box) (InstVarset_44));
          MR_hl_field(MR_mktag(0), FPInfo_51, 6) = ((MR_Box) (Impl_45));
        }
        *Pragma_12 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (FPInfo_51)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FPEInfo0_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Origin_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo0_67, (MR_Integer) 0))));
            MR_Word Lang_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FPEInfo0_67, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word PredNameModesPF0_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FPEInfo0_67, (MR_Integer) 2))));
            MR_String CFunc_71 = ((MR_String) ((MR_hl_field(MR_mktag(0), FPEInfo0_67, (MR_Integer) 3))));
            MR_Word PredNameModesPF_72;
            MR_Word FPEInfo_73;
            MR_Word Name_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_70, (MR_Integer) 0))));
            MR_Word PredOrFunc_137 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_70, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word ErrorContext_138;
            MR_Word Modes0_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_70, (MR_Integer) 1))));
            MR_Word Modes_140;

            {
              ErrorContext_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_138, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_138, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_138, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_138, Modes0_139, &Modes_140, STATE_VARIABLE_Info_0_105, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_0_107, STATE_VARIABLE_Specs_108);
            {
              PredNameModesPF_72 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_72, 0) = ((MR_Box) (Name_136));
              MR_hl_field(MR_mktag(0), PredNameModesPF_72, 1) = ((MR_Box) (Modes_140));
              MR_hl_field(MR_mktag(0), PredNameModesPF_72, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_137));
            }
            {
              FPEInfo_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), FPEInfo_73, 0) = ((MR_Box) (Origin_68));
              MR_hl_field(MR_mktag(0), FPEInfo_73, 1) = (MR_Box) ((MR_Unsigned) (Lang_69));
              MR_hl_field(MR_mktag(0), FPEInfo_73, 2) = ((MR_Box) (PredNameModesPF_72));
              MR_hl_field(MR_mktag(0), FPEInfo_73, 3) = ((MR_Box) (CFunc_71));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (FPEInfo_73));
            }
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 13:
        case (MR_Integer) 15:
        case (MR_Integer) 16:
        case (MR_Integer) 17:
        case (MR_Integer) 20:
        case (MR_Integer) 21:
        case (MR_Integer) 22:
        case (MR_Integer) 23:
        case (MR_Integer) 26:
        case (MR_Integer) 27:
        case (MR_Integer) 28:
          {
            *Pragma_12 = Pragma0_11;
            *STATE_VARIABLE_Info_106 = STATE_VARIABLE_Info_0_105;
            *STATE_VARIABLE_Specs_108 = STATE_VARIABLE_Specs_0_107;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeSpecInfo0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word PredName_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_74, (MR_Integer) 0))));
            MR_Word SpecializedPredName_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_74, (MR_Integer) 1))));
            MR_Integer Arity_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_74, (MR_Integer) 2))));
            MR_Word MaybeModes0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_74, (MR_Integer) 4))));
            MR_Word Subst0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_74, (MR_Integer) 5))));
            MR_Word TVarSet_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_74, (MR_Integer) 6))));
            MR_Word Items_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_74, (MR_Integer) 7))));
            MR_Word MaybeModes_82;
            MR_Word Subst_83;
            MR_Word TypeSpecInfo_84;
            MR_Word STATE_VARIABLE_Info_117_117;
            MR_Word STATE_VARIABLE_Specs_118_118;
            MR_Word PredOrFunc_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_74, (MR_Integer) 3))));
            MR_Word ErrorContext_146;

            {
              ErrorContext_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_146, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_146, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_146, 2) = ((MR_Box) (Pragma0_11));
            }
            if ((MaybeModes0_78 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MaybeModes_82 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Info_117_117 = STATE_VARIABLE_Info_0_105;
              STATE_VARIABLE_Specs_118_118 = STATE_VARIABLE_Specs_0_107;
            }
            else
            {
              MR_Word Modes0_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModes0_78, (MR_Integer) 0))));
              MR_Word Modes_142;

              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_146, Modes0_141, &Modes_142, STATE_VARIABLE_Info_0_105, &STATE_VARIABLE_Info_117_117, STATE_VARIABLE_Specs_0_107, &STATE_VARIABLE_Specs_118_118);
              {
                MaybeModes_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeModes_82, 0) = ((MR_Box) (Modes_142));
              }
            }
            parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(InInt_9, ErrorContext_146, Subst0_79, &Subst_83, STATE_VARIABLE_Info_117_117, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_118_118, STATE_VARIABLE_Specs_108);
            {
              TypeSpecInfo_84 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeSpecInfo_84, 0) = ((MR_Box) (PredName_75));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_84, 1) = ((MR_Box) (SpecializedPredName_76));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_84, 2) = ((MR_Box) (Arity_77));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_84, 3) = ((MR_Box) (PredOrFunc_145));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_84, 4) = ((MR_Box) (MaybeModes_82));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_84, 5) = ((MR_Box) (Subst_83));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_84, 6) = ((MR_Box) (TVarSet_80));
              MR_hl_field(MR_mktag(0), TypeSpecInfo_84, 7) = ((MR_Box) (Items_81));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TypeSpecInfo_84));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word TabledInfo0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word EvalMethod_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_59, (MR_Integer) 0))));
            MR_Word PredNameArityPF_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_59, (MR_Integer) 1))));
            MR_Word MModes0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_59, (MR_Integer) 2))));
            MR_Word MModes_65;
            MR_Word TabledInfo_66;
            MR_Word Attrs_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TabledInfo0_59, (MR_Integer) 3))));

            if ((MModes0_62 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MModes_65 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Info_106 = STATE_VARIABLE_Info_0_105;
              *STATE_VARIABLE_Specs_108 = STATE_VARIABLE_Specs_0_107;
            }
            else
            {
              MR_Word Modes0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MModes0_62, (MR_Integer) 0))));
              MR_Word Modes_64;
              MR_Word ErrorContext_132;

              {
                ErrorContext_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ErrorContext_132, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), ErrorContext_132, 1) = ((MR_Box) (Context_10));
                MR_hl_field(MR_mktag(3), ErrorContext_132, 2) = ((MR_Box) (Pragma0_11));
              }
              parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_132, Modes0_63, &Modes_64, STATE_VARIABLE_Info_0_105, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_0_107, STATE_VARIABLE_Specs_108);
              {
                MModes_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MModes_65, 0) = ((MR_Box) (Modes_64));
              }
            }
            {
              TabledInfo_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TabledInfo_66, 0) = ((MR_Box) (EvalMethod_60));
              MR_hl_field(MR_mktag(0), TabledInfo_66, 1) = ((MR_Box) (PredNameArityPF_61));
              MR_hl_field(MR_mktag(0), TabledInfo_66, 2) = ((MR_Box) (MModes_65));
              MR_hl_field(MR_mktag(0), TabledInfo_66, 3) = ((MR_Box) (Attrs_135));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TabledInfo_66));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word OISUInfo0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word TypeCtor0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_52, (MR_Integer) 0))));
            MR_Word CreatorPreds_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_52, (MR_Integer) 1))));
            MR_Word MutatorPreds_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_52, (MR_Integer) 2))));
            MR_Word DestructorPreds_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OISUInfo0_52, (MR_Integer) 3))));
            MR_Word TypeCtor_57;
            MR_Word OISUInfo_58;
            MR_Word ErrorContext_131;

            {
              ErrorContext_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_131, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_131, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_131, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(InInt_9, ErrorContext_131, TypeCtor0_53, &TypeCtor_57, STATE_VARIABLE_Info_0_105, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_0_107, STATE_VARIABLE_Specs_108);
            {
              OISUInfo_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), OISUInfo_58, 0) = ((MR_Box) (TypeCtor_57));
              MR_hl_field(MR_mktag(0), OISUInfo_58, 1) = ((MR_Box) (CreatorPreds_54));
              MR_hl_field(MR_mktag(0), OISUInfo_58, 2) = ((MR_Box) (MutatorPreds_55));
              MR_hl_field(MR_mktag(0), OISUInfo_58, 3) = ((MR_Box) (DestructorPreds_56));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (OISUInfo_58));
            }
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word TermInfo0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word Args_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_85, (MR_Integer) 1))));
            MR_Word Term_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_85, (MR_Integer) 2))));
            MR_Word SymName_88;
            MR_Word ModeList0_89;
            MR_Word ModeList_90;
            MR_Word TermInfo_91;
            MR_Word PredOrFunc_149;
            MR_Word ErrorContext_150;
            MR_Word PredNameModesPF0_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermInfo0_85, (MR_Integer) 0))));
            MR_Word PredNameModesPF_152;

            SymName_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_151, (MR_Integer) 0))));
            ModeList0_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_151, (MR_Integer) 1))));
            PredOrFunc_149 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_151, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_150, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_150, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_150, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_150, ModeList0_89, &ModeList_90, STATE_VARIABLE_Info_0_105, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_0_107, STATE_VARIABLE_Specs_108);
            {
              PredNameModesPF_152 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_152, 0) = ((MR_Box) (SymName_88));
              MR_hl_field(MR_mktag(0), PredNameModesPF_152, 1) = ((MR_Box) (ModeList_90));
              MR_hl_field(MR_mktag(0), PredNameModesPF_152, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_149));
            }
            {
              TermInfo_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TermInfo_91, 0) = ((MR_Box) (PredNameModesPF_152));
              MR_hl_field(MR_mktag(0), TermInfo_91, 1) = ((MR_Box) (Args_86));
              MR_hl_field(MR_mktag(0), TermInfo_91, 2) = ((MR_Box) (Term_87));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 18U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TermInfo_91));
            }
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word Term2Info0_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word SuccessArgs_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_101, (MR_Integer) 1))));
            MR_Word FailureArgs_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_101, (MR_Integer) 2))));
            MR_Word Term2Info_104;
            MR_Word PredOrFunc_172;
            MR_Word ErrorContext_173;
            MR_Word PredNameModesPF0_174 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_101, (MR_Integer) 0))));
            MR_Word PredNameModesPF_175;
            MR_Word Term_176 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term2Info0_101, (MR_Integer) 3))));
            MR_Word SymName_177 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_174, (MR_Integer) 0))));
            MR_Word ModeList0_178 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_174, (MR_Integer) 1))));
            MR_Word ModeList_179;

            PredOrFunc_172 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_174, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_173, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_173, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_173, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_173, ModeList0_178, &ModeList_179, STATE_VARIABLE_Info_0_105, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_0_107, STATE_VARIABLE_Specs_108);
            {
              PredNameModesPF_175 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_175, 0) = ((MR_Box) (SymName_177));
              MR_hl_field(MR_mktag(0), PredNameModesPF_175, 1) = ((MR_Box) (ModeList_179));
              MR_hl_field(MR_mktag(0), PredNameModesPF_175, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_172));
            }
            {
              Term2Info_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Term2Info_104, 0) = ((MR_Box) (PredNameModesPF_175));
              MR_hl_field(MR_mktag(0), Term2Info_104, 1) = ((MR_Box) (SuccessArgs_102));
              MR_hl_field(MR_mktag(0), Term2Info_104, 2) = ((MR_Box) (FailureArgs_103));
              MR_hl_field(MR_mktag(0), Term2Info_104, 3) = ((MR_Box) (Term_176));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Term2Info_104));
            }
          }
          break;
        case (MR_Integer) 24:
          {
            MR_Word SharingInfo0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word HeadVars_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_92, (MR_Integer) 1))));
            MR_Word HeadVarTypes_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_92, (MR_Integer) 2))));
            MR_Word VarSet_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_92, (MR_Integer) 3))));
            MR_Word MaybeSharing_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_92, (MR_Integer) 5))));
            MR_Word SharingInfo_97;
            MR_Word PredOrFunc_153;
            MR_Word ErrorContext_154;
            MR_Word PredNameModesPF0_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_92, (MR_Integer) 0))));
            MR_Word PredNameModesPF_156;
            MR_Word TVarSet_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SharingInfo0_92, (MR_Integer) 4))));
            MR_Word SymName_158 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_155, (MR_Integer) 0))));
            MR_Word ModeList0_159 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_155, (MR_Integer) 1))));
            MR_Word ModeList_160;

            PredOrFunc_153 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_155, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_154, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_154, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_154, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_154, ModeList0_159, &ModeList_160, STATE_VARIABLE_Info_0_105, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_0_107, STATE_VARIABLE_Specs_108);
            {
              PredNameModesPF_156 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_156, 0) = ((MR_Box) (SymName_158));
              MR_hl_field(MR_mktag(0), PredNameModesPF_156, 1) = ((MR_Box) (ModeList_160));
              MR_hl_field(MR_mktag(0), PredNameModesPF_156, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_153));
            }
            {
              SharingInfo_97 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SharingInfo_97, 0) = ((MR_Box) (PredNameModesPF_156));
              MR_hl_field(MR_mktag(0), SharingInfo_97, 1) = ((MR_Box) (HeadVars_93));
              MR_hl_field(MR_mktag(0), SharingInfo_97, 2) = ((MR_Box) (HeadVarTypes_94));
              MR_hl_field(MR_mktag(0), SharingInfo_97, 3) = ((MR_Box) (VarSet_95));
              MR_hl_field(MR_mktag(0), SharingInfo_97, 4) = ((MR_Box) (TVarSet_157));
              MR_hl_field(MR_mktag(0), SharingInfo_97, 5) = ((MR_Box) (MaybeSharing_96));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 24U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (SharingInfo_97));
            }
          }
          break;
        case (MR_Integer) 25:
          {
            MR_Word ReuseInfo0_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Pragma0_11, (MR_Integer) 1))));
            MR_Word MaybeReuse_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_98, (MR_Integer) 5))));
            MR_Word ReuseInfo_100;
            MR_Word PredOrFunc_161;
            MR_Word ErrorContext_162;
            MR_Word PredNameModesPF0_163 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_98, (MR_Integer) 0))));
            MR_Word PredNameModesPF_164;
            MR_Word TVarSet_165 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_98, (MR_Integer) 4))));
            MR_Word SymName_166 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_163, (MR_Integer) 0))));
            MR_Word ModeList0_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_163, (MR_Integer) 1))));
            MR_Word ModeList_168;
            MR_Word HeadVars_169 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_98, (MR_Integer) 1))));
            MR_Word HeadVarTypes_170 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_98, (MR_Integer) 2))));
            MR_Word VarSet_171 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReuseInfo0_98, (MR_Integer) 3))));

            PredOrFunc_161 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredNameModesPF0_163, (MR_Integer) 2))) & (MR_Integer) 1);
            {
              ErrorContext_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ErrorContext_162, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), ErrorContext_162, 1) = ((MR_Box) (Context_10));
              MR_hl_field(MR_mktag(3), ErrorContext_162, 2) = ((MR_Box) (Pragma0_11));
            }
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_162, ModeList0_167, &ModeList_168, STATE_VARIABLE_Info_0_105, STATE_VARIABLE_Info_106, STATE_VARIABLE_Specs_0_107, STATE_VARIABLE_Specs_108);
            {
              PredNameModesPF_164 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), PredNameModesPF_164, 0) = ((MR_Box) (SymName_166));
              MR_hl_field(MR_mktag(0), PredNameModesPF_164, 1) = ((MR_Box) (ModeList_168));
              MR_hl_field(MR_mktag(0), PredNameModesPF_164, 2) = (MR_Box) ((MR_Unsigned) (PredOrFunc_161));
            }
            {
              ReuseInfo_100 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ReuseInfo_100, 0) = ((MR_Box) (PredNameModesPF_164));
              MR_hl_field(MR_mktag(0), ReuseInfo_100, 1) = ((MR_Box) (HeadVars_169));
              MR_hl_field(MR_mktag(0), ReuseInfo_100, 2) = ((MR_Box) (HeadVarTypes_170));
              MR_hl_field(MR_mktag(0), ReuseInfo_100, 3) = ((MR_Box) (VarSet_171));
              MR_hl_field(MR_mktag(0), ReuseInfo_100, 4) = ((MR_Box) (TVarSet_165));
              MR_hl_field(MR_mktag(0), ReuseInfo_100, 5) = ((MR_Box) (MaybeReuse_99));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Pragma_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 25U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ReuseInfo_100));
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
      MR_hl_field(MR_mktag(3), ErrorContext_23, 0) = ((MR_Box) ((MR_Unsigned) 13U));
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
parse_tree__module_qual__qualify_items__qualify_class_decls_8_p_0(
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
    MR_Word Decl0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Decls0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Decl_21;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word * AddrDecls_33;

    parse_tree__module_qual__qualify_items__qualify_class_decl_8_p_0(HeadVar__1_1, HeadVar__2_2, Decl0_19, &Decl_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Decl_21));
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrDecls_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_4, (MR_Integer) 1)));
    parse_tree__module_qual__qualify_items__LCMCpr_qualify_class_decls_1_8_p_0(HeadVar__1_1, HeadVar__2_2, Decls0_20, AddrDecls_33, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_6, STATE_VARIABLE_Specs_30_30, STATE_VARIABLE_Specs_8);
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__LCMCpr_qualify_class_decls_1_8_p_0(
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
      MR_Word Decl0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Decls0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Decl_21;
      MR_Word STATE_VARIABLE_Info_29_29;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word * AddrDecls_33;
      MR_Word HeadVar__4_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word * next_value_of_AddrOfHeadVar__4_34;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      parse_tree__module_qual__qualify_items__qualify_class_decl_8_p_0(HeadVar__1_1, HeadVar__2_2, Decl0_19, &Decl_21, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      {
        HeadVar__4_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 0) = ((MR_Box) (Decl_21));
        MR_hl_field(MR_mktag(1), HeadVar__4_35, 1) = NULL;
      }
      AddrDecls_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_35, (MR_Integer) 1)));
      *AddrOfHeadVar__4_34 = HeadVar__4_35;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Decls0_20;
      next_value_of_AddrOfHeadVar__4_34 = AddrDecls_33;
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
parse_tree__module_qual__qualify_items__qualify_class_decl_8_p_0(
  MR_Word InInt_9,
  MR_Word ErrorContext_10,
  MR_Word Decl0_11,
  MR_Word * Decl_12,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  if (((MR_tag((MR_Word) Decl0_11)) == (MR_Integer) 1))
  {
    MR_Word ModeInfo0_38 = (MR_Word) (MR_body((MR_Word) (Decl0_11), (MR_Integer) 1));
    MR_Word Modes0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 2))));
    MR_Word Varset_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 5))));
    MR_Word Modes_41;
    MR_Word ModeInfo_42;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word STATE_VARIABLE_Specs_48_48;
    MR_Word Name_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 1))));
    MR_Word PredOrFunc_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 0))));
    MR_Word MaybeWithInst0_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 3))));
    MR_Word MaybeDetism_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 4))));
    MR_Word Context_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo0_38, (MR_Integer) 6))));
    MR_Word MaybeWithInst_71;

    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_39, &Modes_41, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_48_48);
    if ((MaybeWithInst0_66 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithInst_71 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_47_47;
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_48_48;
    }
    else
    {
      MR_Word WithInst0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_66, (MR_Integer) 0))));
      MR_Word WithInst_61;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, WithInst0_60, &WithInst_61, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_44, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_46);
      {
        MaybeWithInst_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithInst_71, 0) = ((MR_Box) (WithInst_61));
      }
    }
    {
      ModeInfo_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeInfo_42, 0) = ((MR_Box) (PredOrFunc_65));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 1) = ((MR_Box) (Name_64));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 2) = ((MR_Box) (Modes_41));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 3) = ((MR_Box) (MaybeWithInst_71));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 4) = ((MR_Box) (MaybeDetism_67));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 5) = ((MR_Box) (Varset_40));
      MR_hl_field(MR_mktag(0), ModeInfo_42, 6) = ((MR_Box) (Context_68));
    }
    *Decl_12 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ModeInfo_42)));
  }
  else
  {
    MR_Word PredOrFuncInfo0_15 = (MR_Word) ((MR_Word) (Decl0_11));
    MR_Word Name_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 0))));
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word TypesAndModes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 2))));
    MR_Word MaybeWithType0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 3))));
    MR_Word MaybeWithInst0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 4))));
    MR_Word MaybeDetism_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 5))));
    MR_Word TypeVarset_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 6))));
    MR_Word InstVarset_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 7))));
    MR_Word ExistQVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 8))));
    MR_Word Purity_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 9))) & (MR_Integer) 3);
    MR_Word Constraints0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 10))));
    MR_Word Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrFuncInfo0_15, (MR_Integer) 11))));
    MR_Word TypesAndModes_28;
    MR_Word ConstraintErrorContext_29;
    MR_Word Constraints_30;
    MR_Word MaybeWithType_33;
    MR_Word MaybeWithInst_36;
    MR_Word PredOrFuncInfo_37;
    MR_Word STATE_VARIABLE_Info_51_51;
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_String Var_53;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word STATE_VARIABLE_Specs_55_55;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word STATE_VARIABLE_Specs_57_57;
    MR_Word UnivCs0_82;
    MR_Word ExistCs0_83;
    MR_Word UnivCs_84;
    MR_Word ExistCs_85;
    MR_Word STATE_VARIABLE_Info_23_86;
    MR_Word STATE_VARIABLE_Specs_24_87;

    parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(InInt_9, ErrorContext_10, TypesAndModes0_18, &TypesAndModes_28, STATE_VARIABLE_Info_0_43, &STATE_VARIABLE_Info_51_51, STATE_VARIABLE_Specs_0_45, &STATE_VARIABLE_Specs_52_52);
    Var_53 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_16);
    {
      ConstraintErrorContext_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_29, 0) = ((MR_Box) (Context_27));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_29, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(MR_mktag(1), ConstraintErrorContext_29, 2) = ((MR_Box) (Var_53));
    }
    UnivCs0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_26, (MR_Integer) 0))));
    ExistCs0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Constraints0_26, (MR_Integer) 1))));
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_29, UnivCs0_82, &UnivCs_84, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_23_86, STATE_VARIABLE_Specs_52_52, &STATE_VARIABLE_Specs_24_87);
    parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_29, ExistCs0_83, &ExistCs_85, STATE_VARIABLE_Info_23_86, &STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Specs_24_87, &STATE_VARIABLE_Specs_55_55);
    {
      Constraints_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Constraints_30, 0) = ((MR_Box) (UnivCs_84));
      MR_hl_field(MR_mktag(0), Constraints_30, 1) = ((MR_Box) (ExistCs_85));
    }
    if ((MaybeWithType0_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithType_33 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_56_56 = STATE_VARIABLE_Info_54_54;
      STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_55_55;
    }
    else
    {
      MR_Word WithType0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithType0_19, (MR_Integer) 0))));
      MR_Word WithType_32;

      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_9, ErrorContext_10, WithType0_31, &WithType_32, STATE_VARIABLE_Info_54_54, &STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Specs_55_55, &STATE_VARIABLE_Specs_57_57);
      {
        MaybeWithType_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithType_33, 0) = ((MR_Box) (WithType_32));
      }
    }
    if ((MaybeWithInst0_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeWithInst_36 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_44 = STATE_VARIABLE_Info_56_56;
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_57_57;
    }
    else
    {
      MR_Word WithInst0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeWithInst0_20, (MR_Integer) 0))));
      MR_Word WithInst_35;

      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_9, ErrorContext_10, WithInst0_34, &WithInst_35, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_44, STATE_VARIABLE_Specs_57_57, STATE_VARIABLE_Specs_46);
      {
        MaybeWithInst_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeWithInst_36, 0) = ((MR_Box) (WithInst_35));
      }
    }
    {
      PredOrFuncInfo_37 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 0) = ((MR_Box) (Name_16));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 2) = ((MR_Box) (TypesAndModes_28));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 3) = ((MR_Box) (MaybeWithType_33));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 4) = ((MR_Box) (MaybeWithInst_36));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 5) = ((MR_Box) (MaybeDetism_21));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 6) = ((MR_Box) (TypeVarset_22));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 7) = ((MR_Box) (InstVarset_23));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 8) = ((MR_Box) (ExistQVars_24));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 9) = (MR_Box) ((MR_Unsigned) (Purity_25));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 10) = ((MR_Box) (Constraints_30));
      MR_hl_field(MR_mktag(0), PredOrFuncInfo_37, 11) = ((MR_Box) (Context_27));
    }
    *Decl_12 = (MR_Word) ((MR_Word) (PredOrFuncInfo_37));
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
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  switch (MR_tag((MR_Word) TypeDefn0_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word DetailsDu0_17 = (MR_Word) ((MR_Word) (TypeDefn0_13));
        MR_Word OoMCtors0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_17, (MR_Integer) 0))));
        MR_Word HeadCtor0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors0_18, (MR_Integer) 0))));
        MR_Word TailCtors0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors0_18, (MR_Integer) 1))));
        MR_Word HeadCtor_23;
        MR_Word TailCtors_24;
        MR_Word OoMCtors_25;
        MR_Word MaybeUserEqComp_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_17, (MR_Integer) 1))));
        MR_Word MaybeDirectArgCtors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu0_17, (MR_Integer) 2))));
        MR_Word DetailsDu_28;
        MR_Word STATE_VARIABLE_Info_62_62;
        MR_Word STATE_VARIABLE_Specs_63_63;

        parse_tree__module_qual__qualify_items__qualify_constructor_8_p_0(InInt_10, TypeCtor_12, HeadCtor0_21, &HeadCtor_23, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Specs_0_48, &STATE_VARIABLE_Specs_63_63);
        parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(InInt_10, TypeCtor_12, TailCtors0_22, &TailCtors_24, STATE_VARIABLE_Info_62_62, STATE_VARIABLE_Info_47, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_49);
        {
          OoMCtors_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OoMCtors_25, 0) = ((MR_Box) (HeadCtor_23));
          MR_hl_field(MR_mktag(0), OoMCtors_25, 1) = ((MR_Box) (TailCtors_24));
        }
        {
          DetailsDu_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsDu_28, 0) = ((MR_Box) (OoMCtors_25));
          MR_hl_field(MR_mktag(0), DetailsDu_28, 1) = ((MR_Box) (MaybeUserEqComp_26));
          MR_hl_field(MR_mktag(0), DetailsDu_28, 2) = ((MR_Box) (MaybeDirectArgCtors_27));
        }
        *TypeDefn_14 = (MR_Word) ((MR_Word) (DetailsDu_28));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DetailsSolver0_34 = (MR_Word) (MR_body((MR_Word) (TypeDefn0_13), (MR_Integer) 1));
        MR_Word SolverTypeDetails0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_34, (MR_Integer) 0))));
        MR_Word RepnType0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_35, (MR_Integer) 0))));
        MR_Word GroundInst0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_35, (MR_Integer) 1))));
        MR_Word AnyInst0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_35, (MR_Integer) 2))));
        MR_Word MutableItems0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails0_35, (MR_Integer) 3))));
        MR_Word RepnType_40;
        MR_Word GroundInst_41;
        MR_Word AnyInst_42;
        MR_Word MutableItems_43;
        MR_Word SolverTypeDetails_44;
        MR_Word DetailsSolver_45;
        MR_Word STATE_VARIABLE_Info_50_50;
        MR_Word STATE_VARIABLE_Specs_51_51;
        MR_Word STATE_VARIABLE_Info_52_52;
        MR_Word STATE_VARIABLE_Specs_53_53;
        MR_Word STATE_VARIABLE_Info_54_54;
        MR_Word STATE_VARIABLE_Specs_55_55;
        MR_Word MaybeUserEqComp_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSolver0_34, (MR_Integer) 1))));
        MR_Word ErrorContext_67;

        {
          ErrorContext_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErrorContext_67, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), ErrorContext_67, 1) = ((MR_Box) (TypeCtor_12));
        }
        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_67, RepnType0_36, &RepnType_40, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_50_50, STATE_VARIABLE_Specs_0_48, &STATE_VARIABLE_Specs_51_51);
        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_67, GroundInst0_37, &GroundInst_41, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_53_53);
        parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(InInt_10, ErrorContext_67, AnyInst0_38, &AnyInst_42, STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Specs_53_53, &STATE_VARIABLE_Specs_55_55);
        parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(InInt_10, MutableItems0_39, &MutableItems_43, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_47, STATE_VARIABLE_Specs_55_55, STATE_VARIABLE_Specs_49);
        {
          SolverTypeDetails_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SolverTypeDetails_44, 0) = ((MR_Box) (RepnType_40));
          MR_hl_field(MR_mktag(0), SolverTypeDetails_44, 1) = ((MR_Box) (GroundInst_41));
          MR_hl_field(MR_mktag(0), SolverTypeDetails_44, 2) = ((MR_Box) (AnyInst_42));
          MR_hl_field(MR_mktag(0), SolverTypeDetails_44, 3) = ((MR_Box) (MutableItems_43));
        }
        {
          DetailsSolver_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), DetailsSolver_45, 0) = ((MR_Box) (SolverTypeDetails_44));
          MR_hl_field(MR_mktag(0), DetailsSolver_45, 1) = ((MR_Box) (MaybeUserEqComp_66));
        }
        *TypeDefn_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (DetailsSolver_45)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type0_29;
        MR_Word ErrorContext_30;
        MR_Word Type_31;
        MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeDefn0_13, (MR_Integer) 0))));
        MR_Word Var_61;

        Type0_29 = (MR_Word) (Var_58);
        {
          ErrorContext_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ErrorContext_30, 0) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), ErrorContext_30, 1) = ((MR_Box) (TypeCtor_12));
        }
        parse_tree__module_qual__qualify_items__qualify_type_8_p_0(InInt_10, ErrorContext_30, Type0_29, &Type_31, STATE_VARIABLE_Info_0_46, STATE_VARIABLE_Info_47, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
        Var_61 = (MR_Word) (Type_31);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *TypeDefn_14 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Var_61));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn0_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *TypeDefn_14 = TypeDefn0_13;
            *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
            *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
          }
          break;
        case (MR_Integer) 1:
          {
            *TypeDefn_14 = TypeDefn0_13;
            *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
            *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_8_p_0(
  MR_Word InInt_9,
  MR_Word ContainingTypeCtor_10,
  MR_Word Ctor0_11,
  MR_Word * Ctor_12,
  MR_Word STATE_VARIABLE_Info_0_32,
  MR_Word * STATE_VARIABLE_Info_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    uint32_t Ordinal_15 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor0_11, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_11, (MR_Integer) 1))));
    MR_Word FunctionSymbolSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_11, (MR_Integer) 2))));
    MR_Word Args0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_11, (MR_Integer) 3))));
    MR_Integer Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor0_11, (MR_Integer) 4))));
    MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor0_11, (MR_Integer) 5))));
    MR_String FunctionSymbolName_21;
    MR_Word MaybeExistConstraints_22;
    MR_Word Args_31;
    MR_Word STATE_VARIABLE_Info_36_36;
    MR_Word STATE_VARIABLE_Specs_37_37;

    FunctionSymbolName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(FunctionSymbolSymName_17);
    if ((MaybeExistConstraints0_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeExistConstraints_22 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_36_36 = STATE_VARIABLE_Info_0_32;
      STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_0_34;
    }
    else
    {
      MR_Word ExistConstraints0_23 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_16), (MR_Integer) 1));
      MR_Word ExistQVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_23, (MR_Integer) 0))));
      MR_Word Constraints0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_23, (MR_Integer) 1))));
      MR_Word UnconstrainedExistQVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_23, (MR_Integer) 2))));
      MR_Word ConstrainedExistQVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints0_23, (MR_Integer) 3))));
      MR_Word ConstraintErrorContext_28;
      MR_Word Constraints_29;
      MR_Word ExistConstraints_30;

      {
        ConstraintErrorContext_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_28, 1) = ((MR_Box) (Context_20));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_28, 2) = ((MR_Box) (ContainingTypeCtor_10));
        MR_hl_field(MR_mktag(3), ConstraintErrorContext_28, 3) = ((MR_Box) (FunctionSymbolName_21));
      }
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(InInt_9, ConstraintErrorContext_28, Constraints0_25, &Constraints_29, STATE_VARIABLE_Info_0_32, &STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_37_37);
      {
        ExistConstraints_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ExistConstraints_30, 0) = ((MR_Box) (ExistQVars_24));
        MR_hl_field(MR_mktag(0), ExistConstraints_30, 1) = ((MR_Box) (Constraints_29));
        MR_hl_field(MR_mktag(0), ExistConstraints_30, 2) = ((MR_Box) (UnconstrainedExistQVars_26));
        MR_hl_field(MR_mktag(0), ExistConstraints_30, 3) = ((MR_Box) (ConstrainedExistQVars_27));
      }
      MaybeExistConstraints_22 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ExistConstraints_30)));
    }
    parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(InInt_9, ContainingTypeCtor_10, FunctionSymbolName_21, (MR_Integer) 0, Args0_18, &Args_31, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_33, STATE_VARIABLE_Specs_37_37, STATE_VARIABLE_Specs_35);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *Ctor_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_Word) (Ordinal_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeExistConstraints_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (FunctionSymbolSymName_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Args_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Arity_19));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_20));
    }
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
    MR_Integer CurArgNum_31 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) 1);
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
      MR_Integer CurArgNum_31 = (MR_Integer) ((MR_Unsigned) LastArgNum_4 + (MR_Unsigned) 1);
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
      MR_hl_field(MR_mktag(3), ErrorContext_49, 0) = ((MR_Box) ((MR_Unsigned) 13U));
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
        MR_hl_field(MR_mktag(3), ErrorContext_49, 0) = ((MR_Box) ((MR_Unsigned) 13U));
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
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[0]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 1:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[11]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
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
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[1]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 4:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[2]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 6:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[3]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 8:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[4]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 2:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[5]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 1:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[6]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 5:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[7]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 7:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[8]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 9:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[9]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                    break;
                  case (MR_Integer) 3:
                    parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[10]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
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
                parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[0]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                break;
              case (MR_Integer) 1:
                parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[11]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
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
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[1]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 4:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[2]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 6:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[3]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 8:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[4]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 2:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[5]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 1:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[6]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 5:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[7]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 7:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[8]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 9:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[9]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
                  break;
                case (MR_Integer) 3:
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(InInt_9, (MR_Word) (&parse_tree__module_qual__qualify_items_scalar_common_3[10]), STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
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
  MR_Word * AddrOfInst_85,
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
          *AddrOfInst_85 = Inst0_11;
          *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Uniq_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 0))) & (MR_Integer) 7);
          MR_Word HOInstInfo0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Inst0_11, (MR_Integer) 1))));
          MR_Word HOInstInfo_17;
          MR_Word Inst_86;

          if ((HOInstInfo0_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            HOInstInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          }
          else
          {
            MR_Word PredOrFunc_71;
            MR_Word Modes0_72;
            MR_Word MaybeArgRegs_73;
            MR_Word Detism_74;
            MR_Word Modes_75;
            MR_Word Var_76 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
            MR_Word Var_79;

            PredOrFunc_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))) & (MR_Integer) 1);
            Modes0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 1))));
            MaybeArgRegs_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 2))));
            Detism_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 3))) & (MR_Integer) 7);
            parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_72, &Modes_75, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            {
              Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_79, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_71));
              MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Modes_75));
              MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MaybeArgRegs_73));
              MR_hl_field(MR_mktag(0), Var_79, 3) = (MR_Box) ((MR_Unsigned) (Detism_74));
            }
            HOInstInfo_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_79)));
          }
          {
            Inst_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Inst_86, 0) = (MR_Box) ((MR_Unsigned) (Uniq_15));
            MR_hl_field(MR_mktag(2), Inst_86, 1) = ((MR_Box) (HOInstInfo_17));
          }
          *AddrOfInst_85 = Inst_86;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word InstResults0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word BoundInsts0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 3))));
              MR_Word Uniq_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word * AddrBoundInsts_81;
              MR_Word Inst_87;

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
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
                    return;
                  }
                  break;
              }
              {
                Inst_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Inst_87, 1) = (MR_Box) ((MR_Unsigned) (Uniq_57));
                MR_hl_field(MR_mktag(3), Inst_87, 2) = ((MR_Box) (InstResults0_20));
                MR_hl_field(MR_mktag(3), Inst_87, 3) = NULL;
              }
              AddrBoundInsts_81 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_87, (MR_Integer) 3)));
              *AddrOfInst_85 = Inst_87;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_21, AddrBoundInsts_81, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Uniq_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word HOInstInfo0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word * AddrHOInstInfo_84;
              MR_Word Inst_97;

              {
                Inst_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_97, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Inst_97, 1) = (MR_Box) ((MR_Unsigned) (Uniq_58));
                MR_hl_field(MR_mktag(3), Inst_97, 2) = NULL;
              }
              AddrHOInstInfo_84 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_97, (MR_Integer) 2)));
              *AddrOfInst_85 = Inst_97;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_ho_inst_info_1_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_59, AddrHOInstInfo_84, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 2:
            {
              *AddrOfInst_85 = Inst0_11;
              *STATE_VARIABLE_Info_38 = STATE_VARIABLE_Info_0_37;
              *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Vars_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word SubInst0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word * AddrSubInst_82;
              MR_Word Inst_90;
              MR_Word next_value_of_Inst0_11;
              MR_Word * next_value_of_AddrOfInst_85;

              {
                Inst_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_90, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Inst_90, 1) = ((MR_Box) (Vars_29));
                MR_hl_field(MR_mktag(3), Inst_90, 2) = NULL;
              }
              AddrSubInst_82 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_90, (MR_Integer) 2)));
              *AddrOfInst_85 = Inst_90;
              // direct tailcall eliminated
              ;
              next_value_of_Inst0_11 = SubInst0_30;
              next_value_of_AddrOfInst_85 = AddrSubInst_82;
              Inst0_11 = next_value_of_Inst0_11;
              AddrOfInst_85 = next_value_of_AddrOfInst_85;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word InstName0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word * AddrInstName_83;
              MR_Word Inst_93;

              {
                Inst_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_93, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Inst_93, 1) = NULL;
              }
              AddrInstName_83 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_93, (MR_Integer) 1)));
              *AddrOfInst_85 = Inst_93;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_name_1_8_p_0(InInt_9, ErrorContext_10, InstName0_32, AddrInstName_83, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Name_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
              MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
              MR_Word Inst_12;
              MR_Word * AddrArgs_80;

              {
                Inst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Inst_12, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Inst_12, 1) = ((MR_Box) (Name_34));
                MR_hl_field(MR_mktag(3), Inst_12, 2) = NULL;
              }
              AddrArgs_80 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), Inst_12, (MR_Integer) 2)));
              *AddrOfInst_85 = Inst_12;
              parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_35, AddrArgs_80, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
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
  MR_Word * AddrOfInstName_57,
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
          MR_Word STATE_VARIABLE_Info_47_47;
          MR_Word STATE_VARIABLE_Specs_48_48;
          MR_String Var_49;

          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(InInt_9, ErrorContext_10, Insts0_16, &Insts_17, STATE_VARIABLE_Info_0_41, &STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_48_48);
          succeeded = ((MR_tag((MR_Word) SymName0_15)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_49 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName0_15, (MR_Integer) 0))));
            succeeded = (strcmp(Var_49, (MR_String) "") == 0);
          }
          if (succeeded)
          {
            parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(SymName0_15, Insts_17, ErrorContext_10, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_44);
            parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_42);
            SymName_18 = SymName0_15;
          }
          else
          {
            MR_Integer Arity_19;
            MR_Word InstIdSet_20;
            MR_Word Var_53;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), Insts0_16, &Arity_19);
            parse_tree__module_qual__mq_info_get_insts_2_p_0(STATE_VARIABLE_Info_47_47, &InstIdSet_20);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (SymName0_15));
              MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (Arity_19));
            }
            parse_tree__module_qual__id_set__find_unique_match_10_p_0(InInt_9, ErrorContext_10, InstIdSet_20, (MR_Integer) 2, Var_53, &SymName_18, STATE_VARIABLE_Info_47_47, STATE_VARIABLE_Info_42, STATE_VARIABLE_Specs_48_48, STATE_VARIABLE_Specs_44);
          }
          {
            InstName_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), InstName_12, 0) = ((MR_Box) (SymName_18));
            MR_hl_field(MR_mktag(0), InstName_12, 1) = ((MR_Box) (Insts_17));
          }
          *AddrOfInstName_57 = InstName_12;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
          return;
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
          return;
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
        return;
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
          MR_Word PredOrFunc_71;
          MR_Word Modes0_72;
          MR_Word MaybeArgRegs_73;
          MR_Word Detism_74;
          MR_Word Modes_75;
          MR_Word Var_76 = (MR_Word) (MR_body((MR_Word) (HOInstInfo0_16), (MR_Integer) 1));
          MR_Word Var_79;

          PredOrFunc_71 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 0))) & (MR_Integer) 1);
          Modes0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 1))));
          MaybeArgRegs_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 2))));
          Detism_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_76, (MR_Integer) 3))) & (MR_Integer) 7);
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(InInt_9, ErrorContext_10, Modes0_72, &Modes_75, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_71));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (Modes_75));
            MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MaybeArgRegs_73));
            MR_hl_field(MR_mktag(0), Var_79, 3) = (MR_Box) ((MR_Unsigned) (Detism_74));
          }
          HOInstInfo_17 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_79)));
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
            MR_Word Uniq_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word * AddrBoundInsts_81;

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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
                  return;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_57));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (InstResults0_20));
              MR_hl_field(MR_mktag(3), base, 3) = NULL;
            }
            AddrBoundInsts_81 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 3)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_bound_insts_1_8_p_0(InInt_9, ErrorContext_10, BoundInsts0_21, AddrBoundInsts_81, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Uniq_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word HOInstInfo0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrHOInstInfo_84;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Uniq_58));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrHOInstInfo_84 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_ho_inst_info_1_8_p_0(InInt_9, ErrorContext_10, HOInstInfo0_59, AddrHOInstInfo_84, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
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
            MR_Word * AddrSubInst_82;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Vars_29));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrSubInst_82 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_1_8_p_0(InInt_9, ErrorContext_10, SubInst0_30, AddrSubInst_82, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word InstName0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
            MR_Word * AddrInstName_83;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = NULL;
            }
            AddrInstName_83 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 1)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_name_1_8_p_0(InInt_9, ErrorContext_10, InstName0_32, AddrInstName_83, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Name_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1))));
            MR_Word Args0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2))));
            MR_Word * AddrArgs_80;

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Inst_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Name_34));
              MR_hl_field(MR_mktag(3), base, 2) = NULL;
            }
            AddrArgs_80 = (MR_Word *) (&(MR_hl_field(MR_mktag(3), *Inst_12, (MR_Integer) 2)));
            parse_tree__module_qual__qualify_items__LCMCpr_qualify_inst_list_1_8_p_0(InInt_9, ErrorContext_10, Args0_35, AddrArgs_80, STATE_VARIABLE_Info_0_37, STATE_VARIABLE_Info_38, STATE_VARIABLE_Specs_0_39, STATE_VARIABLE_Specs_40);
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
