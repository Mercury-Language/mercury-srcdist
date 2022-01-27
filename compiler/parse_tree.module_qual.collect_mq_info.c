/*
** Automatically generated from `module_qual.collect_mq_info.m'
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


/* :- module parse_tree.module_qual.collect_mq_info. */
/* :- implementation. */

/*
INIT mercury__parse_tree__module_qual__collect_mq_info__init
ENDINIT
*/

#include "parse_tree.module_qual.collect_mq_info.mih"


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
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "parse_tree.module_qual.id_set.mih"
#include "parse_tree.module_qual.qual_errors.mih"
#include "parse_tree.module_qual.qualify_items.mih"




#line 102 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 105 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 108 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 111 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 114 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 117 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0;

#line 120 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 123 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 126 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0;

#line 129 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1;

#line 132 "parse_tree.module_qual.collect_mq_info.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2[1];

#line 135 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2;

#line 138 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3;

#line 141 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0[3];

#line 144 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1[1];

#line 147 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0[2];

#line 150 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0[4];

#line 153 "parse_tree.module_qual.collect_mq_info.c"
static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0[4];

#line 156 "parse_tree.module_qual.collect_mq_info.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0;

#line 159 "parse_tree.module_qual.collect_mq_info.c"
static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001(
#line 162 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 164 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2);

#line 167 "parse_tree.module_qual.collect_mq_info.c"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001(
#line 170 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 172 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 174 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3);

#line 177 "parse_tree.module_qual.collect_mq_info.c"
static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001(
#line 180 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 182 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 184 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3);

#line 187 "parse_tree.module_qual.collect_mq_info.c"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001(
#line 190 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 192 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 194 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
#line 196 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4);

#line 152 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_8,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Avail_10,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24);

#line 395 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__395__1_2_p_0(
#line 395 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_146,
#line 395 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__2_147);

#line 406 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__406__1_2_p_0(
#line 406 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_153,
#line 406 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__2_154);

#line 460 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(
#line 460 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
#line 460 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2,
#line 460 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3,
#line 460 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4,
#line 460 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5);

#line 443 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(
#line 443 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Term_6,
#line 443 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14,
#line 443 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_15,
#line 443 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_16,
#line 443 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17);

#line 429 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
#line 429 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__CatchExpr_6,
#line 429 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12,
#line 429 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_13,
#line 429 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_14,
#line 429 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_15);

#line 418 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(
#line 418 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
#line 418 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2,
#line 418 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3,
#line 418 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4,
#line 418 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5);

#line 370 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3(
#line 370 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_5);

#line 395 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
#line 395 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 395 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 395 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2);

#line 406 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
#line 406 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 406 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 406 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2);

#line 322 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
#line 322 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Goal_6,
#line 322 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87,
#line 322 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88,
#line 322 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89,
#line 322 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);

#line 308 "module_qual.collect_mq_info.m"
static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(
#line 308 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1);

#line 260 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1(
#line 260 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 260 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 260 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 260 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3);

#line 211 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(
#line 211 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_6,
#line 211 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_7,
#line 211 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Item_8,
#line 211 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68,
#line 211 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);

#line 203 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(
#line 203 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_1,
#line 203 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_2,
#line 203 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3_3,
#line 203 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4,
#line 203 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_5);

#line 152 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_8,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info___Permissions_9,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Avail_10,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24);

#line 136 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(
#line 136 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_5,
#line 136 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Incl_6,
#line 136 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_0_12,
#line 136 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_13);

#line 116 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2(
#line 116 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_5);

#line 107 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1(
#line 107 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 107 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 107 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 107 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[7][3];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[9][2];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[2][7];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[1][10];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[1][5];

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[1][8];


#line 81 "module_qual.collect_mq_info.m"
/* sealed */ struct parse_tree__module_qual__collect_mq_info__vector_common_type_3_0_s {
#line 81 "module_qual.collect_mq_info.m"
  const MR_Word parse_tree__module_qual__collect_mq_info__vector_common_type_3_0__vct_3_f_0;
#line 81 "module_qual.collect_mq_info.m"
};

static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_3_0_s parse_tree__module_qual__collect_mq_info_vector_common_3[8];



static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_6[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_7[0])),
    ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_2[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_in_interface_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0)),
    ((MR_Box) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0)),
    ((MR_Box) (&parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box parse_tree__module_qual__collect_mq_info_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};


static /* final */ const struct parse_tree__module_qual__collect_mq_info__vector_common_type_3_0_s parse_tree__module_qual__collect_mq_info_vector_common_3[8] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 1 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 643 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 652 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 661 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__collect_mq_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 670 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 678 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 686 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__module_qual__collect_mq_info__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__collect_mq_info__list__ti_one_or_more_1term__type_ctor_info_context_0
  }
};

#line 695 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 703 "parse_tree.module_qual.collect_mq_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_qual__collect_mq_info__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 711 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0 = {
  (MR_String) "mq_section_exported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 726 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1 = {
  (MR_String) "mq_section_local",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 741 "parse_tree.module_qual.collect_mq_info.c"
static const MR_PseudoTypeInfo parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_locn_0
};

#line 746 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2 = {
  (MR_String) "mq_section_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__field_types_mq_section_0_2,
  NULL,
  NULL,
  NULL
};

#line 761 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDesc parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3 = {
  (MR_String) "mq_section_abstract_imported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 776 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0[3] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3
};

#line 783 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1[1] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2
};

#line 788 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuPtagLayout parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0[2] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_stag_ordered_mq_section_0_1
  }
};

#line 802 "parse_tree.module_qual.collect_mq_info.c"
static const MR_DuFunctorDescPtr parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0[4] = {
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_3,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_0,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_2,
  &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_functor_desc_mq_section_0_1
};

#line 810 "parse_tree.module_qual.collect_mq_info.c"
static const MR_Integer parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 818 "parse_tree.module_qual.collect_mq_info.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "mq_section",
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_name_ordered_mq_section_0 },
  {     parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__du_ptag_ordered_mq_section_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__functor_number_map_mq_section_0
};

#line 835 "parse_tree.module_qual.collect_mq_info.c"
static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0,
    (MR_PseudoTypeInfo) &parse_tree__module_qual__id_set__parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0
  }
};

#line 846 "parse_tree.module_qual.collect_mq_info.c"
const MR_TypeCtorInfo_Struct parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_section_mq_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001)),
  ((MR_Box) (parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001)),
  (MR_String) "parse_tree.module_qual.collect_mq_info",
  (MR_String) "section_mq_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__module_qual__collect_mq_info____vpti_pred_3__pseudo_1__plain_parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0__plain_parse_tree__module_qual__id_set__type_ctor_info_module_permissions_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 863 "parse_tree.module_qual.collect_mq_info.c"
static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0_10001(
#line 866 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 868 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2)
#line 870 "parse_tree.module_qual.collect_mq_info.c"
{
#line 872 "parse_tree.module_qual.collect_mq_info.c"
  {
#line 874 "parse_tree.module_qual.collect_mq_info.c"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 877 "parse_tree.module_qual.collect_mq_info.c"
    {
#line 879 "parse_tree.module_qual.collect_mq_info.c"
      parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2));
    }
#line 882 "parse_tree.module_qual.collect_mq_info.c"
    return parse_tree__module_qual__collect_mq_info__succeeded;
#line 884 "parse_tree.module_qual.collect_mq_info.c"
  }
#line 886 "parse_tree.module_qual.collect_mq_info.c"
}

#line 889 "parse_tree.module_qual.collect_mq_info.c"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0_10001(
#line 892 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 894 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 896 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3)
#line 898 "parse_tree.module_qual.collect_mq_info.c"
{
#line 900 "parse_tree.module_qual.collect_mq_info.c"
  {
#line 902 "parse_tree.module_qual.collect_mq_info.c"
    MR_Word parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1;

#line 905 "parse_tree.module_qual.collect_mq_info.c"
    {
#line 907 "parse_tree.module_qual.collect_mq_info.c"
      parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0(&parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_3));
    }
#line 910 "parse_tree.module_qual.collect_mq_info.c"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_1 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1));
#line 912 "parse_tree.module_qual.collect_mq_info.c"
  }
#line 914 "parse_tree.module_qual.collect_mq_info.c"
}

#line 917 "parse_tree.module_qual.collect_mq_info.c"
static MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0_10001(
#line 920 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 922 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 924 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3)
#line 926 "parse_tree.module_qual.collect_mq_info.c"
{
#line 928 "parse_tree.module_qual.collect_mq_info.c"
  {
#line 930 "parse_tree.module_qual.collect_mq_info.c"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 933 "parse_tree.module_qual.collect_mq_info.c"
    {
#line 935 "parse_tree.module_qual.collect_mq_info.c"
      parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_3));
    }
#line 938 "parse_tree.module_qual.collect_mq_info.c"
    return parse_tree__module_qual__collect_mq_info__succeeded;
#line 940 "parse_tree.module_qual.collect_mq_info.c"
  }
#line 942 "parse_tree.module_qual.collect_mq_info.c"
}

#line 945 "parse_tree.module_qual.collect_mq_info.c"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0_10001(
#line 948 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 950 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 952 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
#line 954 "parse_tree.module_qual.collect_mq_info.c"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4)
#line 956 "parse_tree.module_qual.collect_mq_info.c"
{
#line 958 "parse_tree.module_qual.collect_mq_info.c"
  {
#line 960 "parse_tree.module_qual.collect_mq_info.c"
    MR_Word parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1;

#line 963 "parse_tree.module_qual.collect_mq_info.c"
    {
#line 965 "parse_tree.module_qual.collect_mq_info.c"
      parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), &parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_3), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_4));
    }
#line 968 "parse_tree.module_qual.collect_mq_info.c"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv0_HeadVar__1_1));
#line 970 "parse_tree.module_qual.collect_mq_info.c"
  }
#line 972 "parse_tree.module_qual.collect_mq_info.c"
}

#line 152 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_8,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Avail_10,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24)
#line 152 "module_qual.collect_mq_info.m"
{
#line 158 "module_qual.collect_mq_info.m"
  {
#line 158 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 158 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_13;
#line 158 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__Context_14;

#line 166 "module_qual.collect_mq_info.m"
    if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__Avail_10)) == (MR_mktag((MR_Integer) 0))))
#line 165 "module_qual.collect_mq_info.m"
      {
#line 165 "module_qual.collect_mq_info.m"
        MR_Word parse_tree__module_qual__collect_mq_info__V_26_26 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__collect_mq_info__Avail_10), (MR_Integer) 0);
#line 165 "module_qual.collect_mq_info.m"
        MR_Integer parse_tree__module_qual__collect_mq_info___SeqNum_15;

#line 165 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_26_26, (MR_Integer) 0)));
#line 165 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_26_26, (MR_Integer) 1)));
#line 165 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_26_26, (MR_Integer) 2)));
#line 165 "module_qual.collect_mq_info.m"
      }
#line 166 "module_qual.collect_mq_info.m"
    else
#line 166 "module_qual.collect_mq_info.m"
      {
#line 166 "module_qual.collect_mq_info.m"
        MR_Word parse_tree__module_qual__collect_mq_info__V_25_25 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__collect_mq_info__Avail_10), (MR_Integer) 1);
#line 166 "module_qual.collect_mq_info.m"
        MR_Integer parse_tree__module_qual__collect_mq_info___SeqNum_37;

#line 166 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_25_25, (MR_Integer) 0)));
#line 166 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_25_25, (MR_Integer) 1)));
#line 166 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info___SeqNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_25_25, (MR_Integer) 2)));
#line 166 "module_qual.collect_mq_info.m"
      }
#line 174 "module_qual.collect_mq_info.m"
#line 174 "module_qual.collect_mq_info.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__MQSection_8)) {
#line 174 "module_qual.collect_mq_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 174 "module_qual.collect_mq_info.m"
      case (MR_Integer) 0:
#line 174 "module_qual.collect_mq_info.m"
#line 174 "module_qual.collect_mq_info.m"
        switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__MQSection_8)) {
#line 174 "module_qual.collect_mq_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 174 "module_qual.collect_mq_info.m"
          case (MR_Integer) 0:
#line 175 "module_qual.collect_mq_info.m"
            {
#line 175 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 175 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16;
#line 182 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_32_32;

#line 176 "module_qual.collect_mq_info.m"
              {
#line 176 "module_qual.collect_mq_info.m"
                mercury__set__insert_3_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22);
              }
#line 181 "module_qual.collect_mq_info.m"
              {
#line 181 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "module_qual.collect_mq_info.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Context_14));
#line 181 "module_qual.collect_mq_info.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 181 "module_qual.collect_mq_info.m"
              }
#line 182 "module_qual.collect_mq_info.m"
              {
#line 182 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__succeeded = mercury__map__insert_4_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[1], ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), ((MR_Box) (parse_tree__module_qual__collect_mq_info__OnlyNewContexts_16)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_32_32);
              }
#line 182 "module_qual.collect_mq_info.m"
              if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 182 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_32_32;
#line 182 "module_qual.collect_mq_info.m"
              else
#line 185 "module_qual.collect_mq_info.m"
                {
#line 185 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__TypeInfo_42_42 = (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[1];
#line 185 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__OldContexts_17;
#line 185 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__OldHeadContext_18;
#line 185 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__OldTailContexts_19;
#line 185 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__NewContexts_20;
#line 185 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_33_33;
#line 185 "module_qual.collect_mq_info.m"
                  MR_Box parse_tree__module_qual__collect_mq_info__conv0_OldContexts_17;

#line 185 "module_qual.collect_mq_info.m"
                  {
#line 185 "module_qual.collect_mq_info.m"
                    mercury__map__lookup_3_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40, parse_tree__module_qual__collect_mq_info__TypeInfo_42_42, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), &parse_tree__module_qual__collect_mq_info__conv0_OldContexts_17);
                  }
#line 185 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__OldContexts_17 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv0_OldContexts_17);
#line 186 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__OldHeadContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__OldContexts_17, (MR_Integer) 0)));
#line 186 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__OldTailContexts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__OldContexts_17, (MR_Integer) 1)));
#line 188 "module_qual.collect_mq_info.m"
                  {
#line 188 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "module_qual.collect_mq_info.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__V_33_33, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__OldHeadContext_18));
#line 188 "module_qual.collect_mq_info.m"
                    MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__V_33_33, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__OldTailContexts_19));
#line 188 "module_qual.collect_mq_info.m"
                  }
#line 187 "module_qual.collect_mq_info.m"
                  {
#line 187 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__NewContexts_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 187 "module_qual.collect_mq_info.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__NewContexts_20, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Context_14));
#line 187 "module_qual.collect_mq_info.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__NewContexts_20, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__V_33_33));
#line 187 "module_qual.collect_mq_info.m"
                  }
#line 189 "module_qual.collect_mq_info.m"
                  {
#line 189 "module_qual.collect_mq_info.m"
                    mercury__map__det_update_4_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_40_40, parse_tree__module_qual__collect_mq_info__TypeInfo_42_42, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), ((MR_Box) (parse_tree__module_qual__collect_mq_info__NewContexts_20)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24);
                  }
#line 185 "module_qual.collect_mq_info.m"
                }
#line 175 "module_qual.collect_mq_info.m"
            }
#line 174 "module_qual.collect_mq_info.m"
            break;
#line 174 "module_qual.collect_mq_info.m"
          case (MR_Integer) 1:
#line 172 "module_qual.collect_mq_info.m"
            {
#line 173 "module_qual.collect_mq_info.m"
              {
#line 173 "module_qual.collect_mq_info.m"
                mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22);
              }
#line 172 "module_qual.collect_mq_info.m"
              *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
#line 172 "module_qual.collect_mq_info.m"
            }
#line 174 "module_qual.collect_mq_info.m"
            break;
#line 174 "module_qual.collect_mq_info.m"
          case (MR_Integer) 2:
#line 195 "module_qual.collect_mq_info.m"
            {
#line 195 "module_qual.collect_mq_info.m"
              *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21;
#line 195 "module_qual.collect_mq_info.m"
              *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
#line 195 "module_qual.collect_mq_info.m"
            }
#line 174 "module_qual.collect_mq_info.m"
            break;
#line 174 "module_qual.collect_mq_info.m"
        }
#line 174 "module_qual.collect_mq_info.m"
        break;
#line 174 "module_qual.collect_mq_info.m"
      case (MR_Integer) 1:
#line 174 "module_qual.collect_mq_info.m"
        {
#line 174 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__MQSection_8, (MR_Integer) 0)));

#line 174 "module_qual.collect_mq_info.m"
#line 174 "module_qual.collect_mq_info.m"
          switch (parse_tree__module_qual__collect_mq_info__V_44_44) {
#line 174 "module_qual.collect_mq_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 174 "module_qual.collect_mq_info.m"
            case (MR_Integer) 3:
#line 172 "module_qual.collect_mq_info.m"
              {
#line 173 "module_qual.collect_mq_info.m"
                {
#line 173 "module_qual.collect_mq_info.m"
                  mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_13)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22);
                }
#line 172 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
#line 172 "module_qual.collect_mq_info.m"
              }
#line 174 "module_qual.collect_mq_info.m"
              break;
#line 174 "module_qual.collect_mq_info.m"
            case (MR_Integer) 0:
#line 193 "module_qual.collect_mq_info.m"
              {
#line 193 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21;
#line 193 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
#line 193 "module_qual.collect_mq_info.m"
              }
#line 174 "module_qual.collect_mq_info.m"
              break;
#line 174 "module_qual.collect_mq_info.m"
            case (MR_Integer) 2:
#line 194 "module_qual.collect_mq_info.m"
              {
#line 194 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21;
#line 194 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
#line 194 "module_qual.collect_mq_info.m"
              }
#line 174 "module_qual.collect_mq_info.m"
              break;
#line 174 "module_qual.collect_mq_info.m"
            case (MR_Integer) 1:
#line 192 "module_qual.collect_mq_info.m"
              {
#line 192 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21;
#line 192 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23;
#line 192 "module_qual.collect_mq_info.m"
              }
#line 174 "module_qual.collect_mq_info.m"
              break;
#line 174 "module_qual.collect_mq_info.m"
          }
#line 174 "module_qual.collect_mq_info.m"
        }
#line 174 "module_qual.collect_mq_info.m"
        break;
#line 174 "module_qual.collect_mq_info.m"
    }
#line 158 "module_qual.collect_mq_info.m"
  }
#line 152 "module_qual.collect_mq_info.m"
}

#line 395 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__395__1_2_p_0(
#line 395 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_146,
#line 395 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__2_147)
#line 395 "module_qual.collect_mq_info.m"
{
#line 395 "module_qual.collect_mq_info.m"
  {
#line 395 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 395 "module_qual.collect_mq_info.m"
    {
#line 395 "module_qual.collect_mq_info.m"
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__HeadVar__1_146, parse_tree__module_qual__collect_mq_info__HeadVar__2_147);
    }
#line 395 "module_qual.collect_mq_info.m"
  }
#line 395 "module_qual.collect_mq_info.m"
}

#line 406 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__406__1_2_p_0(
#line 406 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_153,
#line 406 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__2_154)
#line 406 "module_qual.collect_mq_info.m"
{
#line 406 "module_qual.collect_mq_info.m"
  {
#line 406 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 406 "module_qual.collect_mq_info.m"
    {
#line 406 "module_qual.collect_mq_info.m"
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__HeadVar__1_153, parse_tree__module_qual__collect_mq_info__HeadVar__2_154);
    }
#line 406 "module_qual.collect_mq_info.m"
  }
#line 406 "module_qual.collect_mq_info.m"
}

#line 28 "module_qual.collect_mq_info.m"
void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____section_mq_info_1_0(
#line 28 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__TypeInfo_for_MS_6,
#line 28 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
#line 28 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2,
#line 28 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3_3)
#line 28 "module_qual.collect_mq_info.m"
{
#line 28 "module_qual.collect_mq_info.m"
  {
#line 28 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 28 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__Cast_HeadVar1_4 = parse_tree__module_qual__collect_mq_info__HeadVar__2_2;
#line 28 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__Cast_HeadVar2_5 = parse_tree__module_qual__collect_mq_info__HeadVar__3_3;

#line 28 "module_qual.collect_mq_info.m"
    {
#line 28 "module_qual.collect_mq_info.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Word) parse_tree__module_qual__collect_mq_info__Cast_HeadVar1_4, (MR_Word) parse_tree__module_qual__collect_mq_info__Cast_HeadVar2_5);
    }
#line 28 "module_qual.collect_mq_info.m"
  }
#line 28 "module_qual.collect_mq_info.m"
}

#line 28 "module_qual.collect_mq_info.m"
MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____section_mq_info_1_0(
#line 28 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__TypeInfo_for_MS_5,
#line 28 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
#line 28 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2)
#line 28 "module_qual.collect_mq_info.m"
{
#line 28 "module_qual.collect_mq_info.m"
  {
#line 28 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 28 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__Cast_HeadVar1_3 = parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
#line 28 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__Cast_HeadVar2_4 = parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

#line 28 "module_qual.collect_mq_info.m"
    {
#line 28 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__module_qual__collect_mq_info__Cast_HeadVar1_3, (MR_Word) parse_tree__module_qual__collect_mq_info__Cast_HeadVar2_4);
    }
#line 28 "module_qual.collect_mq_info.m"
    return parse_tree__module_qual__collect_mq_info__succeeded;
#line 28 "module_qual.collect_mq_info.m"
  }
#line 28 "module_qual.collect_mq_info.m"
}

#line 22 "module_qual.collect_mq_info.m"
void MR_CALL 
parse_tree__module_qual__collect_mq_info____Compare____mq_section_0_0(
#line 22 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
#line 22 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2,
#line 22 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3_3)
#line 22 "module_qual.collect_mq_info.m"
{
#line 22 "module_qual.collect_mq_info.m"
  {
#line 22 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 22 "module_qual.collect_mq_info.m"
    MR_Integer parse_tree__module_qual__collect_mq_info__CastX_12 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;
#line 22 "module_qual.collect_mq_info.m"
    MR_Integer parse_tree__module_qual__collect_mq_info__CastY_13 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__3_3;

#line 22 "module_qual.collect_mq_info.m"
    parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastX_12 == parse_tree__module_qual__collect_mq_info__CastY_13);
#line 22 "module_qual.collect_mq_info.m"
    if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 1386 "parse_tree.module_qual.collect_mq_info.c"
      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 0;
#line 22 "module_qual.collect_mq_info.m"
    else
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
      switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__2_2)) {
#line 22 "module_qual.collect_mq_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
        case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
          switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__2_2)) {
#line 22 "module_qual.collect_mq_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
            case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
              switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
#line 22 "module_qual.collect_mq_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
                case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
                  switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
#line 22 "module_qual.collect_mq_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 0;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 1:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 2:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                  }
#line 22 "module_qual.collect_mq_info.m"
                  break;
#line 22 "module_qual.collect_mq_info.m"
                case (MR_Integer) 1:
#line 1440 "parse_tree.module_qual.collect_mq_info.c"
                  *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
#line 22 "module_qual.collect_mq_info.m"
                  break;
#line 22 "module_qual.collect_mq_info.m"
              }
#line 22 "module_qual.collect_mq_info.m"
              break;
#line 22 "module_qual.collect_mq_info.m"
            case (MR_Integer) 1:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
              switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
#line 22 "module_qual.collect_mq_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
                case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
                  switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
#line 22 "module_qual.collect_mq_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 1:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 0;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 2:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                  }
#line 22 "module_qual.collect_mq_info.m"
                  break;
#line 22 "module_qual.collect_mq_info.m"
                case (MR_Integer) 1:
#line 1486 "parse_tree.module_qual.collect_mq_info.c"
                  *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
#line 22 "module_qual.collect_mq_info.m"
                  break;
#line 22 "module_qual.collect_mq_info.m"
              }
#line 22 "module_qual.collect_mq_info.m"
              break;
#line 22 "module_qual.collect_mq_info.m"
            case (MR_Integer) 2:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
              switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
#line 22 "module_qual.collect_mq_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
                case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
                  switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
#line 22 "module_qual.collect_mq_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 1:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                    case (MR_Integer) 2:
#line 22 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 0;
#line 22 "module_qual.collect_mq_info.m"
                      break;
#line 22 "module_qual.collect_mq_info.m"
                  }
#line 22 "module_qual.collect_mq_info.m"
                  break;
#line 22 "module_qual.collect_mq_info.m"
                case (MR_Integer) 1:
#line 1532 "parse_tree.module_qual.collect_mq_info.c"
                  *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
#line 22 "module_qual.collect_mq_info.m"
                  break;
#line 22 "module_qual.collect_mq_info.m"
              }
#line 22 "module_qual.collect_mq_info.m"
              break;
#line 22 "module_qual.collect_mq_info.m"
          }
#line 22 "module_qual.collect_mq_info.m"
          break;
#line 22 "module_qual.collect_mq_info.m"
        case (MR_Integer) 1:
#line 22 "module_qual.collect_mq_info.m"
          {
#line 22 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__2_2, (MR_Integer) 0)));

#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
            switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
#line 22 "module_qual.collect_mq_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
              case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
                switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__3_3)) {
#line 22 "module_qual.collect_mq_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
                  case (MR_Integer) 0:
#line 1565 "parse_tree.module_qual.collect_mq_info.c"
                    *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
#line 22 "module_qual.collect_mq_info.m"
                    break;
#line 22 "module_qual.collect_mq_info.m"
                  case (MR_Integer) 1:
#line 1571 "parse_tree.module_qual.collect_mq_info.c"
                    *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 2;
#line 22 "module_qual.collect_mq_info.m"
                    break;
#line 22 "module_qual.collect_mq_info.m"
                  case (MR_Integer) 2:
#line 1577 "parse_tree.module_qual.collect_mq_info.c"
                    *parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = (MR_Integer) 1;
#line 22 "module_qual.collect_mq_info.m"
                    break;
#line 22 "module_qual.collect_mq_info.m"
                }
#line 22 "module_qual.collect_mq_info.m"
                break;
#line 22 "module_qual.collect_mq_info.m"
              case (MR_Integer) 1:
#line 22 "module_qual.collect_mq_info.m"
                {
#line 22 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__3_3, (MR_Integer) 0)));
#line 22 "module_qual.collect_mq_info.m"
                  MR_Integer parse_tree__module_qual__collect_mq_info__V_16_16 = (MR_Integer) parse_tree__module_qual__collect_mq_info__V_15_15;
#line 22 "module_qual.collect_mq_info.m"
                  MR_Integer parse_tree__module_qual__collect_mq_info__V_17_17 = (MR_Integer) parse_tree__module_qual__collect_mq_info__V_9_9;

#line 22 "module_qual.collect_mq_info.m"
                  {
#line 22 "module_qual.collect_mq_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__module_qual__collect_mq_info__HeadVar__1_1, parse_tree__module_qual__collect_mq_info__V_16_16, parse_tree__module_qual__collect_mq_info__V_17_17);
                  }
#line 22 "module_qual.collect_mq_info.m"
                }
#line 22 "module_qual.collect_mq_info.m"
                break;
#line 22 "module_qual.collect_mq_info.m"
            }
#line 22 "module_qual.collect_mq_info.m"
          }
#line 22 "module_qual.collect_mq_info.m"
          break;
#line 22 "module_qual.collect_mq_info.m"
      }
#line 22 "module_qual.collect_mq_info.m"
  }
#line 22 "module_qual.collect_mq_info.m"
}

#line 22 "module_qual.collect_mq_info.m"
MR_bool MR_CALL 
parse_tree__module_qual__collect_mq_info____Unify____mq_section_0_0(
#line 22 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
#line 22 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2)
#line 22 "module_qual.collect_mq_info.m"
{
#line 22 "module_qual.collect_mq_info.m"
  {
#line 22 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 22 "module_qual.collect_mq_info.m"
    MR_Integer parse_tree__module_qual__collect_mq_info__CastX_11 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
#line 22 "module_qual.collect_mq_info.m"
    MR_Integer parse_tree__module_qual__collect_mq_info__CastY_12 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

#line 22 "module_qual.collect_mq_info.m"
    parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastX_11 == parse_tree__module_qual__collect_mq_info__CastY_12);
#line 22 "module_qual.collect_mq_info.m"
    if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 22 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__succeeded = MR_TRUE;
#line 22 "module_qual.collect_mq_info.m"
    else
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
      switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__1_1)) {
#line 22 "module_qual.collect_mq_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
        case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
#line 22 "module_qual.collect_mq_info.m"
          switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__1_1)) {
#line 22 "module_qual.collect_mq_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 22 "module_qual.collect_mq_info.m"
            case (MR_Integer) 0:
#line 22 "module_qual.collect_mq_info.m"
              {
#line 22 "module_qual.collect_mq_info.m"
                MR_Integer parse_tree__module_qual__collect_mq_info__CastX_3 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
#line 22 "module_qual.collect_mq_info.m"
                MR_Integer parse_tree__module_qual__collect_mq_info__CastY_4 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

#line 22 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastY_4 == parse_tree__module_qual__collect_mq_info__CastX_3);
#line 22 "module_qual.collect_mq_info.m"
              }
#line 22 "module_qual.collect_mq_info.m"
              break;
#line 22 "module_qual.collect_mq_info.m"
            case (MR_Integer) 1:
#line 22 "module_qual.collect_mq_info.m"
              {
#line 22 "module_qual.collect_mq_info.m"
                MR_Integer parse_tree__module_qual__collect_mq_info__CastX_5 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
#line 22 "module_qual.collect_mq_info.m"
                MR_Integer parse_tree__module_qual__collect_mq_info__CastY_6 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

#line 22 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastY_6 == parse_tree__module_qual__collect_mq_info__CastX_5);
#line 22 "module_qual.collect_mq_info.m"
              }
#line 22 "module_qual.collect_mq_info.m"
              break;
#line 22 "module_qual.collect_mq_info.m"
            case (MR_Integer) 2:
#line 22 "module_qual.collect_mq_info.m"
              {
#line 22 "module_qual.collect_mq_info.m"
                MR_Integer parse_tree__module_qual__collect_mq_info__CastX_9 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__1_1;
#line 22 "module_qual.collect_mq_info.m"
                MR_Integer parse_tree__module_qual__collect_mq_info__CastY_10 = (MR_Integer) parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

#line 22 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__CastY_10 == parse_tree__module_qual__collect_mq_info__CastX_9);
#line 22 "module_qual.collect_mq_info.m"
              }
#line 22 "module_qual.collect_mq_info.m"
              break;
#line 22 "module_qual.collect_mq_info.m"
          }
#line 22 "module_qual.collect_mq_info.m"
          break;
#line 22 "module_qual.collect_mq_info.m"
        case (MR_Integer) 1:
#line 22 "module_qual.collect_mq_info.m"
          {
#line 22 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 0)));
#line 22 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__V_8_8;

#line 22 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 22 "module_qual.collect_mq_info.m"
            if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 22 "module_qual.collect_mq_info.m"
              {
#line 22 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__2_2, (MR_Integer) 0)));
#line 1722 "parse_tree.module_qual.collect_mq_info.c"
                parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__V_7_7 == parse_tree__module_qual__collect_mq_info__V_8_8);
#line 22 "module_qual.collect_mq_info.m"
              }
#line 22 "module_qual.collect_mq_info.m"
          }
#line 22 "module_qual.collect_mq_info.m"
          break;
#line 22 "module_qual.collect_mq_info.m"
      }
#line 22 "module_qual.collect_mq_info.m"
    return parse_tree__module_qual__collect_mq_info__succeeded;
#line 22 "module_qual.collect_mq_info.m"
  }
#line 22 "module_qual.collect_mq_info.m"
}

#line 460 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(
#line 460 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
#line 460 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2,
#line 460 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3,
#line 460 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4,
#line 460 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5)
#line 460 "module_qual.collect_mq_info.m"
{
#line 463 "module_qual.collect_mq_info.m"
  while (MR_TRUE)
#line 463 "module_qual.collect_mq_info.m"
    {
#line 463 "module_qual.collect_mq_info.m"
      /* tailcall optimized into a loop */
#line 463 "module_qual.collect_mq_info.m"
      {
#line 463 "module_qual.collect_mq_info.m"
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 463 "module_qual.collect_mq_info.m"
        if ((parse_tree__module_qual__collect_mq_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "module_qual.collect_mq_info.m"
          {
#line 463 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4;
#line 463 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2;
#line 463 "module_qual.collect_mq_info.m"
          }
#line 463 "module_qual.collect_mq_info.m"
        else
#line 465 "module_qual.collect_mq_info.m"
          {
#line 465 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Term_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 0)));
#line 465 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Terms_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 1)));
#line 465 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20;
#line 465 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21;
#line 447 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__SymName_31;
#line 447 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_32;

#line 447 "module_qual.collect_mq_info.m"
            {
#line 447 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__Term_12, &parse_tree__module_qual__collect_mq_info__SymName_31, &parse_tree__module_qual__collect_mq_info__ArgTerms_32);
            }
#line 447 "module_qual.collect_mq_info.m"
            if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 454 "module_qual.collect_mq_info.m"
              {
#line 454 "module_qual.collect_mq_info.m"
                MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_36;
#line 454 "module_qual.collect_mq_info.m"
                MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_37;

#line 451 "module_qual.collect_mq_info.m"
                if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__SymName_31)) == (MR_mktag((MR_Integer) 1))))
#line 449 "module_qual.collect_mq_info.m"
                  {
#line 449 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_31, (MR_Integer) 0)));
#line 449 "module_qual.collect_mq_info.m"
                    MR_String parse_tree__module_qual__collect_mq_info__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_31, (MR_Integer) 1)));

#line 450 "module_qual.collect_mq_info.m"
                    {
#line 450 "module_qual.collect_mq_info.m"
                      mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_33)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_37);
                    }
#line 449 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_36 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4;
#line 449 "module_qual.collect_mq_info.m"
                  }
#line 451 "module_qual.collect_mq_info.m"
                else
#line 452 "module_qual.collect_mq_info.m"
                  {
#line 453 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_36 = (MR_Integer) 1;
#line 452 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_37 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2;
#line 452 "module_qual.collect_mq_info.m"
                  }
#line 455 "module_qual.collect_mq_info.m"
                {
#line 455 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_32, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_37, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_36, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21);
                }
#line 454 "module_qual.collect_mq_info.m"
              }
#line 447 "module_qual.collect_mq_info.m"
            else
#line 457 "module_qual.collect_mq_info.m"
              {
#line 457 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4;
#line 457 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2;
#line 457 "module_qual.collect_mq_info.m"
              }
#line 467 "module_qual.collect_mq_info.m"
            /* direct tailcall eliminated */
#line 467 "module_qual.collect_mq_info.m"
            {
#line 467 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1__tmp_copy_1 = parse_tree__module_qual__collect_mq_info__Terms_13;
#line 467 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_2 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20;
#line 467 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21;

#line 467 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_4;
#line 467 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_2;
#line 467 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = parse_tree__module_qual__collect_mq_info__HeadVar__1__tmp_copy_1;
#line 467 "module_qual.collect_mq_info.m"
            }
#line 467 "module_qual.collect_mq_info.m"
            continue;
#line 465 "module_qual.collect_mq_info.m"
          }
#line 463 "module_qual.collect_mq_info.m"
      }
#line 463 "module_qual.collect_mq_info.m"
      break;
#line 463 "module_qual.collect_mq_info.m"
    }
#line 460 "module_qual.collect_mq_info.m"
}

#line 443 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(
#line 443 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Term_6,
#line 443 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14,
#line 443 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_15,
#line 443 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_16,
#line 443 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17)
#line 443 "module_qual.collect_mq_info.m"
{
#line 447 "module_qual.collect_mq_info.m"
  {
#line 447 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 447 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__SymName_9;
#line 447 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_10;

#line 447 "module_qual.collect_mq_info.m"
    {
#line 447 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__Term_6, &parse_tree__module_qual__collect_mq_info__SymName_9, &parse_tree__module_qual__collect_mq_info__ArgTerms_10);
    }
#line 447 "module_qual.collect_mq_info.m"
    if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 454 "module_qual.collect_mq_info.m"
      {
#line 454 "module_qual.collect_mq_info.m"
        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_18;
#line 454 "module_qual.collect_mq_info.m"
        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_19;

#line 451 "module_qual.collect_mq_info.m"
        if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__SymName_9)) == (MR_mktag((MR_Integer) 1))))
#line 449 "module_qual.collect_mq_info.m"
          {
#line 449 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_9, (MR_Integer) 0)));
#line 449 "module_qual.collect_mq_info.m"
            MR_String parse_tree__module_qual__collect_mq_info__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_9, (MR_Integer) 1)));

#line 450 "module_qual.collect_mq_info.m"
            {
#line 450 "module_qual.collect_mq_info.m"
              mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_11)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_19);
            }
#line 449 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_18 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_16;
#line 449 "module_qual.collect_mq_info.m"
          }
#line 451 "module_qual.collect_mq_info.m"
        else
#line 452 "module_qual.collect_mq_info.m"
          {
#line 453 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_18 = (MR_Integer) 1;
#line 452 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_19 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14;
#line 452 "module_qual.collect_mq_info.m"
          }
#line 455 "module_qual.collect_mq_info.m"
        {
#line 455 "module_qual.collect_mq_info.m"
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_10, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_19, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_15, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_18, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17);
        }
#line 454 "module_qual.collect_mq_info.m"
      }
#line 447 "module_qual.collect_mq_info.m"
    else
#line 457 "module_qual.collect_mq_info.m"
      {
#line 457 "module_qual.collect_mq_info.m"
        *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_16;
#line 457 "module_qual.collect_mq_info.m"
        *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_15 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_14;
#line 457 "module_qual.collect_mq_info.m"
      }
#line 447 "module_qual.collect_mq_info.m"
  }
#line 443 "module_qual.collect_mq_info.m"
}

#line 429 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(
#line 429 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__CatchExpr_6,
#line 429 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12,
#line 429 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_13,
#line 429 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_14,
#line 429 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_15)
#line 429 "module_qual.collect_mq_info.m"
{
#line 433 "module_qual.collect_mq_info.m"
  {
#line 433 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 433 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__Pattern0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__CatchExpr_6, (MR_Integer) 0)));
#line 433 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__CatchExpr_6, (MR_Integer) 1)));
#line 433 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__Pattern_11;
#line 433 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_16_16;
#line 433 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17_17;
#line 447 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__SymName_29;
#line 447 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_30;

#line 435 "module_qual.collect_mq_info.m"
    {
#line 435 "module_qual.collect_mq_info.m"
      mercury__term__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__Pattern0_9, &parse_tree__module_qual__collect_mq_info__Pattern_11);
    }
#line 447 "module_qual.collect_mq_info.m"
    {
#line 447 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__module_qual__collect_mq_info__Pattern_11, &parse_tree__module_qual__collect_mq_info__SymName_29, &parse_tree__module_qual__collect_mq_info__ArgTerms_30);
    }
#line 447 "module_qual.collect_mq_info.m"
    if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 454 "module_qual.collect_mq_info.m"
      {
#line 454 "module_qual.collect_mq_info.m"
        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_34;
#line 454 "module_qual.collect_mq_info.m"
        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_35;

#line 451 "module_qual.collect_mq_info.m"
        if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__SymName_29)) == (MR_mktag((MR_Integer) 1))))
#line 449 "module_qual.collect_mq_info.m"
          {
#line 449 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_29, (MR_Integer) 0)));
#line 449 "module_qual.collect_mq_info.m"
            MR_String parse_tree__module_qual__collect_mq_info__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_29, (MR_Integer) 1)));

#line 450 "module_qual.collect_mq_info.m"
            {
#line 450 "module_qual.collect_mq_info.m"
              mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_31)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_35);
            }
#line 449 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_34 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_14;
#line 449 "module_qual.collect_mq_info.m"
          }
#line 451 "module_qual.collect_mq_info.m"
        else
#line 452 "module_qual.collect_mq_info.m"
          {
#line 453 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_34 = (MR_Integer) 1;
#line 452 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_35 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12;
#line 452 "module_qual.collect_mq_info.m"
          }
#line 455 "module_qual.collect_mq_info.m"
        {
#line 455 "module_qual.collect_mq_info.m"
          parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_30, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_19_35, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_16_16, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_18_34, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17_17);
        }
#line 454 "module_qual.collect_mq_info.m"
      }
#line 447 "module_qual.collect_mq_info.m"
    else
#line 457 "module_qual.collect_mq_info.m"
      {
#line 457 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17_17 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_14;
#line 457 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_16_16 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_12;
#line 457 "module_qual.collect_mq_info.m"
      }
#line 437 "module_qual.collect_mq_info.m"
    {
#line 437 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__Goal_10, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_16_16, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_13, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_17_17, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_15);
    }
#line 433 "module_qual.collect_mq_info.m"
  }
#line 429 "module_qual.collect_mq_info.m"
}

#line 418 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(
#line 418 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1,
#line 418 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2,
#line 418 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3,
#line 418 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4,
#line 418 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5)
#line 418 "module_qual.collect_mq_info.m"
{
#line 421 "module_qual.collect_mq_info.m"
  while (MR_TRUE)
#line 421 "module_qual.collect_mq_info.m"
    {
#line 421 "module_qual.collect_mq_info.m"
      /* tailcall optimized into a loop */
#line 421 "module_qual.collect_mq_info.m"
      {
#line 421 "module_qual.collect_mq_info.m"
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 421 "module_qual.collect_mq_info.m"
        if ((parse_tree__module_qual__collect_mq_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "module_qual.collect_mq_info.m"
          {
#line 421 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_5 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4;
#line 421 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_3 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2;
#line 421 "module_qual.collect_mq_info.m"
          }
#line 421 "module_qual.collect_mq_info.m"
        else
#line 423 "module_qual.collect_mq_info.m"
          {
#line 423 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Goals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__1_1, (MR_Integer) 1)));
#line 423 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20;
#line 423 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21;

#line 424 "module_qual.collect_mq_info.m"
            {
#line 424 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__Goal_12, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21);
            }
#line 426 "module_qual.collect_mq_info.m"
            /* direct tailcall eliminated */
#line 426 "module_qual.collect_mq_info.m"
            {
#line 426 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1__tmp_copy_1 = parse_tree__module_qual__collect_mq_info__Goals_13;
#line 426 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_2 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_20_20;
#line 426 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_21_21;

#line 426 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_4;
#line 426 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_2 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_2;
#line 426 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__HeadVar__1_1 = parse_tree__module_qual__collect_mq_info__HeadVar__1__tmp_copy_1;
#line 426 "module_qual.collect_mq_info.m"
            }
#line 426 "module_qual.collect_mq_info.m"
            continue;
#line 423 "module_qual.collect_mq_info.m"
          }
#line 421 "module_qual.collect_mq_info.m"
      }
#line 421 "module_qual.collect_mq_info.m"
      break;
#line 421 "module_qual.collect_mq_info.m"
    }
#line 418 "module_qual.collect_mq_info.m"
}

#line 370 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_3(
#line 370 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4,
#line 370 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_5)
#line 370 "module_qual.collect_mq_info.m"
{
#line 370 "module_qual.collect_mq_info.m"
  {
#line 370 "module_qual.collect_mq_info.m"
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
#line 370 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_UsedModuleNames_13;
#line 370 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__conv2_STATE_VARIABLE_FoundUnqual_15;

#line 370 "module_qual.collect_mq_info.m"
    {
#line 370 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_catch_5_p_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), &parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_UsedModuleNames_13, ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_4), &parse_tree__module_qual__collect_mq_info__conv2_STATE_VARIABLE_FoundUnqual_15);
    }
#line 370 "module_qual.collect_mq_info.m"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_UsedModuleNames_13));
#line 370 "module_qual.collect_mq_info.m"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_5 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv2_STATE_VARIABLE_FoundUnqual_15));
#line 370 "module_qual.collect_mq_info.m"
  }
#line 370 "module_qual.collect_mq_info.m"
}

#line 395 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_2(
#line 395 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 395 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 395 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2)
#line 395 "module_qual.collect_mq_info.m"
{
#line 395 "module_qual.collect_mq_info.m"
  {
#line 395 "module_qual.collect_mq_info.m"
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
#line 395 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__conv1_HeadVar__2_147;

#line 395 "module_qual.collect_mq_info.m"
    {
#line 395 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__395__1_2_p_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), &parse_tree__module_qual__collect_mq_info__conv1_HeadVar__2_147);
    }
#line 395 "module_qual.collect_mq_info.m"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv1_HeadVar__2_147));
#line 395 "module_qual.collect_mq_info.m"
  }
#line 395 "module_qual.collect_mq_info.m"
}

#line 406 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0_1(
#line 406 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 406 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 406 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_2)
#line 406 "module_qual.collect_mq_info.m"
{
#line 406 "module_qual.collect_mq_info.m"
  {
#line 406 "module_qual.collect_mq_info.m"
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
#line 406 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__conv0_HeadVar__2_154;

#line 406 "module_qual.collect_mq_info.m"
    {
#line 406 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__IntroducedFrom__pred__collect_used_modules_in_promise_goal__406__1_2_p_0(((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), &parse_tree__module_qual__collect_mq_info__conv0_HeadVar__2_154);
    }
#line 406 "module_qual.collect_mq_info.m"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_2 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv0_HeadVar__2_154));
#line 406 "module_qual.collect_mq_info.m"
  }
#line 406 "module_qual.collect_mq_info.m"
}

#line 322 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(
#line 322 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Goal_6,
#line 322 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87,
#line 322 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88,
#line 322 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89,
#line 322 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90)
#line 322 "module_qual.collect_mq_info.m"
{
#line 332 "module_qual.collect_mq_info.m"
  while (MR_TRUE)
#line 332 "module_qual.collect_mq_info.m"
    {
#line 332 "module_qual.collect_mq_info.m"
      /* tailcall optimized into a loop */
#line 332 "module_qual.collect_mq_info.m"
      {
#line 332 "module_qual.collect_mq_info.m"
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 332 "module_qual.collect_mq_info.m"
#line 332 "module_qual.collect_mq_info.m"
        switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__Goal_6)) {
#line 332 "module_qual.collect_mq_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 332 "module_qual.collect_mq_info.m"
          case (MR_Integer) 0:
#line 409 "module_qual.collect_mq_info.m"
            {
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__TypeCtorInfo_160_160 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__LHS0_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__RHS0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__LHS_85;
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__RHS_86;
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_91_91;
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_92_92;
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 0)));
#line 409 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info___Purity_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

#line 410 "module_qual.collect_mq_info.m"
              {
#line 410 "module_qual.collect_mq_info.m"
                mercury__term__coerce_2_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_159_159, parse_tree__module_qual__collect_mq_info__TypeCtorInfo_160_160, parse_tree__module_qual__collect_mq_info__LHS0_83, &parse_tree__module_qual__collect_mq_info__LHS_85);
              }
#line 411 "module_qual.collect_mq_info.m"
              {
#line 411 "module_qual.collect_mq_info.m"
                mercury__term__coerce_2_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_159_159, parse_tree__module_qual__collect_mq_info__TypeCtorInfo_160_160, parse_tree__module_qual__collect_mq_info__RHS0_84, &parse_tree__module_qual__collect_mq_info__RHS_86);
              }
#line 412 "module_qual.collect_mq_info.m"
              {
#line 412 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(parse_tree__module_qual__collect_mq_info__LHS_85, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_91_91, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_92_92);
              }
#line 413 "module_qual.collect_mq_info.m"
              {
#line 413 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_term_5_p_0(parse_tree__module_qual__collect_mq_info__RHS_86, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_91_91, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_92_92, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);
              }
#line 409 "module_qual.collect_mq_info.m"
            }
#line 332 "module_qual.collect_mq_info.m"
            break;
#line 332 "module_qual.collect_mq_info.m"
          case (MR_Integer) 1:
#line 398 "module_qual.collect_mq_info.m"
            {
#line 398 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__SymName_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 398 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_95_95;
#line 398 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_96_96;
#line 398 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms0_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 398 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_135;
#line 398 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 0)));
#line 398 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info___Purity_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

#line 402 "module_qual.collect_mq_info.m"
              if (((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__SymName_77)) == (MR_mktag((MR_Integer) 1))))
#line 400 "module_qual.collect_mq_info.m"
                {
#line 400 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__ModuleName_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_77, (MR_Integer) 0)));
#line 400 "module_qual.collect_mq_info.m"
                  MR_String parse_tree__module_qual__collect_mq_info__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__SymName_77, (MR_Integer) 1)));

#line 401 "module_qual.collect_mq_info.m"
                  {
#line 401 "module_qual.collect_mq_info.m"
                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ModuleName_79)), parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_96_96);
                  }
#line 400 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_95_95 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89;
#line 400 "module_qual.collect_mq_info.m"
                }
#line 402 "module_qual.collect_mq_info.m"
              else
#line 403 "module_qual.collect_mq_info.m"
                {
#line 404 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_95_95 = (MR_Integer) 1;
#line 403 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_96_96 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87;
#line 403 "module_qual.collect_mq_info.m"
                }
#line 406 "module_qual.collect_mq_info.m"
              {
#line 406 "module_qual.collect_mq_info.m"
                mercury__list__map_3_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[4], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[5], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[4], parse_tree__module_qual__collect_mq_info__ArgTerms0_134, &parse_tree__module_qual__collect_mq_info__ArgTerms_135);
              }
#line 407 "module_qual.collect_mq_info.m"
              {
#line 407 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_135, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_96_96, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_95_95, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);
              }
#line 398 "module_qual.collect_mq_info.m"
            }
#line 332 "module_qual.collect_mq_info.m"
            break;
#line 332 "module_qual.collect_mq_info.m"
          case (MR_Integer) 2:
#line 332 "module_qual.collect_mq_info.m"
            {
#line 332 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 332 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 332 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_127;
#line 332 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_128;
#line 327 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 0)));

#line 333 "module_qual.collect_mq_info.m"
              {
#line 333 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_10, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_127, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_128);
              }
#line 335 "module_qual.collect_mq_info.m"
              /* direct tailcall eliminated */
#line 335 "module_qual.collect_mq_info.m"
              {
#line 335 "module_qual.collect_mq_info.m"
                MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_11;
#line 335 "module_qual.collect_mq_info.m"
                MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_127;
#line 335 "module_qual.collect_mq_info.m"
                MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_128;

#line 335 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
#line 335 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
#line 335 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 335 "module_qual.collect_mq_info.m"
              }
#line 335 "module_qual.collect_mq_info.m"
              continue;
#line 332 "module_qual.collect_mq_info.m"
            }
#line 332 "module_qual.collect_mq_info.m"
            break;
#line 332 "module_qual.collect_mq_info.m"
          case (MR_Integer) 3:
#line 332 "module_qual.collect_mq_info.m"
#line 332 "module_qual.collect_mq_info.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 0)))) {
#line 332 "module_qual.collect_mq_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 0:
#line 338 "module_qual.collect_mq_info.m"
                {
#line 338 "module_qual.collect_mq_info.m"
                  *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87;
#line 338 "module_qual.collect_mq_info.m"
                  *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89;
#line 338 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 1:
#line 386 "module_qual.collect_mq_info.m"
                {
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__CondGoal_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_103_103;
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_104_104;
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_105_105;
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_106_106;
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__ThenGoal_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__ElseGoal_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 386 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

#line 387 "module_qual.collect_mq_info.m"
                  {
#line 387 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__CondGoal_71, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_103_103, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_104_104);
                  }
#line 389 "module_qual.collect_mq_info.m"
                  {
#line 389 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__ThenGoal_132, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_103_103, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_105_105, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_104_104, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_106_106);
                  }
#line 391 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 391 "module_qual.collect_mq_info.m"
                  {
#line 391 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__ElseGoal_133;
#line 391 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_105_105;
#line 391 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_106_106;

#line 391 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
#line 391 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
#line 391 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 391 "module_qual.collect_mq_info.m"
                  }
#line 391 "module_qual.collect_mq_info.m"
                  continue;
#line 386 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 2:
#line 332 "module_qual.collect_mq_info.m"
                {
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_163;
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_164;
#line 329 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

#line 333 "module_qual.collect_mq_info.m"
                  {
#line 333 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_161, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_163, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_164);
                  }
#line 335 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 335 "module_qual.collect_mq_info.m"
                  {
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_162;
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_163;
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_164;

#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 335 "module_qual.collect_mq_info.m"
                  }
#line 335 "module_qual.collect_mq_info.m"
                  continue;
#line 332 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 3:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 342 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_19;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 4:
#line 339 "module_qual.collect_mq_info.m"
                {
#line 339 "module_qual.collect_mq_info.m"
                  *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87;
#line 339 "module_qual.collect_mq_info.m"
                  *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89;
#line 339 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 5:
#line 332 "module_qual.collect_mq_info.m"
                {
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_175;
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_176;
#line 328 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

#line 333 "module_qual.collect_mq_info.m"
                  {
#line 333 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_173, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_175, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_176);
                  }
#line 335 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 335 "module_qual.collect_mq_info.m"
                  {
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_174;
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_175;
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_176;

#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 335 "module_qual.collect_mq_info.m"
                  }
#line 335 "module_qual.collect_mq_info.m"
                  continue;
#line 332 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 6:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
#line 343 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 343 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 343 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 343 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_181;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 7:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 344 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 344 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_180;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 8:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
#line 345 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 345 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 345 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 345 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
#line 345 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_179;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 9:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
#line 346 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 346 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 346 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 346 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
#line 346 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_178;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 10:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
#line 347 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 347 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 347 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 347 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
#line 347 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_177;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 11:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 349 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 349 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_183;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 12:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 350 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 350 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_182;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 13:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
#line 351 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 351 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 351 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_184;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 14:
#line 353 "module_qual.collect_mq_info.m"
                {
#line 353 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
#line 352 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 352 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 352 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 352 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
#line 352 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));

#line 354 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 354 "module_qual.collect_mq_info.m"
                  {
#line 354 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoal_185;

#line 354 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 354 "module_qual.collect_mq_info.m"
                  }
#line 354 "module_qual.collect_mq_info.m"
                  continue;
#line 353 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 15:
#line 380 "module_qual.collect_mq_info.m"
                {
#line 380 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__MainGoal_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));
#line 380 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__OrElseGoals_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
#line 380 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_109_109;
#line 380 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_110_110;
#line 380 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 380 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 380 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 380 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));

#line 381 "module_qual.collect_mq_info.m"
                  {
#line 381 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__MainGoal_66, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_109_109, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_110_110);
                  }
#line 383 "module_qual.collect_mq_info.m"
                  {
#line 383 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goals_5_p_0(parse_tree__module_qual__collect_mq_info__OrElseGoals_67, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_109_109, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_110_110, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);
                  }
#line 380 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 16:
#line 358 "module_qual.collect_mq_info.m"
                {
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__ThenGoal_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 4)));
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__MaybeElseGoal_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 5)));
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__Catches_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 6)));
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__MaybeCatchAny_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 7)));
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_113_113;
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_114_114;
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_115_115;
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_116_116;
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_117_117;
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_118_118;
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_120_120;
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_121_121;
#line 358 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoal_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 357 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 357 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 370 "module_qual.collect_mq_info.m"
                  MR_Box parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UsedModuleNames_120_120;
#line 370 "module_qual.collect_mq_info.m"
                  MR_Box parse_tree__module_qual__collect_mq_info__conv4_STATE_VARIABLE_FoundUnqual_121_121;

#line 359 "module_qual.collect_mq_info.m"
                  {
#line 359 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoal_131, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_113_113, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_114_114);
                  }
#line 361 "module_qual.collect_mq_info.m"
                  {
#line 361 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__ThenGoal_55, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_113_113, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_115_115, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_114_114, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_116_116);
                  }
#line 365 "module_qual.collect_mq_info.m"
                  if ((parse_tree__module_qual__collect_mq_info__MaybeElseGoal_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "module_qual.collect_mq_info.m"
                    {
#line 364 "module_qual.collect_mq_info.m"
                      parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_117_117 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_115_115;
#line 364 "module_qual.collect_mq_info.m"
                      parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_118_118 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_116_116;
#line 364 "module_qual.collect_mq_info.m"
                    }
#line 365 "module_qual.collect_mq_info.m"
                  else
#line 366 "module_qual.collect_mq_info.m"
                    {
#line 366 "module_qual.collect_mq_info.m"
                      MR_Word parse_tree__module_qual__collect_mq_info__ElseGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__MaybeElseGoal_56, (MR_Integer) 0)));

#line 367 "module_qual.collect_mq_info.m"
                      {
#line 367 "module_qual.collect_mq_info.m"
                        parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__ElseGoal_59, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_115_115, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_117_117, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_116_116, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_118_118);
                      }
#line 366 "module_qual.collect_mq_info.m"
                    }
#line 370 "module_qual.collect_mq_info.m"
                  {
#line 370 "module_qual.collect_mq_info.m"
                    mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_catch_expr_0, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[0], (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[6], parse_tree__module_qual__collect_mq_info__Catches_57, ((MR_Box) (parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_117_117)), &parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UsedModuleNames_120_120, ((MR_Box) (parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_118_118)), &parse_tree__module_qual__collect_mq_info__conv4_STATE_VARIABLE_FoundUnqual_121_121);
                  }
#line 370 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_120_120 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UsedModuleNames_120_120);
#line 370 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_121_121 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv4_STATE_VARIABLE_FoundUnqual_121_121);
#line 374 "module_qual.collect_mq_info.m"
                  if ((parse_tree__module_qual__collect_mq_info__MaybeCatchAny_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "module_qual.collect_mq_info.m"
                    {
#line 373 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_120_120;
#line 373 "module_qual.collect_mq_info.m"
                      *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_121_121;
#line 373 "module_qual.collect_mq_info.m"
                    }
#line 374 "module_qual.collect_mq_info.m"
                  else
#line 375 "module_qual.collect_mq_info.m"
                    {
#line 375 "module_qual.collect_mq_info.m"
                      MR_Word parse_tree__module_qual__collect_mq_info__CatchAnyGoal_61;
#line 375 "module_qual.collect_mq_info.m"
                      MR_Word parse_tree__module_qual__collect_mq_info__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__MaybeCatchAny_58, (MR_Integer) 0)));
#line 375 "module_qual.collect_mq_info.m"
                      MR_Word parse_tree__module_qual__collect_mq_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_122_122, (MR_Integer) 0)));

#line 375 "module_qual.collect_mq_info.m"
                      parse_tree__module_qual__collect_mq_info__CatchAnyGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_122_122, (MR_Integer) 1)));
#line 376 "module_qual.collect_mq_info.m"
                      /* direct tailcall eliminated */
#line 376 "module_qual.collect_mq_info.m"
                      {
#line 376 "module_qual.collect_mq_info.m"
                        MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__CatchAnyGoal_61;
#line 376 "module_qual.collect_mq_info.m"
                        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_120_120;
#line 376 "module_qual.collect_mq_info.m"
                        MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_121_121;

#line 376 "module_qual.collect_mq_info.m"
                        parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
#line 376 "module_qual.collect_mq_info.m"
                        parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
#line 376 "module_qual.collect_mq_info.m"
                        parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 376 "module_qual.collect_mq_info.m"
                      }
#line 376 "module_qual.collect_mq_info.m"
                      continue;
#line 375 "module_qual.collect_mq_info.m"
                    }
#line 358 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 17:
#line 332 "module_qual.collect_mq_info.m"
                {
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_171;
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_172;
#line 330 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

#line 333 "module_qual.collect_mq_info.m"
                  {
#line 333 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_169, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_171, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_172);
                  }
#line 335 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 335 "module_qual.collect_mq_info.m"
                  {
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_170;
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_171;
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_172;

#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 335 "module_qual.collect_mq_info.m"
                  }
#line 335 "module_qual.collect_mq_info.m"
                  continue;
#line 332 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 18:
#line 332 "module_qual.collect_mq_info.m"
                {
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalA_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__SubGoalB_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_167;
#line 332 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_168;
#line 331 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));

#line 333 "module_qual.collect_mq_info.m"
                  {
#line 333 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__SubGoalA_165, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_167, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_168);
                  }
#line 335 "module_qual.collect_mq_info.m"
                  /* direct tailcall eliminated */
#line 335 "module_qual.collect_mq_info.m"
                  {
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6 = parse_tree__module_qual__collect_mq_info__SubGoalB_166;
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_127_167;
#line 335 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_128_168;

#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0__tmp_copy_89;
#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0__tmp_copy_87;
#line 335 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__Goal_6 = parse_tree__module_qual__collect_mq_info__Goal__tmp_copy_6;
#line 335 "module_qual.collect_mq_info.m"
                  }
#line 335 "module_qual.collect_mq_info.m"
                  continue;
#line 332 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
              case (MR_Integer) 19:
#line 394 "module_qual.collect_mq_info.m"
                {
#line 394 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms0_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 3)));
#line 394 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__ArgTerms_75;
#line 394 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 1)));
#line 394 "module_qual.collect_mq_info.m"
                  MR_String parse_tree__module_qual__collect_mq_info___Name_73 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Goal_6, (MR_Integer) 2)));

#line 395 "module_qual.collect_mq_info.m"
                  {
#line 395 "module_qual.collect_mq_info.m"
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[4], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[5], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[5], parse_tree__module_qual__collect_mq_info__ArgTerms0_74, &parse_tree__module_qual__collect_mq_info__ArgTerms_75);
                  }
#line 396 "module_qual.collect_mq_info.m"
                  {
#line 396 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__collect_used_modules_in_terms_5_p_0(parse_tree__module_qual__collect_mq_info__ArgTerms_75, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_0_87, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UsedModuleNames_88, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_0_89, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_FoundUnqual_90);
                  }
#line 394 "module_qual.collect_mq_info.m"
                }
#line 332 "module_qual.collect_mq_info.m"
                break;
#line 332 "module_qual.collect_mq_info.m"
            }
#line 332 "module_qual.collect_mq_info.m"
            break;
#line 332 "module_qual.collect_mq_info.m"
        }
#line 332 "module_qual.collect_mq_info.m"
      }
#line 332 "module_qual.collect_mq_info.m"
      break;
#line 332 "module_qual.collect_mq_info.m"
    }
#line 322 "module_qual.collect_mq_info.m"
}

#line 308 "module_qual.collect_mq_info.m"
static MR_Word MR_CALL 
parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(
#line 308 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__1_1)
#line 308 "module_qual.collect_mq_info.m"
{
#line 310 "module_qual.collect_mq_info.m"
  {
#line 310 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 310 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2;

#line 310 "module_qual.collect_mq_info.m"
#line 310 "module_qual.collect_mq_info.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__HeadVar__1_1)) {
#line 310 "module_qual.collect_mq_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 310 "module_qual.collect_mq_info.m"
      case (MR_Integer) 0:
#line 310 "module_qual.collect_mq_info.m"
#line 310 "module_qual.collect_mq_info.m"
        switch (MR_unmkbody(parse_tree__module_qual__collect_mq_info__HeadVar__1_1)) {
#line 310 "module_qual.collect_mq_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 310 "module_qual.collect_mq_info.m"
          case (MR_Integer) 0:
#line 310 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = (MR_Integer) 1;
#line 310 "module_qual.collect_mq_info.m"
            break;
#line 310 "module_qual.collect_mq_info.m"
          case (MR_Integer) 1:
#line 311 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = (MR_Integer) 0;
#line 310 "module_qual.collect_mq_info.m"
            break;
#line 310 "module_qual.collect_mq_info.m"
          case (MR_Integer) 2:
#line 314 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = (MR_Integer) 0;
#line 310 "module_qual.collect_mq_info.m"
            break;
#line 310 "module_qual.collect_mq_info.m"
        }
#line 310 "module_qual.collect_mq_info.m"
        break;
#line 310 "module_qual.collect_mq_info.m"
      case (MR_Integer) 1:
#line 312 "module_qual.collect_mq_info.m"
        parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = (MR_Integer) 0;
#line 310 "module_qual.collect_mq_info.m"
        break;
#line 310 "module_qual.collect_mq_info.m"
    }
#line 310 "module_qual.collect_mq_info.m"
    return parse_tree__module_qual__collect_mq_info__HeadVar__2_2;
#line 310 "module_qual.collect_mq_info.m"
  }
#line 308 "module_qual.collect_mq_info.m"
}

#line 260 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1(
#line 260 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 260 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 260 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 260 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3)
#line 260 "module_qual.collect_mq_info.m"
{
#line 260 "module_qual.collect_mq_info.m"
  {
#line 260 "module_qual.collect_mq_info.m"
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
#line 260 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__conv0_HeadVar__4_4;

#line 260 "module_qual.collect_mq_info.m"
    {
#line 260 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__mq_info_set_module_used_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), &parse_tree__module_qual__collect_mq_info__conv0_HeadVar__4_4);
    }
#line 260 "module_qual.collect_mq_info.m"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv0_HeadVar__4_4));
#line 260 "module_qual.collect_mq_info.m"
  }
#line 260 "module_qual.collect_mq_info.m"
}

#line 211 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(
#line 211 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_6,
#line 211 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_7,
#line 211 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Item_8,
#line 211 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68,
#line 211 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69)
#line 211 "module_qual.collect_mq_info.m"
{
#line 216 "module_qual.collect_mq_info.m"
  {
#line 216 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 216 "module_qual.collect_mq_info.m"
#line 216 "module_qual.collect_mq_info.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__Item_8)) {
#line 216 "module_qual.collect_mq_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 216 "module_qual.collect_mq_info.m"
      case (MR_Integer) 0:
#line 296 "module_qual.collect_mq_info.m"
        *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 216 "module_qual.collect_mq_info.m"
        break;
#line 216 "module_qual.collect_mq_info.m"
      case (MR_Integer) 1:
#line 216 "module_qual.collect_mq_info.m"
        {
#line 216 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__collect_mq_info__Item_8), (MR_Integer) 1);
#line 216 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 0)));
#line 216 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__Params_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 1)));
#line 217 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 2)));
#line 217 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 3)));
#line 217 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 4)));
#line 217 "module_qual.collect_mq_info.m"
          MR_Integer parse_tree__module_qual__collect_mq_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeDefn_10, (MR_Integer) 5)));

#line 218 "module_qual.collect_mq_info.m"
          parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__MQSection_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 218 "module_qual.collect_mq_info.m"
          if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 218 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 218 "module_qual.collect_mq_info.m"
          else
#line 222 "module_qual.collect_mq_info.m"
            {
#line 222 "module_qual.collect_mq_info.m"
              MR_Integer parse_tree__module_qual__collect_mq_info__Arity_17;
#line 222 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__Types0_18;
#line 222 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__Types_19;
#line 222 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_82_82;

#line 222 "module_qual.collect_mq_info.m"
              {
#line 222 "module_qual.collect_mq_info.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[2], parse_tree__module_qual__collect_mq_info__Params_12, &parse_tree__module_qual__collect_mq_info__Arity_17);
              }
#line 223 "module_qual.collect_mq_info.m"
              {
#line 223 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__mq_info_get_types_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__Types0_18);
              }
#line 224 "module_qual.collect_mq_info.m"
              {
#line 224 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 224 "module_qual.collect_mq_info.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_82_82, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__SymName_11));
#line 224 "module_qual.collect_mq_info.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_82_82, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Arity_17));
#line 224 "module_qual.collect_mq_info.m"
              }
#line 224 "module_qual.collect_mq_info.m"
              {
#line 224 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_7, parse_tree__module_qual__collect_mq_info__V_82_82, parse_tree__module_qual__collect_mq_info__Types0_18, &parse_tree__module_qual__collect_mq_info__Types_19);
              }
#line 225 "module_qual.collect_mq_info.m"
              {
#line 225 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__mq_info_set_types_3_p_0(parse_tree__module_qual__collect_mq_info__Types_19, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
              }
#line 222 "module_qual.collect_mq_info.m"
            }
#line 216 "module_qual.collect_mq_info.m"
        }
#line 216 "module_qual.collect_mq_info.m"
        break;
#line 216 "module_qual.collect_mq_info.m"
      case (MR_Integer) 2:
#line 228 "module_qual.collect_mq_info.m"
        {
#line 228 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__ItemInstDefn_20 = (MR_Word) MR_body(((MR_Word) parse_tree__module_qual__collect_mq_info__Item_8), (MR_Integer) 2);
#line 228 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__SymName_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 0)));
#line 228 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__Params_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 1)));
#line 229 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 2)));
#line 229 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 3)));
#line 229 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 4)));
#line 229 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 5)));
#line 229 "module_qual.collect_mq_info.m"
          MR_Integer parse_tree__module_qual__collect_mq_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstDefn_20, (MR_Integer) 6)));

#line 230 "module_qual.collect_mq_info.m"
          parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__MQSection_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 230 "module_qual.collect_mq_info.m"
          if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 230 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 230 "module_qual.collect_mq_info.m"
          else
#line 234 "module_qual.collect_mq_info.m"
            {
#line 234 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__Insts0_26;
#line 234 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__Insts_27;
#line 234 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_80_80;
#line 234 "module_qual.collect_mq_info.m"
              MR_Integer parse_tree__module_qual__collect_mq_info__Arity_84;

#line 234 "module_qual.collect_mq_info.m"
              {
#line 234 "module_qual.collect_mq_info.m"
                mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[3], parse_tree__module_qual__collect_mq_info__Params_87, &parse_tree__module_qual__collect_mq_info__Arity_84);
              }
#line 235 "module_qual.collect_mq_info.m"
              {
#line 235 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__mq_info_get_insts_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__Insts0_26);
              }
#line 236 "module_qual.collect_mq_info.m"
              {
#line 236 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "module_qual.collect_mq_info.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_80_80, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__SymName_86));
#line 236 "module_qual.collect_mq_info.m"
                MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_80_80, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Arity_84));
#line 236 "module_qual.collect_mq_info.m"
              }
#line 236 "module_qual.collect_mq_info.m"
              {
#line 236 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_7, parse_tree__module_qual__collect_mq_info__V_80_80, parse_tree__module_qual__collect_mq_info__Insts0_26, &parse_tree__module_qual__collect_mq_info__Insts_27);
              }
#line 237 "module_qual.collect_mq_info.m"
              {
#line 237 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__mq_info_set_insts_3_p_0(parse_tree__module_qual__collect_mq_info__Insts_27, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
              }
#line 234 "module_qual.collect_mq_info.m"
            }
#line 228 "module_qual.collect_mq_info.m"
        }
#line 216 "module_qual.collect_mq_info.m"
        break;
#line 216 "module_qual.collect_mq_info.m"
      case (MR_Integer) 3:
#line 216 "module_qual.collect_mq_info.m"
#line 216 "module_qual.collect_mq_info.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 0)))) {
#line 216 "module_qual.collect_mq_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 0:
#line 240 "module_qual.collect_mq_info.m"
            {
#line 240 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__ItemModeDefn_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 1)));
#line 240 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__SymName_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 0)));
#line 240 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__Params_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 1)));
#line 241 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 2)));
#line 241 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 3)));
#line 241 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 4)));
#line 241 "module_qual.collect_mq_info.m"
              MR_Integer parse_tree__module_qual__collect_mq_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemModeDefn_28, (MR_Integer) 5)));

#line 242 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__MQSection_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 242 "module_qual.collect_mq_info.m"
              if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 242 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 242 "module_qual.collect_mq_info.m"
              else
#line 246 "module_qual.collect_mq_info.m"
                {
#line 246 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__Modes0_33;
#line 246 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__Modes_34;
#line 246 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_78_78;
#line 246 "module_qual.collect_mq_info.m"
                  MR_Integer parse_tree__module_qual__collect_mq_info__Arity_89;

#line 246 "module_qual.collect_mq_info.m"
                  {
#line 246 "module_qual.collect_mq_info.m"
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[3], parse_tree__module_qual__collect_mq_info__Params_92, &parse_tree__module_qual__collect_mq_info__Arity_89);
                  }
#line 247 "module_qual.collect_mq_info.m"
                  {
#line 247 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__mq_info_get_modes_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__Modes0_33);
                  }
#line 248 "module_qual.collect_mq_info.m"
                  {
#line 248 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 248 "module_qual.collect_mq_info.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_78_78, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__SymName_91));
#line 248 "module_qual.collect_mq_info.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_78_78, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Arity_89));
#line 248 "module_qual.collect_mq_info.m"
                  }
#line 248 "module_qual.collect_mq_info.m"
                  {
#line 248 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_7, parse_tree__module_qual__collect_mq_info__V_78_78, parse_tree__module_qual__collect_mq_info__Modes0_33, &parse_tree__module_qual__collect_mq_info__Modes_34);
                  }
#line 249 "module_qual.collect_mq_info.m"
                  {
#line 249 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__mq_info_set_modes_3_p_0(parse_tree__module_qual__collect_mq_info__Modes_34, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
                  }
#line 246 "module_qual.collect_mq_info.m"
                }
#line 240 "module_qual.collect_mq_info.m"
            }
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 1:
#line 297 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 2:
#line 298 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 3:
#line 299 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 4:
#line 252 "module_qual.collect_mq_info.m"
            {
#line 252 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__TypeCtorInfo_110_110 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 252 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__ItemPromise_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 1)));
#line 252 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__Goal_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 1)));
#line 252 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__UsedModuleNames_42;
#line 252 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__FoundUnqual_43;
#line 252 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_73_73;
#line 253 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info___PromiseType_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 0)));
#line 253 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info___ProgVarSet_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 2)));
#line 253 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info___UnivVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 3)));
#line 253 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info___Context_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 4)));
#line 253 "module_qual.collect_mq_info.m"
              MR_Integer parse_tree__module_qual__collect_mq_info___SeqNum_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemPromise_35, (MR_Integer) 5)));

#line 256 "module_qual.collect_mq_info.m"
              {
#line 256 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__V_73_73 = mercury__set__init_0_f_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_110_110);
              }
#line 255 "module_qual.collect_mq_info.m"
              {
#line 255 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__collect_used_modules_in_promise_goal_5_p_0(parse_tree__module_qual__collect_mq_info__Goal_37, parse_tree__module_qual__collect_mq_info__V_73_73, &parse_tree__module_qual__collect_mq_info__UsedModuleNames_42, (MR_Integer) 0, &parse_tree__module_qual__collect_mq_info__FoundUnqual_43);
              }
#line 261 "module_qual.collect_mq_info.m"
#line 261 "module_qual.collect_mq_info.m"
              switch (parse_tree__module_qual__collect_mq_info__FoundUnqual_43) {
#line 261 "module_qual.collect_mq_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 261 "module_qual.collect_mq_info.m"
                case (MR_Integer) 0:
#line 258 "module_qual.collect_mq_info.m"
                  {
#line 258 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__InInt_44;
#line 258 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__V_76_76;
#line 260 "module_qual.collect_mq_info.m"
                    MR_Box parse_tree__module_qual__collect_mq_info__conv1_STATE_VARIABLE_Info_69;

#line 259 "module_qual.collect_mq_info.m"
                    {
#line 259 "module_qual.collect_mq_info.m"
                      parse_tree__module_qual__collect_mq_info__InInt_44 = parse_tree__module_qual__collect_mq_info__mq_section_to_in_interface_1_f_0(parse_tree__module_qual__collect_mq_info__MQSection_6);
                    }
#line 260 "module_qual.collect_mq_info.m"
                    {
#line 260 "module_qual.collect_mq_info.m"
                      parse_tree__module_qual__collect_mq_info__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 260 "module_qual.collect_mq_info.m"
                      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_76_76, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[1]));
#line 260 "module_qual.collect_mq_info.m"
                      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_76_76, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0_1));
#line 260 "module_qual.collect_mq_info.m"
                      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 260 "module_qual.collect_mq_info.m"
                      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_76_76, 3) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__InInt_44));
#line 260 "module_qual.collect_mq_info.m"
                    }
#line 260 "module_qual.collect_mq_info.m"
                    {
#line 260 "module_qual.collect_mq_info.m"
                      mercury__set__fold_4_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_110_110, (MR_Word) &parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_mq_info_0, parse_tree__module_qual__collect_mq_info__V_76_76, parse_tree__module_qual__collect_mq_info__UsedModuleNames_42, ((MR_Box) (parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68)), &parse_tree__module_qual__collect_mq_info__conv1_STATE_VARIABLE_Info_69);
                    }
#line 260 "module_qual.collect_mq_info.m"
                    *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv1_STATE_VARIABLE_Info_69);
#line 258 "module_qual.collect_mq_info.m"
                  }
#line 261 "module_qual.collect_mq_info.m"
                  break;
#line 261 "module_qual.collect_mq_info.m"
                case (MR_Integer) 1:
#line 265 "module_qual.collect_mq_info.m"
                  {
#line 265 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__UnusedModules_45;

#line 266 "module_qual.collect_mq_info.m"
                    {
#line 266 "module_qual.collect_mq_info.m"
                      mercury__map__init_1_p_0(parse_tree__module_qual__collect_mq_info__TypeCtorInfo_110_110, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[1], &parse_tree__module_qual__collect_mq_info__UnusedModules_45);
                    }
#line 267 "module_qual.collect_mq_info.m"
                    {
#line 267 "module_qual.collect_mq_info.m"
                      parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(parse_tree__module_qual__collect_mq_info__UnusedModules_45, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
                    }
#line 265 "module_qual.collect_mq_info.m"
                  }
#line 261 "module_qual.collect_mq_info.m"
                  break;
#line 261 "module_qual.collect_mq_info.m"
              }
#line 252 "module_qual.collect_mq_info.m"
            }
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 5:
#line 270 "module_qual.collect_mq_info.m"
            {
#line 270 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__ItemTypeClass_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 1)));
#line 270 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__SymName_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 0)));
#line 270 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__Params_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 1)));
#line 271 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 2)));
#line 271 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 3)));
#line 271 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 4)));
#line 271 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 5)));
#line 271 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 6)));
#line 271 "module_qual.collect_mq_info.m"
              MR_Integer parse_tree__module_qual__collect_mq_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemTypeClass_46, (MR_Integer) 7)));

#line 272 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__succeeded = (parse_tree__module_qual__collect_mq_info__MQSection_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 272 "module_qual.collect_mq_info.m"
              if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 272 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 272 "module_qual.collect_mq_info.m"
              else
#line 276 "module_qual.collect_mq_info.m"
                {
#line 276 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__Classes0_53;
#line 276 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__Classes_54;
#line 276 "module_qual.collect_mq_info.m"
                  MR_Word parse_tree__module_qual__collect_mq_info__V_71_71;
#line 276 "module_qual.collect_mq_info.m"
                  MR_Integer parse_tree__module_qual__collect_mq_info__Arity_94;

#line 276 "module_qual.collect_mq_info.m"
                  {
#line 276 "module_qual.collect_mq_info.m"
                    mercury__list__length_2_p_0((MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[2], parse_tree__module_qual__collect_mq_info__Params_97, &parse_tree__module_qual__collect_mq_info__Arity_94);
                  }
#line 277 "module_qual.collect_mq_info.m"
                  {
#line 277 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__mq_info_get_classes_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__Classes0_53);
                  }
#line 278 "module_qual.collect_mq_info.m"
                  {
#line 278 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__collect_mq_info__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "module_qual.collect_mq_info.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_71_71, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__SymName_96));
#line 278 "module_qual.collect_mq_info.m"
                    MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_71_71, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Arity_94));
#line 278 "module_qual.collect_mq_info.m"
                  }
#line 278 "module_qual.collect_mq_info.m"
                  {
#line 278 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_7, parse_tree__module_qual__collect_mq_info__V_71_71, parse_tree__module_qual__collect_mq_info__Classes0_53, &parse_tree__module_qual__collect_mq_info__Classes_54);
                  }
#line 280 "module_qual.collect_mq_info.m"
                  {
#line 280 "module_qual.collect_mq_info.m"
                    parse_tree__module_qual__mq_info_set_classes_3_p_0(parse_tree__module_qual__collect_mq_info__Classes_54, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
                  }
#line 276 "module_qual.collect_mq_info.m"
                }
#line 270 "module_qual.collect_mq_info.m"
            }
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 6:
#line 283 "module_qual.collect_mq_info.m"
            {
#line 283 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__ItemInstance_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__module_qual__collect_mq_info__Item_8, (MR_Integer) 1)));
#line 284 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__V_56_56;

#line 284 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__succeeded = ((MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__MQSection_6)) == (MR_mktag((MR_Integer) 1)));
#line 284 "module_qual.collect_mq_info.m"
              if (parse_tree__module_qual__collect_mq_info__succeeded)
#line 284 "module_qual.collect_mq_info.m"
                {
#line 284 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__MQSection_6, (MR_Integer) 0)));
#line 285 "module_qual.collect_mq_info.m"
                  {
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__InstanceModule_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 6)));
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__ImportedInstanceModules0_58;
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__ImportedInstanceModules_59;
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 0)));
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 1)));
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 2)));
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 3)));
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 4)));
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 5)));
#line 285 "module_qual.collect_mq_info.m"
                    MR_Word parse_tree__module_qual__collect_mq_info__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 7)));
#line 285 "module_qual.collect_mq_info.m"
                    MR_Integer parse_tree__module_qual__collect_mq_info__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemInstance_55, (MR_Integer) 8)));

#line 286 "module_qual.collect_mq_info.m"
                    {
#line 286 "module_qual.collect_mq_info.m"
                      parse_tree__module_qual__mq_info_get_imported_instance_modules_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, &parse_tree__module_qual__collect_mq_info__ImportedInstanceModules0_58);
                    }
#line 288 "module_qual.collect_mq_info.m"
                    {
#line 288 "module_qual.collect_mq_info.m"
                      mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (parse_tree__module_qual__collect_mq_info__InstanceModule_57)), parse_tree__module_qual__collect_mq_info__ImportedInstanceModules0_58, &parse_tree__module_qual__collect_mq_info__ImportedInstanceModules_59);
                    }
#line 290 "module_qual.collect_mq_info.m"
                    {
#line 290 "module_qual.collect_mq_info.m"
                      parse_tree__module_qual__mq_info_set_imported_instance_modules_3_p_0(parse_tree__module_qual__collect_mq_info__ImportedInstanceModules_59, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69);
                    }
#line 285 "module_qual.collect_mq_info.m"
                  }
#line 284 "module_qual.collect_mq_info.m"
                }
#line 284 "module_qual.collect_mq_info.m"
              else
#line 284 "module_qual.collect_mq_info.m"
                *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 283 "module_qual.collect_mq_info.m"
            }
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 7:
#line 300 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 8:
#line 301 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 9:
#line 302 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
          case (MR_Integer) 10:
#line 303 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_69 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_68;
#line 216 "module_qual.collect_mq_info.m"
            break;
#line 216 "module_qual.collect_mq_info.m"
        }
#line 216 "module_qual.collect_mq_info.m"
        break;
#line 216 "module_qual.collect_mq_info.m"
    }
#line 216 "module_qual.collect_mq_info.m"
  }
#line 211 "module_qual.collect_mq_info.m"
}

#line 203 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(
#line 203 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_1,
#line 203 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_2,
#line 203 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3_3,
#line 203 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4,
#line 203 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_5)
#line 203 "module_qual.collect_mq_info.m"
{
#line 206 "module_qual.collect_mq_info.m"
  while (MR_TRUE)
#line 206 "module_qual.collect_mq_info.m"
    {
#line 206 "module_qual.collect_mq_info.m"
      /* tailcall optimized into a loop */
#line 206 "module_qual.collect_mq_info.m"
      {
#line 206 "module_qual.collect_mq_info.m"
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 206 "module_qual.collect_mq_info.m"
        if ((parse_tree__module_qual__collect_mq_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 206 "module_qual.collect_mq_info.m"
          *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_5 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4;
#line 206 "module_qual.collect_mq_info.m"
        else
#line 207 "module_qual.collect_mq_info.m"
          {
#line 207 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Item_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__3_3, (MR_Integer) 0)));
#line 207 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Items_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__3_3, (MR_Integer) 1)));
#line 207 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_18_18;

#line 208 "module_qual.collect_mq_info.m"
            {
#line 208 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_5_p_0(parse_tree__module_qual__collect_mq_info__MQSection_1, parse_tree__module_qual__collect_mq_info__Permissions_2, parse_tree__module_qual__collect_mq_info__Item_13, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_18_18);
            }
#line 209 "module_qual.collect_mq_info.m"
            /* direct tailcall eliminated */
#line 209 "module_qual.collect_mq_info.m"
            {
#line 209 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__3__tmp_copy_3 = parse_tree__module_qual__collect_mq_info__Items_14;
#line 209 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0__tmp_copy_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_18_18;

#line 209 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 209 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__HeadVar__3_3 = parse_tree__module_qual__collect_mq_info__HeadVar__3__tmp_copy_3;
#line 209 "module_qual.collect_mq_info.m"
            }
#line 209 "module_qual.collect_mq_info.m"
            continue;
#line 207 "module_qual.collect_mq_info.m"
          }
#line 206 "module_qual.collect_mq_info.m"
      }
#line 206 "module_qual.collect_mq_info.m"
      break;
#line 206 "module_qual.collect_mq_info.m"
    }
#line 203 "module_qual.collect_mq_info.m"
}

#line 152 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__MQSection_8,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info___Permissions_9,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Avail_10,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23,
#line 152 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24)
#line 152 "module_qual.collect_mq_info.m"
{
#line 158 "module_qual.collect_mq_info.m"
  {
#line 158 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 158 "module_qual.collect_mq_info.m"
    {
#line 158 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_108_108_101_99_116_95_109_113_95_105_110_102_111_95_105_110_95_105_116_101_109_95_97_118_97_105_108_95_95_91_50_93_95_48_7_p_0(parse_tree__module_qual__collect_mq_info__MQSection_8, parse_tree__module_qual__collect_mq_info__Avail_10, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_0_21, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_ImportedModules_22, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_0_23, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_UnusedIntModules_24);
    }
#line 158 "module_qual.collect_mq_info.m"
  }
#line 152 "module_qual.collect_mq_info.m"
}

#line 136 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(
#line 136 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Permissions_5,
#line 136 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__Incl_6,
#line 136 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_0_12,
#line 136 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_13)
#line 136 "module_qual.collect_mq_info.m"
{
#line 139 "module_qual.collect_mq_info.m"
  {
#line 139 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;
#line 139 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__IncludedModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Incl_6, (MR_Integer) 0)));
#line 139 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__V_14_14;
#line 140 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Incl_6, (MR_Integer) 1)));
#line 140 "module_qual.collect_mq_info.m"
    MR_Integer parse_tree__module_qual__collect_mq_info___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__Incl_6, (MR_Integer) 2)));

#line 142 "module_qual.collect_mq_info.m"
    {
#line 142 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "module_qual.collect_mq_info.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_14_14, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__IncludedModuleName_8));
#line 142 "module_qual.collect_mq_info.m"
      MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 142 "module_qual.collect_mq_info.m"
    }
#line 142 "module_qual.collect_mq_info.m"
    {
#line 142 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__id_set__id_set_insert_4_p_0(parse_tree__module_qual__collect_mq_info__Permissions_5, parse_tree__module_qual__collect_mq_info__V_14_14, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_0_12, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Modules_13);
    }
#line 139 "module_qual.collect_mq_info.m"
  }
#line 136 "module_qual.collect_mq_info.m"
}

#line 116 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2(
#line 116 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_4,
#line 116 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_5)
#line 116 "module_qual.collect_mq_info.m"
{
#line 116 "module_qual.collect_mq_info.m"
  {
#line 116 "module_qual.collect_mq_info.m"
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
#line 116 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__conv6_STATE_VARIABLE_ImportedModules_22;
#line 116 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UnusedIntModules_24;

#line 116 "module_qual.collect_mq_info.m"
    {
#line 116 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_avail_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), &parse_tree__module_qual__collect_mq_info__conv6_STATE_VARIABLE_ImportedModules_22, ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_4), &parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UnusedIntModules_24);
    }
#line 116 "module_qual.collect_mq_info.m"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv6_STATE_VARIABLE_ImportedModules_22));
#line 116 "module_qual.collect_mq_info.m"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_5 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv5_STATE_VARIABLE_UnusedIntModules_24));
#line 116 "module_qual.collect_mq_info.m"
  }
#line 116 "module_qual.collect_mq_info.m"
}

#line 107 "module_qual.collect_mq_info.m"
static void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1(
#line 107 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__closure_arg,
#line 107 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_1,
#line 107 "module_qual.collect_mq_info.m"
  MR_Box parse_tree__module_qual__collect_mq_info__wrapper_arg_2,
#line 107 "module_qual.collect_mq_info.m"
  MR_Box * parse_tree__module_qual__collect_mq_info__wrapper_arg_3)
#line 107 "module_qual.collect_mq_info.m"
{
#line 107 "module_qual.collect_mq_info.m"
  {
#line 107 "module_qual.collect_mq_info.m"
    MR_Box parse_tree__module_qual__collect_mq_info__closure = parse_tree__module_qual__collect_mq_info__closure_arg;
#line 107 "module_qual.collect_mq_info.m"
    MR_Word parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_Modules_13;

#line 107 "module_qual.collect_mq_info.m"
    {
#line 107 "module_qual.collect_mq_info.m"
      parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_1), ((MR_Word) parse_tree__module_qual__collect_mq_info__wrapper_arg_2), &parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_Modules_13);
    }
#line 107 "module_qual.collect_mq_info.m"
    *parse_tree__module_qual__collect_mq_info__wrapper_arg_3 = ((MR_Box) (parse_tree__module_qual__collect_mq_info__conv3_STATE_VARIABLE_Modules_13));
#line 107 "module_qual.collect_mq_info.m"
  }
#line 107 "module_qual.collect_mq_info.m"
}

#line 40 "module_qual.collect_mq_info.m"
void MR_CALL 
parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0(
#line 40 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__TypeInfo_for_MS_37,
#line 40 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__SectionInfo_1,
#line 40 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2_2,
#line 40 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3,
#line 40 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_4)
#line 40 "module_qual.collect_mq_info.m"
{
#line 96 "module_qual.collect_mq_info.m"
  while (MR_TRUE)
#line 96 "module_qual.collect_mq_info.m"
    {
#line 96 "module_qual.collect_mq_info.m"
      /* tailcall optimized into a loop */
#line 96 "module_qual.collect_mq_info.m"
      {
#line 96 "module_qual.collect_mq_info.m"
        MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 96 "module_qual.collect_mq_info.m"
        if ((parse_tree__module_qual__collect_mq_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 96 "module_qual.collect_mq_info.m"
          *parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_4 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3;
#line 96 "module_qual.collect_mq_info.m"
        else
#line 97 "module_qual.collect_mq_info.m"
          {
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__ItemBlock_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__2_2, (MR_Integer) 0)));
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__ItemBlocks_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__HeadVar__2_2, (MR_Integer) 1)));
#line 97 "module_qual.collect_mq_info.m"
            MR_Box parse_tree__module_qual__collect_mq_info__Section_13 = (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 0));
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Incls_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 2)));
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Avails_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 3)));
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Items_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 4)));
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__MQSection_18;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__Permissions_19;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__ImportedModules0_24;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__UnusedIntModules0_25;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__ImportedModules_26;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__UnusedIntModules_27;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_31_31;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__V_32_32;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_33_33;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_34_34;
#line 97 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_35_35;
#line 98 "module_qual.collect_mq_info.m"
            MR_Word parse_tree__module_qual__collect_mq_info___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__ItemBlock_10, (MR_Integer) 1)));
#line 99 "module_qual.collect_mq_info.m"
            void MR_CALL (* parse_tree__module_qual__collect_mq_info__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__SectionInfo_1, (MR_Integer) 1)));
#line 99 "module_qual.collect_mq_info.m"
            MR_Box parse_tree__module_qual__collect_mq_info__conv2_MQSection_18;
#line 99 "module_qual.collect_mq_info.m"
            MR_Box parse_tree__module_qual__collect_mq_info__conv1_Permissions_19;
#line 116 "module_qual.collect_mq_info.m"
            MR_Box parse_tree__module_qual__collect_mq_info__conv8_ImportedModules_26;
#line 116 "module_qual.collect_mq_info.m"
            MR_Box parse_tree__module_qual__collect_mq_info__conv7_UnusedIntModules_27;

#line 99 "module_qual.collect_mq_info.m"
            {
#line 99 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__func_0(((MR_Box) parse_tree__module_qual__collect_mq_info__SectionInfo_1), parse_tree__module_qual__collect_mq_info__Section_13, &parse_tree__module_qual__collect_mq_info__conv2_MQSection_18, &parse_tree__module_qual__collect_mq_info__conv1_Permissions_19);
            }
#line 99 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__MQSection_18 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv2_MQSection_18);
#line 99 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__Permissions_19 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv1_Permissions_19);
#line 104 "module_qual.collect_mq_info.m"
            if ((parse_tree__module_qual__collect_mq_info__Incls_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 103 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_31_31 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3;
#line 104 "module_qual.collect_mq_info.m"
            else
#line 105 "module_qual.collect_mq_info.m"
              {
#line 105 "module_qual.collect_mq_info.m"
                MR_Word parse_tree__module_qual__collect_mq_info__Modules0_22;
#line 105 "module_qual.collect_mq_info.m"
                MR_Word parse_tree__module_qual__collect_mq_info__Modules_23;
#line 105 "module_qual.collect_mq_info.m"
                MR_Word parse_tree__module_qual__collect_mq_info__V_30_30;
#line 107 "module_qual.collect_mq_info.m"
                MR_Box parse_tree__module_qual__collect_mq_info__conv4_Modules_23;

#line 106 "module_qual.collect_mq_info.m"
                {
#line 106 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__mq_info_get_modules_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3, &parse_tree__module_qual__collect_mq_info__Modules0_22);
                }
#line 107 "module_qual.collect_mq_info.m"
                {
#line 107 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__collect_mq_info__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 107 "module_qual.collect_mq_info.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_30_30, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_4[0]));
#line 107 "module_qual.collect_mq_info.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_30_30, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_1));
#line 107 "module_qual.collect_mq_info.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "module_qual.collect_mq_info.m"
                  MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_30_30, 3) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Permissions_19));
#line 107 "module_qual.collect_mq_info.m"
                }
#line 107 "module_qual.collect_mq_info.m"
                {
#line 107 "module_qual.collect_mq_info.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[2], parse_tree__module_qual__collect_mq_info__V_30_30, parse_tree__module_qual__collect_mq_info__Incls_15, ((MR_Box) (parse_tree__module_qual__collect_mq_info__Modules0_22)), &parse_tree__module_qual__collect_mq_info__conv4_Modules_23);
                }
#line 107 "module_qual.collect_mq_info.m"
                parse_tree__module_qual__collect_mq_info__Modules_23 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv4_Modules_23);
#line 109 "module_qual.collect_mq_info.m"
                {
#line 109 "module_qual.collect_mq_info.m"
                  parse_tree__module_qual__mq_info_set_modules_3_p_0(parse_tree__module_qual__collect_mq_info__Modules_23, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_31_31);
                }
#line 105 "module_qual.collect_mq_info.m"
              }
#line 114 "module_qual.collect_mq_info.m"
            {
#line 114 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__mq_info_get_imported_modules_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_31_31, &parse_tree__module_qual__collect_mq_info__ImportedModules0_24);
            }
#line 115 "module_qual.collect_mq_info.m"
            {
#line 115 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__mq_info_get_as_yet_unused_interface_modules_2_p_0(parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_31_31, &parse_tree__module_qual__collect_mq_info__UnusedIntModules0_25);
            }
#line 116 "module_qual.collect_mq_info.m"
            {
#line 116 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 116 "module_qual.collect_mq_info.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_32_32, 0) = ((MR_Box) (&parse_tree__module_qual__collect_mq_info_scalar_common_5[0]));
#line 116 "module_qual.collect_mq_info.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_32_32, 1) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__collect_mq_info_in_item_blocks_4_p_0_2));
#line 116 "module_qual.collect_mq_info.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 116 "module_qual.collect_mq_info.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_32_32, 3) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__MQSection_18));
#line 116 "module_qual.collect_mq_info.m"
              MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__V_32_32, 4) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Permissions_19));
#line 116 "module_qual.collect_mq_info.m"
            }
#line 116 "module_qual.collect_mq_info.m"
            {
#line 116 "module_qual.collect_mq_info.m"
              mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[0], (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_1[3], parse_tree__module_qual__collect_mq_info__V_32_32, parse_tree__module_qual__collect_mq_info__Avails_16, ((MR_Box) (parse_tree__module_qual__collect_mq_info__ImportedModules0_24)), &parse_tree__module_qual__collect_mq_info__conv8_ImportedModules_26, ((MR_Box) (parse_tree__module_qual__collect_mq_info__UnusedIntModules0_25)), &parse_tree__module_qual__collect_mq_info__conv7_UnusedIntModules_27);
            }
#line 116 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__ImportedModules_26 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv8_ImportedModules_26);
#line 116 "module_qual.collect_mq_info.m"
            parse_tree__module_qual__collect_mq_info__UnusedIntModules_27 = ((MR_Word) parse_tree__module_qual__collect_mq_info__conv7_UnusedIntModules_27);
#line 119 "module_qual.collect_mq_info.m"
            {
#line 119 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__mq_info_set_imported_modules_3_p_0(parse_tree__module_qual__collect_mq_info__ImportedModules_26, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_31_31, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_33_33);
            }
#line 120 "module_qual.collect_mq_info.m"
            {
#line 120 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__mq_info_set_as_yet_unused_interface_modules_3_p_0(parse_tree__module_qual__collect_mq_info__UnusedIntModules_27, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_33_33, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_34_34);
            }
#line 122 "module_qual.collect_mq_info.m"
            {
#line 122 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__collect_mq_info_in_items_5_p_0(parse_tree__module_qual__collect_mq_info__MQSection_18, parse_tree__module_qual__collect_mq_info__Permissions_19, parse_tree__module_qual__collect_mq_info__Items_17, parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_34_34, &parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_35_35);
            }
#line 123 "module_qual.collect_mq_info.m"
            /* direct tailcall eliminated */
#line 123 "module_qual.collect_mq_info.m"
            {
#line 123 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__HeadVar__2__tmp_copy_2 = parse_tree__module_qual__collect_mq_info__ItemBlocks_11;
#line 123 "module_qual.collect_mq_info.m"
              MR_Word parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0__tmp_copy_3 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_35_35;

#line 123 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0_3 = parse_tree__module_qual__collect_mq_info__STATE_VARIABLE_Info_0__tmp_copy_3;
#line 123 "module_qual.collect_mq_info.m"
              parse_tree__module_qual__collect_mq_info__HeadVar__2_2 = parse_tree__module_qual__collect_mq_info__HeadVar__2__tmp_copy_2;
#line 123 "module_qual.collect_mq_info.m"
            }
#line 123 "module_qual.collect_mq_info.m"
            continue;
#line 97 "module_qual.collect_mq_info.m"
          }
#line 96 "module_qual.collect_mq_info.m"
      }
#line 96 "module_qual.collect_mq_info.m"
      break;
#line 96 "module_qual.collect_mq_info.m"
    }
#line 40 "module_qual.collect_mq_info.m"
}

#line 34 "module_qual.collect_mq_info.m"
void MR_CALL 
parse_tree__module_qual__collect_mq_info__int_section_mq_info_3_p_0(
#line 34 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__IntSection_4,
#line 34 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__MQSection_5,
#line 34 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__Permissions_6)
#line 34 "module_qual.collect_mq_info.m"
{
#line 74 "module_qual.collect_mq_info.m"
  {
#line 74 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 74 "module_qual.collect_mq_info.m"
#line 74 "module_qual.collect_mq_info.m"
    switch (MR_tag((MR_Word) parse_tree__module_qual__collect_mq_info__IntSection_4)) {
#line 74 "module_qual.collect_mq_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 74 "module_qual.collect_mq_info.m"
      case (MR_Integer) 0:
#line 74 "module_qual.collect_mq_info.m"
        {
#line 74 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__Locn_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 74 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__MayUseInInterface_11 = ((&parse_tree__module_qual__collect_mq_info_vector_common_3[0 + parse_tree__module_qual__collect_mq_info__Locn_9]))->parse_tree__module_qual__collect_mq_info__vector_common_type_3_0__vct_3_f_0;
#line 69 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info___ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 0)));
#line 69 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info___IntFileKind_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 1)))) & (MR_Integer) 3);

#line 85 "module_qual.collect_mq_info.m"
          {
#line 85 "module_qual.collect_mq_info.m"
            MR_Word base;
#line 85 "module_qual.collect_mq_info.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 85 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__MQSection_5 = base;
#line 85 "module_qual.collect_mq_info.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Locn_9));
#line 85 "module_qual.collect_mq_info.m"
          }
#line 86 "module_qual.collect_mq_info.m"
          {
#line 86 "module_qual.collect_mq_info.m"
            MR_Word base;
#line 86 "module_qual.collect_mq_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 86 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__Permissions_6 = base;
#line 86 "module_qual.collect_mq_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__MayUseInInterface_11));
#line 86 "module_qual.collect_mq_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 86 "module_qual.collect_mq_info.m"
          }
#line 74 "module_qual.collect_mq_info.m"
        }
#line 74 "module_qual.collect_mq_info.m"
        break;
#line 74 "module_qual.collect_mq_info.m"
      case (MR_Integer) 1:
#line 74 "module_qual.collect_mq_info.m"
        {
#line 74 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__Locn_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 1)))) >> (MR_Integer) 2)) & (MR_Integer) 3);
#line 74 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info__MayUseInInterface_24 = ((&parse_tree__module_qual__collect_mq_info_vector_common_3[4 + parse_tree__module_qual__collect_mq_info__Locn_22]))->parse_tree__module_qual__collect_mq_info__vector_common_type_3_0__vct_3_f_0;
#line 72 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info___ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 0)));
#line 72 "module_qual.collect_mq_info.m"
          MR_Word parse_tree__module_qual__collect_mq_info___IntFileKind_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__module_qual__collect_mq_info__IntSection_4, (MR_Integer) 1)))) & (MR_Integer) 3);

#line 85 "module_qual.collect_mq_info.m"
          {
#line 85 "module_qual.collect_mq_info.m"
            MR_Word base;
#line 85 "module_qual.collect_mq_info.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 85 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__MQSection_5 = base;
#line 85 "module_qual.collect_mq_info.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__Locn_22));
#line 85 "module_qual.collect_mq_info.m"
          }
#line 86 "module_qual.collect_mq_info.m"
          {
#line 86 "module_qual.collect_mq_info.m"
            MR_Word base;
#line 86 "module_qual.collect_mq_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 86 "module_qual.collect_mq_info.m"
            *parse_tree__module_qual__collect_mq_info__Permissions_6 = base;
#line 86 "module_qual.collect_mq_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__module_qual__collect_mq_info__MayUseInInterface_24));
#line 86 "module_qual.collect_mq_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 86 "module_qual.collect_mq_info.m"
          }
#line 74 "module_qual.collect_mq_info.m"
        }
#line 74 "module_qual.collect_mq_info.m"
        break;
#line 74 "module_qual.collect_mq_info.m"
      case (MR_Integer) 2:
#line 88 "module_qual.collect_mq_info.m"
        {
#line 89 "module_qual.collect_mq_info.m"
          *parse_tree__module_qual__collect_mq_info__MQSection_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 91 "module_qual.collect_mq_info.m"
          *parse_tree__module_qual__collect_mq_info__Permissions_6 = (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[8];
#line 88 "module_qual.collect_mq_info.m"
        }
#line 74 "module_qual.collect_mq_info.m"
        break;
#line 74 "module_qual.collect_mq_info.m"
    }
#line 74 "module_qual.collect_mq_info.m"
  }
#line 34 "module_qual.collect_mq_info.m"
}

#line 31 "module_qual.collect_mq_info.m"
void MR_CALL 
parse_tree__module_qual__collect_mq_info__src_section_mq_info_3_p_0(
#line 31 "module_qual.collect_mq_info.m"
  MR_Word parse_tree__module_qual__collect_mq_info__SrcSection_4,
#line 31 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__MQSection_5,
#line 31 "module_qual.collect_mq_info.m"
  MR_Word * parse_tree__module_qual__collect_mq_info__Permissions_6)
#line 31 "module_qual.collect_mq_info.m"
{
#line 53 "module_qual.collect_mq_info.m"
  {
#line 53 "module_qual.collect_mq_info.m"
    MR_bool parse_tree__module_qual__collect_mq_info__succeeded;

#line 53 "module_qual.collect_mq_info.m"
#line 53 "module_qual.collect_mq_info.m"
    switch (parse_tree__module_qual__collect_mq_info__SrcSection_4) {
#line 53 "module_qual.collect_mq_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 53 "module_qual.collect_mq_info.m"
      case (MR_Integer) 2:
#line 53 "module_qual.collect_mq_info.m"
      case (MR_Integer) 1:
#line 60 "module_qual.collect_mq_info.m"
        {
#line 61 "module_qual.collect_mq_info.m"
          *parse_tree__module_qual__collect_mq_info__MQSection_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 63 "module_qual.collect_mq_info.m"
          *parse_tree__module_qual__collect_mq_info__Permissions_6 = (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[6];
#line 60 "module_qual.collect_mq_info.m"
        }
#line 53 "module_qual.collect_mq_info.m"
        break;
#line 53 "module_qual.collect_mq_info.m"
      case (MR_Integer) 0:
#line 53 "module_qual.collect_mq_info.m"
        {
#line 54 "module_qual.collect_mq_info.m"
          *parse_tree__module_qual__collect_mq_info__MQSection_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 56 "module_qual.collect_mq_info.m"
          *parse_tree__module_qual__collect_mq_info__Permissions_6 = (MR_Word) &parse_tree__module_qual__collect_mq_info_scalar_common_2[7];
#line 53 "module_qual.collect_mq_info.m"
        }
#line 53 "module_qual.collect_mq_info.m"
        break;
#line 53 "module_qual.collect_mq_info.m"
    }
#line 53 "module_qual.collect_mq_info.m"
  }
#line 31 "module_qual.collect_mq_info.m"
}

void mercury__parse_tree__module_qual__collect_mq_info__init(void)
{
}

void mercury__parse_tree__module_qual__collect_mq_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_mq_section_0);
	MR_register_type_ctor_info(&parse_tree__module_qual__collect_mq_info__parse_tree__module_qual__collect_mq_info__type_ctor_info_section_mq_info_1);
}

void mercury__parse_tree__module_qual__collect_mq_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.module_qual.collect_mq_info. */
