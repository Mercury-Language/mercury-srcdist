/*
** Automatically generated from `module_qual.qualify_items.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 102 "parse_tree.module_qual.qualify_items.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 1308 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(
#line 1308 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_11,
#line 1308 "module_qual.qualify_items.m"
  MR_String parse_tree__module_qual__qualify_items__EventName_12,
#line 1308 "module_qual.qualify_items.m"
  MR_String parse_tree__module_qual__qualify_items__FileName_13,
#line 1308 "module_qual.qualify_items.m"
  MR_Integer parse_tree__module_qual__qualify_items__LineNumber_14,
#line 1308 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Attr0_15,
#line 1308 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Attr_16,
#line 1308 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_28,
#line 1308 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29,
#line 1308 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_30,
#line 1308 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_31);

#line 1258 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__UserSharing0_11,
#line 1258 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__UserSharing_12,
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21,
#line 1258 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22,
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23,
#line 1258 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24);

#line 1245 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 1245 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 1245 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 1245 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 1221 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 1221 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 1221 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 1221 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 1045 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Context_10,
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Pragma0_11,
#line 1045 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Pragma_12,
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108,
#line 1045 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109,
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110,
#line 1045 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);

#line 1025 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(
#line 1025 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_8,
#line 1025 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ItemMutable0_9,
#line 1025 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__ItemMutable_10,
#line 1025 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_30,
#line 1025 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_31,
#line 1025 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_32,
#line 1025 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33);

#line 986 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
#line 986 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__DefaultModuleName_4,
#line 986 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InstanceMethod0_5,
#line 986 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__InstanceMethod_6);

#line 980 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1(
#line 980 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
#line 980 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
#line 980 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2);

#line 964 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(
#line 964 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ClassName_4,
#line 964 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InstanceBody0_5,
#line 964 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__InstanceBody_6);

#line 898 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Method0_11,
#line 898 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Method_12,
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_39,
#line 898 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40,
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_41,
#line 898 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42);

#line 884 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 884 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 884 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 884 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 873 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Class0_11,
#line 873 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Name_12,
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_16,
#line 873 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_17,
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_18,
#line 873 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_19);

#line 840 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 840 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 840 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 840 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 825 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_10,
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Constraints0_11,
#line 825 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Constraints_12,
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_19,
#line 825 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_20,
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_21,
#line 825 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_22);

#line 788 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 788 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 788 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 788 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 753 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Mode0_11,
#line 753 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Mode_12,
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_25,
#line 753 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26,
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_27,
#line 753 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28);

#line 745 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 745 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_15,
#line 745 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_16,
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_17,
#line 745 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_18);

#line 714 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0_1(
#line 714 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
#line 714 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
#line 714 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2);

#line 703 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0(
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__BoundInst0_11,
#line 703 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__BoundInst_12,
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45,
#line 703 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46,
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_47,
#line 703 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48);

#line 688 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_insts_8_p_0(
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 688 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 688 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 688 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 651 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_name_8_p_0(
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InstName0_11,
#line 651 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__InstName_12,
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41,
#line 651 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42,
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43,
#line 651 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);

#line 631 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HOInstInfo0_11,
#line 631 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HOInstInfo_12,
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20,
#line 631 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21,
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22,
#line 631 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23);

#line 621 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 621 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 621 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 621 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 564 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Inst0_11,
#line 564 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Inst_12,
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37,
#line 564 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38,
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39,
#line 564 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);

#line 547 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InstDefn0_11,
#line 547 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__InstDefn_12,
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_17,
#line 547 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_18,
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_19,
#line 547 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_20);

#line 511 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_11,
#line 511 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__TypeCtor_12,
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20,
#line 511 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21,
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22,
#line 511 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23);

#line 441 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_maybe_type_8_p_0(
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 441 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 441 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 441 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 431 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 431 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 431 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 431 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 403 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ContainingTypeCtor_2,
#line 403 "module_qual.qualify_items.m"
  MR_String parse_tree__module_qual__qualify_items__FunctionSymbol_3,
#line 403 "module_qual.qualify_items.m"
  MR_Integer parse_tree__module_qual__qualify_items__LastArgNum_4,
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__5_5,
#line 403 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__6_6,
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_7,
#line 403 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_8,
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_9,
#line 403 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_10);

#line 372 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 372 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 372 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 372 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);

#line 361 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(
#line 361 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 361 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 361 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 361 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4,
#line 361 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5,
#line 361 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6,
#line 361 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7);

#line 311 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_10,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Context_11,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__TypeCtor_12,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__TypeDefn0_13,
#line 311 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__TypeDefn_14,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41,
#line 311 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43,
#line 311 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);

#line 118 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(
#line 118 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_8,
#line 118 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Item0_9,
#line 118 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Item_10,
#line 118 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96,
#line 118 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97,
#line 118 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98,
#line 118 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);

#line 1303 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
#line 1303 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
#line 1303 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
#line 1303 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2,
#line 1303 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_3,
#line 1303 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_4,
#line 1303 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_5,
#line 1303 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_6);


static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_1[4][2];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_2[1][13];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_5[1][8];

static /* final */ const MR_Box parse_tree__module_qual__qualify_items_scalar_common_6[1][6];


#line 535 "module_qual.qualify_items.m"
/* sealed */ struct parse_tree__module_qual__qualify_items__vector_common_type_4_0_s {
#line 535 "module_qual.qualify_items.m"
  const MR_String parse_tree__module_qual__qualify_items__vector_common_type_4_0__vct_4_f_0;
#line 535 "module_qual.qualify_items.m"
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



#line 873 "parse_tree.module_qual.qualify_items.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__qualify_items__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1308 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(
#line 1308 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_11,
#line 1308 "module_qual.qualify_items.m"
  MR_String parse_tree__module_qual__qualify_items__EventName_12,
#line 1308 "module_qual.qualify_items.m"
  MR_String parse_tree__module_qual__qualify_items__FileName_13,
#line 1308 "module_qual.qualify_items.m"
  MR_Integer parse_tree__module_qual__qualify_items__LineNumber_14,
#line 1308 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Attr0_15,
#line 1308 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Attr_16,
#line 1308 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_28,
#line 1308 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29,
#line 1308 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_30,
#line 1308 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_31)
#line 1308 "module_qual.qualify_items.m"
{
#line 1314 "module_qual.qualify_items.m"
  {
#line 1314 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
#line 1314 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__AttrNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 0)));
#line 1314 "module_qual.qualify_items.m"
    MR_String parse_tree__module_qual__qualify_items__AttrName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 1)));
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__AttrType0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 2)));
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__AttrMode0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 3)));
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__MaybeSynthCall_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Attr0_15, (MR_Integer) 4)));
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Context_24;
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__ErrorContext_25;
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__AttrType_26;
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__AttrMode_27;
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32;
#line 1314 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33;

#line 1317 "module_qual.qualify_items.m"
    {
#line 1317 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__Context_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Context_24, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__FileName_13));
#line 1317 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Context_24, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__LineNumber_14));
#line 1317 "module_qual.qualify_items.m"
    }
#line 1318 "module_qual.qualify_items.m"
    {
#line 1318 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__ErrorContext_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1318 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_25, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_24));
#line 1318 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_25, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventName_12));
#line 1318 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_25, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrName_20));
#line 1318 "module_qual.qualify_items.m"
    }
#line 1319 "module_qual.qualify_items.m"
    {
#line 1319 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__AttrType0_21, &parse_tree__module_qual__qualify_items__AttrType_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_28, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_30, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33);
    }
#line 759 "module_qual.qualify_items.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__AttrMode0_22)) == (MR_mktag((MR_Integer) 0))))
#line 759 "module_qual.qualify_items.m"
      {
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstA0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__AttrMode0_22, (MR_Integer) 0)));
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstB0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__AttrMode0_22, (MR_Integer) 1)));
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstA_48;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstB_49;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_62;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_63;

#line 760 "module_qual.qualify_items.m"
        {
#line 760 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__InstA0_46, &parse_tree__module_qual__qualify_items__InstA_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_63);
        }
#line 761 "module_qual.qualify_items.m"
        {
#line 761 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__InstB0_47, &parse_tree__module_qual__qualify_items__InstB_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_63, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_31);
        }
#line 762 "module_qual.qualify_items.m"
        {
#line 762 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__AttrMode_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__AttrMode_27, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_48));
#line 762 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__AttrMode_27, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_49));
#line 762 "module_qual.qualify_items.m"
        }
#line 759 "module_qual.qualify_items.m"
      }
#line 759 "module_qual.qualify_items.m"
    else
#line 764 "module_qual.qualify_items.m"
      {
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SymName0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__AttrMode0_22, (MR_Integer) 0)));
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Insts0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__AttrMode0_22, (MR_Integer) 1)));
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Insts_52;
#line 764 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__Arity_53;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes_54;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SymName_55;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_56;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_57;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_59_59;

#line 765 "module_qual.qualify_items.m"
        {
#line 765 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__Insts0_51, &parse_tree__module_qual__qualify_items__Insts_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_56, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_57);
        }
#line 767 "module_qual.qualify_items.m"
        {
#line 767 "module_qual.qualify_items.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_52, &parse_tree__module_qual__qualify_items__Arity_53);
        }
#line 768 "module_qual.qualify_items.m"
        {
#line 768 "module_qual.qualify_items.m"
          parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_56, &parse_tree__module_qual__qualify_items__Modes_54);
        }
#line 770 "module_qual.qualify_items.m"
        {
#line 770 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 770 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_59_59, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_50));
#line 770 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_59_59, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_53));
#line 770 "module_qual.qualify_items.m"
        }
#line 769 "module_qual.qualify_items.m"
        {
#line 769 "module_qual.qualify_items.m"
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_11, parse_tree__module_qual__qualify_items__ErrorContext_25, parse_tree__module_qual__qualify_items__Modes_54, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_59_59, &parse_tree__module_qual__qualify_items__SymName_55, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_56, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_57, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_31);
        }
#line 771 "module_qual.qualify_items.m"
        {
#line 771 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__AttrMode_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__AttrMode_27, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_55));
#line 771 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__AttrMode_27, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_52));
#line 771 "module_qual.qualify_items.m"
        }
#line 764 "module_qual.qualify_items.m"
      }
#line 1321 "module_qual.qualify_items.m"
    {
#line 1321 "module_qual.qualify_items.m"
      MR_Word base;
#line 1321 "module_qual.qualify_items.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "module_qual.qualify_items.m"
      *parse_tree__module_qual__qualify_items__Attr_16 = base;
#line 1321 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrNum_19));
#line 1321 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrName_20));
#line 1321 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrType_26));
#line 1321 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__AttrMode_27));
#line 1321 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeSynthCall_23));
#line 1321 "module_qual.qualify_items.m"
    }
#line 1314 "module_qual.qualify_items.m"
  }
#line 1308 "module_qual.qualify_items.m"
}

#line 1258 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__UserSharing0_11,
#line 1258 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__UserSharing_12,
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21,
#line 1258 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22,
#line 1258 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23,
#line 1258 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24)
#line 1258 "module_qual.qualify_items.m"
{
#line 1266 "module_qual.qualify_items.m"
  {
#line 1266 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 1266 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__UserSharing0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1266 "module_qual.qualify_items.m"
      {
#line 1267 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__UserSharing_12 = parse_tree__module_qual__qualify_items__UserSharing0_11;
#line 1266 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21;
#line 1266 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23;
#line 1266 "module_qual.qualify_items.m"
      }
#line 1266 "module_qual.qualify_items.m"
    else
#line 1269 "module_qual.qualify_items.m"
      {
#line 1269 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Sharing_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__UserSharing0_11, (MR_Integer) 0)));
#line 1269 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeTypes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__UserSharing0_11, (MR_Integer) 1)));

#line 1276 "module_qual.qualify_items.m"
        if ((parse_tree__module_qual__qualify_items__MaybeTypes0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1277 "module_qual.qualify_items.m"
          {
#line 1278 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__UserSharing_12 = parse_tree__module_qual__qualify_items__UserSharing0_11;
#line 1277 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21;
#line 1277 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23;
#line 1277 "module_qual.qualify_items.m"
          }
#line 1276 "module_qual.qualify_items.m"
        else
#line 1271 "module_qual.qualify_items.m"
          {
#line 1271 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Types0_17;
#line 1271 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__TVarset_18;
#line 1271 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Types_19;
#line 1271 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__MaybeTypes_20;
#line 1271 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeTypes0_16, (MR_Integer) 0)));
#line 1271 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__V_28_28;

#line 1271 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__Types0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_25_25, (MR_Integer) 0)));
#line 1271 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__TVarset_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_25_25, (MR_Integer) 1)));
#line 1272 "module_qual.qualify_items.m"
            {
#line 1272 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Types0_17, &parse_tree__module_qual__qualify_items__Types_19, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24);
            }
#line 1274 "module_qual.qualify_items.m"
            {
#line 1274 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_28_28, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_19));
#line 1274 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_28_28, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TVarset_18));
#line 1274 "module_qual.qualify_items.m"
            }
#line 1274 "module_qual.qualify_items.m"
            {
#line 1274 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__MaybeTypes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeTypes_20, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_28_28));
#line 1274 "module_qual.qualify_items.m"
            }
#line 1275 "module_qual.qualify_items.m"
            {
#line 1275 "module_qual.qualify_items.m"
              MR_Word base;
#line 1275 "module_qual.qualify_items.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1275 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__UserSharing_12 = base;
#line 1275 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Sharing_15));
#line 1275 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeTypes_20));
#line 1275 "module_qual.qualify_items.m"
            }
#line 1271 "module_qual.qualify_items.m"
          }
#line 1269 "module_qual.qualify_items.m"
      }
#line 1266 "module_qual.qualify_items.m"
  }
#line 1258 "module_qual.qualify_items.m"
}

#line 1245 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 1245 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 1245 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 1245 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 1245 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 1245 "module_qual.qualify_items.m"
{
#line 1250 "module_qual.qualify_items.m"
  {
#line 1250 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 1250 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1250 "module_qual.qualify_items.m"
      {
#line 1250 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1250 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 1250 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 1250 "module_qual.qualify_items.m"
      }
#line 1250 "module_qual.qualify_items.m"
    else
#line 1252 "module_qual.qualify_items.m"
      {
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Var_19;
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type0_20;
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Subst0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type_22;
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Subst_23;
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_31_31;
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32;
#line 1252 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33;

#line 1252 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_30_30, (MR_Integer) 0)));
#line 1252 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__Type0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_30_30, (MR_Integer) 1)));
#line 1254 "module_qual.qualify_items.m"
        {
#line 1254 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_20, &parse_tree__module_qual__qualify_items__Type_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33);
        }
#line 1252 "module_qual.qualify_items.m"
        {
#line 1252 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_31_31, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Var_19));
#line 1252 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_31_31, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_22));
#line 1252 "module_qual.qualify_items.m"
        }
#line 1255 "module_qual.qualify_items.m"
        {
#line 1255 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Subst0_21, &parse_tree__module_qual__qualify_items__Subst_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 1252 "module_qual.qualify_items.m"
        {
#line 1252 "module_qual.qualify_items.m"
          MR_Word base;
#line 1252 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 1252 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_31_31));
#line 1252 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Subst_23));
#line 1252 "module_qual.qualify_items.m"
        }
#line 1252 "module_qual.qualify_items.m"
      }
#line 1250 "module_qual.qualify_items.m"
  }
#line 1245 "module_qual.qualify_items.m"
}

#line 1221 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 1221 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 1221 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 1221 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 1221 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 1221 "module_qual.qualify_items.m"
{
#line 1225 "module_qual.qualify_items.m"
  {
#line 1225 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 1225 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1225 "module_qual.qualify_items.m"
      {
#line 1225 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1225 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 1225 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 1225 "module_qual.qualify_items.m"
      }
#line 1225 "module_qual.qualify_items.m"
    else
#line 1227 "module_qual.qualify_items.m"
      {
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__PragmaVar0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__PragmaVars0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__PragmaVar_21;
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__PragmaVars_22;
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar0_19, (MR_Integer) 0)));
#line 1227 "module_qual.qualify_items.m"
        MR_String parse_tree__module_qual__qualify_items__Name_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar0_19, (MR_Integer) 1)));
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Mode0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar0_19, (MR_Integer) 2)));
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Box_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar0_19, (MR_Integer) 3)));
#line 1227 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Mode_47;

#line 759 "module_qual.qualify_items.m"
        if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Mode0_45)) == (MR_mktag((MR_Integer) 0))))
#line 759 "module_qual.qualify_items.m"
          {
#line 759 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__InstA0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 0)));
#line 759 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__InstB0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 1)));
#line 759 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__InstA_62;
#line 759 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__InstB_63;
#line 759 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_76;
#line 759 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_77;

#line 760 "module_qual.qualify_items.m"
            {
#line 760 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__InstA0_60, &parse_tree__module_qual__qualify_items__InstA_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_76, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_77);
            }
#line 761 "module_qual.qualify_items.m"
            {
#line 761 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__InstB0_61, &parse_tree__module_qual__qualify_items__InstB_63, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_76, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_77, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
            }
#line 762 "module_qual.qualify_items.m"
            {
#line 762 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__Mode_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_47, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_62));
#line 762 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_47, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_63));
#line 762 "module_qual.qualify_items.m"
            }
#line 759 "module_qual.qualify_items.m"
          }
#line 759 "module_qual.qualify_items.m"
        else
#line 764 "module_qual.qualify_items.m"
          {
#line 764 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__SymName0_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 0)));
#line 764 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Insts0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 1)));
#line 764 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Insts_66;
#line 764 "module_qual.qualify_items.m"
            MR_Integer parse_tree__module_qual__qualify_items__Arity_67;
#line 764 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Modes_68;
#line 764 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__SymName_69;
#line 764 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_70;
#line 764 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_71;
#line 764 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__V_73_73;

#line 765 "module_qual.qualify_items.m"
            {
#line 765 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Insts0_65, &parse_tree__module_qual__qualify_items__Insts_66, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_70, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_71);
            }
#line 767 "module_qual.qualify_items.m"
            {
#line 767 "module_qual.qualify_items.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_66, &parse_tree__module_qual__qualify_items__Arity_67);
            }
#line 768 "module_qual.qualify_items.m"
            {
#line 768 "module_qual.qualify_items.m"
              parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_70, &parse_tree__module_qual__qualify_items__Modes_68);
            }
#line 770 "module_qual.qualify_items.m"
            {
#line 770 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 770 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_73_73, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_64));
#line 770 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_73_73, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_67));
#line 770 "module_qual.qualify_items.m"
            }
#line 769 "module_qual.qualify_items.m"
            {
#line 769 "module_qual.qualify_items.m"
              parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Modes_68, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_73_73, &parse_tree__module_qual__qualify_items__SymName_69, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_70, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_71, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
            }
#line 771 "module_qual.qualify_items.m"
            {
#line 771 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__Mode_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_47, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_69));
#line 771 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_47, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_66));
#line 771 "module_qual.qualify_items.m"
            }
#line 764 "module_qual.qualify_items.m"
          }
#line 1243 "module_qual.qualify_items.m"
        {
#line 1243 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__PragmaVar_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Var_43));
#line 1243 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_44));
#line 1243 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar_21, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mode_47));
#line 1243 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PragmaVar_21, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Box_46));
#line 1243 "module_qual.qualify_items.m"
        }
#line 1231 "module_qual.qualify_items.m"
        {
#line 1231 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__PragmaVars0_20, &parse_tree__module_qual__qualify_items__PragmaVars_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 1227 "module_qual.qualify_items.m"
        {
#line 1227 "module_qual.qualify_items.m"
          MR_Word base;
#line 1227 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 1227 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PragmaVar_21));
#line 1227 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PragmaVars_22));
#line 1227 "module_qual.qualify_items.m"
        }
#line 1227 "module_qual.qualify_items.m"
      }
#line 1225 "module_qual.qualify_items.m"
  }
#line 1221 "module_qual.qualify_items.m"
}

#line 1045 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Context_10,
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Pragma0_11,
#line 1045 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Pragma_12,
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108,
#line 1045 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109,
#line 1045 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110,
#line 1045 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111)
#line 1045 "module_qual.qualify_items.m"
{
#line 1074 "module_qual.qualify_items.m"
  {
#line 1074 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 1074 "module_qual.qualify_items.m"
#line 1074 "module_qual.qualify_items.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Pragma0_11)) {
#line 1074 "module_qual.qualify_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1074 "module_qual.qualify_items.m"
      case (MR_Integer) 0:
#line 1074 "module_qual.qualify_items.m"
      case (MR_Integer) 1:
#line 1074 "module_qual.qualify_items.m"
        {
#line 1075 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Pragma_12 = parse_tree__module_qual__qualify_items__Pragma0_11;
#line 1074 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108;
#line 1074 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110;
#line 1074 "module_qual.qualify_items.m"
        }
#line 1074 "module_qual.qualify_items.m"
        break;
#line 1074 "module_qual.qualify_items.m"
      case (MR_Integer) 2:
#line 1102 "module_qual.qualify_items.m"
        {
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__FPInfo0_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 0)));
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Attrs0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_48, (MR_Integer) 0)));
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Name_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_48, (MR_Integer) 1)));
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_48, (MR_Integer) 2)));
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Vars0_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_48, (MR_Integer) 3)));
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Varset_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_48, (MR_Integer) 4)));
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__InstVarset_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_48, (MR_Integer) 5)));
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Impl_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo0_48, (MR_Integer) 6)));
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Vars_56;
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__UserSharing0_57;
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__UserSharing_58;
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Attrs_59;
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__FPInfo_60;
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_130_130;
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_131_131;
#line 1102 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__ErrorContext_142;

#line 1105 "module_qual.qualify_items.m"
          {
#line 1105 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__ErrorContext_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1105 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_142, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1105 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_142, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1105 "module_qual.qualify_items.m"
          }
#line 1106 "module_qual.qualify_items.m"
          {
#line 1106 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_pragma_vars_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_142, parse_tree__module_qual__qualify_items__Vars0_52, &parse_tree__module_qual__qualify_items__Vars_56, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_130_130, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_131_131);
          }
#line 1107 "module_qual.qualify_items.m"
          {
#line 1107 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__UserSharing0_57 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__module_qual__qualify_items__Attrs0_49);
          }
#line 1108 "module_qual.qualify_items.m"
          {
#line 1108 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_user_sharing_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_142, parse_tree__module_qual__qualify_items__UserSharing0_57, &parse_tree__module_qual__qualify_items__UserSharing_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_130_130, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_131_131, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
          }
#line 1110 "module_qual.qualify_items.m"
          {
#line 1110 "module_qual.qualify_items.m"
            parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__module_qual__qualify_items__UserSharing_58, parse_tree__module_qual__qualify_items__Attrs0_49, &parse_tree__module_qual__qualify_items__Attrs_59);
          }
#line 1111 "module_qual.qualify_items.m"
          {
#line 1111 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__FPInfo_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_60, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_59));
#line 1111 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_60, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_50));
#line 1111 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_60, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_51));
#line 1111 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_60, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_56));
#line 1111 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_60, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Varset_53));
#line 1111 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_60, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarset_54));
#line 1111 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPInfo_60, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Impl_55));
#line 1111 "module_qual.qualify_items.m"
          }
#line 1113 "module_qual.qualify_items.m"
          {
#line 1113 "module_qual.qualify_items.m"
            MR_Word base;
#line 1113 "module_qual.qualify_items.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1113 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__FPInfo_60));
#line 1113 "module_qual.qualify_items.m"
          }
#line 1102 "module_qual.qualify_items.m"
        }
#line 1074 "module_qual.qualify_items.m"
        break;
#line 1074 "module_qual.qualify_items.m"
      case (MR_Integer) 3:
#line 1074 "module_qual.qualify_items.m"
#line 1074 "module_qual.qualify_items.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 0)))) {
#line 1074 "module_qual.qualify_items.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 0:
#line 1143 "module_qual.qualify_items.m"
            {
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__FPEInfo0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo0_74, (MR_Integer) 1)));
#line 1143 "module_qual.qualify_items.m"
              MR_String parse_tree__module_qual__qualify_items__CFunc_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo0_74, (MR_Integer) 2)));
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_77;
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__FPEInfo_78;
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Lang_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo0_74, (MR_Integer) 0)));
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_151;
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Name_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_75, (MR_Integer) 0)));
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_75, (MR_Integer) 2)));
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Modes0_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_75, (MR_Integer) 1)));
#line 1143 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Modes_155;

#line 1147 "module_qual.qualify_items.m"
              {
#line 1147 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_151, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1147 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_151, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1147 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_151, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1147 "module_qual.qualify_items.m"
              }
#line 1148 "module_qual.qualify_items.m"
              {
#line 1148 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_151, parse_tree__module_qual__qualify_items__Modes0_154, &parse_tree__module_qual__qualify_items__Modes_155, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1150 "module_qual.qualify_items.m"
              {
#line 1150 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__PredNameModesPF_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_77, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_152));
#line 1150 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_77, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_155));
#line 1150 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_77, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_153));
#line 1150 "module_qual.qualify_items.m"
              }
#line 1151 "module_qual.qualify_items.m"
              {
#line 1151 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__FPEInfo_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo_78, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Lang_150));
#line 1151 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo_78, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_77));
#line 1151 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FPEInfo_78, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__CFunc_76));
#line 1151 "module_qual.qualify_items.m"
              }
#line 1153 "module_qual.qualify_items.m"
              {
#line 1153 "module_qual.qualify_items.m"
                MR_Word base;
#line 1153 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1153 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1153 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__FPEInfo_78));
#line 1153 "module_qual.qualify_items.m"
              }
#line 1143 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 1:
#line 1084 "module_qual.qualify_items.m"
            {
#line 1084 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__FEEInfo0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1084 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Lang_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo0_37, (MR_Integer) 0)));
#line 1084 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo0_37, (MR_Integer) 1)));
#line 1084 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Attributes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo0_37, (MR_Integer) 2)));
#line 1084 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Overrides_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo0_37, (MR_Integer) 3)));
#line 1084 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_42;
#line 1084 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor_43;
#line 1084 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__FEEInfo_44;

#line 1087 "module_qual.qualify_items.m"
              {
#line 1087 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1087 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1087 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_42, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1087 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_42, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1087 "module_qual.qualify_items.m"
              }
#line 1088 "module_qual.qualify_items.m"
              {
#line 1088 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_42, parse_tree__module_qual__qualify_items__TypeCtor0_39, &parse_tree__module_qual__qualify_items__TypeCtor_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1090 "module_qual.qualify_items.m"
              {
#line 1090 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__FEEInfo_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo_44, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Lang_38));
#line 1090 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo_44, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_43));
#line 1090 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo_44, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attributes_40));
#line 1090 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEEInfo_44, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Overrides_41));
#line 1090 "module_qual.qualify_items.m"
              }
#line 1092 "module_qual.qualify_items.m"
              {
#line 1092 "module_qual.qualify_items.m"
                MR_Word base;
#line 1092 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1092 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1092 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__FEEInfo_44));
#line 1092 "module_qual.qualify_items.m"
              }
#line 1084 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 2:
#line 1094 "module_qual.qualify_items.m"
            {
#line 1094 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__FEInfo0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1094 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Values_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo0_45, (MR_Integer) 2)));
#line 1094 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__FEInfo_47;
#line 1094 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Lang_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo0_45, (MR_Integer) 0)));
#line 1094 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo0_45, (MR_Integer) 1)));
#line 1094 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_140;
#line 1094 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor_141;

#line 1096 "module_qual.qualify_items.m"
              {
#line 1096 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1096 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_140, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1096 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_140, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1096 "module_qual.qualify_items.m"
              }
#line 1097 "module_qual.qualify_items.m"
              {
#line 1097 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_140, parse_tree__module_qual__qualify_items__TypeCtor0_139, &parse_tree__module_qual__qualify_items__TypeCtor_141, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1099 "module_qual.qualify_items.m"
              {
#line 1099 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__FEInfo_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo_47, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Lang_138));
#line 1099 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo_47, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_141));
#line 1099 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__FEInfo_47, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Values_46));
#line 1099 "module_qual.qualify_items.m"
              }
#line 1100 "module_qual.qualify_items.m"
              {
#line 1100 "module_qual.qualify_items.m"
                MR_Word base;
#line 1100 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1100 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1100 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__FEInfo_47));
#line 1100 "module_qual.qualify_items.m"
              }
#line 1094 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 3:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 5:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 6:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 7:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 8:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 9:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 10:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 11:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 12:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 14:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 16:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 17:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 18:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 21:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 22:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 23:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 24:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 27:
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 29:
#line 1074 "module_qual.qualify_items.m"
            {
#line 1075 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__Pragma_12 = parse_tree__module_qual__qualify_items__Pragma0_11;
#line 1074 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108;
#line 1074 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110;
#line 1074 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 4:
#line 1155 "module_qual.qualify_items.m"
            {
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeSpecInfo0_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredName_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_79, (MR_Integer) 0)));
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SpecializedPredName_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_79, (MR_Integer) 1)));
#line 1155 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_79, (MR_Integer) 2)));
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeModes0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_79, (MR_Integer) 4)));
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Subst0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_79, (MR_Integer) 5)));
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TVarSet_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_79, (MR_Integer) 6)));
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Items_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_79, (MR_Integer) 7)));
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeModes_87;
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Subst_88;
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeSpecInfo_89;
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_120_120;
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_121_121;
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_160;
#line 1155 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo0_79, (MR_Integer) 3)));

#line 1158 "module_qual.qualify_items.m"
              {
#line 1158 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1158 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_160, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1158 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_160, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1158 "module_qual.qualify_items.m"
              }
#line 1164 "module_qual.qualify_items.m"
              if ((parse_tree__module_qual__qualify_items__MaybeModes0_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1165 "module_qual.qualify_items.m"
                {
#line 1166 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__MaybeModes_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1165 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_120_120 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108;
#line 1165 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_121_121 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110;
#line 1165 "module_qual.qualify_items.m"
                }
#line 1164 "module_qual.qualify_items.m"
              else
#line 1160 "module_qual.qualify_items.m"
                {
#line 1160 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__Modes0_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeModes0_83, (MR_Integer) 0)));
#line 1160 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__Modes_157;

#line 1161 "module_qual.qualify_items.m"
                  {
#line 1161 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_160, parse_tree__module_qual__qualify_items__Modes0_156, &parse_tree__module_qual__qualify_items__Modes_157, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_120_120, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_121_121);
                  }
#line 1163 "module_qual.qualify_items.m"
                  {
#line 1163 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__MaybeModes_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeModes_87, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_157));
#line 1163 "module_qual.qualify_items.m"
                  }
#line 1160 "module_qual.qualify_items.m"
                }
#line 1168 "module_qual.qualify_items.m"
              {
#line 1168 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_spec_subst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_160, parse_tree__module_qual__qualify_items__Subst0_84, &parse_tree__module_qual__qualify_items__Subst_88, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_120_120, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_121_121, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1170 "module_qual.qualify_items.m"
              {
#line 1170 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__TypeSpecInfo_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_89, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredName_80));
#line 1170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_89, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SpecializedPredName_81));
#line 1170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_89, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_82));
#line 1170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_89, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_161));
#line 1170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_89, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeModes_87));
#line 1170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_89, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Subst_88));
#line 1170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_89, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__TVarSet_85));
#line 1170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeSpecInfo_89, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__Items_86));
#line 1170 "module_qual.qualify_items.m"
              }
#line 1172 "module_qual.qualify_items.m"
              {
#line 1172 "module_qual.qualify_items.m"
                MR_Word base;
#line 1172 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1172 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1172 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeSpecInfo_89));
#line 1172 "module_qual.qualify_items.m"
              }
#line 1155 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 13:
#line 1126 "module_qual.qualify_items.m"
            {
#line 1126 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TabledInfo0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1126 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__EvalMethod_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo0_66, (MR_Integer) 0)));
#line 1126 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameArityPF_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo0_66, (MR_Integer) 1)));
#line 1126 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MModes0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo0_66, (MR_Integer) 2)));
#line 1126 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MModes_72;
#line 1126 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TabledInfo_73;
#line 1126 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Attrs_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo0_66, (MR_Integer) 3)));

#line 1135 "module_qual.qualify_items.m"
              if ((parse_tree__module_qual__qualify_items__MModes0_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "module_qual.qualify_items.m"
                {
#line 1137 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__MModes_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1136 "module_qual.qualify_items.m"
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108;
#line 1136 "module_qual.qualify_items.m"
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110;
#line 1136 "module_qual.qualify_items.m"
                }
#line 1135 "module_qual.qualify_items.m"
              else
#line 1130 "module_qual.qualify_items.m"
                {
#line 1130 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__Modes0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MModes0_69, (MR_Integer) 0)));
#line 1130 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__Modes_71;
#line 1130 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_146;

#line 1131 "module_qual.qualify_items.m"
                  {
#line 1131 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__ErrorContext_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_146, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1131 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_146, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1131 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_146, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1131 "module_qual.qualify_items.m"
                  }
#line 1132 "module_qual.qualify_items.m"
                  {
#line 1132 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_146, parse_tree__module_qual__qualify_items__Modes0_70, &parse_tree__module_qual__qualify_items__Modes_71, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
                  }
#line 1134 "module_qual.qualify_items.m"
                  {
#line 1134 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__MModes_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MModes_72, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_71));
#line 1134 "module_qual.qualify_items.m"
                  }
#line 1130 "module_qual.qualify_items.m"
                }
#line 1139 "module_qual.qualify_items.m"
              {
#line 1139 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__TabledInfo_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo_73, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__EvalMethod_67));
#line 1139 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo_73, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameArityPF_68));
#line 1139 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo_73, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MModes_72));
#line 1139 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TabledInfo_73, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_149));
#line 1139 "module_qual.qualify_items.m"
              }
#line 1141 "module_qual.qualify_items.m"
              {
#line 1141 "module_qual.qualify_items.m"
                MR_Word base;
#line 1141 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1141 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 1141 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TabledInfo_73));
#line 1141 "module_qual.qualify_items.m"
              }
#line 1126 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 15:
#line 1115 "module_qual.qualify_items.m"
            {
#line 1115 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__OISUInfo0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1115 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__CreatorPreds_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo0_61, (MR_Integer) 1)));
#line 1115 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MutatorPreds_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo0_61, (MR_Integer) 2)));
#line 1115 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__DestructorPreds_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo0_61, (MR_Integer) 3)));
#line 1115 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__OISUInfo_65;
#line 1115 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo0_61, (MR_Integer) 0)));
#line 1115 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_144;
#line 1115 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeCtor_145;

#line 1119 "module_qual.qualify_items.m"
              {
#line 1119 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1119 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_144, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1119 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_144, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1119 "module_qual.qualify_items.m"
              }
#line 1120 "module_qual.qualify_items.m"
              {
#line 1120 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_144, parse_tree__module_qual__qualify_items__TypeCtor0_143, &parse_tree__module_qual__qualify_items__TypeCtor_145, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1122 "module_qual.qualify_items.m"
              {
#line 1122 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__OISUInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo_65, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_145));
#line 1122 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo_65, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__CreatorPreds_62));
#line 1122 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo_65, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MutatorPreds_63));
#line 1122 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__OISUInfo_65, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__DestructorPreds_64));
#line 1122 "module_qual.qualify_items.m"
              }
#line 1124 "module_qual.qualify_items.m"
              {
#line 1124 "module_qual.qualify_items.m"
                MR_Word base;
#line 1124 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1124 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 1124 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__OISUInfo_65));
#line 1124 "module_qual.qualify_items.m"
              }
#line 1115 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 19:
#line 1174 "module_qual.qualify_items.m"
            {
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TermInfo0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo0_90, (MR_Integer) 1)));
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Term_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo0_90, (MR_Integer) 2)));
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SymName_93;
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeList0_94;
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeList_95;
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TermInfo_96;
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_164;
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_165;
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo0_90, (MR_Integer) 0)));
#line 1174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_167;

#line 1176 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__SymName_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_166, (MR_Integer) 0)));
#line 1176 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__ModeList0_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_166, (MR_Integer) 1)));
#line 1176 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__PredOrFunc_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_166, (MR_Integer) 2)));
#line 1177 "module_qual.qualify_items.m"
              {
#line 1177 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1177 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_164, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1177 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_164, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1177 "module_qual.qualify_items.m"
              }
#line 1178 "module_qual.qualify_items.m"
              {
#line 1178 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_164, parse_tree__module_qual__qualify_items__ModeList0_94, &parse_tree__module_qual__qualify_items__ModeList_95, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1180 "module_qual.qualify_items.m"
              {
#line 1180 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__PredNameModesPF_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_167, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_93));
#line 1180 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_167, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeList_95));
#line 1180 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_167, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_165));
#line 1180 "module_qual.qualify_items.m"
              }
#line 1181 "module_qual.qualify_items.m"
              {
#line 1181 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__TermInfo_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo_96, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_167));
#line 1181 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo_96, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_91));
#line 1181 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TermInfo_96, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Term_92));
#line 1181 "module_qual.qualify_items.m"
              }
#line 1182 "module_qual.qualify_items.m"
              {
#line 1182 "module_qual.qualify_items.m"
                MR_Word base;
#line 1182 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1182 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 1182 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TermInfo_96));
#line 1182 "module_qual.qualify_items.m"
              }
#line 1174 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 20:
#line 1208 "module_qual.qualify_items.m"
            {
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Term2Info0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SuccessArgs_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info0_104, (MR_Integer) 1)));
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__FailureArgs_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info0_104, (MR_Integer) 2)));
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Term2Info_107;
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_185;
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_186;
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info0_104, (MR_Integer) 0)));
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_188;
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Term_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info0_104, (MR_Integer) 3)));
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SymName_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_187, (MR_Integer) 0)));
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeList0_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_187, (MR_Integer) 1)));
#line 1208 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeList_192;

#line 1211 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__PredOrFunc_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_187, (MR_Integer) 2)));
#line 1212 "module_qual.qualify_items.m"
              {
#line 1212 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_185, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1212 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_185, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1212 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_185, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1212 "module_qual.qualify_items.m"
              }
#line 1213 "module_qual.qualify_items.m"
              {
#line 1213 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_185, parse_tree__module_qual__qualify_items__ModeList0_191, &parse_tree__module_qual__qualify_items__ModeList_192, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1215 "module_qual.qualify_items.m"
              {
#line 1215 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__PredNameModesPF_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_188, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_190));
#line 1215 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_188, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeList_192));
#line 1215 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_188, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_186));
#line 1215 "module_qual.qualify_items.m"
              }
#line 1216 "module_qual.qualify_items.m"
              {
#line 1216 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__Term2Info_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info_107, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_188));
#line 1216 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info_107, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SuccessArgs_105));
#line 1216 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info_107, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__FailureArgs_106));
#line 1216 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Term2Info_107, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Term_189));
#line 1216 "module_qual.qualify_items.m"
              }
#line 1218 "module_qual.qualify_items.m"
              {
#line 1218 "module_qual.qualify_items.m"
                MR_Word base;
#line 1218 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1218 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1218 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Term2Info_107));
#line 1218 "module_qual.qualify_items.m"
              }
#line 1208 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 25:
#line 1184 "module_qual.qualify_items.m"
            {
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SharingInfo0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Types_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo0_97, (MR_Integer) 2)));
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Sharing_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo0_97, (MR_Integer) 3)));
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SharingInfo_100;
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_168;
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_169;
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Vars_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo0_97, (MR_Integer) 1)));
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo0_97, (MR_Integer) 0)));
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_172;
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SymName_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_171, (MR_Integer) 0)));
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeList0_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_171, (MR_Integer) 1)));
#line 1184 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeList_175;

#line 1187 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__PredOrFunc_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_171, (MR_Integer) 2)));
#line 1188 "module_qual.qualify_items.m"
              {
#line 1188 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1188 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_168, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1188 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_168, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1188 "module_qual.qualify_items.m"
              }
#line 1189 "module_qual.qualify_items.m"
              {
#line 1189 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_168, parse_tree__module_qual__qualify_items__ModeList0_174, &parse_tree__module_qual__qualify_items__ModeList_175, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1191 "module_qual.qualify_items.m"
              {
#line 1191 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__PredNameModesPF_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_172, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_173));
#line 1191 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_172, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeList_175));
#line 1191 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_172, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_169));
#line 1191 "module_qual.qualify_items.m"
              }
#line 1192 "module_qual.qualify_items.m"
              {
#line 1192 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__SharingInfo_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo_100, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_172));
#line 1192 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo_100, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_170));
#line 1192 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo_100, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_98));
#line 1192 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SharingInfo_100, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Sharing_99));
#line 1192 "module_qual.qualify_items.m"
              }
#line 1194 "module_qual.qualify_items.m"
              {
#line 1194 "module_qual.qualify_items.m"
                MR_Word base;
#line 1194 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1194 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 25));
#line 1194 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SharingInfo_100));
#line 1194 "module_qual.qualify_items.m"
              }
#line 1184 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 26:
#line 1196 "module_qual.qualify_items.m"
            {
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ReuseInfo0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Pragma0_11, (MR_Integer) 1)));
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ReuseTuples_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo0_101, (MR_Integer) 3)));
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ReuseInfo_103;
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_176;
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_177;
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Vars_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo0_101, (MR_Integer) 1)));
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF0_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo0_101, (MR_Integer) 0)));
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredNameModesPF_180;
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SymName_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_179, (MR_Integer) 0)));
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeList0_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_179, (MR_Integer) 1)));
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeList_183;
#line 1196 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Types_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo0_101, (MR_Integer) 2)));

#line 1199 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__PredOrFunc_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF0_179, (MR_Integer) 2)));
#line 1200 "module_qual.qualify_items.m"
              {
#line 1200 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1200 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_10));
#line 1200 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma0_11));
#line 1200 "module_qual.qualify_items.m"
              }
#line 1201 "module_qual.qualify_items.m"
              {
#line 1201 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_176, parse_tree__module_qual__qualify_items__ModeList0_182, &parse_tree__module_qual__qualify_items__ModeList_183, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111);
              }
#line 1203 "module_qual.qualify_items.m"
              {
#line 1203 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__PredNameModesPF_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_180, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_181));
#line 1203 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_180, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeList_183));
#line 1203 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__PredNameModesPF_180, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_177));
#line 1203 "module_qual.qualify_items.m"
              }
#line 1204 "module_qual.qualify_items.m"
              {
#line 1204 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ReuseInfo_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo_103, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredNameModesPF_180));
#line 1204 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo_103, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_178));
#line 1204 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo_103, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_184));
#line 1204 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ReuseInfo_103, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__ReuseTuples_102));
#line 1204 "module_qual.qualify_items.m"
              }
#line 1206 "module_qual.qualify_items.m"
              {
#line 1206 "module_qual.qualify_items.m"
                MR_Word base;
#line 1206 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Pragma_12 = base;
#line 1206 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 26));
#line 1206 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ReuseInfo_103));
#line 1206 "module_qual.qualify_items.m"
              }
#line 1196 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
          case (MR_Integer) 28:
#line 1077 "module_qual.qualify_items.m"
            {
#line 1082 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__Pragma_12 = parse_tree__module_qual__qualify_items__Pragma0_11;
#line 1077 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_109 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_108;
#line 1077 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_111 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_110;
#line 1077 "module_qual.qualify_items.m"
            }
#line 1074 "module_qual.qualify_items.m"
            break;
#line 1074 "module_qual.qualify_items.m"
        }
#line 1074 "module_qual.qualify_items.m"
        break;
#line 1074 "module_qual.qualify_items.m"
    }
#line 1074 "module_qual.qualify_items.m"
  }
#line 1045 "module_qual.qualify_items.m"
}

#line 1025 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(
#line 1025 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_8,
#line 1025 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ItemMutable0_9,
#line 1025 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__ItemMutable_10,
#line 1025 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_30,
#line 1025 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_31,
#line 1025 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_32,
#line 1025 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33)
#line 1025 "module_qual.qualify_items.m"
{
#line 1029 "module_qual.qualify_items.m"
  {
#line 1029 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
#line 1029 "module_qual.qualify_items.m"
    MR_String parse_tree__module_qual__qualify_items__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 0)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__OrigType0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 1)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Type0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 2)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__OrigInst0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 3)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Inst0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 4)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__InitTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 5)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Attrs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 6)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Varset_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 7)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 8)));
#line 1029 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__SeqNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemMutable0_9, (MR_Integer) 9)));
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__ErrorContext_23;
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__OrigType_24;
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Type_26;
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__OrigInst_27;
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Inst_29;
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34;
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_36;
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_37;
#line 1029 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_38;
#line 1033 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__V_25_25;
#line 1035 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__V_28_28;

#line 1032 "module_qual.qualify_items.m"
    {
#line 1032 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__ErrorContext_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1032 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_23, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_21));
#line 1032 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_23, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_13));
#line 1032 "module_qual.qualify_items.m"
    }
#line 1033 "module_qual.qualify_items.m"
    {
#line 1033 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_23, parse_tree__module_qual__qualify_items__OrigType0_14, &parse_tree__module_qual__qualify_items__OrigType_24, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_30, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_qual__qualify_items__V_25_25);
    }
#line 1034 "module_qual.qualify_items.m"
    {
#line 1034 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_23, parse_tree__module_qual__qualify_items__Type0_15, &parse_tree__module_qual__qualify_items__Type_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_32, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_37);
    }
#line 1035 "module_qual.qualify_items.m"
    {
#line 1035 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_23, parse_tree__module_qual__qualify_items__OrigInst0_16, &parse_tree__module_qual__qualify_items__OrigInst_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_36, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_qual__qualify_items__V_28_28);
    }
#line 1036 "module_qual.qualify_items.m"
    {
#line 1036 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_23, parse_tree__module_qual__qualify_items__Inst0_17, &parse_tree__module_qual__qualify_items__Inst_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_31, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33);
    }
#line 1037 "module_qual.qualify_items.m"
    {
#line 1037 "module_qual.qualify_items.m"
      MR_Word base;
#line 1037 "module_qual.qualify_items.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "module_qual.qualify_items.m"
      *parse_tree__module_qual__qualify_items__ItemMutable_10 = base;
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_13));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__OrigType_24));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_26));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__OrigInst_27));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Inst_29));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__InitTerm_18));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_19));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__Varset_20));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_21));
#line 1037 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_22));
#line 1037 "module_qual.qualify_items.m"
    }
#line 1029 "module_qual.qualify_items.m"
  }
#line 1025 "module_qual.qualify_items.m"
}

#line 986 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(
#line 986 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__DefaultModuleName_4,
#line 986 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InstanceMethod0_5,
#line 986 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__InstanceMethod_6)
#line 986 "module_qual.qualify_items.m"
{
#line 989 "module_qual.qualify_items.m"
  {
#line 989 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
#line 989 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 0)));
#line 989 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__MethodSymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 1)));
#line 989 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__InstanceProcDef_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 2)));
#line 989 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 3)));
#line 989 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__DeclContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstanceMethod0_5, (MR_Integer) 4)));
#line 989 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__MethodSymName_13;

#line 997 "module_qual.qualify_items.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__MethodSymName0_8)) == (MR_mktag((MR_Integer) 1))))
#line 998 "module_qual.qualify_items.m"
      {
#line 998 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MethodModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName0_8, (MR_Integer) 0)));
#line 998 "module_qual.qualify_items.m"
        MR_String parse_tree__module_qual__qualify_items__MethodBaseName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName0_8, (MR_Integer) 1)));

#line 1000 "module_qual.qualify_items.m"
        {
#line 1000 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(parse_tree__module_qual__qualify_items__MethodModuleName_14, parse_tree__module_qual__qualify_items__DefaultModuleName_4);
        }
#line 999 "module_qual.qualify_items.m"
        if (parse_tree__module_qual__qualify_items__succeeded)
#line 1002 "module_qual.qualify_items.m"
          {
#line 1002 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__MethodSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName_13, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__DefaultModuleName_4));
#line 1002 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName_13, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__MethodBaseName_15));
#line 1002 "module_qual.qualify_items.m"
          }
#line 999 "module_qual.qualify_items.m"
        else
#line 1014 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__MethodSymName_13 = parse_tree__module_qual__qualify_items__MethodSymName0_8;
#line 998 "module_qual.qualify_items.m"
      }
#line 997 "module_qual.qualify_items.m"
    else
#line 995 "module_qual.qualify_items.m"
      {
#line 995 "module_qual.qualify_items.m"
        MR_String parse_tree__module_qual__qualify_items__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__MethodSymName0_8, (MR_Integer) 0)));

#line 996 "module_qual.qualify_items.m"
        {
#line 996 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__MethodSymName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName_13, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__DefaultModuleName_4));
#line 996 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MethodSymName_13, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_12));
#line 996 "module_qual.qualify_items.m"
        }
#line 995 "module_qual.qualify_items.m"
      }
#line 1017 "module_qual.qualify_items.m"
    {
#line 1017 "module_qual.qualify_items.m"
      MR_Word base;
#line 1017 "module_qual.qualify_items.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "module_qual.qualify_items.m"
      *parse_tree__module_qual__qualify_items__InstanceMethod_6 = base;
#line 1017 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_7));
#line 1017 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__MethodSymName_13));
#line 1017 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstanceProcDef_9));
#line 1017 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_10));
#line 1017 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__DeclContext_11));
#line 1017 "module_qual.qualify_items.m"
    }
#line 989 "module_qual.qualify_items.m"
  }
#line 986 "module_qual.qualify_items.m"
}

#line 980 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1(
#line 980 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
#line 980 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
#line 980 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2)
#line 980 "module_qual.qualify_items.m"
{
#line 980 "module_qual.qualify_items.m"
  {
#line 980 "module_qual.qualify_items.m"
    MR_Box parse_tree__module_qual__qualify_items__closure = parse_tree__module_qual__qualify_items__closure_arg;
#line 980 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__conv0_InstanceMethod_6;

#line 980 "module_qual.qualify_items.m"
    {
#line 980 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_instance_method_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_1), &parse_tree__module_qual__qualify_items__conv0_InstanceMethod_6);
    }
#line 980 "module_qual.qualify_items.m"
    *parse_tree__module_qual__qualify_items__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv0_InstanceMethod_6));
#line 980 "module_qual.qualify_items.m"
  }
#line 980 "module_qual.qualify_items.m"
}

#line 964 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(
#line 964 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ClassName_4,
#line 964 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InstanceBody0_5,
#line 964 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__InstanceBody_6)
#line 964 "module_qual.qualify_items.m"
{
#line 969 "module_qual.qualify_items.m"
  {
#line 969 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 969 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__InstanceBody0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 970 "module_qual.qualify_items.m"
      *parse_tree__module_qual__qualify_items__InstanceBody_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 969 "module_qual.qualify_items.m"
    else
#line 972 "module_qual.qualify_items.m"
      {
#line 972 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Methods0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__InstanceBody0_5, (MR_Integer) 0)));

#line 976 "module_qual.qualify_items.m"
        if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__ClassName_4)) == (MR_mktag((MR_Integer) 1))))
#line 977 "module_qual.qualify_items.m"
          {
#line 977 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__TypeCtorInfo_18_18;
#line 977 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__DefaultModuleName_11;
#line 977 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Methods_12;
#line 977 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__V_15_15;

#line 978 "module_qual.qualify_items.m"
            {
#line 978 "module_qual.qualify_items.m"
              mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(parse_tree__module_qual__qualify_items__ClassName_4, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_3[3], &parse_tree__module_qual__qualify_items__DefaultModuleName_11);
            }
#line 980 "module_qual.qualify_items.m"
            {
#line 980 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 980 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_15_15, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_6[0]));
#line 980 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_15_15, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0_1));
#line 980 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 980 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_15_15, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__DefaultModuleName_11));
#line 980 "module_qual.qualify_items.m"
            }
#line 2981 "parse_tree.module_qual.qualify_items.c"
            parse_tree__module_qual__qualify_items__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0;
#line 980 "module_qual.qualify_items.m"
            {
#line 980 "module_qual.qualify_items.m"
              mercury__list__map_3_p_0(parse_tree__module_qual__qualify_items__TypeCtorInfo_18_18, parse_tree__module_qual__qualify_items__TypeCtorInfo_18_18, parse_tree__module_qual__qualify_items__V_15_15, parse_tree__module_qual__qualify_items__Methods0_7, &parse_tree__module_qual__qualify_items__Methods_12);
            }
#line 982 "module_qual.qualify_items.m"
            {
#line 982 "module_qual.qualify_items.m"
              MR_Word base;
#line 982 "module_qual.qualify_items.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 982 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__InstanceBody_6 = base;
#line 982 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Methods_12));
#line 982 "module_qual.qualify_items.m"
            }
#line 977 "module_qual.qualify_items.m"
          }
#line 976 "module_qual.qualify_items.m"
        else
#line 975 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__InstanceBody_6 = parse_tree__module_qual__qualify_items__InstanceBody0_5;
#line 972 "module_qual.qualify_items.m"
      }
#line 969 "module_qual.qualify_items.m"
  }
#line 964 "module_qual.qualify_items.m"
}

#line 898 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Method0_11,
#line 898 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Method_12,
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_39,
#line 898 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40,
#line 898 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_41,
#line 898 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42)
#line 898 "module_qual.qualify_items.m"
{
#line 909 "module_qual.qualify_items.m"
  {
#line 909 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 909 "module_qual.qualify_items.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Method0_11)) == (MR_mktag((MR_Integer) 0))))
#line 909 "module_qual.qualify_items.m"
      {
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 0)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 1)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypesAndModes0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 2)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithType0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 3)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 4)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 5)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypeVarset_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 6)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstVarset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 7)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ExistQVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 8)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 9)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Constraints0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 10)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 11)));
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypesAndModes_27;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_28;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Constraints_29;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithType_32;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst_35;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48;
#line 909 "module_qual.qualify_items.m"
        MR_String parse_tree__module_qual__qualify_items__V_49_49;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_51_51;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__UnivCs0_78;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ExistCs0_79;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__UnivCs_80;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ExistCs_81;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_82;
#line 909 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_83;

#line 911 "module_qual.qualify_items.m"
        {
#line 911 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__TypesAndModes0_17, &parse_tree__module_qual__qualify_items__TypesAndModes_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_39, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_41, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48);
        }
#line 914 "module_qual.qualify_items.m"
        {
#line 914 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_49_49 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qualify_items__Name_15);
        }
#line 913 "module_qual.qualify_items.m"
        {
#line 913 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__ConstraintErrorContext_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 913 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_26));
#line 913 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_16));
#line 913 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_49_49));
#line 913 "module_qual.qualify_items.m"
        }
#line 832 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__UnivCs0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints0_25, (MR_Integer) 0)));
#line 832 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__ExistCs0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints0_25, (MR_Integer) 1)));
#line 834 "module_qual.qualify_items.m"
        {
#line 834 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, parse_tree__module_qual__qualify_items__UnivCs0_78, &parse_tree__module_qual__qualify_items__UnivCs_80, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_82, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_83);
        }
#line 836 "module_qual.qualify_items.m"
        {
#line 836 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ConstraintErrorContext_28, parse_tree__module_qual__qualify_items__ExistCs0_79, &parse_tree__module_qual__qualify_items__ExistCs_81, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_82, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_83, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_51_51);
        }
#line 838 "module_qual.qualify_items.m"
        {
#line 838 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__Constraints_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 838 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints_29, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__UnivCs_80));
#line 838 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints_29, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistCs_81));
#line 838 "module_qual.qualify_items.m"
        }
#line 923 "module_qual.qualify_items.m"
        if ((parse_tree__module_qual__qualify_items__MaybeWithType0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 924 "module_qual.qualify_items.m"
          {
#line 925 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__MaybeWithType_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50;
#line 924 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_51_51;
#line 924 "module_qual.qualify_items.m"
          }
#line 923 "module_qual.qualify_items.m"
        else
#line 918 "module_qual.qualify_items.m"
          {
#line 918 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__WithType0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithType0_18, (MR_Integer) 0)));
#line 918 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__WithType_31;

#line 920 "module_qual.qualify_items.m"
            {
#line 920 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__WithType0_30, &parse_tree__module_qual__qualify_items__WithType_31, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_51_51, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53);
            }
#line 922 "module_qual.qualify_items.m"
            {
#line 922 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__MaybeWithType_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 922 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithType_32, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithType_31));
#line 922 "module_qual.qualify_items.m"
            }
#line 918 "module_qual.qualify_items.m"
          }
#line 933 "module_qual.qualify_items.m"
        if ((parse_tree__module_qual__qualify_items__MaybeWithInst0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "module_qual.qualify_items.m"
          {
#line 935 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__MaybeWithInst_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52;
#line 934 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53;
#line 934 "module_qual.qualify_items.m"
          }
#line 933 "module_qual.qualify_items.m"
        else
#line 928 "module_qual.qualify_items.m"
          {
#line 928 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__WithInst0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst0_19, (MR_Integer) 0)));
#line 928 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__WithInst_34;

#line 930 "module_qual.qualify_items.m"
            {
#line 930 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__WithInst0_33, &parse_tree__module_qual__qualify_items__WithInst_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_52_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_53_53, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42);
            }
#line 932 "module_qual.qualify_items.m"
            {
#line 932 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__MaybeWithInst_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 932 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst_35, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithInst_34));
#line 932 "module_qual.qualify_items.m"
            }
#line 928 "module_qual.qualify_items.m"
          }
#line 937 "module_qual.qualify_items.m"
        {
#line 937 "module_qual.qualify_items.m"
          MR_Word base;
#line 937 "module_qual.qualify_items.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 937 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Method_12 = base;
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_15));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_16));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypesAndModes_27));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithType_32));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithInst_35));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDetism_20));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeVarset_21));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarset_22));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistQVars_23));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__module_qual__qualify_items__Purity_24));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_29));
#line 937 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_26));
#line 937 "module_qual.qualify_items.m"
        }
#line 909 "module_qual.qualify_items.m"
      }
#line 909 "module_qual.qualify_items.m"
    else
#line 943 "module_qual.qualify_items.m"
      {
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 2)));
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Varset_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 5)));
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes_38;
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43;
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44;
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Name_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 1)));
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 0)));
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 3)));
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeDetism_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 4)));
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Method0_11, (MR_Integer) 6)));
#line 943 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst_67;

#line 944 "module_qual.qualify_items.m"
        {
#line 944 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Modes0_36, &parse_tree__module_qual__qualify_items__Modes_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_39, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_41, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44);
        }
#line 951 "module_qual.qualify_items.m"
        if ((parse_tree__module_qual__qualify_items__MaybeWithInst0_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 952 "module_qual.qualify_items.m"
          {
#line 953 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__MaybeWithInst_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 952 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43;
#line 952 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44;
#line 952 "module_qual.qualify_items.m"
          }
#line 951 "module_qual.qualify_items.m"
        else
#line 946 "module_qual.qualify_items.m"
          {
#line 946 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__WithInst0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst0_62, (MR_Integer) 0)));
#line 946 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__WithInst_57;

#line 948 "module_qual.qualify_items.m"
            {
#line 948 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__WithInst0_56, &parse_tree__module_qual__qualify_items__WithInst_57, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_40, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_42);
            }
#line 950 "module_qual.qualify_items.m"
            {
#line 950 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__MaybeWithInst_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 950 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst_67, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithInst_57));
#line 950 "module_qual.qualify_items.m"
            }
#line 946 "module_qual.qualify_items.m"
          }
#line 955 "module_qual.qualify_items.m"
        {
#line 955 "module_qual.qualify_items.m"
          MR_Word base;
#line 955 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 955 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Method_12 = base;
#line 955 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_61));
#line 955 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_60));
#line 955 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_38));
#line 955 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithInst_67));
#line 955 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDetism_63));
#line 955 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Varset_37));
#line 955 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_64));
#line 955 "module_qual.qualify_items.m"
        }
#line 943 "module_qual.qualify_items.m"
      }
#line 909 "module_qual.qualify_items.m"
  }
#line 898 "module_qual.qualify_items.m"
}

#line 884 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 884 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 884 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 884 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 884 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 884 "module_qual.qualify_items.m"
{
#line 889 "module_qual.qualify_items.m"
  {
#line 889 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 889 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 889 "module_qual.qualify_items.m"
      {
#line 889 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 889 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 889 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 889 "module_qual.qualify_items.m"
      }
#line 889 "module_qual.qualify_items.m"
    else
#line 891 "module_qual.qualify_items.m"
      {
#line 891 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Method0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 891 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Methods0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 891 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Method_21;
#line 891 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Methods_22;
#line 891 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 891 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

#line 893 "module_qual.qualify_items.m"
        {
#line 893 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_class_method_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Method0_19, &parse_tree__module_qual__qualify_items__Method_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
#line 895 "module_qual.qualify_items.m"
        {
#line 895 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Methods0_20, &parse_tree__module_qual__qualify_items__Methods_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 891 "module_qual.qualify_items.m"
        {
#line 891 "module_qual.qualify_items.m"
          MR_Word base;
#line 891 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 891 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Method_21));
#line 891 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Methods_22));
#line 891 "module_qual.qualify_items.m"
        }
#line 891 "module_qual.qualify_items.m"
      }
#line 889 "module_qual.qualify_items.m"
  }
#line 884 "module_qual.qualify_items.m"
}

#line 873 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Class0_11,
#line 873 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Name_12,
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_16,
#line 873 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_17,
#line 873 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_18,
#line 873 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_19)
#line 873 "module_qual.qualify_items.m"
{
#line 877 "module_qual.qualify_items.m"
  {
#line 877 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
#line 877 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__ClassIdSet_15;

#line 878 "module_qual.qualify_items.m"
    {
#line 878 "module_qual.qualify_items.m"
      parse_tree__module_qual__mq_info_get_classes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_16, &parse_tree__module_qual__qualify_items__ClassIdSet_15);
    }
#line 879 "module_qual.qualify_items.m"
    {
#line 879 "module_qual.qualify_items.m"
      parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__ClassIdSet_15, (MR_Integer) 3, parse_tree__module_qual__qualify_items__Class0_11, parse_tree__module_qual__qualify_items__Name_12, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_19);
    }
#line 877 "module_qual.qualify_items.m"
  }
#line 873 "module_qual.qualify_items.m"
}

#line 840 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 840 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 840 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 840 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 840 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 840 "module_qual.qualify_items.m"
{
#line 846 "module_qual.qualify_items.m"
  {
#line 846 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 846 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 846 "module_qual.qualify_items.m"
      {
#line 847 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 847 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 846 "module_qual.qualify_items.m"
      }
#line 846 "module_qual.qualify_items.m"
    else
#line 850 "module_qual.qualify_items.m"
      {
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Constraint0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Constraints0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Constraint_21;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Constraints_22;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ClassName0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraint0_19, (MR_Integer) 0)));
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Types0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraint0_19, (MR_Integer) 1)));
#line 850 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__Arity_45;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__OutsideContext_46;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ClassName_47;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ErrorContext_48;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Types_49;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_50_50;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_51;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_52;
#line 850 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ClassIdSet_66;

#line 864 "module_qual.qualify_items.m"
        {
#line 864 "module_qual.qualify_items.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__module_qual__qualify_items__Types0_44, &parse_tree__module_qual__qualify_items__Arity_45);
        }
#line 865 "module_qual.qualify_items.m"
        {
#line 865 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__OutsideContext_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__OutsideContext_46, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadVar__2_2));
#line 865 "module_qual.qualify_items.m"
        }
#line 867 "module_qual.qualify_items.m"
        {
#line 867 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 867 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_50_50, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ClassName0_43));
#line 867 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_50_50, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_45));
#line 867 "module_qual.qualify_items.m"
        }
#line 878 "module_qual.qualify_items.m"
        {
#line 878 "module_qual.qualify_items.m"
          parse_tree__module_qual__mq_info_get_classes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__ClassIdSet_66);
        }
#line 879 "module_qual.qualify_items.m"
        {
#line 879 "module_qual.qualify_items.m"
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__OutsideContext_46, parse_tree__module_qual__qualify_items__ClassIdSet_66, (MR_Integer) 3, parse_tree__module_qual__qualify_items__V_50_50, &parse_tree__module_qual__qualify_items__ClassName_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_51, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_52);
        }
#line 868 "module_qual.qualify_items.m"
        {
#line 868 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__ErrorContext_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 868 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 868 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_48, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ClassName0_43));
#line 868 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_48, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_45));
#line 868 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_48, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadVar__2_2));
#line 868 "module_qual.qualify_items.m"
        }
#line 870 "module_qual.qualify_items.m"
        {
#line 870 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_48, parse_tree__module_qual__qualify_items__Types0_44, &parse_tree__module_qual__qualify_items__Types_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_51, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_52, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
#line 871 "module_qual.qualify_items.m"
        {
#line 871 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__Constraint_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 871 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraint_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ClassName_47));
#line 871 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraint_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_49));
#line 871 "module_qual.qualify_items.m"
        }
#line 853 "module_qual.qualify_items.m"
        {
#line 853 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Constraints0_20, &parse_tree__module_qual__qualify_items__Constraints_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 849 "module_qual.qualify_items.m"
        {
#line 849 "module_qual.qualify_items.m"
          MR_Word base;
#line 849 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 849 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraint_21));
#line 849 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_22));
#line 849 "module_qual.qualify_items.m"
        }
#line 850 "module_qual.qualify_items.m"
      }
#line 846 "module_qual.qualify_items.m"
  }
#line 840 "module_qual.qualify_items.m"
}

#line 825 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_10,
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Constraints0_11,
#line 825 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Constraints_12,
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_19,
#line 825 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_20,
#line 825 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_21,
#line 825 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_22)
#line 825 "module_qual.qualify_items.m"
{
#line 831 "module_qual.qualify_items.m"
  {
#line 831 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
#line 831 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__UnivCs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints0_11, (MR_Integer) 0)));
#line 831 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__ExistCs0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Constraints0_11, (MR_Integer) 1)));
#line 831 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__UnivCs_17;
#line 831 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__ExistCs_18;
#line 831 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_23;
#line 831 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_24;

#line 834 "module_qual.qualify_items.m"
    {
#line 834 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ConstraintErrorContext_10, parse_tree__module_qual__qualify_items__UnivCs0_15, &parse_tree__module_qual__qualify_items__UnivCs_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_19, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_21, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_24);
    }
#line 836 "module_qual.qualify_items.m"
    {
#line 836 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ConstraintErrorContext_10, parse_tree__module_qual__qualify_items__ExistCs0_16, &parse_tree__module_qual__qualify_items__ExistCs_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_24, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_22);
    }
#line 838 "module_qual.qualify_items.m"
    {
#line 838 "module_qual.qualify_items.m"
      MR_Word base;
#line 838 "module_qual.qualify_items.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 838 "module_qual.qualify_items.m"
      *parse_tree__module_qual__qualify_items__Constraints_12 = base;
#line 838 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__UnivCs_17));
#line 838 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistCs_18));
#line 838 "module_qual.qualify_items.m"
    }
#line 831 "module_qual.qualify_items.m"
  }
#line 825 "module_qual.qualify_items.m"
}

#line 788 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 788 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 788 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 788 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 788 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 788 "module_qual.qualify_items.m"
{
#line 793 "module_qual.qualify_items.m"
  {
#line 793 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 793 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "module_qual.qualify_items.m"
      {
#line 793 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 793 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 793 "module_qual.qualify_items.m"
      }
#line 793 "module_qual.qualify_items.m"
    else
#line 796 "module_qual.qualify_items.m"
      {
#line 796 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypeAndMode0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 796 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypesAndModes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 796 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypeAndMode_21;
#line 796 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypesAndModes_22;
#line 796 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 796 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

#line 809 "module_qual.qualify_items.m"
        if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__TypeAndMode0_19)) == (MR_mktag((MR_Integer) 1))))
#line 813 "module_qual.qualify_items.m"
          {
#line 813 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Mode0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeAndMode0_19, (MR_Integer) 1)));
#line 813 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Mode_46;
#line 813 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_47;
#line 813 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_48;
#line 813 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Type0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeAndMode0_19, (MR_Integer) 0)));
#line 813 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Type_54;

#line 814 "module_qual.qualify_items.m"
            {
#line 814 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_53, &parse_tree__module_qual__qualify_items__Type_54, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_48);
            }
#line 759 "module_qual.qualify_items.m"
            if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Mode0_45)) == (MR_mktag((MR_Integer) 0))))
#line 759 "module_qual.qualify_items.m"
              {
#line 759 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__InstA0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 0)));
#line 759 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__InstB0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 1)));
#line 759 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__InstA_67;
#line 759 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__InstB_68;
#line 759 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_81;
#line 759 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_82;

#line 760 "module_qual.qualify_items.m"
                {
#line 760 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__InstA0_65, &parse_tree__module_qual__qualify_items__InstA_67, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_47, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_81, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_48, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_82);
                }
#line 761 "module_qual.qualify_items.m"
                {
#line 761 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__InstB0_66, &parse_tree__module_qual__qualify_items__InstB_68, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_81, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_82, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
                }
#line 762 "module_qual.qualify_items.m"
                {
#line 762 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__Mode_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "module_qual.qualify_items.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_46, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_67));
#line 762 "module_qual.qualify_items.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_46, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_68));
#line 762 "module_qual.qualify_items.m"
                }
#line 759 "module_qual.qualify_items.m"
              }
#line 759 "module_qual.qualify_items.m"
            else
#line 764 "module_qual.qualify_items.m"
              {
#line 764 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__SymName0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 0)));
#line 764 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__Insts0_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_45, (MR_Integer) 1)));
#line 764 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__Insts_71;
#line 764 "module_qual.qualify_items.m"
                MR_Integer parse_tree__module_qual__qualify_items__Arity_72;
#line 764 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__Modes_73;
#line 764 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__SymName_74;
#line 764 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_75;
#line 764 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_76;
#line 764 "module_qual.qualify_items.m"
                MR_Word parse_tree__module_qual__qualify_items__V_78_78;

#line 765 "module_qual.qualify_items.m"
                {
#line 765 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Insts0_70, &parse_tree__module_qual__qualify_items__Insts_71, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_23_47, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_75, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_24_48, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_76);
                }
#line 767 "module_qual.qualify_items.m"
                {
#line 767 "module_qual.qualify_items.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_71, &parse_tree__module_qual__qualify_items__Arity_72);
                }
#line 768 "module_qual.qualify_items.m"
                {
#line 768 "module_qual.qualify_items.m"
                  parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_75, &parse_tree__module_qual__qualify_items__Modes_73);
                }
#line 770 "module_qual.qualify_items.m"
                {
#line 770 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 770 "module_qual.qualify_items.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_78_78, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_69));
#line 770 "module_qual.qualify_items.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_78_78, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_72));
#line 770 "module_qual.qualify_items.m"
                }
#line 769 "module_qual.qualify_items.m"
                {
#line 769 "module_qual.qualify_items.m"
                  parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Modes_73, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_78_78, &parse_tree__module_qual__qualify_items__SymName_74, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_75, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_76, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
                }
#line 771 "module_qual.qualify_items.m"
                {
#line 771 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__Mode_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "module_qual.qualify_items.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_46, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_74));
#line 771 "module_qual.qualify_items.m"
                  MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_46, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_71));
#line 771 "module_qual.qualify_items.m"
                }
#line 764 "module_qual.qualify_items.m"
              }
#line 816 "module_qual.qualify_items.m"
            {
#line 816 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__TypeAndMode_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeAndMode_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_54));
#line 816 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeAndMode_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mode_46));
#line 816 "module_qual.qualify_items.m"
            }
#line 813 "module_qual.qualify_items.m"
          }
#line 809 "module_qual.qualify_items.m"
        else
#line 809 "module_qual.qualify_items.m"
          {
#line 809 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Type0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeAndMode0_19, (MR_Integer) 0)));
#line 809 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__Type_44;

#line 810 "module_qual.qualify_items.m"
            {
#line 810 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_43, &parse_tree__module_qual__qualify_items__Type_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
            }
#line 811 "module_qual.qualify_items.m"
            {
#line 811 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__TypeAndMode_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 811 "module_qual.qualify_items.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeAndMode_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_44));
#line 811 "module_qual.qualify_items.m"
            }
#line 809 "module_qual.qualify_items.m"
          }
#line 799 "module_qual.qualify_items.m"
        {
#line 799 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__TypesAndModes0_20, &parse_tree__module_qual__qualify_items__TypesAndModes_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 795 "module_qual.qualify_items.m"
        {
#line 795 "module_qual.qualify_items.m"
          MR_Word base;
#line 795 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 795 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeAndMode_21));
#line 795 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypesAndModes_22));
#line 795 "module_qual.qualify_items.m"
        }
#line 796 "module_qual.qualify_items.m"
      }
#line 793 "module_qual.qualify_items.m"
  }
#line 788 "module_qual.qualify_items.m"
}

#line 753 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Mode0_11,
#line 753 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Mode_12,
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_25,
#line 753 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26,
#line 753 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_27,
#line 753 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28)
#line 753 "module_qual.qualify_items.m"
{
#line 759 "module_qual.qualify_items.m"
  {
#line 759 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 759 "module_qual.qualify_items.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Mode0_11)) == (MR_mktag((MR_Integer) 0))))
#line 759 "module_qual.qualify_items.m"
      {
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstA0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 0)));
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstB0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 1)));
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstA_17;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstB_18;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36;

#line 760 "module_qual.qualify_items.m"
        {
#line 760 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstA0_15, &parse_tree__module_qual__qualify_items__InstA_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_25, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_27, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36);
        }
#line 761 "module_qual.qualify_items.m"
        {
#line 761 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstB0_16, &parse_tree__module_qual__qualify_items__InstB_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28);
        }
#line 762 "module_qual.qualify_items.m"
        {
#line 762 "module_qual.qualify_items.m"
          MR_Word base;
#line 762 "module_qual.qualify_items.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Mode_12 = base;
#line 762 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_17));
#line 762 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_18));
#line 762 "module_qual.qualify_items.m"
        }
#line 759 "module_qual.qualify_items.m"
      }
#line 759 "module_qual.qualify_items.m"
    else
#line 764 "module_qual.qualify_items.m"
      {
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SymName0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 0)));
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Insts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 1)));
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Insts_21;
#line 764 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__Arity_22;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes_23;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SymName_24;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_32_32;

#line 765 "module_qual.qualify_items.m"
        {
#line 765 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Insts0_20, &parse_tree__module_qual__qualify_items__Insts_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_25, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_27, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
#line 767 "module_qual.qualify_items.m"
        {
#line 767 "module_qual.qualify_items.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_21, &parse_tree__module_qual__qualify_items__Arity_22);
        }
#line 768 "module_qual.qualify_items.m"
        {
#line 768 "module_qual.qualify_items.m"
          parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, &parse_tree__module_qual__qualify_items__Modes_23);
        }
#line 770 "module_qual.qualify_items.m"
        {
#line 770 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 770 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_32_32, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_19));
#line 770 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_32_32, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_22));
#line 770 "module_qual.qualify_items.m"
        }
#line 769 "module_qual.qualify_items.m"
        {
#line 769 "module_qual.qualify_items.m"
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Modes_23, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_32_32, &parse_tree__module_qual__qualify_items__SymName_24, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28);
        }
#line 771 "module_qual.qualify_items.m"
        {
#line 771 "module_qual.qualify_items.m"
          MR_Word base;
#line 771 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Mode_12 = base;
#line 771 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_24));
#line 771 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_21));
#line 771 "module_qual.qualify_items.m"
        }
#line 764 "module_qual.qualify_items.m"
      }
#line 759 "module_qual.qualify_items.m"
  }
#line 753 "module_qual.qualify_items.m"
}

#line 745 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 745 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_15,
#line 745 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_16,
#line 745 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_17,
#line 745 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_18)
#line 745 "module_qual.qualify_items.m"
{
#line 750 "module_qual.qualify_items.m"
  {
#line 750 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
#line 750 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Mode0_11 = (MR_Word) parse_tree__module_qual__qualify_items__HeadVar__3_3;
#line 750 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Mode_12;

#line 759 "module_qual.qualify_items.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Mode0_11)) == (MR_mktag((MR_Integer) 0))))
#line 759 "module_qual.qualify_items.m"
      {
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstA0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 0)));
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstB0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 1)));
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstA_33;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InstB_34;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_47;
#line 759 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_48;

#line 760 "module_qual.qualify_items.m"
        {
#line 760 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstA0_31, &parse_tree__module_qual__qualify_items__InstA_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_15, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_17, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_48);
        }
#line 761 "module_qual.qualify_items.m"
        {
#line 761 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstB0_32, &parse_tree__module_qual__qualify_items__InstB_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_18);
        }
#line 762 "module_qual.qualify_items.m"
        {
#line 762 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__Mode_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 762 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_12, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstA_33));
#line 762 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mode_12, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstB_34));
#line 762 "module_qual.qualify_items.m"
        }
#line 759 "module_qual.qualify_items.m"
      }
#line 759 "module_qual.qualify_items.m"
    else
#line 764 "module_qual.qualify_items.m"
      {
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SymName0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 0)));
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Insts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode0_11, (MR_Integer) 1)));
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Insts_37;
#line 764 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__Arity_38;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes_39;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SymName_40;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_41;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_42;
#line 764 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_44_44;

#line 765 "module_qual.qualify_items.m"
        {
#line 765 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Insts0_36, &parse_tree__module_qual__qualify_items__Insts_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_15, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_17, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_42);
        }
#line 767 "module_qual.qualify_items.m"
        {
#line 767 "module_qual.qualify_items.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts_37, &parse_tree__module_qual__qualify_items__Arity_38);
        }
#line 768 "module_qual.qualify_items.m"
        {
#line 768 "module_qual.qualify_items.m"
          parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_41, &parse_tree__module_qual__qualify_items__Modes_39);
        }
#line 770 "module_qual.qualify_items.m"
        {
#line 770 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 770 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_44_44, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_35));
#line 770 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_44_44, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_38));
#line 770 "module_qual.qualify_items.m"
        }
#line 769 "module_qual.qualify_items.m"
        {
#line 769 "module_qual.qualify_items.m"
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Modes_39, (MR_Integer) 1, parse_tree__module_qual__qualify_items__V_44_44, &parse_tree__module_qual__qualify_items__SymName_40, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_18);
        }
#line 771 "module_qual.qualify_items.m"
        {
#line 771 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__Mode_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_12, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_40));
#line 771 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Mode_12, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_37));
#line 771 "module_qual.qualify_items.m"
        }
#line 764 "module_qual.qualify_items.m"
      }
#line 749 "module_qual.qualify_items.m"
    *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) parse_tree__module_qual__qualify_items__Mode_12;
#line 750 "module_qual.qualify_items.m"
  }
#line 745 "module_qual.qualify_items.m"
}

#line 714 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0_1(
#line 714 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
#line 714 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
#line 714 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2)
#line 714 "module_qual.qualify_items.m"
{
#line 714 "module_qual.qualify_items.m"
  {
#line 714 "module_qual.qualify_items.m"
    MR_Box parse_tree__module_qual__qualify_items__closure = parse_tree__module_qual__qualify_items__closure_arg;
#line 714 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__conv0_HeadVar__5_5;

#line 714 "module_qual.qualify_items.m"
    {
#line 714 "module_qual.qualify_items.m"
      recompilation__record_used_item_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_1), &parse_tree__module_qual__qualify_items__conv0_HeadVar__5_5);
    }
#line 714 "module_qual.qualify_items.m"
    *parse_tree__module_qual__qualify_items__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv0_HeadVar__5_5));
#line 714 "module_qual.qualify_items.m"
  }
#line 714 "module_qual.qualify_items.m"
}

#line 703 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0(
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__BoundInst0_11,
#line 703 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__BoundInst_12,
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45,
#line 703 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46,
#line 703 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_47,
#line 703 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48)
#line 703 "module_qual.qualify_items.m"
{
#line 708 "module_qual.qualify_items.m"
  {
#line 708 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
#line 708 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__BoundInst0_11, (MR_Integer) 0)));
#line 708 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__BoundInst0_11, (MR_Integer) 1)));
#line 708 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__Insts_44;
#line 708 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50;

#line 715 "module_qual.qualify_items.m"
#line 715 "module_qual.qualify_items.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__ConsId_15)) {
#line 715 "module_qual.qualify_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 715 "module_qual.qualify_items.m"
      case (MR_Integer) 0:
#line 726 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
        break;
#line 715 "module_qual.qualify_items.m"
      case (MR_Integer) 1:
#line 725 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
        break;
#line 715 "module_qual.qualify_items.m"
      case (MR_Integer) 2:
#line 730 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
        break;
#line 715 "module_qual.qualify_items.m"
      case (MR_Integer) 3:
#line 715 "module_qual.qualify_items.m"
#line 715 "module_qual.qualify_items.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConsId_15, (MR_Integer) 0)))) {
#line 715 "module_qual.qualify_items.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 0:
#line 731 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 1:
#line 732 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 2:
#line 711 "module_qual.qualify_items.m"
            {
#line 711 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConsId_15, (MR_Integer) 1)));
#line 711 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConsId_15, (MR_Integer) 2)));
#line 711 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Id_20;
#line 711 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__V_49_49;
#line 711 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConsId_15, (MR_Integer) 3)));

#line 712 "module_qual.qualify_items.m"
              {
#line 712 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__Id_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 712 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Id_20, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_17));
#line 712 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Id_20, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_18));
#line 712 "module_qual.qualify_items.m"
              }
#line 714 "module_qual.qualify_items.m"
              {
#line 714 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 714 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_5[0]));
#line 714 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0_1));
#line 714 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 714 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 3) = ((MR_Box) ((MR_Integer) 5));
#line 714 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Id_20));
#line 714 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_49_49, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Id_20));
#line 714 "module_qual.qualify_items.m"
              }
#line 713 "module_qual.qualify_items.m"
              {
#line 713 "module_qual.qualify_items.m"
                parse_tree__module_qual__update_recompilation_info_3_p_0(parse_tree__module_qual__qualify_items__V_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50);
              }
#line 711 "module_qual.qualify_items.m"
            }
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 3:
#line 716 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 4:
#line 717 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 5:
#line 718 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 6:
#line 719 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 7:
#line 720 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 8:
#line 721 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 9:
#line 722 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 10:
#line 723 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 11:
#line 724 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 12:
#line 727 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 13:
#line 728 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
          case (MR_Integer) 14:
#line 729 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_45;
#line 715 "module_qual.qualify_items.m"
            break;
#line 715 "module_qual.qualify_items.m"
        }
#line 715 "module_qual.qualify_items.m"
        break;
#line 715 "module_qual.qualify_items.m"
    }
#line 735 "module_qual.qualify_items.m"
    {
#line 735 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Insts0_16, &parse_tree__module_qual__qualify_items__Insts_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_50_50, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_46, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48);
    }
#line 736 "module_qual.qualify_items.m"
    {
#line 736 "module_qual.qualify_items.m"
      MR_Word base;
#line 736 "module_qual.qualify_items.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 736 "module_qual.qualify_items.m"
      *parse_tree__module_qual__qualify_items__BoundInst_12 = base;
#line 736 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ConsId_15));
#line 736 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_44));
#line 736 "module_qual.qualify_items.m"
    }
#line 708 "module_qual.qualify_items.m"
  }
#line 703 "module_qual.qualify_items.m"
}

#line 688 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_bound_insts_8_p_0(
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 688 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 688 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 688 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 688 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 688 "module_qual.qualify_items.m"
{
#line 692 "module_qual.qualify_items.m"
  {
#line 692 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 692 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 692 "module_qual.qualify_items.m"
      {
#line 692 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 692 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 692 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 692 "module_qual.qualify_items.m"
      }
#line 692 "module_qual.qualify_items.m"
    else
#line 695 "module_qual.qualify_items.m"
      {
#line 695 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__BoundInst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 695 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__BoundInsts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 695 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__BoundInst_21;
#line 695 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__BoundInsts_22;
#line 695 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 695 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

#line 696 "module_qual.qualify_items.m"
        {
#line 696 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_bound_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__BoundInst0_19, &parse_tree__module_qual__qualify_items__BoundInst_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
#line 698 "module_qual.qualify_items.m"
        {
#line 698 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_bound_insts_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__BoundInsts0_20, &parse_tree__module_qual__qualify_items__BoundInsts_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 694 "module_qual.qualify_items.m"
        {
#line 694 "module_qual.qualify_items.m"
          MR_Word base;
#line 694 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 694 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__BoundInst_21));
#line 694 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__BoundInsts_22));
#line 694 "module_qual.qualify_items.m"
        }
#line 695 "module_qual.qualify_items.m"
      }
#line 692 "module_qual.qualify_items.m"
  }
#line 688 "module_qual.qualify_items.m"
}

#line 651 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_name_8_p_0(
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InstName0_11,
#line 651 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__InstName_12,
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41,
#line 651 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42,
#line 651 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43,
#line 651 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44)
#line 651 "module_qual.qualify_items.m"
{
#line 658 "module_qual.qualify_items.m"
  {
#line 658 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 658 "module_qual.qualify_items.m"
#line 658 "module_qual.qualify_items.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__InstName0_11)) {
#line 658 "module_qual.qualify_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 658 "module_qual.qualify_items.m"
      case (MR_Integer) 0:
#line 658 "module_qual.qualify_items.m"
        {
#line 658 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__SymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstName0_11, (MR_Integer) 0)));
#line 658 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Insts0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__InstName0_11, (MR_Integer) 1)));
#line 658 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Insts_17;
#line 658 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__SymName_18;
#line 658 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48;
#line 658 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49;
#line 663 "module_qual.qualify_items.m"
          MR_String parse_tree__module_qual__qualify_items__V_50_50;

#line 659 "module_qual.qualify_items.m"
          {
#line 659 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Insts0_16, &parse_tree__module_qual__qualify_items__Insts_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49);
          }
#line 663 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__SymName0_15)) == (MR_mktag((MR_Integer) 0)));
#line 663 "module_qual.qualify_items.m"
          if (parse_tree__module_qual__qualify_items__succeeded)
#line 663 "module_qual.qualify_items.m"
            {
#line 663 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SymName0_15, (MR_Integer) 0)));
#line 663 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__succeeded = (strcmp(parse_tree__module_qual__qualify_items__V_50_50, (MR_String) "") == 0);
#line 663 "module_qual.qualify_items.m"
            }
#line 661 "module_qual.qualify_items.m"
          if (parse_tree__module_qual__qualify_items__succeeded)
#line 665 "module_qual.qualify_items.m"
            {
#line 665 "module_qual.qualify_items.m"
              {
#line 665 "module_qual.qualify_items.m"
                parse_tree__module_qual__qual_errors__report_invalid_user_inst_5_p_0(parse_tree__module_qual__qualify_items__SymName0_15, parse_tree__module_qual__qualify_items__Insts_17, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);
              }
#line 666 "module_qual.qualify_items.m"
              {
#line 666 "module_qual.qualify_items.m"
                parse_tree__module_qual__mq_info_set_found_undef_inst_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42);
              }
#line 667 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__SymName_18 = parse_tree__module_qual__qualify_items__SymName0_15;
#line 665 "module_qual.qualify_items.m"
            }
#line 661 "module_qual.qualify_items.m"
          else
#line 669 "module_qual.qualify_items.m"
            {
#line 669 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__Arity_19;
#line 669 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__InstIdSet_20;
#line 669 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__V_54_54;

#line 669 "module_qual.qualify_items.m"
              {
#line 669 "module_qual.qualify_items.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__module_qual__qualify_items__Insts0_16, &parse_tree__module_qual__qualify_items__Arity_19);
              }
#line 670 "module_qual.qualify_items.m"
              {
#line 670 "module_qual.qualify_items.m"
                parse_tree__module_qual__mq_info_get_insts_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, &parse_tree__module_qual__qualify_items__InstIdSet_20);
              }
#line 672 "module_qual.qualify_items.m"
              {
#line 672 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_54_54, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_15));
#line 672 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_54_54, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_19));
#line 672 "module_qual.qualify_items.m"
              }
#line 671 "module_qual.qualify_items.m"
              {
#line 671 "module_qual.qualify_items.m"
                parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstIdSet_20, (MR_Integer) 2, parse_tree__module_qual__qualify_items__V_54_54, &parse_tree__module_qual__qualify_items__SymName_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_48_48, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);
              }
#line 669 "module_qual.qualify_items.m"
            }
#line 674 "module_qual.qualify_items.m"
          {
#line 674 "module_qual.qualify_items.m"
            MR_Word base;
#line 674 "module_qual.qualify_items.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 674 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__InstName_12 = base;
#line 674 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_18));
#line 674 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_17));
#line 674 "module_qual.qualify_items.m"
          }
#line 658 "module_qual.qualify_items.m"
        }
#line 658 "module_qual.qualify_items.m"
        break;
#line 658 "module_qual.qualify_items.m"
      case (MR_Integer) 1:
#line 658 "module_qual.qualify_items.m"
      case (MR_Integer) 2:
#line 684 "module_qual.qualify_items.m"
        {
#line 685 "module_qual.qualify_items.m"
          {
#line 685 "module_qual.qualify_items.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
#line 685 "module_qual.qualify_items.m"
            return;
          }
#line 684 "module_qual.qualify_items.m"
        }
#line 658 "module_qual.qualify_items.m"
        break;
#line 658 "module_qual.qualify_items.m"
      case (MR_Integer) 3:
#line 684 "module_qual.qualify_items.m"
        {
#line 685 "module_qual.qualify_items.m"
          {
#line 685 "module_qual.qualify_items.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst_name\'/8", (MR_String) "unexpected compiler generated inst_name");
#line 685 "module_qual.qualify_items.m"
            return;
          }
#line 684 "module_qual.qualify_items.m"
        }
#line 658 "module_qual.qualify_items.m"
        break;
#line 658 "module_qual.qualify_items.m"
    }
#line 658 "module_qual.qualify_items.m"
  }
#line 651 "module_qual.qualify_items.m"
}

#line 631 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HOInstInfo0_11,
#line 631 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HOInstInfo_12,
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20,
#line 631 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21,
#line 631 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22,
#line 631 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23)
#line 631 "module_qual.qualify_items.m"
{
#line 639 "module_qual.qualify_items.m"
  {
#line 639 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 639 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HOInstInfo0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "module_qual.qualify_items.m"
      {
#line 645 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HOInstInfo_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 644 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20;
#line 644 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22;
#line 644 "module_qual.qualify_items.m"
      }
#line 639 "module_qual.qualify_items.m"
    else
#line 639 "module_qual.qualify_items.m"
      {
#line 639 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_15;
#line 639 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes0_16;
#line 639 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeArgRegs_17;
#line 639 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Detism_18;
#line 639 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes_19;
#line 639 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_24_24 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__qualify_items__HOInstInfo0_11), (MR_Integer) 1);
#line 639 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_27_27;

#line 638 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_24_24, (MR_Integer) 0)));
#line 638 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__Modes0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_24_24, (MR_Integer) 1)));
#line 638 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__MaybeArgRegs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_24_24, (MR_Integer) 2)));
#line 638 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_24_24, (MR_Integer) 3)));
#line 640 "module_qual.qualify_items.m"
        {
#line 640 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Modes0_16, &parse_tree__module_qual__qualify_items__Modes_19, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23);
        }
#line 641 "module_qual.qualify_items.m"
        {
#line 641 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 641 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_27_27, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_15));
#line 641 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_27_27, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_19));
#line 641 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_27_27, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeArgRegs_17));
#line 641 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_27_27, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Detism_18));
#line 641 "module_qual.qualify_items.m"
        }
#line 641 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HOInstInfo_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__module_qual__qualify_items__V_27_27);
#line 639 "module_qual.qualify_items.m"
      }
#line 639 "module_qual.qualify_items.m"
  }
#line 631 "module_qual.qualify_items.m"
}

#line 621 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 621 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 621 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 621 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 621 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 621 "module_qual.qualify_items.m"
{
#line 625 "module_qual.qualify_items.m"
  {
#line 625 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 625 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "module_qual.qualify_items.m"
      {
#line 625 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 625 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 625 "module_qual.qualify_items.m"
      }
#line 625 "module_qual.qualify_items.m"
    else
#line 627 "module_qual.qualify_items.m"
      {
#line 627 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Inst0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 627 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Insts0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 627 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Inst_21;
#line 627 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Insts_22;
#line 627 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 627 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

#line 628 "module_qual.qualify_items.m"
        {
#line 628 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Inst0_19, &parse_tree__module_qual__qualify_items__Inst_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
#line 629 "module_qual.qualify_items.m"
        {
#line 629 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Insts0_20, &parse_tree__module_qual__qualify_items__Insts_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 626 "module_qual.qualify_items.m"
        {
#line 626 "module_qual.qualify_items.m"
          MR_Word base;
#line 626 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 626 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Inst_21));
#line 626 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Insts_22));
#line 626 "module_qual.qualify_items.m"
        }
#line 627 "module_qual.qualify_items.m"
      }
#line 625 "module_qual.qualify_items.m"
  }
#line 621 "module_qual.qualify_items.m"
}

#line 564 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Inst0_11,
#line 564 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Inst_12,
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37,
#line 564 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38,
#line 564 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39,
#line 564 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40)
#line 564 "module_qual.qualify_items.m"
{
#line 570 "module_qual.qualify_items.m"
  {
#line 570 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 570 "module_qual.qualify_items.m"
#line 570 "module_qual.qualify_items.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Inst0_11)) {
#line 570 "module_qual.qualify_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 570 "module_qual.qualify_items.m"
      case (MR_Integer) 0:
#line 578 "module_qual.qualify_items.m"
        {
#line 579 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Inst_12 = parse_tree__module_qual__qualify_items__Inst0_11;
#line 578 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37;
#line 578 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39;
#line 578 "module_qual.qualify_items.m"
        }
#line 570 "module_qual.qualify_items.m"
        break;
#line 570 "module_qual.qualify_items.m"
      case (MR_Integer) 1:
#line 581 "module_qual.qualify_items.m"
        {
#line 582 "module_qual.qualify_items.m"
          {
#line 582 "module_qual.qualify_items.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
#line 582 "module_qual.qualify_items.m"
            return;
          }
#line 581 "module_qual.qualify_items.m"
        }
#line 570 "module_qual.qualify_items.m"
        break;
#line 570 "module_qual.qualify_items.m"
      case (MR_Integer) 2:
#line 570 "module_qual.qualify_items.m"
        {
#line 570 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Uniq_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 0)));
#line 570 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__HOInstInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
#line 570 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__HOInstInfo_17;

#line 571 "module_qual.qualify_items.m"
          {
#line 571 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__HOInstInfo0_16, &parse_tree__module_qual__qualify_items__HOInstInfo_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
          }
#line 573 "module_qual.qualify_items.m"
          {
#line 573 "module_qual.qualify_items.m"
            MR_Word base;
#line 573 "module_qual.qualify_items.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__Inst_12 = base;
#line 573 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Uniq_15));
#line 573 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__HOInstInfo_17));
#line 573 "module_qual.qualify_items.m"
          }
#line 570 "module_qual.qualify_items.m"
        }
#line 570 "module_qual.qualify_items.m"
        break;
#line 570 "module_qual.qualify_items.m"
      case (MR_Integer) 3:
#line 570 "module_qual.qualify_items.m"
#line 570 "module_qual.qualify_items.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 0)))) {
#line 570 "module_qual.qualify_items.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "module_qual.qualify_items.m"
          case (MR_Integer) 0:
#line 584 "module_qual.qualify_items.m"
            {
#line 584 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__InstResults0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 2)));
#line 584 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__BoundInsts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 3)));
#line 584 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__BoundInsts_28;
#line 584 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Uniq_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));

#line 589 "module_qual.qualify_items.m"
#line 589 "module_qual.qualify_items.m"
              switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__InstResults0_20)) {
#line 589 "module_qual.qualify_items.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 589 "module_qual.qualify_items.m"
                case (MR_Integer) 0:
#line 589 "module_qual.qualify_items.m"
#line 589 "module_qual.qualify_items.m"
                  switch (MR_unmkbody(parse_tree__module_qual__qualify_items__InstResults0_20)) {
#line 589 "module_qual.qualify_items.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 589 "module_qual.qualify_items.m"
                    case (MR_Integer) 0:
#line 587 "module_qual.qualify_items.m"
                      {
#line 587 "module_qual.qualify_items.m"
                      }
#line 589 "module_qual.qualify_items.m"
                      break;
#line 589 "module_qual.qualify_items.m"
                    case (MR_Integer) 1:
#line 586 "module_qual.qualify_items.m"
                      {
#line 586 "module_qual.qualify_items.m"
                      }
#line 589 "module_qual.qualify_items.m"
                      break;
#line 589 "module_qual.qualify_items.m"
                  }
#line 589 "module_qual.qualify_items.m"
                  break;
#line 589 "module_qual.qualify_items.m"
                case (MR_Integer) 1:
#line 590 "module_qual.qualify_items.m"
                  {
#line 591 "module_qual.qualify_items.m"
                    {
#line 591 "module_qual.qualify_items.m"
                      mercury__require__unexpected_3_p_0((MR_String) "parse_tree.module_qual.qualify_items", (MR_String) "predicate \140parse_tree.module_qual.qualify_items.qualify_inst\'/8", (MR_String) "compiler generated inst not expected");
#line 591 "module_qual.qualify_items.m"
                      return;
                    }
#line 590 "module_qual.qualify_items.m"
                  }
#line 589 "module_qual.qualify_items.m"
                  break;
#line 589 "module_qual.qualify_items.m"
              }
#line 594 "module_qual.qualify_items.m"
              {
#line 594 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_bound_insts_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__BoundInsts0_21, &parse_tree__module_qual__qualify_items__BoundInsts_28, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
#line 596 "module_qual.qualify_items.m"
              {
#line 596 "module_qual.qualify_items.m"
                MR_Word base;
#line 596 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 596 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
#line 596 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 596 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Uniq_59));
#line 596 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstResults0_20));
#line 596 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__BoundInsts_28));
#line 596 "module_qual.qualify_items.m"
              }
#line 584 "module_qual.qualify_items.m"
            }
#line 570 "module_qual.qualify_items.m"
            break;
#line 570 "module_qual.qualify_items.m"
          case (MR_Integer) 1:
#line 598 "module_qual.qualify_items.m"
            {
#line 598 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Uniq_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
#line 598 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__HOInstInfo0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 2)));
#line 598 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__HOInstInfo_62;

#line 600 "module_qual.qualify_items.m"
              {
#line 600 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_ho_inst_info_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__HOInstInfo0_61, &parse_tree__module_qual__qualify_items__HOInstInfo_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
#line 602 "module_qual.qualify_items.m"
              {
#line 602 "module_qual.qualify_items.m"
                MR_Word base;
#line 602 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 602 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
#line 602 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 602 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Uniq_60));
#line 602 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__HOInstInfo_62));
#line 602 "module_qual.qualify_items.m"
              }
#line 598 "module_qual.qualify_items.m"
            }
#line 570 "module_qual.qualify_items.m"
            break;
#line 570 "module_qual.qualify_items.m"
          case (MR_Integer) 2:
#line 578 "module_qual.qualify_items.m"
            {
#line 579 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__Inst_12 = parse_tree__module_qual__qualify_items__Inst0_11;
#line 578 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37;
#line 578 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39;
#line 578 "module_qual.qualify_items.m"
            }
#line 570 "module_qual.qualify_items.m"
            break;
#line 570 "module_qual.qualify_items.m"
          case (MR_Integer) 3:
#line 604 "module_qual.qualify_items.m"
            {
#line 604 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Vars_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
#line 604 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SubInst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 2)));
#line 604 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SubInst_31;

#line 606 "module_qual.qualify_items.m"
              {
#line 606 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__SubInst0_30, &parse_tree__module_qual__qualify_items__SubInst_31, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
#line 607 "module_qual.qualify_items.m"
              {
#line 607 "module_qual.qualify_items.m"
                MR_Word base;
#line 607 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 607 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
#line 607 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 607 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_29));
#line 607 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__SubInst_31));
#line 607 "module_qual.qualify_items.m"
              }
#line 604 "module_qual.qualify_items.m"
            }
#line 570 "module_qual.qualify_items.m"
            break;
#line 570 "module_qual.qualify_items.m"
          case (MR_Integer) 4:
#line 609 "module_qual.qualify_items.m"
            {
#line 609 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__InstName0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
#line 609 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__InstName_33;

#line 611 "module_qual.qualify_items.m"
              {
#line 611 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_inst_name_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__InstName0_32, &parse_tree__module_qual__qualify_items__InstName_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
#line 613 "module_qual.qualify_items.m"
              {
#line 613 "module_qual.qualify_items.m"
                MR_Word base;
#line 613 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
#line 613 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 613 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstName_33));
#line 613 "module_qual.qualify_items.m"
              }
#line 609 "module_qual.qualify_items.m"
            }
#line 570 "module_qual.qualify_items.m"
            break;
#line 570 "module_qual.qualify_items.m"
          case (MR_Integer) 5:
#line 615 "module_qual.qualify_items.m"
            {
#line 615 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Name_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 1)));
#line 615 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Inst0_11, (MR_Integer) 2)));
#line 615 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args_36;

#line 617 "module_qual.qualify_items.m"
              {
#line 617 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_inst_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_35, &parse_tree__module_qual__qualify_items__Args_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_40);
              }
#line 618 "module_qual.qualify_items.m"
              {
#line 618 "module_qual.qualify_items.m"
                MR_Word base;
#line 618 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 618 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Inst_12 = base;
#line 618 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 618 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_34));
#line 618 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_36));
#line 618 "module_qual.qualify_items.m"
              }
#line 615 "module_qual.qualify_items.m"
            }
#line 570 "module_qual.qualify_items.m"
            break;
#line 570 "module_qual.qualify_items.m"
        }
#line 570 "module_qual.qualify_items.m"
        break;
#line 570 "module_qual.qualify_items.m"
    }
#line 570 "module_qual.qualify_items.m"
  }
#line 564 "module_qual.qualify_items.m"
}

#line 547 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InstDefn0_11,
#line 547 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__InstDefn_12,
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_17,
#line 547 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_18,
#line 547 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_19,
#line 547 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_20)
#line 547 "module_qual.qualify_items.m"
{
#line 554 "module_qual.qualify_items.m"
  {
#line 554 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 554 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__InstDefn0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "module_qual.qualify_items.m"
      {
#line 559 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__InstDefn_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_18 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_17;
#line 558 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_20 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_19;
#line 558 "module_qual.qualify_items.m"
      }
#line 554 "module_qual.qualify_items.m"
    else
#line 554 "module_qual.qualify_items.m"
      {
#line 554 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Inst0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__InstDefn0_11, (MR_Integer) 0)));
#line 554 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Inst_16;

#line 555 "module_qual.qualify_items.m"
        {
#line 555 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Inst0_15, &parse_tree__module_qual__qualify_items__Inst_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_18, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_19, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_20);
        }
#line 556 "module_qual.qualify_items.m"
        {
#line 556 "module_qual.qualify_items.m"
          MR_Word base;
#line 556 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__InstDefn_12 = base;
#line 556 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Inst_16));
#line 556 "module_qual.qualify_items.m"
        }
#line 554 "module_qual.qualify_items.m"
      }
#line 554 "module_qual.qualify_items.m"
  }
#line 547 "module_qual.qualify_items.m"
}

#line 511 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__TypeCtor0_11,
#line 511 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__TypeCtor_12,
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20,
#line 511 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21,
#line 511 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22,
#line 511 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23)
#line 511 "module_qual.qualify_items.m"
{
#line 516 "module_qual.qualify_items.m"
  {
#line 516 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;
#line 516 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__SymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor0_11, (MR_Integer) 0)));
#line 516 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor0_11, (MR_Integer) 1)));
#line 516 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__SymName_17;
#line 535 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor0_11, (MR_Integer) 1)));
#line 535 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor0_11, (MR_Integer) 0)));
#line 535 "module_qual.qualify_items.m"
    MR_String parse_tree__module_qual__qualify_items__V_41_41;
#line 535 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__lo_0;
#line 535 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__hi_1;
#line 535 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__mid_2;
#line 535 "module_qual.qualify_items.m"
    MR_Integer parse_tree__module_qual__qualify_items__result_3;

#line 535 "module_qual.qualify_items.m"
    parse_tree__module_qual__qualify_items__succeeded = (parse_tree__module_qual__qualify_items__V_39_39 == (MR_Integer) 0);
#line 535 "module_qual.qualify_items.m"
    if (parse_tree__module_qual__qualify_items__succeeded)
#line 535 "module_qual.qualify_items.m"
      {
#line 535 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__qualify_items__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 535 "module_qual.qualify_items.m"
        if (parse_tree__module_qual__qualify_items__succeeded)
#line 535 "module_qual.qualify_items.m"
          {
#line 535 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_40_40, (MR_Integer) 0)));
#line 535 "module_qual.qualify_items.m"
            /* binary string simple lookup switch */
#line 535 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__lo_0 = (MR_Integer) 0;
#line 535 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__hi_1 = (MR_Integer) 3;
#line 535 "module_qual.qualify_items.m"
            do
#line 535 "module_qual.qualify_items.m"
              {
#line 535 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__mid_2 = (((parse_tree__module_qual__qualify_items__lo_0 + parse_tree__module_qual__qualify_items__hi_1)) / (MR_Integer) 2);
#line 535 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__result_3 = MR_strcmp(parse_tree__module_qual__qualify_items__V_41_41, ((&parse_tree__module_qual__qualify_items_vector_common_4[0 + parse_tree__module_qual__qualify_items__mid_2]))->parse_tree__module_qual__qualify_items__vector_common_type_4_0__vct_4_f_0);
#line 535 "module_qual.qualify_items.m"
                if ((parse_tree__module_qual__qualify_items__result_3 == (MR_Integer) 0))
#line 535 "module_qual.qualify_items.m"
                  {
#line 535 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__succeeded = MR_TRUE;
#line 535 "module_qual.qualify_items.m"
                    /* jump out of search loop */
#line 535 "module_qual.qualify_items.m"
                    goto label_0;
#line 535 "module_qual.qualify_items.m"
                  }
#line 535 "module_qual.qualify_items.m"
                else
#line 535 "module_qual.qualify_items.m"
                if ((parse_tree__module_qual__qualify_items__result_3 < (MR_Integer) 0))
#line 535 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__hi_1 = (parse_tree__module_qual__qualify_items__mid_2 - (MR_Integer) 1);
#line 535 "module_qual.qualify_items.m"
                else
#line 535 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__lo_0 = (parse_tree__module_qual__qualify_items__mid_2 + (MR_Integer) 1);
#line 535 "module_qual.qualify_items.m"
              }
#line 535 "module_qual.qualify_items.m"
            while ((parse_tree__module_qual__qualify_items__lo_0 <= parse_tree__module_qual__qualify_items__hi_1));
#line 535 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__succeeded = MR_FALSE;
#line 535 "module_qual.qualify_items.m"
          label_0:;
#line 535 "module_qual.qualify_items.m"
          }
#line 535 "module_qual.qualify_items.m"
      }
#line 518 "module_qual.qualify_items.m"
    if (parse_tree__module_qual__qualify_items__succeeded)
#line 519 "module_qual.qualify_items.m"
      {
#line 519 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__SymName_17 = parse_tree__module_qual__qualify_items__SymName0_15;
#line 519 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22;
#line 519 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20;
#line 519 "module_qual.qualify_items.m"
      }
#line 518 "module_qual.qualify_items.m"
    else
#line 521 "module_qual.qualify_items.m"
      {
#line 521 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypeCtorId0_18;
#line 521 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Types_19;

#line 521 "module_qual.qualify_items.m"
        {
#line 521 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__TypeCtorId0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtorId0_18, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_15));
#line 521 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtorId0_18, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_16));
#line 521 "module_qual.qualify_items.m"
        }
#line 522 "module_qual.qualify_items.m"
        {
#line 522 "module_qual.qualify_items.m"
          parse_tree__module_qual__mq_info_get_types_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20, &parse_tree__module_qual__qualify_items__Types_19);
        }
#line 524 "module_qual.qualify_items.m"
        {
#line 524 "module_qual.qualify_items.m"
          parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Types_19, (MR_Integer) 0, parse_tree__module_qual__qualify_items__TypeCtorId0_18, &parse_tree__module_qual__qualify_items__SymName_17, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_23);
        }
#line 521 "module_qual.qualify_items.m"
      }
#line 527 "module_qual.qualify_items.m"
    {
#line 527 "module_qual.qualify_items.m"
      MR_Word base;
#line 527 "module_qual.qualify_items.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "module_qual.qualify_items.m"
      *parse_tree__module_qual__qualify_items__TypeCtor_12 = base;
#line 527 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_17));
#line 527 "module_qual.qualify_items.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_16));
#line 527 "module_qual.qualify_items.m"
    }
#line 516 "module_qual.qualify_items.m"
  }
#line 511 "module_qual.qualify_items.m"
}

#line 441 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_maybe_type_8_p_0(
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 441 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 441 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 441 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 441 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 441 "module_qual.qualify_items.m"
{
#line 445 "module_qual.qualify_items.m"
  {
#line 445 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 445 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "module_qual.qualify_items.m"
      {
#line 445 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 445 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 445 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 445 "module_qual.qualify_items.m"
      }
#line 445 "module_qual.qualify_items.m"
    else
#line 447 "module_qual.qualify_items.m"
      {
#line 447 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 447 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type_20;

#line 448 "module_qual.qualify_items.m"
        {
#line 448 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_19, &parse_tree__module_qual__qualify_items__Type_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 446 "module_qual.qualify_items.m"
        {
#line 446 "module_qual.qualify_items.m"
          MR_Word base;
#line 446 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 446 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_20));
#line 446 "module_qual.qualify_items.m"
        }
#line 447 "module_qual.qualify_items.m"
      }
#line 445 "module_qual.qualify_items.m"
  }
#line 441 "module_qual.qualify_items.m"
}

#line 431 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 431 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 431 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 431 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 431 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 431 "module_qual.qualify_items.m"
{
#line 435 "module_qual.qualify_items.m"
  {
#line 435 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 435 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "module_qual.qualify_items.m"
      {
#line 435 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 435 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 435 "module_qual.qualify_items.m"
      }
#line 435 "module_qual.qualify_items.m"
    else
#line 437 "module_qual.qualify_items.m"
      {
#line 437 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 437 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Types0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 437 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type_21;
#line 437 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Types_22;
#line 437 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 437 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

#line 438 "module_qual.qualify_items.m"
        {
#line 438 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Type0_19, &parse_tree__module_qual__qualify_items__Type_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
#line 439 "module_qual.qualify_items.m"
        {
#line 439 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Types0_20, &parse_tree__module_qual__qualify_items__Types_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 436 "module_qual.qualify_items.m"
        {
#line 436 "module_qual.qualify_items.m"
          MR_Word base;
#line 436 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 436 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_21));
#line 436 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_22));
#line 436 "module_qual.qualify_items.m"
        }
#line 437 "module_qual.qualify_items.m"
      }
#line 435 "module_qual.qualify_items.m"
  }
#line 431 "module_qual.qualify_items.m"
}

#line 403 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ContainingTypeCtor_2,
#line 403 "module_qual.qualify_items.m"
  MR_String parse_tree__module_qual__qualify_items__FunctionSymbol_3,
#line 403 "module_qual.qualify_items.m"
  MR_Integer parse_tree__module_qual__qualify_items__LastArgNum_4,
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__5_5,
#line 403 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__6_6,
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_7,
#line 403 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_8,
#line 403 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_9,
#line 403 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_10)
#line 403 "module_qual.qualify_items.m"
{
#line 409 "module_qual.qualify_items.m"
  {
#line 409 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 409 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "module_qual.qualify_items.m"
      {
#line 409 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_10 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_9;
#line 409 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_7;
#line 409 "module_qual.qualify_items.m"
      }
#line 409 "module_qual.qualify_items.m"
    else
#line 411 "module_qual.qualify_items.m"
      {
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Arg0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__5_5, (MR_Integer) 0)));
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Args0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__5_5, (MR_Integer) 1)));
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Arg_27;
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Args_28;
#line 411 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__CurArgNum_31 = (parse_tree__module_qual__qualify_items__LastArgNum_4 + (MR_Integer) 1);
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_37_37;
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_38_38;
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__MaybeFieldName_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg0_25, (MR_Integer) 0)));
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg0_25, (MR_Integer) 1)));
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Width_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg0_25, (MR_Integer) 2)));
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg0_25, (MR_Integer) 3)));
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ErrorContext_57;
#line 411 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type_58;

#line 426 "module_qual.qualify_items.m"
        {
#line 426 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__ErrorContext_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 426 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_56));
#line 426 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ContainingTypeCtor_2));
#line 426 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__FunctionSymbol_3));
#line 426 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__CurArgNum_31));
#line 426 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__ErrorContext_57, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeFieldName_53));
#line 426 "module_qual.qualify_items.m"
        }
#line 428 "module_qual.qualify_items.m"
        {
#line 428 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_57, parse_tree__module_qual__qualify_items__Type0_54, &parse_tree__module_qual__qualify_items__Type_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_37_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_9, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_38_38);
        }
#line 429 "module_qual.qualify_items.m"
        {
#line 429 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__Arg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 429 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg_27, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeFieldName_53));
#line 429 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg_27, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_58));
#line 429 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg_27, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Width_55));
#line 429 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Arg_27, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_56));
#line 429 "module_qual.qualify_items.m"
        }
#line 415 "module_qual.qualify_items.m"
        {
#line 415 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ContainingTypeCtor_2, parse_tree__module_qual__qualify_items__FunctionSymbol_3, parse_tree__module_qual__qualify_items__CurArgNum_31, parse_tree__module_qual__qualify_items__Args0_26, &parse_tree__module_qual__qualify_items__Args_28, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_37_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_8, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_38_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_10);
        }
#line 411 "module_qual.qualify_items.m"
        {
#line 411 "module_qual.qualify_items.m"
          MR_Word base;
#line 411 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__6_6 = base;
#line 411 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arg_27));
#line 411 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_28));
#line 411 "module_qual.qualify_items.m"
        }
#line 411 "module_qual.qualify_items.m"
      }
#line 409 "module_qual.qualify_items.m"
  }
#line 403 "module_qual.qualify_items.m"
}

#line 372 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 372 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 372 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 372 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 372 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 372 "module_qual.qualify_items.m"
{
#line 377 "module_qual.qualify_items.m"
  {
#line 377 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 377 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "module_qual.qualify_items.m"
      {
#line 377 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 377 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 377 "module_qual.qualify_items.m"
      }
#line 377 "module_qual.qualify_items.m"
    else
#line 379 "module_qual.qualify_items.m"
      {
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Ctor0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Ctors0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Ctor_21;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Ctors_22;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ExistQVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 0)));
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Constraints0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 1)));
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__FunctionSymbolSymName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 2)));
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Args0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 3)));
#line 379 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 4)));
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor0_19, (MR_Integer) 5)));
#line 379 "module_qual.qualify_items.m"
        MR_String parse_tree__module_qual__qualify_items__FunctionSymbolName_49;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_50;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Constraints_51;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Args_52;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_53;
#line 379 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_54;

#line 393 "module_qual.qualify_items.m"
        {
#line 393 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__FunctionSymbolName_49 = mdbcomp__sym_name__unqualify_name_1_f_0(parse_tree__module_qual__qualify_items__FunctionSymbolSymName_45);
        }
#line 394 "module_qual.qualify_items.m"
        {
#line 394 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__ConstraintErrorContext_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 394 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 394 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_48));
#line 394 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadVar__2_2));
#line 394 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__FunctionSymbolName_49));
#line 394 "module_qual.qualify_items.m"
        }
#line 396 "module_qual.qualify_items.m"
        {
#line 396 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ConstraintErrorContext_50, parse_tree__module_qual__qualify_items__Constraints0_44, &parse_tree__module_qual__qualify_items__Constraints_51, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_53, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_54);
        }
#line 398 "module_qual.qualify_items.m"
        {
#line 398 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_constructor_args_10_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__FunctionSymbolName_49, (MR_Integer) 0, parse_tree__module_qual__qualify_items__Args0_46, &parse_tree__module_qual__qualify_items__Args_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_53, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_54, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
#line 400 "module_qual.qualify_items.m"
        {
#line 400 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__Ctor_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 400 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistQVars_43));
#line 400 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_51));
#line 400 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__FunctionSymbolSymName_45));
#line 400 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_52));
#line 400 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_47));
#line 400 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Ctor_21, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_48));
#line 400 "module_qual.qualify_items.m"
        }
#line 382 "module_qual.qualify_items.m"
        {
#line 382 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Ctors0_20, &parse_tree__module_qual__qualify_items__Ctors_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 379 "module_qual.qualify_items.m"
        {
#line 379 "module_qual.qualify_items.m"
          MR_Word base;
#line 379 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 379 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Ctor_21));
#line 379 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Ctors_22));
#line 379 "module_qual.qualify_items.m"
        }
#line 379 "module_qual.qualify_items.m"
      }
#line 377 "module_qual.qualify_items.m"
  }
#line 372 "module_qual.qualify_items.m"
}

#line 361 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(
#line 361 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 361 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 361 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 361 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4,
#line 361 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5,
#line 361 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6,
#line 361 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7)
#line 361 "module_qual.qualify_items.m"
{
#line 366 "module_qual.qualify_items.m"
  {
#line 366 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 366 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "module_qual.qualify_items.m"
      {
#line 366 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6;
#line 366 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4;
#line 366 "module_qual.qualify_items.m"
      }
#line 366 "module_qual.qualify_items.m"
    else
#line 368 "module_qual.qualify_items.m"
      {
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Mutable0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__2_2, (MR_Integer) 0)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Mutables0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__2_2, (MR_Integer) 1)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Mutable_18;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Mutables_19;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26_26;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_27_27;
#line 368 "module_qual.qualify_items.m"
        MR_String parse_tree__module_qual__qualify_items__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 0)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__OrigType0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 1)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 2)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__OrigInst0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 3)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Inst0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 4)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InitTerm_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 5)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Attrs_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 6)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Varset_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 7)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Context_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 8)));
#line 368 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__SeqNum_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable0_16, (MR_Integer) 9)));
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__ErrorContext_49;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__OrigType_50;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Type_52;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__OrigInst_53;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Inst_55;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_56;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_58;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_59;
#line 368 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_60;
#line 1033 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_51_51;
#line 1035 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_54_54;

#line 1032 "module_qual.qualify_items.m"
        {
#line 1032 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__ErrorContext_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1032 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_49, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_47));
#line 1032 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_49, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_39));
#line 1032 "module_qual.qualify_items.m"
        }
#line 1033 "module_qual.qualify_items.m"
        {
#line 1033 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_49, parse_tree__module_qual__qualify_items__OrigType0_40, &parse_tree__module_qual__qualify_items__OrigType_50, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_qual__qualify_items__V_51_51);
        }
#line 1034 "module_qual.qualify_items.m"
        {
#line 1034 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_49, parse_tree__module_qual__qualify_items__Type0_41, &parse_tree__module_qual__qualify_items__Type_52, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_56, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_59);
        }
#line 1035 "module_qual.qualify_items.m"
        {
#line 1035 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_49, parse_tree__module_qual__qualify_items__OrigInst0_42, &parse_tree__module_qual__qualify_items__OrigInst_53, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_36_58, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__module_qual__qualify_items__V_54_54);
        }
#line 1036 "module_qual.qualify_items.m"
        {
#line 1036 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__ErrorContext_49, parse_tree__module_qual__qualify_items__Inst0_43, &parse_tree__module_qual__qualify_items__Inst_55, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_38_60, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_37_59, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_27_27);
        }
#line 1037 "module_qual.qualify_items.m"
        {
#line 1037 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__Mutable_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_39));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__OrigType_50));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_52));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__OrigInst_53));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Inst_55));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__InitTerm_44));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_45));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__Varset_46));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_47));
#line 1037 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Mutable_18, 9) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_48));
#line 1037 "module_qual.qualify_items.m"
        }
#line 370 "module_qual.qualify_items.m"
        {
#line 370 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__Mutables0_17, &parse_tree__module_qual__qualify_items__Mutables_19, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_26_26, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_27_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7);
        }
#line 368 "module_qual.qualify_items.m"
        {
#line 368 "module_qual.qualify_items.m"
          MR_Word base;
#line 368 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__3_3 = base;
#line 368 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mutable_18));
#line 368 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mutables_19));
#line 368 "module_qual.qualify_items.m"
        }
#line 368 "module_qual.qualify_items.m"
      }
#line 366 "module_qual.qualify_items.m"
  }
#line 361 "module_qual.qualify_items.m"
}

#line 311 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_10,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Context_11,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__TypeCtor_12,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__TypeDefn0_13,
#line 311 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__TypeDefn_14,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41,
#line 311 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42,
#line 311 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43,
#line 311 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44)
#line 311 "module_qual.qualify_items.m"
{
#line 320 "module_qual.qualify_items.m"
  {
#line 320 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 320 "module_qual.qualify_items.m"
#line 320 "module_qual.qualify_items.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__TypeDefn0_13)) {
#line 320 "module_qual.qualify_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 320 "module_qual.qualify_items.m"
      case (MR_Integer) 0:
#line 320 "module_qual.qualify_items.m"
        {
#line 320 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Ctors0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 0)));
#line 320 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Ctors_20;
#line 320 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 1)));
#line 320 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__MaybeDirectArgCtors_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 2)));

#line 321 "module_qual.qualify_items.m"
          {
#line 321 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_constructors_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__TypeCtor_12, parse_tree__module_qual__qualify_items__Ctors0_17, &parse_tree__module_qual__qualify_items__Ctors_20, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);
          }
#line 328 "module_qual.qualify_items.m"
          {
#line 328 "module_qual.qualify_items.m"
            MR_Word base;
#line 328 "module_qual.qualify_items.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 328 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__TypeDefn_14 = base;
#line 328 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Ctors_20));
#line 328 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeUserEqComp_21));
#line 328 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDirectArgCtors_22));
#line 328 "module_qual.qualify_items.m"
          }
#line 320 "module_qual.qualify_items.m"
        }
#line 320 "module_qual.qualify_items.m"
        break;
#line 320 "module_qual.qualify_items.m"
      case (MR_Integer) 1:
#line 331 "module_qual.qualify_items.m"
        {
#line 331 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Type0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 0)));
#line 331 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__ErrorContext_24;
#line 331 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Type_25;

#line 332 "module_qual.qualify_items.m"
          {
#line 332 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__ErrorContext_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ErrorContext_24, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_11));
#line 332 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ErrorContext_24, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_12));
#line 332 "module_qual.qualify_items.m"
          }
#line 333 "module_qual.qualify_items.m"
          {
#line 333 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__ErrorContext_24, parse_tree__module_qual__qualify_items__Type0_23, &parse_tree__module_qual__qualify_items__Type_25, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);
          }
#line 334 "module_qual.qualify_items.m"
          {
#line 334 "module_qual.qualify_items.m"
            MR_Word base;
#line 334 "module_qual.qualify_items.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 334 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__TypeDefn_14 = base;
#line 334 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Type_25));
#line 334 "module_qual.qualify_items.m"
          }
#line 331 "module_qual.qualify_items.m"
        }
#line 320 "module_qual.qualify_items.m"
        break;
#line 320 "module_qual.qualify_items.m"
      case (MR_Integer) 2:
#line 336 "module_qual.qualify_items.m"
        {
#line 337 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__TypeDefn_14 = parse_tree__module_qual__qualify_items__TypeDefn0_13;
#line 336 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41;
#line 336 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43;
#line 336 "module_qual.qualify_items.m"
        }
#line 320 "module_qual.qualify_items.m"
        break;
#line 320 "module_qual.qualify_items.m"
      case (MR_Integer) 3:
#line 320 "module_qual.qualify_items.m"
#line 320 "module_qual.qualify_items.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 0)))) {
#line 320 "module_qual.qualify_items.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 320 "module_qual.qualify_items.m"
          case (MR_Integer) 0:
#line 343 "module_qual.qualify_items.m"
            {
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SolverTypeDetails0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 1)));
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__RepnType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 0)));
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 1)));
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__GroundInst0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 2)));
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__AnyInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 3)));
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MutableItems0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails0_30, (MR_Integer) 4)));
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__RepnType_36;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__GroundInst_37;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__AnyInst_38;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MutableItems_39;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SolverTypeDetails_40;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_45_45;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_46_46;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_49_49;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_50_50;
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeUserEqComp_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__TypeDefn0_13, (MR_Integer) 2)));
#line 343 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_58;

#line 346 "module_qual.qualify_items.m"
              {
#line 346 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 346 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ErrorContext_58, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_11));
#line 346 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ErrorContext_58, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeCtor_12));
#line 346 "module_qual.qualify_items.m"
              }
#line 347 "module_qual.qualify_items.m"
              {
#line 347 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__ErrorContext_58, parse_tree__module_qual__qualify_items__RepnType0_31, &parse_tree__module_qual__qualify_items__RepnType_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_45_45, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_46_46);
              }
#line 349 "module_qual.qualify_items.m"
              {
#line 349 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__ErrorContext_58, parse_tree__module_qual__qualify_items__GroundInst0_33, &parse_tree__module_qual__qualify_items__GroundInst_37, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_45_45, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_46_46, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48);
              }
#line 351 "module_qual.qualify_items.m"
              {
#line 351 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__ErrorContext_58, parse_tree__module_qual__qualify_items__AnyInst0_34, &parse_tree__module_qual__qualify_items__AnyInst_38, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_47_47, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_48_48, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_50_50);
              }
#line 353 "module_qual.qualify_items.m"
              {
#line 353 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_constraint_stores_7_p_0(parse_tree__module_qual__qualify_items__InInt_10, parse_tree__module_qual__qualify_items__MutableItems0_35, &parse_tree__module_qual__qualify_items__MutableItems_39, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_49_49, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_50_50, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44);
              }
#line 355 "module_qual.qualify_items.m"
              {
#line 355 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__SolverTypeDetails_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 355 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_40, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__RepnType_36));
#line 355 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_40, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__InitPred_32));
#line 355 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_40, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__GroundInst_37));
#line 355 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_40, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__AnyInst_38));
#line 355 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SolverTypeDetails_40, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MutableItems_39));
#line 355 "module_qual.qualify_items.m"
              }
#line 357 "module_qual.qualify_items.m"
              {
#line 357 "module_qual.qualify_items.m"
                MR_Word base;
#line 357 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 357 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__TypeDefn_14 = base;
#line 357 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 357 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SolverTypeDetails_40));
#line 357 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeUserEqComp_57));
#line 357 "module_qual.qualify_items.m"
              }
#line 343 "module_qual.qualify_items.m"
            }
#line 320 "module_qual.qualify_items.m"
            break;
#line 320 "module_qual.qualify_items.m"
          case (MR_Integer) 1:
#line 339 "module_qual.qualify_items.m"
            {
#line 340 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__TypeDefn_14 = parse_tree__module_qual__qualify_items__TypeDefn0_13;
#line 339 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_42 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_41;
#line 339 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_43;
#line 339 "module_qual.qualify_items.m"
            }
#line 320 "module_qual.qualify_items.m"
            break;
#line 320 "module_qual.qualify_items.m"
        }
#line 320 "module_qual.qualify_items.m"
        break;
#line 320 "module_qual.qualify_items.m"
    }
#line 320 "module_qual.qualify_items.m"
  }
#line 311 "module_qual.qualify_items.m"
}

#line 118 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(
#line 118 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_8,
#line 118 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Item0_9,
#line 118 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Item_10,
#line 118 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96,
#line 118 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97,
#line 118 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98,
#line 118 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99)
#line 118 "module_qual.qualify_items.m"
{
#line 129 "module_qual.qualify_items.m"
  {
#line 129 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 129 "module_qual.qualify_items.m"
#line 129 "module_qual.qualify_items.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Item0_9)) {
#line 129 "module_qual.qualify_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 129 "module_qual.qualify_items.m"
      case (MR_Integer) 0:
#line 129 "module_qual.qualify_items.m"
        {
#line 130 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Item_10 = parse_tree__module_qual__qualify_items__Item0_9;
#line 129 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96;
#line 129 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98;
#line 129 "module_qual.qualify_items.m"
        }
#line 129 "module_qual.qualify_items.m"
        break;
#line 129 "module_qual.qualify_items.m"
      case (MR_Integer) 1:
#line 132 "module_qual.qualify_items.m"
        {
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__ItemTypeDefn0_18 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__qualify_items__Item0_9), (MR_Integer) 1);
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__SymName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 0)));
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Params_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 1)));
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__TypeDefn0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 2)));
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__TVarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 3)));
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 4)));
#line 132 "module_qual.qualify_items.m"
          MR_Integer parse_tree__module_qual__qualify_items__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn0_18, (MR_Integer) 5)));
#line 132 "module_qual.qualify_items.m"
          MR_Integer parse_tree__module_qual__qualify_items__Arity_25;
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__TypeCtor_26;
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__TypeDefn_27;
#line 132 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__ItemTypeDefn_28;

#line 135 "module_qual.qualify_items.m"
          {
#line 135 "module_qual.qualify_items.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[1], parse_tree__module_qual__qualify_items__Params_20, &parse_tree__module_qual__qualify_items__Arity_25);
          }
#line 136 "module_qual.qualify_items.m"
          {
#line 136 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__TypeCtor_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 136 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor_26, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_19));
#line 136 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtor_26, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_25));
#line 136 "module_qual.qualify_items.m"
          }
#line 137 "module_qual.qualify_items.m"
          {
#line 137 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_type_defn_9_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__Context_23, parse_tree__module_qual__qualify_items__TypeCtor_26, parse_tree__module_qual__qualify_items__TypeDefn0_21, &parse_tree__module_qual__qualify_items__TypeDefn_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
          }
#line 139 "module_qual.qualify_items.m"
          {
#line 139 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__ItemTypeDefn_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 139 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_19));
#line 139 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Params_20));
#line 139 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeDefn_27));
#line 139 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__TVarSet_22));
#line 139 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_23));
#line 139 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeDefn_28, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_24));
#line 139 "module_qual.qualify_items.m"
          }
#line 141 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Item_10 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__module_qual__qualify_items__ItemTypeDefn_28);
#line 132 "module_qual.qualify_items.m"
        }
#line 129 "module_qual.qualify_items.m"
        break;
#line 129 "module_qual.qualify_items.m"
      case (MR_Integer) 2:
#line 143 "module_qual.qualify_items.m"
        {
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__ItemInstDefn0_29 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__qualify_items__Item0_9), (MR_Integer) 2);
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__MaybeForTypeCtor0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 2)));
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__InstDefn0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 3)));
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__InstVarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 4)));
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__ErrorContext_33;
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__InstDefn_34;
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37;
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__ItemInstDefn_38;
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__V_135_135;
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_136_136;
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_137_137;
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__SymName_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 0)));
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Params_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 1)));
#line 143 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Context_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 5)));
#line 143 "module_qual.qualify_items.m"
          MR_Integer parse_tree__module_qual__qualify_items__SeqNum_145 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn0_29, (MR_Integer) 6)));
#line 143 "module_qual.qualify_items.m"
          MR_Integer parse_tree__module_qual__qualify_items__Arity_146;

#line 146 "module_qual.qualify_items.m"
          {
#line 146 "module_qual.qualify_items.m"
            mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[2], parse_tree__module_qual__qualify_items__Params_143, &parse_tree__module_qual__qualify_items__Arity_146);
          }
#line 147 "module_qual.qualify_items.m"
          {
#line 147 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_135_135, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_142));
#line 147 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_135_135, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_146));
#line 147 "module_qual.qualify_items.m"
          }
#line 147 "module_qual.qualify_items.m"
          {
#line 147 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__ErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 147 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 147 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_33, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_144));
#line 147 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_33, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_135_135));
#line 147 "module_qual.qualify_items.m"
          }
#line 148 "module_qual.qualify_items.m"
          {
#line 148 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_inst_defn_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_33, parse_tree__module_qual__qualify_items__InstDefn0_31, &parse_tree__module_qual__qualify_items__InstDefn_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_136_136, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_137_137);
          }
#line 155 "module_qual.qualify_items.m"
          if ((parse_tree__module_qual__qualify_items__MaybeForTypeCtor0_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 156 "module_qual.qualify_items.m"
            {
#line 157 "module_qual.qualify_items.m"
              parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 156 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_136_136;
#line 156 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_137_137;
#line 156 "module_qual.qualify_items.m"
            }
#line 155 "module_qual.qualify_items.m"
          else
#line 151 "module_qual.qualify_items.m"
            {
#line 151 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ForTypeCtor0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeForTypeCtor0_30, (MR_Integer) 0)));
#line 151 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ForTypeCtor_36;

#line 152 "module_qual.qualify_items.m"
              {
#line 152 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_ctor_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_33, parse_tree__module_qual__qualify_items__ForTypeCtor0_35, &parse_tree__module_qual__qualify_items__ForTypeCtor_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_136_136, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_137_137, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
#line 154 "module_qual.qualify_items.m"
              {
#line 154 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 154 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__ForTypeCtor_36));
#line 154 "module_qual.qualify_items.m"
              }
#line 151 "module_qual.qualify_items.m"
            }
#line 159 "module_qual.qualify_items.m"
          {
#line 159 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__ItemInstDefn_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 159 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_142));
#line 159 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Params_143));
#line 159 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeForTypeCtor_37));
#line 159 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstDefn_34));
#line 159 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarSet_32));
#line 159 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_144));
#line 159 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstDefn_38, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_145));
#line 159 "module_qual.qualify_items.m"
          }
#line 161 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Item_10 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__module_qual__qualify_items__ItemInstDefn_38);
#line 143 "module_qual.qualify_items.m"
        }
#line 129 "module_qual.qualify_items.m"
        break;
#line 129 "module_qual.qualify_items.m"
      case (MR_Integer) 3:
#line 129 "module_qual.qualify_items.m"
#line 129 "module_qual.qualify_items.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 0)))) {
#line 129 "module_qual.qualify_items.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 0:
#line 163 "module_qual.qualify_items.m"
            {
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemModeDefn0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeDefn0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 2)));
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModeDefn_41;
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemModeDefn_42;
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__V_132_132;
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SymName_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 0)));
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Params_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 1)));
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Context_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 4)));
#line 163 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 5)));
#line 163 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__Arity_151;
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__InstVarSet_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn0_39, (MR_Integer) 3)));
#line 163 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_153;

#line 166 "module_qual.qualify_items.m"
              {
#line 166 "module_qual.qualify_items.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[2], parse_tree__module_qual__qualify_items__Params_148, &parse_tree__module_qual__qualify_items__Arity_151);
              }
#line 167 "module_qual.qualify_items.m"
              {
#line 167 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 167 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_132_132, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_147));
#line 167 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_132_132, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_151));
#line 167 "module_qual.qualify_items.m"
              }
#line 167 "module_qual.qualify_items.m"
              {
#line 167 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 167 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 167 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_149));
#line 167 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_153, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_132_132));
#line 167 "module_qual.qualify_items.m"
              }
#line 168 "module_qual.qualify_items.m"
              {
#line 168 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_mode_defn_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_153, parse_tree__module_qual__qualify_items__ModeDefn0_40, &parse_tree__module_qual__qualify_items__ModeDefn_41, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
#line 170 "module_qual.qualify_items.m"
              {
#line 170 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ItemModeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_147));
#line 170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Params_148));
#line 170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModeDefn_41));
#line 170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarSet_152));
#line 170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_149));
#line 170 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDefn_42, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_150));
#line 170 "module_qual.qualify_items.m"
              }
#line 172 "module_qual.qualify_items.m"
              {
#line 172 "module_qual.qualify_items.m"
                MR_Word base;
#line 172 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Item_10 = base;
#line 172 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 172 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemModeDefn_42));
#line 172 "module_qual.qualify_items.m"
              }
#line 163 "module_qual.qualify_items.m"
            }
#line 129 "module_qual.qualify_items.m"
            break;
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 1:
#line 174 "module_qual.qualify_items.m"
            {
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemPredDecl0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 1)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypesAndModes0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 2)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithType0_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 3)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 4)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeDetism_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 5)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Origin_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 6)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypeVarSet_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 7)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ExistQVars_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 9)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Purity_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 10)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Constraints0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 11)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__TypesAndModes_54;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_55;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Constraints_56;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithType_59;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst_62;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemPredDecl_63;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__V_123_123;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_124_124;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_125_125;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_126_126;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_127_127;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SymName_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 0)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Context_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 12)));
#line 174 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_156 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 13)));
#line 174 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__Arity_157;
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__InstVarSet_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl0_43, (MR_Integer) 8)));
#line 174 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_159;

#line 179 "module_qual.qualify_items.m"
              {
#line 179 "module_qual.qualify_items.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__module_qual__qualify_items__TypesAndModes0_45, &parse_tree__module_qual__qualify_items__Arity_157);
              }
#line 181 "module_qual.qualify_items.m"
              {
#line 181 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_123_123, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_154));
#line 181 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_123_123, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_157));
#line 181 "module_qual.qualify_items.m"
              }
#line 180 "module_qual.qualify_items.m"
              {
#line 180 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 180 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 180 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_159, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_155));
#line 180 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_159, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_44));
#line 180 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_159, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_123_123));
#line 180 "module_qual.qualify_items.m"
              }
#line 182 "module_qual.qualify_items.m"
              {
#line 182 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_types_and_modes_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_159, parse_tree__module_qual__qualify_items__TypesAndModes0_45, &parse_tree__module_qual__qualify_items__TypesAndModes_54, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_124_124, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_125_125);
              }
#line 184 "module_qual.qualify_items.m"
              {
#line 184 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ConstraintErrorContext_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 184 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 184 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_155));
#line 184 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_44));
#line 184 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_154));
#line 184 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_157));
#line 184 "module_qual.qualify_items.m"
              }
#line 186 "module_qual.qualify_items.m"
              {
#line 186 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_prog_constraints_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ConstraintErrorContext_55, parse_tree__module_qual__qualify_items__Constraints0_53, &parse_tree__module_qual__qualify_items__Constraints_56, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_124_124, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_126_126, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_125_125, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_127_127);
              }
#line 194 "module_qual.qualify_items.m"
              if ((parse_tree__module_qual__qualify_items__MaybeWithType0_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "module_qual.qualify_items.m"
                {
#line 196 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__MaybeWithType_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 195 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_126_126;
#line 195 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_127_127;
#line 195 "module_qual.qualify_items.m"
                }
#line 194 "module_qual.qualify_items.m"
              else
#line 189 "module_qual.qualify_items.m"
                {
#line 189 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__WithType0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithType0_46, (MR_Integer) 0)));
#line 189 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__WithType_58;

#line 191 "module_qual.qualify_items.m"
                  {
#line 191 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_159, parse_tree__module_qual__qualify_items__WithType0_57, &parse_tree__module_qual__qualify_items__WithType_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_126_126, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_127_127, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129);
                  }
#line 193 "module_qual.qualify_items.m"
                  {
#line 193 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__MaybeWithType_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 193 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithType_59, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithType_58));
#line 193 "module_qual.qualify_items.m"
                  }
#line 189 "module_qual.qualify_items.m"
                }
#line 204 "module_qual.qualify_items.m"
              if ((parse_tree__module_qual__qualify_items__MaybeWithInst0_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "module_qual.qualify_items.m"
                {
#line 206 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__MaybeWithInst_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 205 "module_qual.qualify_items.m"
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128;
#line 205 "module_qual.qualify_items.m"
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129;
#line 205 "module_qual.qualify_items.m"
                }
#line 204 "module_qual.qualify_items.m"
              else
#line 199 "module_qual.qualify_items.m"
                {
#line 199 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__WithInst0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst0_47, (MR_Integer) 0)));
#line 199 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__WithInst_61;

#line 201 "module_qual.qualify_items.m"
                  {
#line 201 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_159, parse_tree__module_qual__qualify_items__WithInst0_60, &parse_tree__module_qual__qualify_items__WithInst_61, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_128_128, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_129_129, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
                  }
#line 203 "module_qual.qualify_items.m"
                  {
#line 203 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__MaybeWithInst_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst_62, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithInst_61));
#line 203 "module_qual.qualify_items.m"
                  }
#line 199 "module_qual.qualify_items.m"
                }
#line 208 "module_qual.qualify_items.m"
              {
#line 208 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ItemPredDecl_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_154));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_44));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypesAndModes_54));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithType_59));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithInst_62));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDetism_48));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Origin_49));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__TypeVarSet_50));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarSet_158));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 9) = ((MR_Box) (parse_tree__module_qual__qualify_items__ExistQVars_51));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 10) = ((MR_Box) (parse_tree__module_qual__qualify_items__Purity_52));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 11) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_56));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 12) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_155));
#line 208 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPredDecl_63, 13) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_156));
#line 208 "module_qual.qualify_items.m"
              }
#line 212 "module_qual.qualify_items.m"
              {
#line 212 "module_qual.qualify_items.m"
                MR_Word base;
#line 212 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Item_10 = base;
#line 212 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 212 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemPredDecl_63));
#line 212 "module_qual.qualify_items.m"
              }
#line 174 "module_qual.qualify_items.m"
            }
#line 129 "module_qual.qualify_items.m"
            break;
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 2:
#line 214 "module_qual.qualify_items.m"
            {
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemModeDecl0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Modes0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 2)));
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Modes_66;
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemModeDecl_67;
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__V_118_118;
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_119_119;
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_120_120;
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SymName_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 0)));
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Context_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 6)));
#line 214 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 7)));
#line 214 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__Arity_167;
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__InstVarSet_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 5)));
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_169;
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__PredOrFunc_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 1)));
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst0_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 3)));
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeDetism_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl0_64, (MR_Integer) 4)));
#line 214 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeWithInst_175;

#line 217 "module_qual.qualify_items.m"
              {
#line 217 "module_qual.qualify_items.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__module_qual__qualify_items__Modes0_65, &parse_tree__module_qual__qualify_items__Arity_167);
              }
#line 219 "module_qual.qualify_items.m"
              {
#line 219 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_118_118, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_164));
#line 219 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_118_118, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_167));
#line 219 "module_qual.qualify_items.m"
              }
#line 218 "module_qual.qualify_items.m"
              {
#line 218 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 218 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 218 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_169, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_165));
#line 218 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_169, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_170));
#line 218 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_169, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_118_118));
#line 218 "module_qual.qualify_items.m"
              }
#line 220 "module_qual.qualify_items.m"
              {
#line 220 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_169, parse_tree__module_qual__qualify_items__Modes0_65, &parse_tree__module_qual__qualify_items__Modes_66, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_119_119, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_120_120);
              }
#line 227 "module_qual.qualify_items.m"
              if ((parse_tree__module_qual__qualify_items__MaybeWithInst0_171 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "module_qual.qualify_items.m"
                {
#line 229 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__MaybeWithInst_175 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 228 "module_qual.qualify_items.m"
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_119_119;
#line 228 "module_qual.qualify_items.m"
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_120_120;
#line 228 "module_qual.qualify_items.m"
                }
#line 227 "module_qual.qualify_items.m"
              else
#line 222 "module_qual.qualify_items.m"
                {
#line 222 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__WithInst0_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst0_171, (MR_Integer) 0)));
#line 222 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__WithInst_161;

#line 224 "module_qual.qualify_items.m"
                  {
#line 224 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__qualify_inst_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_169, parse_tree__module_qual__qualify_items__WithInst0_160, &parse_tree__module_qual__qualify_items__WithInst_161, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_119_119, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_120_120, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
                  }
#line 226 "module_qual.qualify_items.m"
                  {
#line 226 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__MaybeWithInst_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 226 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__MaybeWithInst_175, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__WithInst_161));
#line 226 "module_qual.qualify_items.m"
                  }
#line 222 "module_qual.qualify_items.m"
                }
#line 231 "module_qual.qualify_items.m"
              {
#line 231 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ItemModeDecl_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 231 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_164));
#line 231 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__PredOrFunc_170));
#line 231 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_66));
#line 231 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeWithInst_175));
#line 231 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeDetism_172));
#line 231 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__InstVarSet_168));
#line 231 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_165));
#line 231 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemModeDecl_67, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_166));
#line 231 "module_qual.qualify_items.m"
              }
#line 233 "module_qual.qualify_items.m"
              {
#line 233 "module_qual.qualify_items.m"
                MR_Word base;
#line 233 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Item_10 = base;
#line 233 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 233 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemModeDecl_67));
#line 233 "module_qual.qualify_items.m"
              }
#line 214 "module_qual.qualify_items.m"
            }
#line 129 "module_qual.qualify_items.m"
            break;
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 3:
#line 297 "module_qual.qualify_items.m"
            {
#line 297 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemPragma0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
#line 297 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Pragma0_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma0_92, (MR_Integer) 0)));
#line 297 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Pragma_94;
#line 297 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemPragma_95;
#line 297 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Context_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma0_92, (MR_Integer) 2)));
#line 297 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_195 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma0_92, (MR_Integer) 3)));
#line 297 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Origin_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma0_92, (MR_Integer) 1)));

#line 299 "module_qual.qualify_items.m"
              {
#line 299 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_pragma_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__Context_194, parse_tree__module_qual__qualify_items__Pragma0_93, &parse_tree__module_qual__qualify_items__Pragma_94, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
#line 300 "module_qual.qualify_items.m"
              {
#line 300 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ItemPragma_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 300 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma_95, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Pragma_94));
#line 300 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma_95, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Origin_196));
#line 300 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma_95, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_194));
#line 300 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemPragma_95, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_195));
#line 300 "module_qual.qualify_items.m"
              }
#line 301 "module_qual.qualify_items.m"
              {
#line 301 "module_qual.qualify_items.m"
                MR_Word base;
#line 301 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Item_10 = base;
#line 301 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 301 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemPragma_95));
#line 301 "module_qual.qualify_items.m"
              }
#line 297 "module_qual.qualify_items.m"
            }
#line 129 "module_qual.qualify_items.m"
            break;
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 4:
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 7:
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 8:
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 10:
#line 129 "module_qual.qualify_items.m"
            {
#line 130 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__Item_10 = parse_tree__module_qual__qualify_items__Item0_9;
#line 129 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96;
#line 129 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98;
#line 129 "module_qual.qualify_items.m"
            }
#line 129 "module_qual.qualify_items.m"
            break;
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 5:
#line 235 "module_qual.qualify_items.m"
            {
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemTypeClass0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Name_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 0)));
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Vars_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 1)));
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__FunDeps_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 3)));
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Interface0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 4)));
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__VarSet_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 5)));
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Interface_74;
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemTypeClass_77;
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_113_113;
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_114_114;
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Context_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 6)));
#line 235 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_179 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 7)));
#line 235 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__Arity_180;
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Constraints0_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass0_68, (MR_Integer) 2)));
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_183;
#line 235 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Constraints_184;

#line 238 "module_qual.qualify_items.m"
              {
#line 238 "module_qual.qualify_items.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[1], parse_tree__module_qual__qualify_items__Vars_70, &parse_tree__module_qual__qualify_items__Arity_180);
              }
#line 239 "module_qual.qualify_items.m"
              {
#line 239 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ConstraintErrorContext_183 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 239 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ConstraintErrorContext_183, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_178));
#line 239 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ConstraintErrorContext_183, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_69));
#line 239 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ConstraintErrorContext_183, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_180));
#line 239 "module_qual.qualify_items.m"
              }
#line 240 "module_qual.qualify_items.m"
              {
#line 240 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ConstraintErrorContext_183, parse_tree__module_qual__qualify_items__Constraints0_182, &parse_tree__module_qual__qualify_items__Constraints_184, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_113_113, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_114_114);
              }
#line 245 "module_qual.qualify_items.m"
              if ((parse_tree__module_qual__qualify_items__Interface0_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "module_qual.qualify_items.m"
                {
#line 244 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__Interface_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "module_qual.qualify_items.m"
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_113_113;
#line 243 "module_qual.qualify_items.m"
                  *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_114_114;
#line 243 "module_qual.qualify_items.m"
                }
#line 245 "module_qual.qualify_items.m"
              else
#line 246 "module_qual.qualify_items.m"
                {
#line 246 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__Methods0_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Interface0_72, (MR_Integer) 0)));
#line 246 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__Methods_76;
#line 246 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__V_115_115;
#line 246 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_176;

#line 247 "module_qual.qualify_items.m"
                  {
#line 247 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_115_115, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_69));
#line 247 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_115_115, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_180));
#line 247 "module_qual.qualify_items.m"
                  }
#line 247 "module_qual.qualify_items.m"
                  {
#line 247 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__ErrorContext_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 247 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 247 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_178));
#line 247 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_176, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_115_115));
#line 247 "module_qual.qualify_items.m"
                  }
#line 248 "module_qual.qualify_items.m"
                  {
#line 248 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__qualify_class_methods_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_176, parse_tree__module_qual__qualify_items__Methods0_75, &parse_tree__module_qual__qualify_items__Methods_76, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_113_113, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_114_114, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
                  }
#line 250 "module_qual.qualify_items.m"
                  {
#line 250 "module_qual.qualify_items.m"
                    parse_tree__module_qual__qualify_items__Interface_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 250 "module_qual.qualify_items.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Interface_74, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Methods_76));
#line 250 "module_qual.qualify_items.m"
                  }
#line 246 "module_qual.qualify_items.m"
                }
#line 252 "module_qual.qualify_items.m"
              {
#line 252 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ItemTypeClass_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 252 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_69));
#line 252 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Vars_70));
#line 252 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_184));
#line 252 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__FunDeps_71));
#line 252 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Interface_74));
#line 252 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__VarSet_73));
#line 252 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_178));
#line 252 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemTypeClass_77, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_179));
#line 252 "module_qual.qualify_items.m"
              }
#line 254 "module_qual.qualify_items.m"
              {
#line 254 "module_qual.qualify_items.m"
                MR_Word base;
#line 254 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Item_10 = base;
#line 254 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 254 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemTypeClass_77));
#line 254 "module_qual.qualify_items.m"
              }
#line 235 "module_qual.qualify_items.m"
            }
#line 129 "module_qual.qualify_items.m"
            break;
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 6:
#line 256 "module_qual.qualify_items.m"
            {
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemInstance0_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Name0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 0)));
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Types0_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 1)));
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__OriginalTypes0_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 2)));
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Body0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 4)));
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ModName_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 6)));
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Id0_84;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Types_85;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__OriginalTypes_86;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Body_88;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemInstance_89;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_105_105;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_106_106;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_107_107;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_108_108;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_109_109;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_110_110;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Context_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 7)));
#line 256 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__SeqNum_186 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 8)));
#line 256 "module_qual.qualify_items.m"
              MR_Integer parse_tree__module_qual__qualify_items__Arity_187;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ErrorContext_188;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Constraints0_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 3)));
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ConstraintErrorContext_190;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Constraints_191;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Name_192;
#line 256 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__VarSet_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance0_78, (MR_Integer) 5)));
#line 286 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__V_87_87;

#line 259 "module_qual.qualify_items.m"
              {
#line 259 "module_qual.qualify_items.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__module_qual__qualify_items__Types0_80, &parse_tree__module_qual__qualify_items__Arity_187);
              }
#line 260 "module_qual.qualify_items.m"
              {
#line 260 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__Id0_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 260 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Id0_84, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name0_79));
#line 260 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Id0_84, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_187));
#line 260 "module_qual.qualify_items.m"
              }
#line 261 "module_qual.qualify_items.m"
              {
#line 261 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ErrorContext_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 261 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 261 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_188, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_185));
#line 261 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__ErrorContext_188, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Id0_84));
#line 261 "module_qual.qualify_items.m"
              }
#line 266 "module_qual.qualify_items.m"
#line 266 "module_qual.qualify_items.m"
              switch (parse_tree__module_qual__qualify_items__InInt_8) {
#line 266 "module_qual.qualify_items.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 266 "module_qual.qualify_items.m"
                case (MR_Integer) 0:
#line 267 "module_qual.qualify_items.m"
                  parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_105_105 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96;
#line 266 "module_qual.qualify_items.m"
                  break;
#line 266 "module_qual.qualify_items.m"
                case (MR_Integer) 1:
#line 264 "module_qual.qualify_items.m"
                  {
#line 265 "module_qual.qualify_items.m"
                    {
#line 265 "module_qual.qualify_items.m"
                      parse_tree__module_qual__mq_info_set_exported_instances_flag_3_p_0((MR_Integer) 1, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_105_105);
                    }
#line 264 "module_qual.qualify_items.m"
                  }
#line 266 "module_qual.qualify_items.m"
                  break;
#line 266 "module_qual.qualify_items.m"
              }
#line 272 "module_qual.qualify_items.m"
              {
#line 272 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ConstraintErrorContext_190 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 272 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__ConstraintErrorContext_190, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_185));
#line 272 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__ConstraintErrorContext_190, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name0_79));
#line 272 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__ConstraintErrorContext_190, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__OriginalTypes0_81));
#line 272 "module_qual.qualify_items.m"
              }
#line 274 "module_qual.qualify_items.m"
              {
#line 274 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_prog_constraint_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ConstraintErrorContext_190, parse_tree__module_qual__qualify_items__Constraints0_189, &parse_tree__module_qual__qualify_items__Constraints_191, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_105_105, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_106_106, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_107_107);
              }
#line 276 "module_qual.qualify_items.m"
              {
#line 276 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_class_name_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_188, parse_tree__module_qual__qualify_items__Id0_84, &parse_tree__module_qual__qualify_items__Name_192, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_106_106, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_108_108, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_107_107, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_109_109);
              }
#line 284 "module_qual.qualify_items.m"
              {
#line 284 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_188, parse_tree__module_qual__qualify_items__Types0_80, &parse_tree__module_qual__qualify_items__Types_85, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_108_108, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_110_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_109_109, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
#line 286 "module_qual.qualify_items.m"
              {
#line 286 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ErrorContext_188, parse_tree__module_qual__qualify_items__OriginalTypes0_81, &parse_tree__module_qual__qualify_items__OriginalTypes_86, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_110_110, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99, &parse_tree__module_qual__qualify_items__V_87_87);
              }
#line 288 "module_qual.qualify_items.m"
              {
#line 288 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_instance_body_3_p_0(parse_tree__module_qual__qualify_items__Name_192, parse_tree__module_qual__qualify_items__Body0_82, &parse_tree__module_qual__qualify_items__Body_88);
              }
#line 289 "module_qual.qualify_items.m"
              {
#line 289 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__ItemInstance_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_192));
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Types_85));
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__OriginalTypes_86));
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Constraints_191));
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Body_88));
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__VarSet_193));
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__ModName_83));
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 7) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_185));
#line 289 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__ItemInstance_89, 8) = ((MR_Box) (parse_tree__module_qual__qualify_items__SeqNum_186));
#line 289 "module_qual.qualify_items.m"
              }
#line 291 "module_qual.qualify_items.m"
              {
#line 291 "module_qual.qualify_items.m"
                MR_Word base;
#line 291 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Item_10 = base;
#line 291 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 291 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemInstance_89));
#line 291 "module_qual.qualify_items.m"
              }
#line 256 "module_qual.qualify_items.m"
            }
#line 129 "module_qual.qualify_items.m"
            break;
#line 129 "module_qual.qualify_items.m"
          case (MR_Integer) 9:
#line 293 "module_qual.qualify_items.m"
            {
#line 293 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemMutable0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Item0_9, (MR_Integer) 1)));
#line 293 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__ItemMutable_91;

#line 294 "module_qual.qualify_items.m"
              {
#line 294 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_mutable_7_p_0(parse_tree__module_qual__qualify_items__InInt_8, parse_tree__module_qual__qualify_items__ItemMutable0_90, &parse_tree__module_qual__qualify_items__ItemMutable_91, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_96, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_97, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_98, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_99);
              }
#line 295 "module_qual.qualify_items.m"
              {
#line 295 "module_qual.qualify_items.m"
                MR_Word base;
#line 295 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Item_10 = base;
#line 295 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 295 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__ItemMutable_91));
#line 295 "module_qual.qualify_items.m"
              }
#line 293 "module_qual.qualify_items.m"
            }
#line 129 "module_qual.qualify_items.m"
            break;
#line 129 "module_qual.qualify_items.m"
        }
#line 129 "module_qual.qualify_items.m"
        break;
#line 129 "module_qual.qualify_items.m"
    }
#line 129 "module_qual.qualify_items.m"
  }
#line 118 "module_qual.qualify_items.m"
}

#line 56 "module_qual.qualify_items.m"
void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(
#line 56 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 56 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 56 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 56 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 56 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 56 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 56 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 56 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 56 "module_qual.qualify_items.m"
{
#line 774 "module_qual.qualify_items.m"
  {
#line 774 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 774 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 774 "module_qual.qualify_items.m"
      {
#line 774 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 774 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 774 "module_qual.qualify_items.m"
      }
#line 774 "module_qual.qualify_items.m"
    else
#line 776 "module_qual.qualify_items.m"
      {
#line 776 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Mode0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 776 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 776 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Mode_21;
#line 776 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Modes_22;
#line 776 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29;
#line 776 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30;

#line 777 "module_qual.qualify_items.m"
        {
#line 777 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_mode_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Mode0_19, &parse_tree__module_qual__qualify_items__Mode_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30);
        }
#line 778 "module_qual.qualify_items.m"
        {
#line 778 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_mode_list_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadVar__2_2, parse_tree__module_qual__qualify_items__Modes0_20, &parse_tree__module_qual__qualify_items__Modes_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_29_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_30_30, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 775 "module_qual.qualify_items.m"
        {
#line 775 "module_qual.qualify_items.m"
          MR_Word base;
#line 775 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 775 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Mode_21));
#line 775 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Modes_22));
#line 775 "module_qual.qualify_items.m"
        }
#line 776 "module_qual.qualify_items.m"
      }
#line 774 "module_qual.qualify_items.m"
  }
#line 56 "module_qual.qualify_items.m"
}

#line 52 "module_qual.qualify_items.m"
void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_type_8_p_0(
#line 52 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__InInt_9,
#line 52 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__ErrorContext_10,
#line 52 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__Type0_11,
#line 52 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__Type_12,
#line 52 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33,
#line 52 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34,
#line 52 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35,
#line 52 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36)
#line 52 "module_qual.qualify_items.m"
{
#line 452 "module_qual.qualify_items.m"
  {
#line 452 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 452 "module_qual.qualify_items.m"
#line 452 "module_qual.qualify_items.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__qualify_items__Type0_11)) {
#line 452 "module_qual.qualify_items.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 452 "module_qual.qualify_items.m"
      case (MR_Integer) 0:
#line 452 "module_qual.qualify_items.m"
        {
#line 453 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Type_12 = parse_tree__module_qual__qualify_items__Type0_11;
#line 452 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33;
#line 452 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35;
#line 452 "module_qual.qualify_items.m"
        }
#line 452 "module_qual.qualify_items.m"
        break;
#line 452 "module_qual.qualify_items.m"
      case (MR_Integer) 1:
#line 455 "module_qual.qualify_items.m"
        {
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__SymName0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 0)));
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Args0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Kind_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));
#line 455 "module_qual.qualify_items.m"
          MR_Integer parse_tree__module_qual__qualify_items__Arity_20;
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__TypeCtorId0_21;
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Types_22;
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__SymName_23;
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__Args_24;
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_57_57;
#line 455 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_58_58;

#line 456 "module_qual.qualify_items.m"
          {
#line 456 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__Arity_20 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__module_qual__qualify_items__Args0_18);
          }
#line 457 "module_qual.qualify_items.m"
          {
#line 457 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__TypeCtorId0_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 457 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtorId0_21, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName0_17));
#line 457 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__TypeCtorId0_21, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Arity_20));
#line 457 "module_qual.qualify_items.m"
          }
#line 458 "module_qual.qualify_items.m"
          {
#line 458 "module_qual.qualify_items.m"
            parse_tree__module_qual__mq_info_get_types_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, &parse_tree__module_qual__qualify_items__Types_22);
          }
#line 459 "module_qual.qualify_items.m"
          {
#line 459 "module_qual.qualify_items.m"
            parse_tree__module_qual__id_set__find_unique_match_10_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Types_22, (MR_Integer) 0, parse_tree__module_qual__qualify_items__TypeCtorId0_21, &parse_tree__module_qual__qualify_items__SymName_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_57_57, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_58_58);
          }
#line 462 "module_qual.qualify_items.m"
          {
#line 462 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_18, &parse_tree__module_qual__qualify_items__Args_24, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_57_57, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_58_58, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
          }
#line 463 "module_qual.qualify_items.m"
          {
#line 463 "module_qual.qualify_items.m"
            MR_Word base;
#line 463 "module_qual.qualify_items.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 463 "module_qual.qualify_items.m"
            *parse_tree__module_qual__qualify_items__Type_12 = base;
#line 463 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SymName_23));
#line 463 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_24));
#line 463 "module_qual.qualify_items.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Kind_19));
#line 463 "module_qual.qualify_items.m"
          }
#line 455 "module_qual.qualify_items.m"
        }
#line 452 "module_qual.qualify_items.m"
        break;
#line 452 "module_qual.qualify_items.m"
      case (MR_Integer) 2:
#line 465 "module_qual.qualify_items.m"
        {
#line 465 "module_qual.qualify_items.m"
          MR_Word parse_tree__module_qual__qualify_items__BuiltinType_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 0)));

#line 476 "module_qual.qualify_items.m"
#line 476 "module_qual.qualify_items.m"
          switch (parse_tree__module_qual__qualify_items__BuiltinType_25) {
#line 476 "module_qual.qualify_items.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 476 "module_qual.qualify_items.m"
            case (MR_Integer) 3:
#line 483 "module_qual.qualify_items.m"
              *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33;
#line 476 "module_qual.qualify_items.m"
              break;
#line 476 "module_qual.qualify_items.m"
            case (MR_Integer) 1:
#line 477 "module_qual.qualify_items.m"
              {
#line 478 "module_qual.qualify_items.m"
                {
#line 478 "module_qual.qualify_items.m"
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(parse_tree__module_qual__qualify_items__InInt_9, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_3[0], parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34);
                }
#line 477 "module_qual.qualify_items.m"
              }
#line 476 "module_qual.qualify_items.m"
              break;
#line 476 "module_qual.qualify_items.m"
            case (MR_Integer) 0:
#line 474 "module_qual.qualify_items.m"
              {
#line 475 "module_qual.qualify_items.m"
                {
#line 475 "module_qual.qualify_items.m"
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(parse_tree__module_qual__qualify_items__InInt_9, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_3[1], parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34);
                }
#line 474 "module_qual.qualify_items.m"
              }
#line 476 "module_qual.qualify_items.m"
              break;
#line 476 "module_qual.qualify_items.m"
            case (MR_Integer) 2:
#line 480 "module_qual.qualify_items.m"
              {
#line 481 "module_qual.qualify_items.m"
                {
#line 481 "module_qual.qualify_items.m"
                  parse_tree__module_qual__mq_info_set_module_used_4_p_0(parse_tree__module_qual__qualify_items__InInt_9, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_3[2], parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34);
                }
#line 480 "module_qual.qualify_items.m"
              }
#line 476 "module_qual.qualify_items.m"
              break;
#line 476 "module_qual.qualify_items.m"
          }
#line 485 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__Type_12 = parse_tree__module_qual__qualify_items__Type0_11;
#line 465 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35;
#line 465 "module_qual.qualify_items.m"
        }
#line 452 "module_qual.qualify_items.m"
        break;
#line 452 "module_qual.qualify_items.m"
      case (MR_Integer) 3:
#line 452 "module_qual.qualify_items.m"
#line 452 "module_qual.qualify_items.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 0)))) {
#line 452 "module_qual.qualify_items.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 452 "module_qual.qualify_items.m"
          case (MR_Integer) 0:
#line 495 "module_qual.qualify_items.m"
            {
#line 495 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args0_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
#line 495 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Kind_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));
#line 495 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args_65;

#line 497 "module_qual.qualify_items.m"
              {
#line 497 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_63, &parse_tree__module_qual__qualify_items__Args_65, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
              }
#line 498 "module_qual.qualify_items.m"
              {
#line 498 "module_qual.qualify_items.m"
                MR_Word base;
#line 498 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 498 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Type_12 = base;
#line 498 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 498 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_65));
#line 498 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Kind_64));
#line 498 "module_qual.qualify_items.m"
              }
#line 495 "module_qual.qualify_items.m"
            }
#line 452 "module_qual.qualify_items.m"
            break;
#line 452 "module_qual.qualify_items.m"
          case (MR_Integer) 1:
#line 487 "module_qual.qualify_items.m"
            {
#line 487 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeRet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));
#line 487 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 3)));
#line 487 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__MaybeRet_29;
#line 487 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43;
#line 487 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44;
#line 487 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
#line 487 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args_62;

#line 489 "module_qual.qualify_items.m"
              {
#line 489 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_61, &parse_tree__module_qual__qualify_items__Args_62, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44);
              }
#line 491 "module_qual.qualify_items.m"
              {
#line 491 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_maybe_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__MaybeRet0_26, &parse_tree__module_qual__qualify_items__MaybeRet_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_43_43, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_44_44, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
              }
#line 493 "module_qual.qualify_items.m"
              {
#line 493 "module_qual.qualify_items.m"
                MR_Word base;
#line 493 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 493 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Type_12 = base;
#line 493 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 493 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_62));
#line 493 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__MaybeRet_29));
#line 493 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Purity_27));
#line 493 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 493 "module_qual.qualify_items.m"
              }
#line 487 "module_qual.qualify_items.m"
            }
#line 452 "module_qual.qualify_items.m"
            break;
#line 452 "module_qual.qualify_items.m"
          case (MR_Integer) 2:
#line 500 "module_qual.qualify_items.m"
            {
#line 500 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
#line 500 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));
#line 500 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Kind_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 3)));
#line 500 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Args_68;

#line 502 "module_qual.qualify_items.m"
              {
#line 502 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_list_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__Args0_66, &parse_tree__module_qual__qualify_items__Args_68, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
              }
#line 503 "module_qual.qualify_items.m"
              {
#line 503 "module_qual.qualify_items.m"
                MR_Word base;
#line 503 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 503 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Type_12 = base;
#line 503 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 503 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Var_30));
#line 503 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Args_68));
#line 503 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Kind_67));
#line 503 "module_qual.qualify_items.m"
              }
#line 500 "module_qual.qualify_items.m"
            }
#line 452 "module_qual.qualify_items.m"
            break;
#line 452 "module_qual.qualify_items.m"
          case (MR_Integer) 3:
#line 505 "module_qual.qualify_items.m"
            {
#line 505 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SubType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 1)));
#line 505 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__SubType_32;
#line 505 "module_qual.qualify_items.m"
              MR_Word parse_tree__module_qual__qualify_items__Kind_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__qualify_items__Type0_11, (MR_Integer) 2)));

#line 507 "module_qual.qualify_items.m"
              {
#line 507 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__qualify_type_8_p_0(parse_tree__module_qual__qualify_items__InInt_9, parse_tree__module_qual__qualify_items__ErrorContext_10, parse_tree__module_qual__qualify_items__SubType0_31, &parse_tree__module_qual__qualify_items__SubType_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36);
              }
#line 508 "module_qual.qualify_items.m"
              {
#line 508 "module_qual.qualify_items.m"
                MR_Word base;
#line 508 "module_qual.qualify_items.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 508 "module_qual.qualify_items.m"
                *parse_tree__module_qual__qualify_items__Type_12 = base;
#line 508 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 508 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SubType_32));
#line 508 "module_qual.qualify_items.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Kind_69));
#line 508 "module_qual.qualify_items.m"
              }
#line 505 "module_qual.qualify_items.m"
            }
#line 452 "module_qual.qualify_items.m"
            break;
#line 452 "module_qual.qualify_items.m"
        }
#line 452 "module_qual.qualify_items.m"
        break;
#line 452 "module_qual.qualify_items.m"
    }
#line 452 "module_qual.qualify_items.m"
  }
#line 52 "module_qual.qualify_items.m"
}

#line 44 "module_qual.qualify_items.m"
void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(
#line 44 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 44 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 44 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 44 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4,
#line 44 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5,
#line 44 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6,
#line 44 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7)
#line 44 "module_qual.qualify_items.m"
{
#line 109 "module_qual.qualify_items.m"
  {
#line 109 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 109 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 109 "module_qual.qualify_items.m"
      {
#line 109 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 109 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6;
#line 109 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4;
#line 109 "module_qual.qualify_items.m"
      }
#line 109 "module_qual.qualify_items.m"
    else
#line 111 "module_qual.qualify_items.m"
      {
#line 111 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__HeadItem0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__2_2, (MR_Integer) 0)));
#line 111 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TailItems0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__2_2, (MR_Integer) 1)));
#line 111 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__HeadItem_21;
#line 111 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TailItems_22;
#line 111 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_27;
#line 111 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_28;

#line 112 "module_qual.qualify_items.m"
        {
#line 112 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__module_qualify_item_7_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__HeadItem0_16, &parse_tree__module_qual__qualify_items__HeadItem_21, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_4, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_6, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_28);
        }
#line 113 "module_qual.qualify_items.m"
        {
#line 113 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__TailItems0_17, &parse_tree__module_qual__qualify_items__TailItems_22, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_27_27, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_5, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_28_28, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_7);
        }
#line 114 "module_qual.qualify_items.m"
        {
#line 114 "module_qual.qualify_items.m"
          MR_Word base;
#line 114 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__3_3 = base;
#line 114 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadItem_21));
#line 114 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__TailItems_22));
#line 114 "module_qual.qualify_items.m"
        }
#line 111 "module_qual.qualify_items.m"
      }
#line 109 "module_qual.qualify_items.m"
  }
#line 44 "module_qual.qualify_items.m"
}

#line 1303 "module_qual.qualify_items.m"
static void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1(
#line 1303 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__closure_arg,
#line 1303 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_1,
#line 1303 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_2,
#line 1303 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_3,
#line 1303 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_4,
#line 1303 "module_qual.qualify_items.m"
  MR_Box parse_tree__module_qual__qualify_items__wrapper_arg_5,
#line 1303 "module_qual.qualify_items.m"
  MR_Box * parse_tree__module_qual__qualify_items__wrapper_arg_6)
#line 1303 "module_qual.qualify_items.m"
{
#line 1303 "module_qual.qualify_items.m"
  {
#line 1303 "module_qual.qualify_items.m"
    MR_Box parse_tree__module_qual__qualify_items__closure = parse_tree__module_qual__qualify_items__closure_arg;
#line 1303 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__conv2_Attr_16;
#line 1303 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__conv1_STATE_VARIABLE_Info_29;
#line 1303 "module_qual.qualify_items.m"
    MR_Word parse_tree__module_qual__qualify_items__conv0_STATE_VARIABLE_Specs_31;

#line 1303 "module_qual.qualify_items.m"
    {
#line 1303 "module_qual.qualify_items.m"
      parse_tree__module_qual__qualify_items__qualify_event_attr_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_1), &parse_tree__module_qual__qualify_items__conv2_Attr_16, ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_3), &parse_tree__module_qual__qualify_items__conv1_STATE_VARIABLE_Info_29, ((MR_Word) parse_tree__module_qual__qualify_items__wrapper_arg_5), &parse_tree__module_qual__qualify_items__conv0_STATE_VARIABLE_Specs_31);
    }
#line 1303 "module_qual.qualify_items.m"
    *parse_tree__module_qual__qualify_items__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv2_Attr_16));
#line 1303 "module_qual.qualify_items.m"
    *parse_tree__module_qual__qualify_items__wrapper_arg_4 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv1_STATE_VARIABLE_Info_29));
#line 1303 "module_qual.qualify_items.m"
    *parse_tree__module_qual__qualify_items__wrapper_arg_6 = ((MR_Box) (parse_tree__module_qual__qualify_items__conv0_STATE_VARIABLE_Specs_31));
#line 1303 "module_qual.qualify_items.m"
  }
#line 1303 "module_qual.qualify_items.m"
}

#line 36 "module_qual.qualify_items.m"
void MR_CALL 
parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0(
#line 36 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 36 "module_qual.qualify_items.m"
  MR_String parse_tree__module_qual__qualify_items__FileName_2,
#line 36 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__3_3,
#line 36 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__4_4,
#line 36 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5,
#line 36 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6,
#line 36 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7,
#line 36 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8)
#line 36 "module_qual.qualify_items.m"
{
#line 1287 "module_qual.qualify_items.m"
  {
#line 1287 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 1287 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "module_qual.qualify_items.m"
      {
#line 1287 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1287 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7;
#line 1287 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5;
#line 1287 "module_qual.qualify_items.m"
      }
#line 1287 "module_qual.qualify_items.m"
    else
#line 1290 "module_qual.qualify_items.m"
      {
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__TypeCtorInfo_34_61;
#line 1290 "module_qual.qualify_items.m"
        MR_String parse_tree__module_qual__qualify_items__Name_19;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Spec0_20;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__NameSpecs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 1)));
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Spec_22;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__NameSpecs_23;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__3_3, (MR_Integer) 0)));
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_31_31;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33;
#line 1290 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__EventNumber_46;
#line 1290 "module_qual.qualify_items.m"
        MR_String parse_tree__module_qual__qualify_items__EventName_47;
#line 1290 "module_qual.qualify_items.m"
        MR_Integer parse_tree__module_qual__qualify_items__EventLineNumber_48;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Attrs0_49;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SynthAttrNumOrder_50;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Attrs_51;
#line 1290 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__V_52_52;
#line 1302 "module_qual.qualify_items.m"
        MR_Box parse_tree__module_qual__qualify_items__conv4_STATE_VARIABLE_Info_32_32;
#line 1302 "module_qual.qualify_items.m"
        MR_Box parse_tree__module_qual__qualify_items__conv3_STATE_VARIABLE_Specs_33_33;

#line 1289 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__Name_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_30_30, (MR_Integer) 0)));
#line 1289 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__Spec0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_30_30, (MR_Integer) 1)));
#line 1300 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__EventNumber_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 0)));
#line 1300 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__EventName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 1)));
#line 1300 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__EventLineNumber_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 2)));
#line 1300 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__Attrs0_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 3)));
#line 1300 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__SynthAttrNumOrder_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec0_20, (MR_Integer) 4)));
#line 1303 "module_qual.qualify_items.m"
        {
#line 1303 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 0) = ((MR_Box) (&parse_tree__module_qual__qualify_items_scalar_common_2[0]));
#line 1303 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0_1));
#line 1303 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1303 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__HeadVar__1_1));
#line 1303 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventName_47));
#line 1303 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 5) = ((MR_Box) (parse_tree__module_qual__qualify_items__FileName_2));
#line 1303 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_52_52, 6) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventLineNumber_48));
#line 1303 "module_qual.qualify_items.m"
        }
#line 8350 "parse_tree.module_qual.qualify_items.c"
        parse_tree__module_qual__qualify_items__TypeCtorInfo_34_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_attribute_0;
#line 1302 "module_qual.qualify_items.m"
        {
#line 1302 "module_qual.qualify_items.m"
          mercury__list__map_foldl2_7_p_0(parse_tree__module_qual__qualify_items__TypeCtorInfo_34_61, parse_tree__module_qual__qualify_items__TypeCtorInfo_34_61, (MR_Word) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[3], parse_tree__module_qual__qualify_items__V_52_52, parse_tree__module_qual__qualify_items__Attrs0_49, &parse_tree__module_qual__qualify_items__Attrs_51, ((MR_Box) (parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_5)), &parse_tree__module_qual__qualify_items__conv4_STATE_VARIABLE_Info_32_32, ((MR_Box) (parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_7)), &parse_tree__module_qual__qualify_items__conv3_STATE_VARIABLE_Specs_33_33);
        }
#line 1302 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32 = ((MR_Word) parse_tree__module_qual__qualify_items__conv4_STATE_VARIABLE_Info_32_32);
#line 1302 "module_qual.qualify_items.m"
        parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33 = ((MR_Word) parse_tree__module_qual__qualify_items__conv3_STATE_VARIABLE_Specs_33_33);
#line 1305 "module_qual.qualify_items.m"
        {
#line 1305 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventNumber_46));
#line 1305 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventName_47));
#line 1305 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__EventLineNumber_48));
#line 1305 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Attrs_51));
#line 1305 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__Spec_22, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__SynthAttrNumOrder_50));
#line 1305 "module_qual.qualify_items.m"
        }
#line 1289 "module_qual.qualify_items.m"
        {
#line 1289 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_31_31, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__Name_19));
#line 1289 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__V_31_31, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Spec_22));
#line 1289 "module_qual.qualify_items.m"
        }
#line 1292 "module_qual.qualify_items.m"
        {
#line 1292 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__qualify_event_specs_8_p_0(parse_tree__module_qual__qualify_items__HeadVar__1_1, parse_tree__module_qual__qualify_items__FileName_2, parse_tree__module_qual__qualify_items__NameSpecs0_21, &parse_tree__module_qual__qualify_items__NameSpecs_23, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_32_32, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_6, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_33_33, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_8);
        }
#line 1289 "module_qual.qualify_items.m"
        {
#line 1289 "module_qual.qualify_items.m"
          MR_Word base;
#line 1289 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__4_4 = base;
#line 1289 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__V_31_31));
#line 1289 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__NameSpecs_23));
#line 1289 "module_qual.qualify_items.m"
        }
#line 1290 "module_qual.qualify_items.m"
      }
#line 1287 "module_qual.qualify_items.m"
  }
#line 36 "module_qual.qualify_items.m"
}

#line 29 "module_qual.qualify_items.m"
void MR_CALL 
parse_tree__module_qual__qualify_items__module_qualify_items_in_src_item_blocks_6_p_0(
#line 29 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__HeadVar__1_1,
#line 29 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__HeadVar__2_2,
#line 29 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3,
#line 29 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_4,
#line 29 "module_qual.qualify_items.m"
  MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_5,
#line 29 "module_qual.qualify_items.m"
  MR_Word * parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_6)
#line 29 "module_qual.qualify_items.m"
{
#line 71 "module_qual.qualify_items.m"
  {
#line 71 "module_qual.qualify_items.m"
    MR_bool parse_tree__module_qual__qualify_items__succeeded;

#line 71 "module_qual.qualify_items.m"
    if ((parse_tree__module_qual__qualify_items__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "module_qual.qualify_items.m"
      {
#line 71 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 71 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_6 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_5;
#line 71 "module_qual.qualify_items.m"
        *parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_4 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3;
#line 71 "module_qual.qualify_items.m"
      }
#line 71 "module_qual.qualify_items.m"
    else
#line 73 "module_qual.qualify_items.m"
      {
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SrcItemBlock0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SrcItemBlocks0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__qualify_items__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SrcItemBlock_15;
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SrcItemBlocks_16;
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__SrcSection_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 0)));
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 1)));
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Incls_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 2)));
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Avails_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 3)));
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Items0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock0_13, (MR_Integer) 4)));
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__InInt_24;
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__Items_29;
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34;
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35;
#line 73 "module_qual.qualify_items.m"
        MR_Word parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36;

#line 78 "module_qual.qualify_items.m"
#line 78 "module_qual.qualify_items.m"
        switch (parse_tree__module_qual__qualify_items__SrcSection_19) {
#line 78 "module_qual.qualify_items.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 78 "module_qual.qualify_items.m"
          case (MR_Integer) 2:
#line 78 "module_qual.qualify_items.m"
          case (MR_Integer) 1:
#line 82 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__InInt_24 = (MR_Integer) 0;
#line 78 "module_qual.qualify_items.m"
            break;
#line 78 "module_qual.qualify_items.m"
          case (MR_Integer) 0:
#line 77 "module_qual.qualify_items.m"
            parse_tree__module_qual__qualify_items__InInt_24 = (MR_Integer) 1;
#line 78 "module_qual.qualify_items.m"
            break;
#line 78 "module_qual.qualify_items.m"
        }
#line 86 "module_qual.qualify_items.m"
        if ((parse_tree__module_qual__qualify_items__Incls_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 85 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3;
#line 86 "module_qual.qualify_items.m"
        else
#line 87 "module_qual.qualify_items.m"
          {
#line 87 "module_qual.qualify_items.m"
            MR_Word parse_tree__module_qual__qualify_items__ShouldWarnUnusedImportsInParents_27;

#line 92 "module_qual.qualify_items.m"
            {
#line 92 "module_qual.qualify_items.m"
              parse_tree__module_qual__mq_info_get_should_warn_unused_imports_in_parents_2_p_0(parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3, &parse_tree__module_qual__qualify_items__ShouldWarnUnusedImportsInParents_27);
            }
#line 99 "module_qual.qualify_items.m"
#line 99 "module_qual.qualify_items.m"
            switch (parse_tree__module_qual__qualify_items__ShouldWarnUnusedImportsInParents_27) {
#line 99 "module_qual.qualify_items.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 99 "module_qual.qualify_items.m"
              case (MR_Integer) 0:
#line 96 "module_qual.qualify_items.m"
                {
#line 96 "module_qual.qualify_items.m"
                  MR_Word parse_tree__module_qual__qualify_items__UnusedModules_28;

#line 97 "module_qual.qualify_items.m"
                  {
#line 97 "module_qual.qualify_items.m"
                    mercury__map__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_qual__qualify_items_scalar_common_1[0], &parse_tree__module_qual__qualify_items__UnusedModules_28);
                  }
#line 98 "module_qual.qualify_items.m"
                  {
#line 98 "module_qual.qualify_items.m"
                    parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(parse_tree__module_qual__qualify_items__UnusedModules_28, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34);
                  }
#line 96 "module_qual.qualify_items.m"
                }
#line 99 "module_qual.qualify_items.m"
                break;
#line 99 "module_qual.qualify_items.m"
              case (MR_Integer) 1:
#line 100 "module_qual.qualify_items.m"
                parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34 = parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_0_3;
#line 99 "module_qual.qualify_items.m"
                break;
#line 99 "module_qual.qualify_items.m"
            }
#line 87 "module_qual.qualify_items.m"
          }
#line 104 "module_qual.qualify_items.m"
        {
#line 104 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__module_qualify_items_loop_7_p_0(parse_tree__module_qual__qualify_items__InInt_24, parse_tree__module_qual__qualify_items__Items0_23, &parse_tree__module_qual__qualify_items__Items_29, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_34_34, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_0_5, &parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36);
        }
#line 105 "module_qual.qualify_items.m"
        {
#line 105 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__SrcItemBlock_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 105 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SrcSection_19));
#line 105 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__Context_20));
#line 105 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 2) = ((MR_Box) (parse_tree__module_qual__qualify_items__Incls_21));
#line 105 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 3) = ((MR_Box) (parse_tree__module_qual__qualify_items__Avails_22));
#line 105 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(0), parse_tree__module_qual__qualify_items__SrcItemBlock_15, 4) = ((MR_Box) (parse_tree__module_qual__qualify_items__Items_29));
#line 105 "module_qual.qualify_items.m"
        }
#line 106 "module_qual.qualify_items.m"
        {
#line 106 "module_qual.qualify_items.m"
          parse_tree__module_qual__qualify_items__module_qualify_items_in_src_item_blocks_6_p_0(parse_tree__module_qual__qualify_items__SrcItemBlocks0_14, &parse_tree__module_qual__qualify_items__SrcItemBlocks_16, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_35_35, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Info_4, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_36_36, parse_tree__module_qual__qualify_items__STATE_VARIABLE_Specs_6);
        }
#line 73 "module_qual.qualify_items.m"
        {
#line 73 "module_qual.qualify_items.m"
          MR_Word base;
#line 73 "module_qual.qualify_items.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 73 "module_qual.qualify_items.m"
          *parse_tree__module_qual__qualify_items__HeadVar__2_2 = base;
#line 73 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__qualify_items__SrcItemBlock_15));
#line 73 "module_qual.qualify_items.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__module_qual__qualify_items__SrcItemBlocks_16));
#line 73 "module_qual.qualify_items.m"
        }
#line 73 "module_qual.qualify_items.m"
      }
#line 71 "module_qual.qualify_items.m"
  }
#line 29 "module_qual.qualify_items.m"
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
