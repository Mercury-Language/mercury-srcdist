/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module parse_tree.module_qual.qualify_items. */
/* :- implementation. */

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
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.collect_mq_info.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_11,
  MR_String parse_tree__module_qual__qualify_items__EventName_12,
  MR_String parse_tree__module_qual__qualify_items__FileName_13,
  MR_Integer parse_tree__module_qual__qualify_items__LineNumber_14,
  MR_Word parse_tree__module_qual__qualify_items__Attr0_15,
  MR_Word * parse_tree__module_qual__qualify_items__Attr_16,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_28,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_30,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_31);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__UserSharing0_11,
  MR_Word * parse_tree__module_qual__qualify_items__UserSharing_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__Context_10,
  MR_Word parse_tree__module_qual__qualify_items__Pragma0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Pragma_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_8,
  MR_Word parse_tree__module_qual__qualify_items__ItemMutable0_9,
  MR_Word * parse_tree__module_qual__qualify_items__ItemMutable_10,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_30,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_31,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_32,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word parse_tree__module_qual__qualify_items__DefaultModuleName_4,
  MR_Word parse_tree__module_qual__qualify_items__InstanceMethod0_5,
  MR_Word * parse_tree__module_qual__qualify_items__InstanceMethod_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1(
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(
  MR_Word parse_tree__module_qual__qualify_items__ClassName_4,
  MR_Word parse_tree__module_qual__qualify_items__InstanceBody0_5,
  MR_Word * parse_tree__module_qual__qualify_items__InstanceBody_6);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Method0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Method_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_39,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_41,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Class0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Name_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_16,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_17,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_18,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Constraints0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Constraints_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_19,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_20,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_21,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Mode0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Mode_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_25,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_27,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_15,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_16,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_17,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0_1(
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__BoundInst0_11,
  MR_Word * parse_tree__module_qual__qualify_items__BoundInst_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_47,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_insts_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_name_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__InstName0_11,
  MR_Word * parse_tree__module_qual__qualify_items__InstName_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__HOInstInfo0_11,
  MR_Word * parse_tree__module_qual__qualify_items__HOInstInfo_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Inst0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Inst_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__InstDefn0_11,
  MR_Word * parse_tree__module_qual__qualify_items__InstDefn_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_17,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_18,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_19,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_20);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_11,
  MR_Word * parse_tree__module_qual__qualify_items__TypeCtor_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_maybe_type_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__ContainingTypeCtor_2,
  MR_String parse_tree__module_qual__qualify_items__FunctionSymbol_3,
  MR_Integer parse_tree__module_qual__qualify_items__LastArgNum_4,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__5_5,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__6_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_8,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_10);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_10,
  MR_Word parse_tree__module_qual__qualify_items__Context_11,
  MR_Word parse_tree__module_qual__qualify_items__TypeCtor_12,
  MR_Word parse_tree__module_qual__qualify_items__TypeDefn0_13,
  MR_Word * parse_tree__module_qual__qualify_items__TypeDefn_14,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_40,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_41,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_42,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_43);

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_8,
  MR_Word parse_tree__module_qual__qualify_items__Item0_9,
  MR_Word * parse_tree__module_qual__qualify_items__Item_10,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_3,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_4,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_5,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_6);


static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[1][13];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[1][8];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[1][6];


/* sealed */ struct parse_tree__module_qual__qualify_items__vector_common_type_4_0_s {
  const MR_String parse_tree__module_qual__qualify_items__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__module_qual__qualify_items__vector_common_type_4_0_s parse_tree__module_qual__qualify_items_vector_common_4[4];



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

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[4][1] = {
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
    ((MR_Box) ((MR_String) "string"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_type_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
};


static /* final */ const struct parse_tree__module_qual__qualify_items__vector_common_type_4_0_s parse_tree__module_qual__qualify_items_vector_common_4[4] = {
  /* row 0 */   {     (MR_String) "character" },
  /* row 1 */   {     (MR_String) "float" },
  /* row 2 */   {     (MR_String) "int" },
  /* row 3 */   {     (MR_String) "string" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_11,
  MR_String parse_tree__module_qual__qualify_items__EventName_12,
  MR_String parse_tree__module_qual__qualify_items__FileName_13,
  MR_Integer parse_tree__module_qual__qualify_items__LineNumber_14,
  MR_Word parse_tree__module_qual__qualify_items__Attr0_15,
  MR_Word * parse_tree__module_qual__qualify_items__Attr_16,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_28,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_30,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_31)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
    MR_Integer parse_tree__module_qual__qualify_items__AttrNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 0)));
    MR_String parse_tree__module_qual__qualify_items__AttrName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qualify_items__AttrType0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__qualify_items__AttrMode0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__qualify_items__MaybeSynthCall_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__qualify_items__Context_24;
    MR_Word parse_tree__module_qual__qualify_items__ErrorContext_25;
    MR_Word parse_tree__module_qual__qualify_items__AttrType_26;
    MR_Word parse_tree__module_qual__qualify_items__AttrMode_27;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33;

    {
      parse_tree__module_qual__qualify_items__Context_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Context_24, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__FileName_13));
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Context_24, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LineNumber_14));
    }
    {
      parse_tree__module_qual__qualify_items__ErrorContext_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_25, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_24));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_25, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventName_12));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_25, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrName_20));
    }
    {
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__AttrType0_21, &parse_tree__module_qual__qualify_items__AttrType_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_28, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_30, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33);
    }
    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__AttrMode0_22)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__module_qual__qualify_items__InstA0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__AttrMode0_22, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__InstB0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__AttrMode0_22, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__InstA_48;
        MR_Word parse_tree__module_qual__qualify_items__InstB_49;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_62;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_63;

        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__InstA0_46, &parse_tree__module_qual__qualify_items__InstA_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_63);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__InstB0_47, &parse_tree__module_qual__qualify_items__InstB_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_63, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_31);
        }
        {
          parse_tree__module_qual__qualify_items__AttrMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__AttrMode_27, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_48));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__AttrMode_27, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_49));
        }
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__SymName0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__AttrMode0_22, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Insts0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__AttrMode0_22, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Insts_52;
        MR_Integer parse_tree__module_qual__qualify_items__Arity_53;
        MR_Word parse_tree__module_qual__qualify_items__Modes_54;
        MR_Word parse_tree__module_qual__qualify_items__SymName_55;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_56;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_57;
        MR_Word parse_tree__module_qual__qualify_items__V_59_59;

        {
          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__Insts0_51, &parse_tree__module_qual__qualify_items__Insts_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_56, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_57);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_52, &parse_tree__module_qual__qualify_items__Arity_53);
        }
        {
          parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_56, &parse_tree__module_qual__qualify_items__Modes_54);
        }
        {
          parse_tree__module_qual__qualify_items__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_59_59, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_50));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_59_59, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_53));
        }
        {
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__Modes_54, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_59_59, &parse_tree__module_qual__qualify_items__SymName_55, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_56, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_57, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_31);
        }
        {
          parse_tree__module_qual__qualify_items__AttrMode_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__AttrMode_27, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_55));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__AttrMode_27, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_52));
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__qualify_items__Attr_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrNum_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrName_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrType_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrMode_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeSynthCall_23));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__UserSharing0_11,
  MR_Word * parse_tree__module_qual__qualify_items__UserSharing_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__UserSharing0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__UserSharing_12 = parse_tree__module_qual__qualify_items__UserSharing0_11;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Sharing_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__UserSharing0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__MaybeTypes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__UserSharing0_11, (MR_Integer) 1)));

        if ((parse_tree__module_qual__qualify_items__MaybeTypes0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *parse_tree__module_qual__qualify_items__UserSharing_12 = parse_tree__module_qual__qualify_items__UserSharing0_11;
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21;
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23;
          }
        else
          {
            MR_Word parse_tree__module_qual__qualify_items__Types0_17;
            MR_Word parse_tree__module_qual__qualify_items__TVarset_18;
            MR_Word parse_tree__module_qual__qualify_items__Types_19;
            MR_Word parse_tree__module_qual__qualify_items__MaybeTypes_20;
            MR_Word parse_tree__module_qual__qualify_items__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeTypes0_16, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qualify_items__V_28_28;

            parse_tree__module_qual__qualify_items__Types0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_25_25, (MR_Integer) 0)));
            parse_tree__module_qual__qualify_items__TVarset_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_25_25, (MR_Integer) 1)));
            {
              parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Types0_17, &parse_tree__module_qual__qualify_items__Types_19, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24);
            }
            {
              parse_tree__module_qual__qualify_items__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_28_28, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_19));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_28_28, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TVarset_18));
            }
            {
              parse_tree__module_qual__qualify_items__MaybeTypes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeTypes_20, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_28_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__module_qual__qualify_items__UserSharing_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Sharing_15));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeTypes_20));
            }
          }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Var_19;
        MR_Word parse_tree__module_qual__qualify_items__Type0_20;
        MR_Word parse_tree__module_qual__qualify_items__Subst0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Type_22;
        MR_Word parse_tree__module_qual__qualify_items__Subst_23;
        MR_Word parse_tree__module_qual__qualify_items__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__V_31_31;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33;

        parse_tree__module_qual__qualify_items__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_30_30, (MR_Integer) 0)));
        parse_tree__module_qual__qualify_items__Type0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_30_30, (MR_Integer) 1)));
        {
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_20, &parse_tree__module_qual__qualify_items__Type_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33);
        }
        {
          parse_tree__module_qual__qualify_items__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_31_31, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Var_19));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_31_31, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_22));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Subst0_21, &parse_tree__module_qual__qualify_items__Subst_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_31_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Subst_23));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__PragmaVar0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__PragmaVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__PragmaVar_21;
        MR_Word parse_tree__module_qual__qualify_items__PragmaVars_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;
        MR_Word parse_tree__module_qual__qualify_items__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar0_19, (MR_Integer) 0)));
        MR_String parse_tree__module_qual__qualify_items__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar0_19, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Mode0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar0_19, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__qualify_items__Box_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar0_19, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__qualify_items__Mode_47;

        if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Mode0_45)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word parse_tree__module_qual__qualify_items__InstA0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qualify_items__InstB0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qualify_items__InstA_62;
            MR_Word parse_tree__module_qual__qualify_items__InstB_63;
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_76;
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_77;

            {
              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__InstA0_60, &parse_tree__module_qual__qualify_items__InstA_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_76, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_77);
            }
            {
              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__InstB0_61, &parse_tree__module_qual__qualify_items__InstB_63, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_76, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_77, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
            }
            {
              parse_tree__module_qual__qualify_items__Mode_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_47, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_62));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_47, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_63));
            }
          }
        else
          {
            MR_Word parse_tree__module_qual__qualify_items__SymName0_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qualify_items__Insts0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qualify_items__Insts_66;
            MR_Integer parse_tree__module_qual__qualify_items__Arity_67;
            MR_Word parse_tree__module_qual__qualify_items__Modes_68;
            MR_Word parse_tree__module_qual__qualify_items__SymName_69;
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_70;
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_71;
            MR_Word parse_tree__module_qual__qualify_items__V_73_73;

            {
              parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Insts0_65, &parse_tree__module_qual__qualify_items__Insts_66, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_70, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_71);
            }
            {
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_66, &parse_tree__module_qual__qualify_items__Arity_67);
            }
            {
              parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_70, &parse_tree__module_qual__qualify_items__Modes_68);
            }
            {
              parse_tree__module_qual__qualify_items__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_73_73, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_64));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_73_73, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_67));
            }
            {
              parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Modes_68, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_73_73, &parse_tree__module_qual__qualify_items__SymName_69, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_70, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_71, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
            }
            {
              parse_tree__module_qual__qualify_items__Mode_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_47, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_69));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_47, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_66));
            }
          }
        {
          parse_tree__module_qual__qualify_items__PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Var_43));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_44));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar_21, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mode_47));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar_21, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Box_46));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__PragmaVars0_20, &parse_tree__module_qual__qualify_items__PragmaVars_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PragmaVar_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PragmaVars_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__Context_10,
  MR_Word parse_tree__module_qual__qualify_items__Pragma0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Pragma_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Pragma0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *parse_tree__module_qual__qualify_items__Pragma_12 = parse_tree__module_qual__qualify_items__Pragma0_11;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__module_qual__qualify_items__FPInfo0_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__Attrs0_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_50, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__Name_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_50, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_50, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__qualify_items__Vars0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_50, (MR_Integer) 3)));
          MR_Word parse_tree__module_qual__qualify_items__Varset_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_50, (MR_Integer) 4)));
          MR_Word parse_tree__module_qual__qualify_items__InstVarset_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_50, (MR_Integer) 5)));
          MR_Word parse_tree__module_qual__qualify_items__Impl_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_50, (MR_Integer) 6)));
          MR_Word parse_tree__module_qual__qualify_items__Vars_58;
          MR_Word parse_tree__module_qual__qualify_items__UserSharing0_59;
          MR_Word parse_tree__module_qual__qualify_items__UserSharing_60;
          MR_Word parse_tree__module_qual__qualify_items__Attrs_61;
          MR_Word parse_tree__module_qual__qualify_items__FPInfo_62;
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_132_132;
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_133_133;
          MR_Word parse_tree__module_qual__qualify_items__ErrorContext_144;

          {
            parse_tree__module_qual__qualify_items__ErrorContext_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_144, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_144, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
          }
          {
            parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_144, parse_tree__module_qual__qualify_items__Vars0_54, &parse_tree__module_qual__qualify_items__Vars_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_132_132, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_133_133);
          }
          {
            parse_tree__module_qual__qualify_items__UserSharing0_59 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__module_qual__qualify_items__Attrs0_51);
          }
          {
            parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_144, parse_tree__module_qual__qualify_items__UserSharing0_59, &parse_tree__module_qual__qualify_items__UserSharing_60, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_132_132, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_133_133, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
          }
          {
            parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__module_qual__qualify_items__UserSharing_60, parse_tree__module_qual__qualify_items__Attrs0_51, &parse_tree__module_qual__qualify_items__Attrs_61);
          }
          {
            parse_tree__module_qual__qualify_items__FPInfo_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_62, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_61));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_62, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_52));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_62, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_53));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_62, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_58));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_62, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Varset_55));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_62, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarset_56));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_62, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Impl_57));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_qual__qualify_items__Pragma_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__FPInfo_62));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__qualify_items__FPEInfo0_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo0_76, (MR_Integer) 1)));
              MR_String parse_tree__module_qual__qualify_items__CFunc_78 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo0_76, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_79;
              MR_Word parse_tree__module_qual__qualify_items__FPEInfo_80;
              MR_Word parse_tree__module_qual__qualify_items__Lang_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo0_76, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_153;
              MR_Word parse_tree__module_qual__qualify_items__Name_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_77, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_77, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Modes0_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_77, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Modes_157;

              {
                parse_tree__module_qual__qualify_items__ErrorContext_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_153, parse_tree__module_qual__qualify_items__Modes0_156, &parse_tree__module_qual__qualify_items__Modes_157, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__PredNameModesPF_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_79, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_154));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_79, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_157));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_79, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_155));
              }
              {
                parse_tree__module_qual__qualify_items__FPEInfo_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo_80, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Lang_152));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo_80, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_79));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo_80, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__CFunc_78));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__FPEInfo_80));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__qualify_items__FEEInfo0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Lang_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo0_39, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo0_39, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Attributes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo0_39, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Overrides_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo0_39, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_44;
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor_45;
              MR_Word parse_tree__module_qual__qualify_items__FEEInfo_46;

              {
                parse_tree__module_qual__qualify_items__ErrorContext_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_44, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_44, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_44, parse_tree__module_qual__qualify_items__TypeCtor0_41, &parse_tree__module_qual__qualify_items__TypeCtor_45, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__FEEInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo_46, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Lang_40));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo_46, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_45));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo_46, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attributes_42));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo_46, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Overrides_43));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__FEEInfo_46));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__module_qual__qualify_items__FEInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Values_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo0_47, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__FEInfo_49;
              MR_Word parse_tree__module_qual__qualify_items__Lang_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo0_47, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo0_47, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_142;
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor_143;

              {
                parse_tree__module_qual__qualify_items__ErrorContext_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_142, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_142, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_142, parse_tree__module_qual__qualify_items__TypeCtor0_141, &parse_tree__module_qual__qualify_items__TypeCtor_143, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__FEInfo_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo_49, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Lang_140));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo_49, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_143));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo_49, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Values_48));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__FEInfo_49));
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
          case (MR_Integer) 31:
            {
              *parse_tree__module_qual__qualify_items__Pragma_12 = parse_tree__module_qual__qualify_items__Pragma0_11;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__module_qual__qualify_items__TypeSpecInfo0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__PredName_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_81, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__SpecializedPredName_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_81, (MR_Integer) 1)));
              MR_Integer parse_tree__module_qual__qualify_items__Arity_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_81, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeModes0_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_81, (MR_Integer) 4)));
              MR_Word parse_tree__module_qual__qualify_items__Subst0_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_81, (MR_Integer) 5)));
              MR_Word parse_tree__module_qual__qualify_items__TVarSet_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_81, (MR_Integer) 6)));
              MR_Word parse_tree__module_qual__qualify_items__Items_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_81, (MR_Integer) 7)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeModes_89;
              MR_Word parse_tree__module_qual__qualify_items__Subst_90;
              MR_Word parse_tree__module_qual__qualify_items__TypeSpecInfo_91;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_122_122;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_123_123;
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_162;
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_81, (MR_Integer) 3)));

              {
                parse_tree__module_qual__qualify_items__ErrorContext_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_162, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_162, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              if ((parse_tree__module_qual__qualify_items__MaybeModes0_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__module_qual__qualify_items__MaybeModes_89 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_122_122 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110;
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_123_123 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112;
                }
              else
                {
                  MR_Word parse_tree__module_qual__qualify_items__Modes0_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeModes0_85, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qualify_items__Modes_159;

                  {
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_162, parse_tree__module_qual__qualify_items__Modes0_158, &parse_tree__module_qual__qualify_items__Modes_159, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_122_122, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_123_123);
                  }
                  {
                    parse_tree__module_qual__qualify_items__MaybeModes_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeModes_89, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_159));
                  }
                }
              {
                parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_162, parse_tree__module_qual__qualify_items__Subst0_86, &parse_tree__module_qual__qualify_items__Subst_90, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_122_122, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_123_123, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__TypeSpecInfo_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_91, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredName_82));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_91, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SpecializedPredName_83));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_91, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_84));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_91, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_163));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_91, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeModes_89));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_91, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Subst_90));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_91, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__TVarSet_87));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_91, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__Items_88));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeSpecInfo_91));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word parse_tree__module_qual__qualify_items__TabledInfo0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__EvalMethod_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo0_68, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameArityPF_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo0_68, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__MModes0_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo0_68, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__MModes_74;
              MR_Word parse_tree__module_qual__qualify_items__TabledInfo_75;
              MR_Word parse_tree__module_qual__qualify_items__Attrs_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo0_68, (MR_Integer) 3)));

              if ((parse_tree__module_qual__qualify_items__MModes0_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__module_qual__qualify_items__MModes_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110;
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112;
                }
              else
                {
                  MR_Word parse_tree__module_qual__qualify_items__Modes0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MModes0_71, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qualify_items__Modes_73;
                  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_148;

                  {
                    parse_tree__module_qual__qualify_items__ErrorContext_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_148, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_148, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
                  }
                  {
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_148, parse_tree__module_qual__qualify_items__Modes0_72, &parse_tree__module_qual__qualify_items__Modes_73, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
                  }
                  {
                    parse_tree__module_qual__qualify_items__MModes_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MModes_74, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_73));
                  }
                }
              {
                parse_tree__module_qual__qualify_items__TabledInfo_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo_75, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__EvalMethod_69));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo_75, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameArityPF_70));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo_75, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MModes_74));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo_75, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_151));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TabledInfo_75));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word parse_tree__module_qual__qualify_items__OISUInfo0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__CreatorPreds_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo0_63, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__MutatorPreds_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo0_63, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__DestructorPreds_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo0_63, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__OISUInfo_67;
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo0_63, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_146;
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor_147;

              {
                parse_tree__module_qual__qualify_items__ErrorContext_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_146, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_146, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_146, parse_tree__module_qual__qualify_items__TypeCtor0_145, &parse_tree__module_qual__qualify_items__TypeCtor_147, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__OISUInfo_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo_67, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_147));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo_67, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__CreatorPreds_64));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo_67, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MutatorPreds_65));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo_67, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__DestructorPreds_66));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__OISUInfo_67));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word parse_tree__module_qual__qualify_items__TermInfo0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Args_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo0_92, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Term_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo0_92, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__SymName_95;
              MR_Word parse_tree__module_qual__qualify_items__ModeList0_96;
              MR_Word parse_tree__module_qual__qualify_items__ModeList_97;
              MR_Word parse_tree__module_qual__qualify_items__TermInfo_98;
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_166;
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_167;
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo0_92, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_169;

              parse_tree__module_qual__qualify_items__SymName_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_168, (MR_Integer) 0)));
              parse_tree__module_qual__qualify_items__ModeList0_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_168, (MR_Integer) 1)));
              parse_tree__module_qual__qualify_items__PredOrFunc_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_168, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qualify_items__ErrorContext_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_166, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_166, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_166, parse_tree__module_qual__qualify_items__ModeList0_96, &parse_tree__module_qual__qualify_items__ModeList_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__PredNameModesPF_169 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_169, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_95));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_169, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeList_97));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_169, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_167));
              }
              {
                parse_tree__module_qual__qualify_items__TermInfo_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo_98, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_169));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo_98, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_93));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo_98, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Term_94));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TermInfo_98));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word parse_tree__module_qual__qualify_items__Term2Info0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__SuccessArgs_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info0_106, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__FailureArgs_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info0_106, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Term2Info_109;
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_187;
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_188;
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info0_106, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_190;
              MR_Word parse_tree__module_qual__qualify_items__Term_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info0_106, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__SymName_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_189, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__ModeList0_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_189, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__ModeList_194;

              parse_tree__module_qual__qualify_items__PredOrFunc_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_189, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qualify_items__ErrorContext_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_187, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_187, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_187, parse_tree__module_qual__qualify_items__ModeList0_193, &parse_tree__module_qual__qualify_items__ModeList_194, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__PredNameModesPF_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_190, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_192));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_190, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeList_194));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_190, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_188));
              }
              {
                parse_tree__module_qual__qualify_items__Term2Info_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info_109, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_190));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info_109, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SuccessArgs_107));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info_109, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__FailureArgs_108));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info_109, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Term_191));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Term2Info_109));
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word parse_tree__module_qual__qualify_items__SharingInfo0_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Types_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo0_99, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Sharing_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo0_99, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__SharingInfo_102;
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_170;
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_171;
              MR_Word parse_tree__module_qual__qualify_items__Vars_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo0_99, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo0_99, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_174;
              MR_Word parse_tree__module_qual__qualify_items__SymName_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_173, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__ModeList0_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_173, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__ModeList_177;

              parse_tree__module_qual__qualify_items__PredOrFunc_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_173, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qualify_items__ErrorContext_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_170, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_170, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_170, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_170, parse_tree__module_qual__qualify_items__ModeList0_176, &parse_tree__module_qual__qualify_items__ModeList_177, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__PredNameModesPF_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_174, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_175));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_174, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeList_177));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_174, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_171));
              }
              {
                parse_tree__module_qual__qualify_items__SharingInfo_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo_102, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_174));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo_102, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_172));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo_102, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_100));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo_102, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Sharing_101));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SharingInfo_102));
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word parse_tree__module_qual__qualify_items__ReuseInfo0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__ReuseTuples_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo0_103, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__ReuseInfo_105;
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_178;
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_179;
              MR_Word parse_tree__module_qual__qualify_items__Vars_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo0_103, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo0_103, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_182;
              MR_Word parse_tree__module_qual__qualify_items__SymName_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_181, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__ModeList0_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_181, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__ModeList_185;
              MR_Word parse_tree__module_qual__qualify_items__Types_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo0_103, (MR_Integer) 2)));

              parse_tree__module_qual__qualify_items__PredOrFunc_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_181, (MR_Integer) 2)));
              {
                parse_tree__module_qual__qualify_items__ErrorContext_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_178, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_178, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_178, parse_tree__module_qual__qualify_items__ModeList0_184, &parse_tree__module_qual__qualify_items__ModeList_185, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113);
              }
              {
                parse_tree__module_qual__qualify_items__PredNameModesPF_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_182, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_183));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_182, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeList_185));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_182, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_179));
              }
              {
                parse_tree__module_qual__qualify_items__ReuseInfo_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo_105, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_182));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo_105, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_180));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo_105, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_186));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo_105, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__ReuseTuples_104));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ReuseInfo_105));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              *parse_tree__module_qual__qualify_items__Pragma_12 = parse_tree__module_qual__qualify_items__Pragma0_11;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_111 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_110;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_113 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_112;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_8,
  MR_Word parse_tree__module_qual__qualify_items__ItemMutable0_9,
  MR_Word * parse_tree__module_qual__qualify_items__ItemMutable_10,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_30,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_31,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_32,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
    MR_String parse_tree__module_qual__qualify_items__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__qualify_items__OrigType0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qualify_items__Type0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 2)));
    MR_Word parse_tree__module_qual__qualify_items__OrigInst0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__qualify_items__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__qualify_items__InitTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 5)));
    MR_Word parse_tree__module_qual__qualify_items__Attrs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 6)));
    MR_Word parse_tree__module_qual__qualify_items__Varset_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 7)));
    MR_Word parse_tree__module_qual__qualify_items__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 8)));
    MR_Integer parse_tree__module_qual__qualify_items__SeqNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 9)));
    MR_Word parse_tree__module_qual__qualify_items__ErrorContext_23;
    MR_Word parse_tree__module_qual__qualify_items__OrigType_24;
    MR_Word parse_tree__module_qual__qualify_items__Type_26;
    MR_Word parse_tree__module_qual__qualify_items__OrigInst_27;
    MR_Word parse_tree__module_qual__qualify_items__Inst_29;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_36;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_37;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_38;
    MR_Word parse_tree__module_qual__qualify_items__V_25_25;
    MR_Word parse_tree__module_qual__qualify_items__V_28_28;

    {
      parse_tree__module_qual__qualify_items__ErrorContext_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_23, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_21));
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_23, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_13));
    }
    {
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_23, parse_tree__module_qual__qualify_items__OrigType0_14, &parse_tree__module_qual__qualify_items__OrigType_24, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_30, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_qual__qualify_items__V_25_25);
    }
    {
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_23, parse_tree__module_qual__qualify_items__Type0_15, &parse_tree__module_qual__qualify_items__Type_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_32, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_37);
    }
    {
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_23, parse_tree__module_qual__qualify_items__OrigInst0_16, &parse_tree__module_qual__qualify_items__OrigInst_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_36, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_qual__qualify_items__V_28_28);
    }
    {
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_23, parse_tree__module_qual__qualify_items__Inst0_17, &parse_tree__module_qual__qualify_items__Inst_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_31, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__qualify_items__ItemMutable_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__OrigType_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__OrigInst_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Inst_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__InitTerm_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__Varset_20));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_21));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_22));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
  MR_Word parse_tree__module_qual__qualify_items__DefaultModuleName_4,
  MR_Word parse_tree__module_qual__qualify_items__InstanceMethod0_5,
  MR_Word * parse_tree__module_qual__qualify_items__InstanceMethod_6)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
    MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__qualify_items__MethodSymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qualify_items__InstanceProcDef_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 2)));
    MR_Integer parse_tree__module_qual__qualify_items__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 3)));
    MR_Word parse_tree__module_qual__qualify_items__DeclContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 4)));
    MR_Word parse_tree__module_qual__qualify_items__MethodSymName_13;

    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__MethodSymName0_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__module_qual__qualify_items__MethodModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName0_8, (MR_Integer) 0)));
        MR_String parse_tree__module_qual__qualify_items__MethodBaseName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName0_8, (MR_Integer) 1)));

        {
          parse_tree__module_qual__qualify_items__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__module_qual__qualify_items__MethodModuleName_14, parse_tree__module_qual__qualify_items__DefaultModuleName_4);
        }
        if (parse_tree__module_qual__qualify_items__succeeded)
          {
            parse_tree__module_qual__qualify_items__MethodSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName_13, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__DefaultModuleName_4));
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName_13, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__MethodBaseName_15));
          }
        else
          parse_tree__module_qual__qualify_items__MethodSymName_13 = parse_tree__module_qual__qualify_items__MethodSymName0_8;
      }
    else
      {
        MR_String parse_tree__module_qual__qualify_items__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__MethodSymName0_8, (MR_Integer) 0)));

        {
          parse_tree__module_qual__qualify_items__MethodSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName_13, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__DefaultModuleName_4));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName_13, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_12));
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__qualify_items__InstanceMethod_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__MethodSymName_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstanceProcDef_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_10));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__DeclContext_11));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1(
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2)
{
  {
    MR_Box parse_tree__module_qual__qualify_items__closure = parse_tree__module_qual__qualify_items__closure_arg;
    MR_Word parse_tree__module_qual__qualify_items__conv0_InstanceMethod_6;

    {
      parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_1), &parse_tree__module_qual__qualify_items__conv0_InstanceMethod_6);
    }
    *parse_tree__module_qual__qualify_items__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv0_InstanceMethod_6));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(
  MR_Word parse_tree__module_qual__qualify_items__ClassName_4,
  MR_Word parse_tree__module_qual__qualify_items__InstanceBody0_5,
  MR_Word * parse_tree__module_qual__qualify_items__InstanceBody_6)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__InstanceBody0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__module_qual__qualify_items__InstanceBody_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Methods0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__InstanceBody0_5, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__ClassName_4)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_qual__qualify_items__TypeCtorInfo_18_18;
            MR_Word parse_tree__module_qual__qualify_items__DefaultModuleName_11;
            MR_Word parse_tree__module_qual__qualify_items__Methods_12;
            MR_Word parse_tree__module_qual__qualify_items__V_15_15;

            {
              mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__module_qual__qualify_items__ClassName_4, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_3[3], &parse_tree__module_qual__qualify_items__DefaultModuleName_11);
            }
            {
              parse_tree__module_qual__qualify_items__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_15_15, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_15_15, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_15_15, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__DefaultModuleName_11));
            }
            parse_tree__module_qual__qualify_items__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0;
            {
              mercury__list__map_3_p_0(parse_tree__module_qual__qualify_items__TypeCtorInfo_18_18, parse_tree__module_qual__qualify_items__TypeCtorInfo_18_18, parse_tree__module_qual__qualify_items__V_15_15, parse_tree__module_qual__qualify_items__Methods0_7, &parse_tree__module_qual__qualify_items__Methods_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *parse_tree__module_qual__qualify_items__InstanceBody_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Methods_12));
            }
          }
        else
          *parse_tree__module_qual__qualify_items__InstanceBody_6 = parse_tree__module_qual__qualify_items__InstanceBody0_5;
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Method0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Method_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_39,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_41,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Method0_11)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__module_qual__qualify_items__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__TypesAndModes0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithType0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__qualify_items__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 5)));
        MR_Word parse_tree__module_qual__qualify_items__TypeVarset_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 6)));
        MR_Word parse_tree__module_qual__qualify_items__InstVarset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 7)));
        MR_Word parse_tree__module_qual__qualify_items__ExistQVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 8)));
        MR_Word parse_tree__module_qual__qualify_items__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 9)));
        MR_Word parse_tree__module_qual__qualify_items__Constraints0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 10)));
        MR_Word parse_tree__module_qual__qualify_items__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 11)));
        MR_Word parse_tree__module_qual__qualify_items__TypesAndModes_27;
        MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_28;
        MR_Word parse_tree__module_qual__qualify_items__Constraints_29;
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithType_32;
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst_35;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48;
        MR_String parse_tree__module_qual__qualify_items__V_49_49;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_51_51;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53;
        MR_Word parse_tree__module_qual__qualify_items__UnivCs0_78;
        MR_Word parse_tree__module_qual__qualify_items__ExistCs0_79;
        MR_Word parse_tree__module_qual__qualify_items__UnivCs_80;
        MR_Word parse_tree__module_qual__qualify_items__ExistCs_81;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_82;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_83;

        {
          parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__TypesAndModes0_17, &parse_tree__module_qual__qualify_items__TypesAndModes_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_39, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_41, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48);
        }
        {
          parse_tree__module_qual__qualify_items__V_49_49 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qualify_items__Name_15);
        }
        {
          parse_tree__module_qual__qualify_items__ConstraintErrorContext_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_26));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_16));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_49_49));
        }
        parse_tree__module_qual__qualify_items__UnivCs0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints0_25, (MR_Integer) 0)));
        parse_tree__module_qual__qualify_items__ExistCs0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints0_25, (MR_Integer) 1)));
        {
          parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, parse_tree__module_qual__qualify_items__UnivCs0_78, &parse_tree__module_qual__qualify_items__UnivCs_80, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_82, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_83);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, parse_tree__module_qual__qualify_items__ExistCs0_79, &parse_tree__module_qual__qualify_items__ExistCs_81, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_82, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_83, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_51_51);
        }
        {
          parse_tree__module_qual__qualify_items__Constraints_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints_29, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__UnivCs_80));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints_29, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistCs_81));
        }
        if ((parse_tree__module_qual__qualify_items__MaybeWithType0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__module_qual__qualify_items__MaybeWithType_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50;
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_51_51;
          }
        else
          {
            MR_Word parse_tree__module_qual__qualify_items__WithType0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithType0_18, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qualify_items__WithType_31;

            {
              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__WithType0_30, &parse_tree__module_qual__qualify_items__WithType_31, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_51_51, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53);
            }
            {
              parse_tree__module_qual__qualify_items__MaybeWithType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithType_32, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithType_31));
            }
          }
        if ((parse_tree__module_qual__qualify_items__MaybeWithInst0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__module_qual__qualify_items__MaybeWithInst_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52;
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53;
          }
        else
          {
            MR_Word parse_tree__module_qual__qualify_items__WithInst0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst0_19, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qualify_items__WithInst_34;

            {
              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__WithInst0_33, &parse_tree__module_qual__qualify_items__WithInst_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42);
            }
            {
              parse_tree__module_qual__qualify_items__MaybeWithInst_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst_35, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithInst_34));
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__module_qual__qualify_items__Method_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_15));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_16));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypesAndModes_27));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithType_32));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithInst_35));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDetism_20));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeVarset_21));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarset_22));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistQVars_23));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_qual__qualify_items__Purity_24));
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_29));
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_26));
        }
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Modes0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__qualify_items__Varset_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 5)));
        MR_Word parse_tree__module_qual__qualify_items__Modes_38;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44;
        MR_Word parse_tree__module_qual__qualify_items__Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__qualify_items__MaybeDetism_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__qualify_items__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 6)));
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst_67;

        {
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Modes0_36, &parse_tree__module_qual__qualify_items__Modes_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_39, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_41, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44);
        }
        if ((parse_tree__module_qual__qualify_items__MaybeWithInst0_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            parse_tree__module_qual__qualify_items__MaybeWithInst_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43;
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44;
          }
        else
          {
            MR_Word parse_tree__module_qual__qualify_items__WithInst0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst0_62, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qualify_items__WithInst_57;

            {
              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__WithInst0_56, &parse_tree__module_qual__qualify_items__WithInst_57, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42);
            }
            {
              parse_tree__module_qual__qualify_items__MaybeWithInst_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst_67, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithInst_57));
            }
          }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__Method_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_61));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_60));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_38));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithInst_67));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDetism_63));
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Varset_37));
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_64));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Method0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Methods0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Method_21;
        MR_Word parse_tree__module_qual__qualify_items__Methods_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

        {
          parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Method0_19, &parse_tree__module_qual__qualify_items__Method_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Methods0_20, &parse_tree__module_qual__qualify_items__Methods_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Method_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Methods_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Class0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Name_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_16,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_17,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_18,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_19)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
    MR_Word parse_tree__module_qual__qualify_items__ClassIdSet_15;

    {
      parse_tree__module_qual__mq_info_get_classes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_16, &parse_tree__module_qual__qualify_items__ClassIdSet_15);
    }
    {
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__ClassIdSet_15, (MR_Integer) 3, parse_tree__module_qual__qualify_items__Class0_11, parse_tree__module_qual__qualify_items__Name_12, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_19);
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Constraint0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Constraint_21;
        MR_Word parse_tree__module_qual__qualify_items__Constraints_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;
        MR_Word parse_tree__module_qual__qualify_items__ClassName0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraint0_19, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Types0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraint0_19, (MR_Integer) 1)));
        MR_Integer parse_tree__module_qual__qualify_items__Arity_45;
        MR_Word parse_tree__module_qual__qualify_items__OutsideContext_46;
        MR_Word parse_tree__module_qual__qualify_items__ClassName_47;
        MR_Word parse_tree__module_qual__qualify_items__ErrorContext_48;
        MR_Word parse_tree__module_qual__qualify_items__Types_49;
        MR_Word parse_tree__module_qual__qualify_items__V_50_50;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_51;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_52;
        MR_Word parse_tree__module_qual__qualify_items__ClassIdSet_66;

        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__module_qual__qualify_items__Types0_44, &parse_tree__module_qual__qualify_items__Arity_45);
        }
        {
          parse_tree__module_qual__qualify_items__OutsideContext_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__OutsideContext_46, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadVar__2_2));
        }
        {
          parse_tree__module_qual__qualify_items__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_50_50, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ClassName0_43));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_50_50, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_45));
        }
        {
          parse_tree__module_qual__mq_info_get_classes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__ClassIdSet_66);
        }
        {
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__OutsideContext_46, parse_tree__module_qual__qualify_items__ClassIdSet_66, (MR_Integer) 3, parse_tree__module_qual__qualify_items__V_50_50, &parse_tree__module_qual__qualify_items__ClassName_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_51, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_52);
        }
        {
          parse_tree__module_qual__qualify_items__ErrorContext_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_48, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ClassName0_43));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_48, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_45));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_48, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadVar__2_2));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_48, parse_tree__module_qual__qualify_items__Types0_44, &parse_tree__module_qual__qualify_items__Types_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_51, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_52, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
        {
          parse_tree__module_qual__qualify_items__Constraint_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraint_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ClassName_47));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraint_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_49));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Constraints0_20, &parse_tree__module_qual__qualify_items__Constraints_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraint_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Constraints0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Constraints_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_19,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_20,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_21,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
    MR_Word parse_tree__module_qual__qualify_items__UnivCs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints0_11, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__qualify_items__ExistCs0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints0_11, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qualify_items__UnivCs_17;
    MR_Word parse_tree__module_qual__qualify_items__ExistCs_18;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_23;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_24;

    {
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ConstraintErrorContext_10, parse_tree__module_qual__qualify_items__UnivCs0_15, &parse_tree__module_qual__qualify_items__UnivCs_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_19, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_21, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_24);
    }
    {
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ConstraintErrorContext_10, parse_tree__module_qual__qualify_items__ExistCs0_16, &parse_tree__module_qual__qualify_items__ExistCs_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_24, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_22);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__qualify_items__Constraints_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__UnivCs_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistCs_18));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__TypeAndMode0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__TypesAndModes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__TypeAndMode_21;
        MR_Word parse_tree__module_qual__qualify_items__TypesAndModes_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

        if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__TypeAndMode0_19)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__module_qual__qualify_items__Mode0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeAndMode0_19, (MR_Integer) 1)));
            MR_Word parse_tree__module_qual__qualify_items__Mode_46;
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_47;
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_48;
            MR_Word parse_tree__module_qual__qualify_items__Type0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeAndMode0_19, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qualify_items__Type_54;

            {
              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_53, &parse_tree__module_qual__qualify_items__Type_54, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_48);
            }
            if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Mode0_45)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word parse_tree__module_qual__qualify_items__InstA0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 0)));
                MR_Word parse_tree__module_qual__qualify_items__InstB0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qualify_items__InstA_67;
                MR_Word parse_tree__module_qual__qualify_items__InstB_68;
                MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_81;
                MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_82;

                {
                  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__InstA0_65, &parse_tree__module_qual__qualify_items__InstA_67, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_47, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_81, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_48, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_82);
                }
                {
                  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__InstB0_66, &parse_tree__module_qual__qualify_items__InstB_68, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_81, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_82, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
                }
                {
                  parse_tree__module_qual__qualify_items__Mode_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_46, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_67));
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_46, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_68));
                }
              }
            else
              {
                MR_Word parse_tree__module_qual__qualify_items__SymName0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 0)));
                MR_Word parse_tree__module_qual__qualify_items__Insts0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 1)));
                MR_Word parse_tree__module_qual__qualify_items__Insts_71;
                MR_Integer parse_tree__module_qual__qualify_items__Arity_72;
                MR_Word parse_tree__module_qual__qualify_items__Modes_73;
                MR_Word parse_tree__module_qual__qualify_items__SymName_74;
                MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_75;
                MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_76;
                MR_Word parse_tree__module_qual__qualify_items__V_78_78;

                {
                  parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Insts0_70, &parse_tree__module_qual__qualify_items__Insts_71, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_47, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_75, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_48, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_76);
                }
                {
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_71, &parse_tree__module_qual__qualify_items__Arity_72);
                }
                {
                  parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_75, &parse_tree__module_qual__qualify_items__Modes_73);
                }
                {
                  parse_tree__module_qual__qualify_items__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_78_78, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_69));
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_78_78, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_72));
                }
                {
                  parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Modes_73, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_78_78, &parse_tree__module_qual__qualify_items__SymName_74, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_75, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_76, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
                }
                {
                  parse_tree__module_qual__qualify_items__Mode_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_46, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_74));
                  MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_46, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_71));
                }
              }
            {
              parse_tree__module_qual__qualify_items__TypeAndMode_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeAndMode_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_54));
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeAndMode_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mode_46));
            }
          }
        else
          {
            MR_Word parse_tree__module_qual__qualify_items__Type0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeAndMode0_19, (MR_Integer) 0)));
            MR_Word parse_tree__module_qual__qualify_items__Type_44;

            {
              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_43, &parse_tree__module_qual__qualify_items__Type_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
            }
            {
              parse_tree__module_qual__qualify_items__TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeAndMode_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_44));
            }
          }
        {
          parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__TypesAndModes0_20, &parse_tree__module_qual__qualify_items__TypesAndModes_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeAndMode_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypesAndModes_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Mode0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Mode_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_25,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_27,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Mode0_11)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__module_qual__qualify_items__InstA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__InstB0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__InstA_17;
        MR_Word parse_tree__module_qual__qualify_items__InstB_18;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36;

        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstA0_15, &parse_tree__module_qual__qualify_items__InstA_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_25, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_27, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstB0_16, &parse_tree__module_qual__qualify_items__InstB_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *parse_tree__module_qual__qualify_items__Mode_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_18));
        }
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__SymName0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Insts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Insts_21;
        MR_Integer parse_tree__module_qual__qualify_items__Arity_22;
        MR_Word parse_tree__module_qual__qualify_items__Modes_23;
        MR_Word parse_tree__module_qual__qualify_items__SymName_24;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;
        MR_Word parse_tree__module_qual__qualify_items__V_32_32;

        {
          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Insts0_20, &parse_tree__module_qual__qualify_items__Insts_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_25, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_27, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_21, &parse_tree__module_qual__qualify_items__Arity_22);
        }
        {
          parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, &parse_tree__module_qual__qualify_items__Modes_23);
        }
        {
          parse_tree__module_qual__qualify_items__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_32_32, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_19));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_32_32, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_22));
        }
        {
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Modes_23, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_32_32, &parse_tree__module_qual__qualify_items__SymName_24, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__Mode_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_21));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_15,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_16,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_17,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_18)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
    MR_Word parse_tree__module_qual__qualify_items__Mode0_11 = (MR_Word) parse_tree__module_qual__qualify_items__HeadVar__3_3;
    MR_Word parse_tree__module_qual__qualify_items__Mode_12;

    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Mode0_11)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word parse_tree__module_qual__qualify_items__InstA0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__InstB0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__InstA_33;
        MR_Word parse_tree__module_qual__qualify_items__InstB_34;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_47;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_48;

        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstA0_31, &parse_tree__module_qual__qualify_items__InstA_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_15, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_17, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_48);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstB0_32, &parse_tree__module_qual__qualify_items__InstB_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_18);
        }
        {
          parse_tree__module_qual__qualify_items__Mode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_12, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_33));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_12, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_34));
        }
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__SymName0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Insts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Insts_37;
        MR_Integer parse_tree__module_qual__qualify_items__Arity_38;
        MR_Word parse_tree__module_qual__qualify_items__Modes_39;
        MR_Word parse_tree__module_qual__qualify_items__SymName_40;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_41;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_42;
        MR_Word parse_tree__module_qual__qualify_items__V_44_44;

        {
          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Insts0_36, &parse_tree__module_qual__qualify_items__Insts_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_15, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_17, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_42);
        }
        {
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_37, &parse_tree__module_qual__qualify_items__Arity_38);
        }
        {
          parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_41, &parse_tree__module_qual__qualify_items__Modes_39);
        }
        {
          parse_tree__module_qual__qualify_items__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_44_44, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_35));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_44_44, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_38));
        }
        {
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Modes_39, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_44_44, &parse_tree__module_qual__qualify_items__SymName_40, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_18);
        }
        {
          parse_tree__module_qual__qualify_items__Mode_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_12, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_40));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_12, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_37));
        }
      }
    *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) parse_tree__module_qual__qualify_items__Mode_12;
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0_1(
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2)
{
  {
    MR_Box parse_tree__module_qual__qualify_items__closure = parse_tree__module_qual__qualify_items__closure_arg;
    MR_Word parse_tree__module_qual__qualify_items__conv0_HeadVar__5_5;

    {
      recompilation__record_used_item_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_1), &parse_tree__module_qual__qualify_items__conv0_HeadVar__5_5);
    }
    *parse_tree__module_qual__qualify_items__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__BoundInst0_11,
  MR_Word * parse_tree__module_qual__qualify_items__BoundInst_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_47,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
    MR_Word parse_tree__module_qual__qualify_items__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__BoundInst0_11, (MR_Integer) 0)));
    MR_Word parse_tree__module_qual__qualify_items__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__BoundInst0_11, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qualify_items__Insts_44;
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__ConsId_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
        break;
      case (MR_Integer) 1:
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
        break;
      case (MR_Integer) 2:
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConsId_15, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 1:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__module_qual__qualify_items__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConsId_15, (MR_Integer) 1)));
              MR_Integer parse_tree__module_qual__qualify_items__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConsId_15, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Id_20;
              MR_Word parse_tree__module_qual__qualify_items__V_49_49;
              MR_Word parse_tree__module_qual__qualify_items__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConsId_15, (MR_Integer) 3)));

              {
                parse_tree__module_qual__qualify_items__Id_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Id_20, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_17));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Id_20, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_18));
              }
              {
                parse_tree__module_qual__qualify_items__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 3) = ((MR_Box) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Id_20));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Id_20));
              }
              {
                parse_tree__module_qual__update_recompilation_info_3_p_0(parse_tree__module_qual__qualify_items__V_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50);
              }
            }
            break;
          case (MR_Integer) 3:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 4:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 5:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 6:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 7:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 8:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 9:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 10:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 11:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 12:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 13:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
          case (MR_Integer) 14:
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
            break;
        }
        break;
    }
    {
      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Insts0_16, &parse_tree__module_qual__qualify_items__Insts_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__qualify_items__BoundInst_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ConsId_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_44));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_insts_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__BoundInst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__BoundInsts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__BoundInst_21;
        MR_Word parse_tree__module_qual__qualify_items__BoundInsts_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

        {
          parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__BoundInst0_19, &parse_tree__module_qual__qualify_items__BoundInst_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_bound_insts_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__BoundInsts0_20, &parse_tree__module_qual__qualify_items__BoundInsts_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__BoundInst_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__BoundInsts_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_name_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__InstName0_11,
  MR_Word * parse_tree__module_qual__qualify_items__InstName_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__InstName0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__module_qual__qualify_items__SymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstName0_11, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstName0_11, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__qualify_items__Insts_17;
          MR_Word parse_tree__module_qual__qualify_items__SymName_18;
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48;
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49;
          MR_String parse_tree__module_qual__qualify_items__V_50_50;

          {
            parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Insts0_16, &parse_tree__module_qual__qualify_items__Insts_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49);
          }
          parse_tree__module_qual__qualify_items__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__SymName0_15)) == (MR_mktag((MR_Integer) 0)));
          if (parse_tree__module_qual__qualify_items__succeeded)
            {
              parse_tree__module_qual__qualify_items__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SymName0_15, (MR_Integer) 0)));
              parse_tree__module_qual__qualify_items__succeeded = (strcmp(parse_tree__module_qual__qualify_items__V_50_50, (MR_String) "") == 0);
            }
          if (parse_tree__module_qual__qualify_items__succeeded)
            {
              {
                parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(parse_tree__module_qual__qualify_items__SymName0_15, parse_tree__module_qual__qualify_items__Insts_17, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);
              }
              {
                parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42);
              }
              parse_tree__module_qual__qualify_items__SymName_18 = parse_tree__module_qual__qualify_items__SymName0_15;
            }
          else
            {
              MR_Integer parse_tree__module_qual__qualify_items__Arity_19;
              MR_Word parse_tree__module_qual__qualify_items__InstIdSet_20;
              MR_Word parse_tree__module_qual__qualify_items__V_54_54;

              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts0_16, &parse_tree__module_qual__qualify_items__Arity_19);
              }
              {
                parse_tree__module_qual__mq_info_get_insts_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, &parse_tree__module_qual__qualify_items__InstIdSet_20);
              }
              {
                parse_tree__module_qual__qualify_items__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_54_54, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_15));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_54_54, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_19));
              }
              {
                parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstIdSet_20, (MR_Integer) 2, parse_tree__module_qual__qualify_items__V_54_54, &parse_tree__module_qual__qualify_items__SymName_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);
              }
            }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__module_qual__qualify_items__InstName_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_18));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_17));
          }
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
parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__HOInstInfo0_11,
  MR_Word * parse_tree__module_qual__qualify_items__HOInstInfo_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HOInstInfo0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HOInstInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_15;
        MR_Word parse_tree__module_qual__qualify_items__Modes0_16;
        MR_Word parse_tree__module_qual__qualify_items__MaybeArgRegs_17;
        MR_Word parse_tree__module_qual__qualify_items__Detism_18;
        MR_Word parse_tree__module_qual__qualify_items__Modes_19;
        MR_Word parse_tree__module_qual__qualify_items__V_24_24 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__qualify_items__HOInstInfo0_11), (MR_Integer) 1);
        MR_Word parse_tree__module_qual__qualify_items__V_27_27;

        parse_tree__module_qual__qualify_items__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_24_24, (MR_Integer) 0)));
        parse_tree__module_qual__qualify_items__Modes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_24_24, (MR_Integer) 1)));
        parse_tree__module_qual__qualify_items__MaybeArgRegs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_24_24, (MR_Integer) 2)));
        parse_tree__module_qual__qualify_items__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_24_24, (MR_Integer) 3)));
        {
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Modes0_16, &parse_tree__module_qual__qualify_items__Modes_19, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23);
        }
        {
          parse_tree__module_qual__qualify_items__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_27_27, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_15));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_27_27, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_19));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_27_27, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeArgRegs_17));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_27_27, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Detism_18));
        }
        *parse_tree__module_qual__qualify_items__HOInstInfo_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__module_qual__qualify_items__V_27_27);
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Inst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Insts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Inst_21;
        MR_Word parse_tree__module_qual__qualify_items__Insts_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Inst0_19, &parse_tree__module_qual__qualify_items__Inst_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Insts0_20, &parse_tree__module_qual__qualify_items__Insts_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Inst_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Inst0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Inst_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Inst0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *parse_tree__module_qual__qualify_items__Inst_12 = parse_tree__module_qual__qualify_items__Inst0_11;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39;
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
          MR_Word parse_tree__module_qual__qualify_items__Uniq_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__HOInstInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__qualify_items__HOInstInfo_17;

          {
            parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__HOInstInfo0_16, &parse_tree__module_qual__qualify_items__HOInstInfo_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_qual__qualify_items__Inst_12 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Uniq_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__HOInstInfo_17));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__qualify_items__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__BoundInsts_28;
              MR_Word parse_tree__module_qual__qualify_items__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__InstResults0_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(parse_tree__module_qual__qualify_items__InstResults0_20)) {
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
                parse_tree__module_qual__qualify_items__qualify_bound_insts_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__BoundInsts0_21, &parse_tree__module_qual__qualify_items__BoundInsts_28, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Uniq_59));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstResults0_20));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__BoundInsts_28));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__qualify_items__Uniq_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__HOInstInfo0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__HOInstInfo_62;

              {
                parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__HOInstInfo0_61, &parse_tree__module_qual__qualify_items__HOInstInfo_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Uniq_60));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__HOInstInfo_62));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *parse_tree__module_qual__qualify_items__Inst_12 = parse_tree__module_qual__qualify_items__Inst0_11;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__module_qual__qualify_items__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__SubInst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__SubInst_31;

              {
                parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__SubInst0_30, &parse_tree__module_qual__qualify_items__SubInst_31, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_29));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__SubInst_31));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word parse_tree__module_qual__qualify_items__InstName0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__InstName_33;

              {
                parse_tree__module_qual__qualify_items__qualify_inst_name_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstName0_32, &parse_tree__module_qual__qualify_items__InstName_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstName_33));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__module_qual__qualify_items__Name_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Args_36;

              {
                parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_35, &parse_tree__module_qual__qualify_items__Args_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_36));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__InstDefn0_11,
  MR_Word * parse_tree__module_qual__qualify_items__InstDefn_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_17,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_18,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_19,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_20)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__InstDefn0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__InstDefn_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_18 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_17;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_20 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_19;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__InstDefn0_11, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Inst_16;

        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Inst0_15, &parse_tree__module_qual__qualify_items__Inst_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_19, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_20);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__InstDefn_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Inst_16));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_11,
  MR_Word * parse_tree__module_qual__qualify_items__TypeCtor_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
    MR_Word parse_tree__module_qual__qualify_items__SymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor0_11, (MR_Integer) 0)));
    MR_Integer parse_tree__module_qual__qualify_items__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor0_11, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qualify_items__SymName_17;
    MR_Integer parse_tree__module_qual__qualify_items__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor0_11, (MR_Integer) 1)));
    MR_Word parse_tree__module_qual__qualify_items__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor0_11, (MR_Integer) 0)));
    MR_String parse_tree__module_qual__qualify_items__V_41_41;
    MR_Integer parse_tree__module_qual__qualify_items__lo_0;
    MR_Integer parse_tree__module_qual__qualify_items__hi_1;
    MR_Integer parse_tree__module_qual__qualify_items__mid_2;
    MR_Integer parse_tree__module_qual__qualify_items__result_3;

    parse_tree__module_qual__qualify_items__succeeded = (parse_tree__module_qual__qualify_items__V_39_39 == (MR_Integer) 0);
    if (parse_tree__module_qual__qualify_items__succeeded)
      {
        parse_tree__module_qual__qualify_items__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__V_40_40)) == (MR_mktag((MR_Integer) 0)));
        if (parse_tree__module_qual__qualify_items__succeeded)
          {
            parse_tree__module_qual__qualify_items__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_40_40, (MR_Integer) 0)));
            /* binary string simple lookup switch */
            parse_tree__module_qual__qualify_items__lo_0 = (MR_Integer) 0;
            parse_tree__module_qual__qualify_items__hi_1 = (MR_Integer) 3;
            do
              {
                parse_tree__module_qual__qualify_items__mid_2 = (((parse_tree__module_qual__qualify_items__lo_0 + parse_tree__module_qual__qualify_items__hi_1)) / (MR_Integer) 2);
                parse_tree__module_qual__qualify_items__result_3 = MR_strcmp(parse_tree__module_qual__qualify_items__V_41_41, ((&parse_tree__module_qual__qualify_items_vector_common_4[0 + parse_tree__module_qual__qualify_items__mid_2]))->parse_tree__module_qual__qualify_items__vector_common_type_4_0__vct_4_f_0);
                if ((parse_tree__module_qual__qualify_items__result_3 == (MR_Integer) 0))
                  {
                    parse_tree__module_qual__qualify_items__succeeded = MR_TRUE;
                    /* jump out of search loop */
                    goto label_0;
                  }
                else
                if ((parse_tree__module_qual__qualify_items__result_3 < (MR_Integer) 0))
                  parse_tree__module_qual__qualify_items__hi_1 = (parse_tree__module_qual__qualify_items__mid_2 - (MR_Integer) 1);
                else
                  parse_tree__module_qual__qualify_items__lo_0 = (parse_tree__module_qual__qualify_items__mid_2 + (MR_Integer) 1);
              }
            while ((parse_tree__module_qual__qualify_items__lo_0 <= parse_tree__module_qual__qualify_items__hi_1));
            parse_tree__module_qual__qualify_items__succeeded = MR_FALSE;
          label_0:;
          }
      }
    if (parse_tree__module_qual__qualify_items__succeeded)
      {
        parse_tree__module_qual__qualify_items__SymName_17 = parse_tree__module_qual__qualify_items__SymName0_15;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__TypeCtorId0_18;
        MR_Word parse_tree__module_qual__qualify_items__Types_19;

        {
          parse_tree__module_qual__qualify_items__TypeCtorId0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtorId0_18, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_15));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtorId0_18, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_16));
        }
        {
          parse_tree__module_qual__mq_info_get_types_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20, &parse_tree__module_qual__qualify_items__Types_19);
        }
        {
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Types_19, (MR_Integer) 0, parse_tree__module_qual__qualify_items__TypeCtorId0_18, &parse_tree__module_qual__qualify_items__SymName_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23);
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *parse_tree__module_qual__qualify_items__TypeCtor_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_16));
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_maybe_type_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Type_20;

        {
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_19, &parse_tree__module_qual__qualify_items__Type_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_20));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Types0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Type_21;
        MR_Word parse_tree__module_qual__qualify_items__Types_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

        {
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_19, &parse_tree__module_qual__qualify_items__Type_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Types0_20, &parse_tree__module_qual__qualify_items__Types_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__ContainingTypeCtor_2,
  MR_String parse_tree__module_qual__qualify_items__FunctionSymbol_3,
  MR_Integer parse_tree__module_qual__qualify_items__LastArgNum_4,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__5_5,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__6_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_8,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_9,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_10)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_10 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_9;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_7;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Arg0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Arg_27;
        MR_Word parse_tree__module_qual__qualify_items__Args_28;
        MR_Integer parse_tree__module_qual__qualify_items__CurArgNum_31 = (parse_tree__module_qual__qualify_items__LastArgNum_4 + (MR_Integer) 1);
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_37_37;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_38_38;
        MR_Word parse_tree__module_qual__qualify_items__MaybeFieldName_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg0_25, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Type0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg0_25, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Width_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg0_25, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__qualify_items__Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg0_25, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__qualify_items__ErrorContext_57;
        MR_Word parse_tree__module_qual__qualify_items__Type_58;

        {
          parse_tree__module_qual__qualify_items__ErrorContext_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_56));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ContainingTypeCtor_2));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__FunctionSymbol_3));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__CurArgNum_31));
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeFieldName_53));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_57, parse_tree__module_qual__qualify_items__Type0_54, &parse_tree__module_qual__qualify_items__Type_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_37_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_9, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_38_38);
        }
        {
          parse_tree__module_qual__qualify_items__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg_27, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeFieldName_53));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg_27, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_58));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg_27, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Width_55));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg_27, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_56));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ContainingTypeCtor_2, parse_tree__module_qual__qualify_items__FunctionSymbol_3, parse_tree__module_qual__qualify_items__CurArgNum_31, parse_tree__module_qual__qualify_items__Args0_26, &parse_tree__module_qual__qualify_items__Args_28, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_37_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_8, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_38_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arg_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_28));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Ctor0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Ctors0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Ctor_21;
        MR_Word parse_tree__module_qual__qualify_items__Ctors_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;
        MR_Word parse_tree__module_qual__qualify_items__ExistQVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Constraints0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__FunctionSymbolSymName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__qualify_items__Args0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 3)));
        MR_Integer parse_tree__module_qual__qualify_items__Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__qualify_items__Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 5)));
        MR_String parse_tree__module_qual__qualify_items__FunctionSymbolName_49;
        MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_50;
        MR_Word parse_tree__module_qual__qualify_items__Constraints_51;
        MR_Word parse_tree__module_qual__qualify_items__Args_52;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_53;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_54;

        {
          parse_tree__module_qual__qualify_items__FunctionSymbolName_49 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qualify_items__FunctionSymbolSymName_45);
        }
        {
          parse_tree__module_qual__qualify_items__ConstraintErrorContext_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_48));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadVar__2_2));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__FunctionSymbolName_49));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, parse_tree__module_qual__qualify_items__Constraints0_44, &parse_tree__module_qual__qualify_items__Constraints_51, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_53, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_54);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__FunctionSymbolName_49, (MR_Integer) 0, parse_tree__module_qual__qualify_items__Args0_46, &parse_tree__module_qual__qualify_items__Args_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_53, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_54, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
        {
          parse_tree__module_qual__qualify_items__Ctor_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistQVars_43));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_51));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__FunctionSymbolSymName_45));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_52));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_47));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_48));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Ctors0_20, &parse_tree__module_qual__qualify_items__Ctors_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Ctor_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Ctors_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Mutable0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Mutables0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Mutable_18;
        MR_Word parse_tree__module_qual__qualify_items__Mutables_19;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26_26;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_27_27;
        MR_String parse_tree__module_qual__qualify_items__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__OrigType0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__qualify_items__OrigInst0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__qualify_items__Inst0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__qualify_items__InitTerm_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 5)));
        MR_Word parse_tree__module_qual__qualify_items__Attrs_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 6)));
        MR_Word parse_tree__module_qual__qualify_items__Varset_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 7)));
        MR_Word parse_tree__module_qual__qualify_items__Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 8)));
        MR_Integer parse_tree__module_qual__qualify_items__SeqNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 9)));
        MR_Word parse_tree__module_qual__qualify_items__ErrorContext_49;
        MR_Word parse_tree__module_qual__qualify_items__OrigType_50;
        MR_Word parse_tree__module_qual__qualify_items__Type_52;
        MR_Word parse_tree__module_qual__qualify_items__OrigInst_53;
        MR_Word parse_tree__module_qual__qualify_items__Inst_55;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_56;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_58;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_59;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_60;
        MR_Word parse_tree__module_qual__qualify_items__V_51_51;
        MR_Word parse_tree__module_qual__qualify_items__V_54_54;

        {
          parse_tree__module_qual__qualify_items__ErrorContext_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_49, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_47));
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_49, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_39));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_49, parse_tree__module_qual__qualify_items__OrigType0_40, &parse_tree__module_qual__qualify_items__OrigType_50, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_qual__qualify_items__V_51_51);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_49, parse_tree__module_qual__qualify_items__Type0_41, &parse_tree__module_qual__qualify_items__Type_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_56, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_59);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_49, parse_tree__module_qual__qualify_items__OrigInst0_42, &parse_tree__module_qual__qualify_items__OrigInst_53, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_58, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_qual__qualify_items__V_54_54);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_49, parse_tree__module_qual__qualify_items__Inst0_43, &parse_tree__module_qual__qualify_items__Inst_55, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_60, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_59, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_27_27);
        }
        {
          parse_tree__module_qual__qualify_items__Mutable_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_39));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__OrigType_50));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_52));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__OrigInst_53));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Inst_55));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__InitTerm_44));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_45));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__Varset_46));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_47));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 9) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_48));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__Mutables0_17, &parse_tree__module_qual__qualify_items__Mutables_19, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_27_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mutable_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mutables_19));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_10,
  MR_Word parse_tree__module_qual__qualify_items__Context_11,
  MR_Word parse_tree__module_qual__qualify_items__TypeCtor_12,
  MR_Word parse_tree__module_qual__qualify_items__TypeDefn0_13,
  MR_Word * parse_tree__module_qual__qualify_items__TypeDefn_14,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_40,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_41,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_42,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_43)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__TypeDefn0_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word parse_tree__module_qual__qualify_items__Ctors0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__Ctors_20;
          MR_Word parse_tree__module_qual__qualify_items__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__qualify_items__MaybeDirectArgCtors_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 2)));

          {
            parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__TypeCtor_12, parse_tree__module_qual__qualify_items__Ctors0_17, &parse_tree__module_qual__qualify_items__Ctors_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_40, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_43);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *parse_tree__module_qual__qualify_items__TypeDefn_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Ctors_20));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeUserEqComp_21));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDirectArgCtors_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__qualify_items__Type0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__ErrorContext_24;
          MR_Word parse_tree__module_qual__qualify_items__Type_25;

          {
            parse_tree__module_qual__qualify_items__ErrorContext_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ErrorContext_24, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_11));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ErrorContext_24, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_12));
          }
          {
            parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__ErrorContext_24, parse_tree__module_qual__qualify_items__Type0_23, &parse_tree__module_qual__qualify_items__Type_25, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_40, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_43);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_qual__qualify_items__TypeDefn_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_25));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *parse_tree__module_qual__qualify_items__TypeDefn_14 = parse_tree__module_qual__qualify_items__TypeDefn0_13;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_41 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_40;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_43 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_42;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__qualify_items__SolverTypeDetails0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__RepnType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__GroundInst0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__AnyInst0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__MutableItems0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__RepnType_35;
              MR_Word parse_tree__module_qual__qualify_items__GroundInst_36;
              MR_Word parse_tree__module_qual__qualify_items__AnyInst_37;
              MR_Word parse_tree__module_qual__qualify_items__MutableItems_38;
              MR_Word parse_tree__module_qual__qualify_items__SolverTypeDetails_39;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_44_44;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_45_45;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46_46;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_47_47;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49;
              MR_Word parse_tree__module_qual__qualify_items__MaybeUserEqComp_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_57;

              {
                parse_tree__module_qual__qualify_items__ErrorContext_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ErrorContext_57, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_11));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ErrorContext_57, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_12));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__ErrorContext_57, parse_tree__module_qual__qualify_items__RepnType0_31, &parse_tree__module_qual__qualify_items__RepnType_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_40, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_44_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_42, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_45_45);
              }
              {
                parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__ErrorContext_57, parse_tree__module_qual__qualify_items__GroundInst0_32, &parse_tree__module_qual__qualify_items__GroundInst_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_44_44, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46_46, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_45_45, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_47_47);
              }
              {
                parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__ErrorContext_57, parse_tree__module_qual__qualify_items__AnyInst0_33, &parse_tree__module_qual__qualify_items__AnyInst_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46_46, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_47_47, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49);
              }
              {
                parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__MutableItems0_34, &parse_tree__module_qual__qualify_items__MutableItems_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_43);
              }
              {
                parse_tree__module_qual__qualify_items__SolverTypeDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_39, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__RepnType_35));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_39, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__GroundInst_36));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_39, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__AnyInst_37));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_39, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MutableItems_38));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__TypeDefn_14 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SolverTypeDetails_39));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeUserEqComp_56));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *parse_tree__module_qual__qualify_items__TypeDefn_14 = parse_tree__module_qual__qualify_items__TypeDefn0_13;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_41 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_40;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_43 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_42;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_8,
  MR_Word parse_tree__module_qual__qualify_items__Item0_9,
  MR_Word * parse_tree__module_qual__qualify_items__Item_10,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Item0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *parse_tree__module_qual__qualify_items__Item_10 = parse_tree__module_qual__qualify_items__Item0_9;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__qualify_items__ItemTypeDefn0_18 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__qualify_items__Item0_9), (MR_Integer) 1);
          MR_Word parse_tree__module_qual__qualify_items__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__qualify_items__TypeDefn0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__qualify_items__TVarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 3)));
          MR_Word parse_tree__module_qual__qualify_items__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 4)));
          MR_Integer parse_tree__module_qual__qualify_items__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 5)));
          MR_Integer parse_tree__module_qual__qualify_items__Arity_25;
          MR_Word parse_tree__module_qual__qualify_items__TypeCtor_26;
          MR_Word parse_tree__module_qual__qualify_items__TypeDefn_27;
          MR_Word parse_tree__module_qual__qualify_items__ItemTypeDefn_28;

          {
            mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[1], parse_tree__module_qual__qualify_items__Params_20, &parse_tree__module_qual__qualify_items__Arity_25);
          }
          {
            parse_tree__module_qual__qualify_items__TypeCtor_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor_26, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_19));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor_26, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_25));
          }
          {
            parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__Context_23, parse_tree__module_qual__qualify_items__TypeCtor_26, parse_tree__module_qual__qualify_items__TypeDefn0_21, &parse_tree__module_qual__qualify_items__TypeDefn_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
          }
          {
            parse_tree__module_qual__qualify_items__ItemTypeDefn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_19));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Params_20));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeDefn_27));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__TVarSet_22));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_23));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_24));
          }
          *parse_tree__module_qual__qualify_items__Item_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__module_qual__qualify_items__ItemTypeDefn_28);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__module_qual__qualify_items__ItemInstDefn0_29 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__qualify_items__Item0_9), (MR_Integer) 2);
          MR_Word parse_tree__module_qual__qualify_items__MaybeForTypeCtor0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 2)));
          MR_Word parse_tree__module_qual__qualify_items__InstDefn0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 3)));
          MR_Word parse_tree__module_qual__qualify_items__InstVarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 4)));
          MR_Word parse_tree__module_qual__qualify_items__ErrorContext_33;
          MR_Word parse_tree__module_qual__qualify_items__InstDefn_34;
          MR_Word parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37;
          MR_Word parse_tree__module_qual__qualify_items__ItemInstDefn_38;
          MR_Word parse_tree__module_qual__qualify_items__V_135_135;
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_136_136;
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_137_137;
          MR_Word parse_tree__module_qual__qualify_items__SymName_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__Params_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__qualify_items__Context_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 5)));
          MR_Integer parse_tree__module_qual__qualify_items__SeqNum_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 6)));
          MR_Integer parse_tree__module_qual__qualify_items__Arity_146;

          {
            mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[2], parse_tree__module_qual__qualify_items__Params_143, &parse_tree__module_qual__qualify_items__Arity_146);
          }
          {
            parse_tree__module_qual__qualify_items__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_135_135, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_142));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_135_135, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_146));
          }
          {
            parse_tree__module_qual__qualify_items__ErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_33, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_144));
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_33, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_135_135));
          }
          {
            parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_33, parse_tree__module_qual__qualify_items__InstDefn0_31, &parse_tree__module_qual__qualify_items__InstDefn_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_136_136, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_137_137);
          }
          if ((parse_tree__module_qual__qualify_items__MaybeForTypeCtor0_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_136_136;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_137_137;
            }
          else
            {
              MR_Word parse_tree__module_qual__qualify_items__ForTypeCtor0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeForTypeCtor0_30, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__ForTypeCtor_36;

              {
                parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_33, parse_tree__module_qual__qualify_items__ForTypeCtor0_35, &parse_tree__module_qual__qualify_items__ForTypeCtor_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_136_136, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_137_137, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
              {
                parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ForTypeCtor_36));
              }
            }
          {
            parse_tree__module_qual__qualify_items__ItemInstDefn_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_142));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Params_143));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstDefn_34));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarSet_32));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_144));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_145));
          }
          *parse_tree__module_qual__qualify_items__Item_10 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__module_qual__qualify_items__ItemInstDefn_38);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__qualify_items__ItemModeDefn0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__ModeDefn0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__ModeDefn_41;
              MR_Word parse_tree__module_qual__qualify_items__ItemModeDefn_42;
              MR_Word parse_tree__module_qual__qualify_items__V_132_132;
              MR_Word parse_tree__module_qual__qualify_items__SymName_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__Params_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Context_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 4)));
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 5)));
              MR_Integer parse_tree__module_qual__qualify_items__Arity_151;
              MR_Word parse_tree__module_qual__qualify_items__InstVarSet_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_153;

              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[2], parse_tree__module_qual__qualify_items__Params_148, &parse_tree__module_qual__qualify_items__Arity_151);
              }
              {
                parse_tree__module_qual__qualify_items__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_132_132, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_147));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_132_132, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_151));
              }
              {
                parse_tree__module_qual__qualify_items__ErrorContext_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_149));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_132_132));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_153, parse_tree__module_qual__qualify_items__ModeDefn0_40, &parse_tree__module_qual__qualify_items__ModeDefn_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
              {
                parse_tree__module_qual__qualify_items__ItemModeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_147));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Params_148));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeDefn_41));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarSet_152));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_149));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_150));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Item_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemModeDefn_42));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__qualify_items__ItemPredDecl0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__TypesAndModes0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithType0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 4)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeDetism_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 5)));
              MR_Word parse_tree__module_qual__qualify_items__Origin_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 6)));
              MR_Word parse_tree__module_qual__qualify_items__TypeVarSet_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 7)));
              MR_Word parse_tree__module_qual__qualify_items__ExistQVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 9)));
              MR_Word parse_tree__module_qual__qualify_items__Purity_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 10)));
              MR_Word parse_tree__module_qual__qualify_items__Constraints0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 11)));
              MR_Word parse_tree__module_qual__qualify_items__TypesAndModes_54;
              MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_55;
              MR_Word parse_tree__module_qual__qualify_items__Constraints_56;
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithType_59;
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst_62;
              MR_Word parse_tree__module_qual__qualify_items__ItemPredDecl_63;
              MR_Word parse_tree__module_qual__qualify_items__V_123_123;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_124_124;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_125_125;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_126_126;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_127_127;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129;
              MR_Word parse_tree__module_qual__qualify_items__SymName_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__Context_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 12)));
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 13)));
              MR_Integer parse_tree__module_qual__qualify_items__Arity_157;
              MR_Word parse_tree__module_qual__qualify_items__InstVarSet_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 8)));
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_159;

              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__module_qual__qualify_items__TypesAndModes0_45, &parse_tree__module_qual__qualify_items__Arity_157);
              }
              {
                parse_tree__module_qual__qualify_items__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_123_123, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_154));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_123_123, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_157));
              }
              {
                parse_tree__module_qual__qualify_items__ErrorContext_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_159, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_155));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_159, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_44));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_159, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_123_123));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_159, parse_tree__module_qual__qualify_items__TypesAndModes0_45, &parse_tree__module_qual__qualify_items__TypesAndModes_54, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_124_124, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_125_125);
              }
              {
                parse_tree__module_qual__qualify_items__ConstraintErrorContext_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_155));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_44));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_154));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_157));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, parse_tree__module_qual__qualify_items__Constraints0_53, &parse_tree__module_qual__qualify_items__Constraints_56, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_124_124, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_126_126, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_125_125, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_127_127);
              }
              if ((parse_tree__module_qual__qualify_items__MaybeWithType0_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__module_qual__qualify_items__MaybeWithType_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_126_126;
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_127_127;
                }
              else
                {
                  MR_Word parse_tree__module_qual__qualify_items__WithType0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithType0_46, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qualify_items__WithType_58;

                  {
                    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_159, parse_tree__module_qual__qualify_items__WithType0_57, &parse_tree__module_qual__qualify_items__WithType_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_126_126, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_127_127, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129);
                  }
                  {
                    parse_tree__module_qual__qualify_items__MaybeWithType_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithType_59, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithType_58));
                  }
                }
              if ((parse_tree__module_qual__qualify_items__MaybeWithInst0_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__module_qual__qualify_items__MaybeWithInst_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128;
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129;
                }
              else
                {
                  MR_Word parse_tree__module_qual__qualify_items__WithInst0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst0_47, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qualify_items__WithInst_61;

                  {
                    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_159, parse_tree__module_qual__qualify_items__WithInst0_60, &parse_tree__module_qual__qualify_items__WithInst_61, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
                  }
                  {
                    parse_tree__module_qual__qualify_items__MaybeWithInst_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst_62, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithInst_61));
                  }
                }
              {
                parse_tree__module_qual__qualify_items__ItemPredDecl_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_154));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_44));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypesAndModes_54));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithType_59));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithInst_62));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDetism_48));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Origin_49));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeVarSet_50));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarSet_158));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 9) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistQVars_51));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 10) = ((MR_Box) (parse_tree__module_qual__qualify_items__Purity_52));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 11) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_56));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 12) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_155));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 13) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_156));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Item_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemPredDecl_63));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__module_qual__qualify_items__ItemModeDecl0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Modes0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Modes_66;
              MR_Word parse_tree__module_qual__qualify_items__ItemModeDecl_67;
              MR_Word parse_tree__module_qual__qualify_items__V_118_118;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_119_119;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_120_120;
              MR_Word parse_tree__module_qual__qualify_items__SymName_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__Context_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 6)));
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 7)));
              MR_Integer parse_tree__module_qual__qualify_items__Arity_167;
              MR_Word parse_tree__module_qual__qualify_items__InstVarSet_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 5)));
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_169;
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst0_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeDetism_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 4)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst_175;

              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__module_qual__qualify_items__Modes0_65, &parse_tree__module_qual__qualify_items__Arity_167);
              }
              {
                parse_tree__module_qual__qualify_items__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_118_118, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_164));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_118_118, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_167));
              }
              {
                parse_tree__module_qual__qualify_items__ErrorContext_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_169, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_165));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_169, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_170));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_169, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_118_118));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_169, parse_tree__module_qual__qualify_items__Modes0_65, &parse_tree__module_qual__qualify_items__Modes_66, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_119_119, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_120_120);
              }
              if ((parse_tree__module_qual__qualify_items__MaybeWithInst0_171 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__module_qual__qualify_items__MaybeWithInst_175 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_119_119;
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_120_120;
                }
              else
                {
                  MR_Word parse_tree__module_qual__qualify_items__WithInst0_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst0_171, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qualify_items__WithInst_161;

                  {
                    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_169, parse_tree__module_qual__qualify_items__WithInst0_160, &parse_tree__module_qual__qualify_items__WithInst_161, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_119_119, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_120_120, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
                  }
                  {
                    parse_tree__module_qual__qualify_items__MaybeWithInst_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst_175, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithInst_161));
                  }
                }
              {
                parse_tree__module_qual__qualify_items__ItemModeDecl_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_164));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_170));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_66));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithInst_175));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDetism_172));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarSet_168));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_165));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_166));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Item_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemModeDecl_67));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__module_qual__qualify_items__ItemPragma0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Pragma0_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma0_92, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__Pragma_94;
              MR_Word parse_tree__module_qual__qualify_items__ItemPragma_95;
              MR_Word parse_tree__module_qual__qualify_items__Context_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma0_92, (MR_Integer) 2)));
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma0_92, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__Origin_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma0_92, (MR_Integer) 1)));

              {
                parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__Context_194, parse_tree__module_qual__qualify_items__Pragma0_93, &parse_tree__module_qual__qualify_items__Pragma_94, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
              {
                parse_tree__module_qual__qualify_items__ItemPragma_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma_95, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma_94));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma_95, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Origin_196));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma_95, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_194));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma_95, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_195));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Item_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemPragma_95));
              }
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 10:
            {
              *parse_tree__module_qual__qualify_items__Item_10 = parse_tree__module_qual__qualify_items__Item0_9;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96;
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word parse_tree__module_qual__qualify_items__ItemTypeClass0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Name_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__Vars_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__FunDeps_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__Interface0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 4)));
              MR_Word parse_tree__module_qual__qualify_items__VarSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 5)));
              MR_Word parse_tree__module_qual__qualify_items__Interface_74;
              MR_Word parse_tree__module_qual__qualify_items__ItemTypeClass_77;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_113_113;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_114_114;
              MR_Word parse_tree__module_qual__qualify_items__Context_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 6)));
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 7)));
              MR_Integer parse_tree__module_qual__qualify_items__Arity_180;
              MR_Word parse_tree__module_qual__qualify_items__Constraints0_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_183;
              MR_Word parse_tree__module_qual__qualify_items__Constraints_184;

              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[1], parse_tree__module_qual__qualify_items__Vars_70, &parse_tree__module_qual__qualify_items__Arity_180);
              }
              {
                parse_tree__module_qual__qualify_items__ConstraintErrorContext_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ConstraintErrorContext_183, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_178));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ConstraintErrorContext_183, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_69));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ConstraintErrorContext_183, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_180));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ConstraintErrorContext_183, parse_tree__module_qual__qualify_items__Constraints0_182, &parse_tree__module_qual__qualify_items__Constraints_184, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_113_113, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_114_114);
              }
              if ((parse_tree__module_qual__qualify_items__Interface0_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  parse_tree__module_qual__qualify_items__Interface_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_113_113;
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_114_114;
                }
              else
                {
                  MR_Word parse_tree__module_qual__qualify_items__Methods0_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Interface0_72, (MR_Integer) 0)));
                  MR_Word parse_tree__module_qual__qualify_items__Methods_76;
                  MR_Word parse_tree__module_qual__qualify_items__V_115_115;
                  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_176;

                  {
                    parse_tree__module_qual__qualify_items__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_115_115, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_69));
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_115_115, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_180));
                  }
                  {
                    parse_tree__module_qual__qualify_items__ErrorContext_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_178));
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_115_115));
                  }
                  {
                    parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_176, parse_tree__module_qual__qualify_items__Methods0_75, &parse_tree__module_qual__qualify_items__Methods_76, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_113_113, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_114_114, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
                  }
                  {
                    parse_tree__module_qual__qualify_items__Interface_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Interface_74, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Methods_76));
                  }
                }
              {
                parse_tree__module_qual__qualify_items__ItemTypeClass_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_69));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_70));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_184));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__FunDeps_71));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Interface_74));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__VarSet_73));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_178));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_179));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Item_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemTypeClass_77));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word parse_tree__module_qual__qualify_items__ItemInstance0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Name0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 0)));
              MR_Word parse_tree__module_qual__qualify_items__Types0_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__OriginalTypes0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Body0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 4)));
              MR_Word parse_tree__module_qual__qualify_items__ModName_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 6)));
              MR_Word parse_tree__module_qual__qualify_items__Id0_84;
              MR_Word parse_tree__module_qual__qualify_items__Types_85;
              MR_Word parse_tree__module_qual__qualify_items__OriginalTypes_86;
              MR_Word parse_tree__module_qual__qualify_items__Body_88;
              MR_Word parse_tree__module_qual__qualify_items__ItemInstance_89;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_105_105;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_106_106;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_107_107;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_108_108;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_109_109;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_110_110;
              MR_Word parse_tree__module_qual__qualify_items__Context_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 7)));
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 8)));
              MR_Integer parse_tree__module_qual__qualify_items__Arity_187;
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_188;
              MR_Word parse_tree__module_qual__qualify_items__Constraints0_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_190;
              MR_Word parse_tree__module_qual__qualify_items__Constraints_191;
              MR_Word parse_tree__module_qual__qualify_items__Name_192;
              MR_Word parse_tree__module_qual__qualify_items__VarSet_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 5)));
              MR_Word parse_tree__module_qual__qualify_items__V_87_87;

              {
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__module_qual__qualify_items__Types0_80, &parse_tree__module_qual__qualify_items__Arity_187);
              }
              {
                parse_tree__module_qual__qualify_items__Id0_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Id0_84, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name0_79));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Id0_84, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_187));
              }
              {
                parse_tree__module_qual__qualify_items__ErrorContext_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_188, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_185));
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_188, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Id0_84));
              }
              switch (parse_tree__module_qual__qualify_items__InInt_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_105_105 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_105_105);
                    }
                  }
                  break;
              }
              {
                parse_tree__module_qual__qualify_items__ConstraintErrorContext_190 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__ConstraintErrorContext_190, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_185));
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__ConstraintErrorContext_190, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name0_79));
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__ConstraintErrorContext_190, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__OriginalTypes0_81));
              }
              {
                parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ConstraintErrorContext_190, parse_tree__module_qual__qualify_items__Constraints0_189, &parse_tree__module_qual__qualify_items__Constraints_191, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_105_105, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_106_106, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_107_107);
              }
              {
                parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_188, parse_tree__module_qual__qualify_items__Id0_84, &parse_tree__module_qual__qualify_items__Name_192, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_106_106, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_108_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_107_107, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_109_109);
              }
              {
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_188, parse_tree__module_qual__qualify_items__Types0_80, &parse_tree__module_qual__qualify_items__Types_85, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_108_108, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_110_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_109_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
              {
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_188, parse_tree__module_qual__qualify_items__OriginalTypes0_81, &parse_tree__module_qual__qualify_items__OriginalTypes_86, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_110_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99, &parse_tree__module_qual__qualify_items__V_87_87);
              }
              {
                parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(parse_tree__module_qual__qualify_items__Name_192, parse_tree__module_qual__qualify_items__Body0_82, &parse_tree__module_qual__qualify_items__Body_88);
              }
              {
                parse_tree__module_qual__qualify_items__ItemInstance_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_192));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_85));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__OriginalTypes_86));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_191));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Body_88));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__VarSet_193));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModName_83));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_185));
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_186));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Item_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemInstance_89));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word parse_tree__module_qual__qualify_items__ItemMutable0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__ItemMutable_91;

              {
                parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ItemMutable0_90, &parse_tree__module_qual__qualify_items__ItemMutable_91, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Item_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemMutable_91));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__Mode0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Modes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Mode_21;
        MR_Word parse_tree__module_qual__qualify_items__Modes_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

        {
          parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Mode0_19, &parse_tree__module_qual__qualify_items__Mode_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
        {
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Modes0_20, &parse_tree__module_qual__qualify_items__Modes_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mode_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_22));
        }
      }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
  MR_Word parse_tree__module_qual__qualify_items__Type0_11,
  MR_Word * parse_tree__module_qual__qualify_items__Type_12,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Type0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *parse_tree__module_qual__qualify_items__Type_12 = parse_tree__module_qual__qualify_items__Type0_11;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__module_qual__qualify_items__SymName0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 0)));
          MR_Word parse_tree__module_qual__qualify_items__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
          MR_Word parse_tree__module_qual__qualify_items__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));
          MR_Integer parse_tree__module_qual__qualify_items__Arity_20;
          MR_Word parse_tree__module_qual__qualify_items__TypeCtorId0_21;
          MR_Word parse_tree__module_qual__qualify_items__Types_22;
          MR_Word parse_tree__module_qual__qualify_items__SymName_23;
          MR_Word parse_tree__module_qual__qualify_items__Args_24;
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_57_57;
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_58_58;

          {
            parse_tree__module_qual__qualify_items__Arity_20 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__module_qual__qualify_items__Args0_18);
          }
          {
            parse_tree__module_qual__qualify_items__TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtorId0_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_17));
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtorId0_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_20));
          }
          {
            parse_tree__module_qual__mq_info_get_types_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, &parse_tree__module_qual__qualify_items__Types_22);
          }
          {
            parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Types_22, (MR_Integer) 0, parse_tree__module_qual__qualify_items__TypeCtorId0_21, &parse_tree__module_qual__qualify_items__SymName_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_57_57, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_58_58);
          }
          {
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_18, &parse_tree__module_qual__qualify_items__Args_24, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_57_57, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_58_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__module_qual__qualify_items__Type_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_24));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Kind_19));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word parse_tree__module_qual__qualify_items__BuiltinType_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 0)));

          switch (parse_tree__module_qual__qualify_items__BuiltinType_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33;
              break;
            case (MR_Integer) 1:
              {
                {
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(parse_tree__module_qual__qualify_items__InInt_9, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_3[0], parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(parse_tree__module_qual__qualify_items__InInt_9, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_3[1], parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                {
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(parse_tree__module_qual__qualify_items__InInt_9, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_3[2], parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34);
                }
              }
              break;
          }
          *parse_tree__module_qual__qualify_items__Type_12 = parse_tree__module_qual__qualify_items__Type0_11;
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__module_qual__qualify_items__Args0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Kind_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Args_65;

              {
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_63, &parse_tree__module_qual__qualify_items__Args_65, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Type_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_65));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Kind_64));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__module_qual__qualify_items__MaybeRet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__MaybeRet_29;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43;
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44;
              MR_Word parse_tree__module_qual__qualify_items__Args0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Args_62;

              {
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_61, &parse_tree__module_qual__qualify_items__Args_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44);
              }
              {
                parse_tree__module_qual__qualify_items__qualify_maybe_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__MaybeRet0_26, &parse_tree__module_qual__qualify_items__MaybeRet_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Type_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_62));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeRet_29));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Purity_27));
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word parse_tree__module_qual__qualify_items__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__Args0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));
              MR_Word parse_tree__module_qual__qualify_items__Kind_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 3)));
              MR_Word parse_tree__module_qual__qualify_items__Args_68;

              {
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_66, &parse_tree__module_qual__qualify_items__Args_68, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Type_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Var_30));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_68));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Kind_67));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word parse_tree__module_qual__qualify_items__SubType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
              MR_Word parse_tree__module_qual__qualify_items__SubType_32;
              MR_Word parse_tree__module_qual__qualify_items__Kind_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));

              {
                parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__SubType0_31, &parse_tree__module_qual__qualify_items__SubType_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *parse_tree__module_qual__qualify_items__Type_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SubType_32));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Kind_69));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__HeadItem0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__TailItems0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__HeadItem_21;
        MR_Word parse_tree__module_qual__qualify_items__TailItems_22;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_27;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_28;

        {
          parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadItem0_16, &parse_tree__module_qual__qualify_items__HeadItem_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_28);
        }
        {
          parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__TailItems0_17, &parse_tree__module_qual__qualify_items__TailItems_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_28, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadItem_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TailItems_22));
        }
      }
  }
}

static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_3,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_4,
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_5,
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_6)
{
  {
    MR_Box parse_tree__module_qual__qualify_items__closure = parse_tree__module_qual__qualify_items__closure_arg;
    MR_Word parse_tree__module_qual__qualify_items__conv2_Attr_16;
    MR_Word parse_tree__module_qual__qualify_items__conv1_STATE_VARIABLE_Info_29;
    MR_Word parse_tree__module_qual__qualify_items__conv0_STATE_VARIABLE_Specs_31;

    {
      parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_1), &parse_tree__module_qual__qualify_items__conv2_Attr_16, ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_3), &parse_tree__module_qual__qualify_items__conv1_STATE_VARIABLE_Info_29, ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_5), &parse_tree__module_qual__qualify_items__conv0_STATE_VARIABLE_Specs_31);
    }
    *parse_tree__module_qual__qualify_items__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv2_Attr_16));
    *parse_tree__module_qual__qualify_items__wrapper_arg_4 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv1_STATE_VARIABLE_Info_29));
    *parse_tree__module_qual__qualify_items__wrapper_arg_6 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv0_STATE_VARIABLE_Specs_31));
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_String parse_tree__module_qual__qualify_items__FileName_2,
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__TypeCtorInfo_34_61;
        MR_String parse_tree__module_qual__qualify_items__Name_19;
        MR_Word parse_tree__module_qual__qualify_items__Spec0_20;
        MR_Word parse_tree__module_qual__qualify_items__NameSpecs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Spec_22;
        MR_Word parse_tree__module_qual__qualify_items__NameSpecs_23;
        MR_Word parse_tree__module_qual__qualify_items__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__V_31_31;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33;
        MR_Integer parse_tree__module_qual__qualify_items__EventNumber_46;
        MR_String parse_tree__module_qual__qualify_items__EventName_47;
        MR_Integer parse_tree__module_qual__qualify_items__EventLineNumber_48;
        MR_Word parse_tree__module_qual__qualify_items__Attrs0_49;
        MR_Word parse_tree__module_qual__qualify_items__SynthAttrNumOrder_50;
        MR_Word parse_tree__module_qual__qualify_items__Attrs_51;
        MR_Word parse_tree__module_qual__qualify_items__V_52_52;
        MR_Box parse_tree__module_qual__qualify_items__conv4_STATE_VARIABLE_Info_32_32;
        MR_Box parse_tree__module_qual__qualify_items__conv3_STATE_VARIABLE_Specs_33_33;

        parse_tree__module_qual__qualify_items__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_30_30, (MR_Integer) 0)));
        parse_tree__module_qual__qualify_items__Spec0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_30_30, (MR_Integer) 1)));
        parse_tree__module_qual__qualify_items__EventNumber_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 0)));
        parse_tree__module_qual__qualify_items__EventName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 1)));
        parse_tree__module_qual__qualify_items__EventLineNumber_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 2)));
        parse_tree__module_qual__qualify_items__Attrs0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 3)));
        parse_tree__module_qual__qualify_items__SynthAttrNumOrder_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 4)));
        {
          parse_tree__module_qual__qualify_items__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadVar__1_1));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventName_47));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__FileName_2));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventLineNumber_48));
        }
        parse_tree__module_qual__qualify_items__TypeCtorInfo_34_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0;
        {
          mercury__list__map_foldl2_7_p_0(parse_tree__module_qual__qualify_items__TypeCtorInfo_34_61, parse_tree__module_qual__qualify_items__TypeCtorInfo_34_61, (MR_Word) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[3], parse_tree__module_qual__qualify_items__V_52_52, parse_tree__module_qual__qualify_items__Attrs0_49, &parse_tree__module_qual__qualify_items__Attrs_51, ((MR_Box) (parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5)), &parse_tree__module_qual__qualify_items__conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7)), &parse_tree__module_qual__qualify_items__conv3_STATE_VARIABLE_Specs_33_33);
        }
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32 = ((MR_Word) parse_tree__module_qual__qualify_items__conv4_STATE_VARIABLE_Info_32_32);
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33 = ((MR_Word) parse_tree__module_qual__qualify_items__conv3_STATE_VARIABLE_Specs_33_33);
        {
          parse_tree__module_qual__qualify_items__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventNumber_46));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventName_47));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventLineNumber_48));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_51));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__SynthAttrNumOrder_50));
        }
        {
          parse_tree__module_qual__qualify_items__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_31_31, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_19));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_31_31, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Spec_22));
        }
        {
          parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__FileName_2, parse_tree__module_qual__qualify_items__NameSpecs0_21, &parse_tree__module_qual__qualify_items__NameSpecs_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_31_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__NameSpecs_23));
        }
      }
  }
}

void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_items_in_src_item_blocks_6_p_0(
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__2_2,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_4,
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_5,
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_6)
{
  {
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

    if ((parse_tree__module_qual__qualify_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__module_qual__qualify_items__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_5;
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_4 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word parse_tree__module_qual__qualify_items__SrcItemBlock0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__SrcItemBlocks0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__SrcItemBlock_15;
        MR_Word parse_tree__module_qual__qualify_items__SrcItemBlocks_16;
        MR_Word parse_tree__module_qual__qualify_items__SrcSection_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 0)));
        MR_Word parse_tree__module_qual__qualify_items__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 1)));
        MR_Word parse_tree__module_qual__qualify_items__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 2)));
        MR_Word parse_tree__module_qual__qualify_items__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 3)));
        MR_Word parse_tree__module_qual__qualify_items__Items0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 4)));
        MR_Word parse_tree__module_qual__qualify_items__InInt_24;
        MR_Word parse_tree__module_qual__qualify_items__Items_29;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35;
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36;

        switch (parse_tree__module_qual__qualify_items__SrcSection_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            parse_tree__module_qual__qualify_items__InInt_24 = (MR_Integer) 0;
            break;
          case (MR_Integer) 0:
            parse_tree__module_qual__qualify_items__InInt_24 = (MR_Integer) 1;
            break;
        }
        if ((parse_tree__module_qual__qualify_items__Incls_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3;
        else
          {
            MR_Word parse_tree__module_qual__qualify_items__ShouldWarnUnusedImportsInParents_27;

            {
              parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3, &parse_tree__module_qual__qualify_items__ShouldWarnUnusedImportsInParents_27);
            }
            switch (parse_tree__module_qual__qualify_items__ShouldWarnUnusedImportsInParents_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word parse_tree__module_qual__qualify_items__UnusedModules_28;

                  {
                    mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[0], &parse_tree__module_qual__qualify_items__UnusedModules_28);
                  }
                  {
                    parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(parse_tree__module_qual__qualify_items__UnusedModules_28, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34);
                  }
                }
                break;
              case (MR_Integer) 1:
                parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3;
                break;
            }
          }
        {
          parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(parse_tree__module_qual__qualify_items__InInt_24, parse_tree__module_qual__qualify_items__Items0_23, &parse_tree__module_qual__qualify_items__Items_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36);
        }
        {
          parse_tree__module_qual__qualify_items__SrcItemBlock_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SrcSection_19));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_20));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Incls_21));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Avails_22));
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Items_29));
        }
        {
          parse_tree__module_qual__qualify_items__module_qualify_items_in_src_item_blocks_6_p_0(parse_tree__module_qual__qualify_items__SrcItemBlocks0_14, &parse_tree__module_qual__qualify_items__SrcItemBlocks_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_4, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__module_qual__qualify_items__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SrcItemBlock_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SrcItemBlocks_16));
        }
      }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.module_qual.qualify_items. */
