/*
** Automatically generated from `declarative_tree.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module mdb.declarative_tree. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_tree__init
ENDINIT
*/

#include "mdb.declarative_tree.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_user.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"



#line 1906 "declarative_tree.m"
struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s {
#line 1909 "declarative_tree.m"
  MR_bool mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
#line 1909 "declarative_tree.m"
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6;
#line 1914 "declarative_tree.m"
  jmp_buf mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0;
#line 1914 "declarative_tree.m"
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7;
#line 1915 "declarative_tree.m"
  MR_Box mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7;
#line 1906 "declarative_tree.m"
};

#line 452 "declarative_tree.m"
struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s {
#line 452 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2;
#line 454 "declarative_tree.m"
  MR_bool mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
#line 454 "declarative_tree.m"
  jmp_buf mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0;
#line 454 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4;
#line 454 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5;
#line 454 "declarative_tree.m"
  MR_String mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_16_16;
#line 454 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18;
#line 454 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19;
#line 452 "declarative_tree.m"
};


#line 125 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2;

#line 128 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2;

#line 131 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0;

#line 134 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1;

#line 137 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0[6];

#line 140 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0;

#line 143 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0[1];

#line 146 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1[1];

#line 149 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1[1];

#line 152 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1[1];

#line 155 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0;

#line 158 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1;

#line 161 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0[2];

#line 164 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0[2];

#line 167 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0[2];

#line 170 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1;

#line 173 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 176 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0;

#line 179 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0;

#line 182 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0[6];

#line 185 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0;

#line 188 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1;

#line 191 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0[1];

#line 194 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1[1];

#line 197 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_dependency_chain_start_1[2];

#line 200 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1[2];

#line 203 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1[2];

#line 206 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1[1];

#line 209 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1;

#line 212 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0;

#line 215 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0[2];

#line 218 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0;

#line 221 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0[1];

#line 224 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0[1];

#line 227 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0[1];

#line 230 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0[1];

#line 233 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0;

#line 236 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0[4];

#line 239 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0[4];

#line 242 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0;

#line 245 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0[1];

#line 248 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0[1];

#line 251 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0[1];

#line 254 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0[1];

#line 257 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1;

#line 260 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1;

#line 263 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0[3];

#line 266 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0[3];

#line 269 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0;

#line 272 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0[1];

#line 275 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1[1];

#line 278 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1[1];

#line 281 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1[1];

#line 284 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0;

#line 287 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1;

#line 290 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1[2];

#line 293 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1;

#line 296 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0[1];

#line 299 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1[1];

#line 302 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_start_loc_1[2];

#line 305 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1[2];

#line 308 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1[2];

#line 311 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1[1];

#line 314 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1;

#line 317 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0_10001(
#line 320 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 322 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 324 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 327 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0_10001(
#line 330 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 332 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 334 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 336 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 339 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0_10001(
#line 342 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 344 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 347 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0_10001(
#line 350 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 352 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 354 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 357 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001(
#line 360 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 362 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 364 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 367 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001(
#line 370 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 372 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 374 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 376 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 379 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0_10001(
#line 382 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 384 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 386 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 389 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0_10001(
#line 392 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 394 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 396 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 398 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 401 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0_10001(
#line 404 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 406 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 409 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0_10001(
#line 412 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 414 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 416 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 419 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001(
#line 422 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 424 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 427 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001(
#line 430 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 432 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 434 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 437 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0_10001(
#line 440 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 442 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 445 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0_10001(
#line 448 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 450 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 452 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 455 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001(
#line 458 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 460 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 462 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 465 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001(
#line 468 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 470 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 472 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 474 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 477 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0_10001(
#line 480 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 482 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 484 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 487 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0_10001(
#line 490 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 492 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 494 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 496 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 499 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0_10001(
#line 502 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 504 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 506 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 509 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0_10001(
#line 512 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 514 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 516 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 518 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 521 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001(
#line 524 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 526 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 528 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 530 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3);

#line 533 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001(
#line 536 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 538 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 540 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 542 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3);

#line 545 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001(
#line 548 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 550 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 552 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 554 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 556 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4);

#line 559 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001(
#line 562 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 564 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 566 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 568 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3);

#line 571 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001(
#line 574 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 576 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 578 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 580 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3);

#line 583 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001(
#line 586 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 588 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 590 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 592 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 594 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 596 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5,
#line 598 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_6);

#line 601 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001(
#line 604 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 606 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 608 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 610 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 612 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 614 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5);

#line 617 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001(
#line 620 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 622 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 624 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 627 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001(
#line 630 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 632 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 634 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 636 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 639 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001(
#line 642 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 644 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 646 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 649 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001(
#line 652 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 654 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 656 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 658 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 660 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4);

#line 663 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001(
#line 666 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 668 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 670 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 672 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 674 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4);

#line 677 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001(
#line 680 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 682 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 684 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 686 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 688 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4);

#line 691 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001(
#line 694 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 696 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 698 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 701 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001(
#line 704 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 706 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 708 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 710 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 1922 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
#line 1922 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_9_9,
#line 1922 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_10_10,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 1922 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 1922 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1922 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 1922 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1922 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1922 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 87 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 87 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5);

#line 1759 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_12,
#line 1759 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_13,
#line 1759 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_14,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_15,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeNodeId_16,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Prims_17,
#line 1759 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_18,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_19,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_21,
#line 1759 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_22);

#line 1571 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
#line 1571 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1571 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 1566 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
#line 1566 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1566 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1566 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath0_3,
#line 1566 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_5,
#line 1566 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_6);

#line 1369 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
#line 1369 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1369 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__2_2);

#line 954 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
#line 954 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49,
#line 954 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 954 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_7,
#line 954 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_8,
#line 954 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10);

#line 1663 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1663__1_2_p_0(
#line 1663 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1663 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_43);

#line 1675 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1675__1_2_p_0(
#line 1675 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1675 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_114);

#line 1195 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1195__1_3_p_0(
#line 1195 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1195 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AdjustedContour_21,
#line 1195 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_29);

#line 278 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
#line 278 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_127,
#line 278 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 278 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 95 "declarative_tree.m"
static MR_Integer MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 94 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 93 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 93 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3,
#line 93 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 92 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 92 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__3_3,
#line 92 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__4_4);

#line 91 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 91 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__3_3,
#line 91 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__4_4);

#line 90 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 89 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 88 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 87 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 87 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5);

#line 908 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
#line 908 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 908 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 86 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__6_6);

#line 85 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 85 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 84 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 84 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 83 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 83 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 82 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 82 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 81 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 81 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 778 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_15,
#line 778 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 778 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1120 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_14,
#line 1120 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 1120 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1751 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
#line 1751 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1751 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1751 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 1751 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
#line 1751 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1751 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 785 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
#line 785 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 785 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 785 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 785 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
#line 785 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 785 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 782 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
#line 782 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 782 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
#line 782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 748 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_35,
#line 748 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 748 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_19,
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 494 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
#line 494 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 494 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_1,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 787 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_23,
#line 787 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 787 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_17,
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1914 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
#line 1914 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1915 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
#line 1915 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1914 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
#line 1914 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1914 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
#line 1914 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1906 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
#line 1906 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21,
#line 1906 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 1906 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_4);

#line 1852 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
#line 1852 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32,
#line 1852 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1852 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 1852 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Node_6);

#line 1819 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
#line 1819 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1819 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_2,
#line 1819 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Pos_3,
#line 1819 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ArgPos_4);

#line 1814 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
#line 1814 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_4,
#line 1814 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_5);

#line 1792 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
#line 1792 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__TracingOn_1);

#line 1781 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
#line 1781 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1781 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ParentPath_2,
#line 1781 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__N_3,
#line 1781 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 1739 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
#line 1739 "declarative_tree.m"
  MR_String mdb__declarative_tree__Module_5,
#line 1739 "declarative_tree.m"
  MR_String mdb__declarative_tree__Name_6,
#line 1739 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_7,
#line 1739 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__NewVar_8);

#line 1554 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
#line 1554 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_5,
#line 1554 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_6,
#line 1554 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_7,
#line 1554 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Var_8);

#line 1542 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
#line 1542 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalId_3,
#line 1542 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_4);

#line 1400 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145,
#line 1400 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_17,
#line 1400 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_18,
#line 1400 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_19,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_20,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoal_21,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalArgs_22,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_23,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_24,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_25,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_26,
#line 1400 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_27,
#line 1400 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_28,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_29,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_30,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_31);

#line 1229 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177,
#line 1229 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_13,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Goal_14,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_15,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_16,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_17,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_18,
#line 1229 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_19,
#line 1229 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_20,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_21,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_22,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_23);

#line 1150 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1150 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_11,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_12,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_13,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_14,
#line 1150 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_15,
#line 1150 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_16,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_17,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_18,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_19);

#line 1113 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 1113 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1113 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__FinalAtom_7);

#line 1111 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
#line 1111 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1111 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 1111 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__wrapper_arg_2);

#line 1103 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
#line 1103 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 1103 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1103 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_5,
#line 1103 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ExitAtoms_6);

#line 1073 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
#line 1073 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34,
#line 1073 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1073 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 1073 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Node_8,
#line 1073 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Nodes0_9,
#line 1073 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Nodes_10);

#line 1050 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
#line 1050 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25,
#line 1050 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1050 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_5,
#line 1050 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ParentCallNode_6);

#line 1019 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
#line 1019 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_25,
#line 1019 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_5,
#line 1019 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_6,
#line 1019 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_7,
#line 1019 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_8);

#line 1001 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
#line 1001 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42,
#line 1001 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1001 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_7,
#line 1001 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_8,
#line 1001 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_9,
#line 1001 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10);

#line 948 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
#line 948 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 948 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 849 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
#line 849 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43,
#line 849 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_9,
#line 849 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_10,
#line 849 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_11,
#line 849 "declarative_tree.m"
  MR_Word mdb__declarative_tree__StartLoc_12,
#line 849 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_13,
#line 849 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_14,
#line 849 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_15,
#line 849 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_16);

#line 644 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
#line 644 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84,
#line 644 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 644 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 644 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 644 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 644 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10);

#line 634 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
#line 634 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11,
#line 634 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 634 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 634 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 634 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 634 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10);

#line 512 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
#line 512 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115,
#line 512 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 512 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 512 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 512 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 512 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 512 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12);

#line 501 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
#line 501 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13,
#line 501 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 501 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 501 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 501 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 501 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 501 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12);

#line 473 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
#line 473 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 473 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 473 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_4);

#line 454 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
#line 454 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 454 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
#line 454 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 454 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
#line 454 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 454 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
#line 454 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 452 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
#line 452 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_2);

#line 345 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90,
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Weighting_10,
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 345 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevWeight_13,
#line 345 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Weight_14,
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__RecordDups_15,
#line 345 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__DupFactor_16,
#line 345 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevDupWeight_17,
#line 345 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Excess_18);

#line 176 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_answers_4_p_0(
#line 176 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26,
#line 176 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_5,
#line 176 "declarative_tree.m"
  MR_Box mdb__declarative_tree__RedoId_6,
#line 176 "declarative_tree.m"
  MR_Word mdb__declarative_tree__DeclAtoms0_7,
#line 176 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__DeclAtoms_8);

#line 124 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(
#line 124 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29,
#line 124 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 124 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 124 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Atom_6);


static /* final */ const MR_Box mdb__declarative_tree_scalar_common_1[34][2];

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_2[3][1];

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_3[1][5];

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_4[4][3];

static /* final */ const MR_Integer mdb__declarative_tree_scalar_common_5[1][3];

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_6[1][7];




static /* final */ const MR_Box mdb__declarative_tree_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_defn_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_tree_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.get_edt_call_node\'/3")),
    ((MR_Box) ((MR_String) "not a return node"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.trace_weight\'/9")),
    ((MR_Box) ((MR_String) "not a final event"))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdb__declarative_tree_scalar_common_2[1])),
    ((MR_Box) ((MR_String) "solutions"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.contour_children_2\'/6")),
    ((MR_Box) ((MR_String) "unexpected start of contour"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.stratum_children_2\'/5")),
    ((MR_Box) ((MR_String) "unexpected start of contour"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "make_primitive_list")),
    ((MR_Box) ((MR_String) "nonempty contour at end"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on disj"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on switch"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on if-then-else"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on negation"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "argument number mismatch"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "name mismatch on call"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "goalpath mismatch on call"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "premature contour end"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "atomic goal doesn\'t match exit event\n"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_atomic_goal_to_contour_event\'/15")),
    ((MR_Box) ((MR_String) "atomic goal with no exit event when assuming all traced"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_variable_in_args\'/4")),
    ((MR_Box) ((MR_String) "arg not found"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_arg_pos_from_back\'/4")),
    ((MR_Box) ((MR_String) "empty list"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.det_edt_return_node_from_id\'/3")),
    ((MR_Box) ((MR_String) "not a return node"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_chain_start\'/5")),
    ((MR_Box) ((MR_String) "unbound wrong answer term"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_chain_start\'/5")),
    ((MR_Box) ((MR_String) "unbound exception term"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_chain_start\'/5")),
    ((MR_Box) ((MR_String) "unbound missing answer term"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "bad deconstruct"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "bad event"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "input argument not found"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "bad test"))
  },
};

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "solutions"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "library"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__declarative_tree_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_tree__trace_dependency_special_case_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "exception.m")),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_tree_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_tree_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer mdb__declarative_tree_scalar_common_5[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_tree_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_tree_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0))
  },
};



#include "mdb.declarative_tree.mh"
#include "mdb.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"



#line 2000 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2008 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2
  }
};

#line 2017 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2025 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2033 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1
};

#line 2043 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0 = {
  (MR_String) "primitive",
  (MR_Integer) 6,
  (MR_Integer) 32,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0,
  NULL,
  NULL,
  NULL
};

#line 2058 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0
};

#line 2063 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0
  }
};

#line 2072 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0
};

#line 2077 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1[1] = {
  (MR_Integer) 0
};

#line 2082 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____annotated_primitive_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____annotated_primitive_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "annotated_primitive",
  {
    mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1
  },
  {
    mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1
};

#line 2103 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0 = {
  (MR_String) "normal",
  (MR_Integer) 0
};

#line 2109 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1 = {
  (MR_String) "exception",
  (MR_Integer) 1
};

#line 2115 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0,
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1
};

#line 2121 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1,
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0
};

#line 2127 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2133 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_contour_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_tree____Unify____contour_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____contour_type_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "contour_type",
  {
    mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0
  },
  {
    mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0
};

#line 2154 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2162 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 2170 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_defn_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2178 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0
  }
};

#line 2186 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0
};

#line 2196 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0 = {
  (MR_String) "chain_start",
  (MR_Integer) 6,
  (MR_Integer) 9,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0,
  NULL,
  NULL,
  NULL
};

#line 2211 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1 = {
  (MR_String) "require_explicit_subtree",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2226 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1
};

#line 2231 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0
};

#line 2236 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_dependency_chain_start_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1
  }
};

#line 2250 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0,
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1
};

#line 2256 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2262 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_dependency_chain_start_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "dependency_chain_start",
  {
    mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1
  },
  {
    mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_dependency_chain_start_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1
};

#line 2283 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1[1] = {
  (MR_Integer) 0
};

#line 2288 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1 = {
  (MR_String) "dynamic",
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  NULL
};

#line 2295 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdb__declarative_tree____Unify____edt_node_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____edt_node_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "edt_node",
  {
    &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1
  },
  {
    &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1
};

#line 2316 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2324 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 2330 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0 = {
  (MR_String) "goal_and_path",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0,
  NULL,
  NULL,
  NULL
};

#line 2345 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0
};

#line 2350 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0
  }
};

#line 2359 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0
};

#line 2364 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0[1] = {
  (MR_Integer) 0
};

#line 2369 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____goal_and_path_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____goal_and_path_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "goal_and_path",
  {
    mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0
  },
  {
    mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0
};

#line 2390 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0
  }
};

#line 2398 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "goal_and_path_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2419 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2427 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0[4] = {
  (MR_String) "file_name",
  (MR_String) "line_number",
  (MR_String) "flat_module_name",
  (MR_String) "pred_name"
};

#line 2435 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0 = {
  (MR_String) "plain_call_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0,
  mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0,
  NULL,
  NULL
};

#line 2450 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0
};

#line 2455 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0
  }
};

#line 2464 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0
};

#line 2469 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0[1] = {
  (MR_Integer) 0
};

#line 2474 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_plain_call_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____plain_call_info_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____plain_call_info_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "plain_call_info",
  {
    mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0
  },
  {
    mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0
};

#line 2495 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2503 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1
  }
};

#line 2511 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2518 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0[3] = {
  (MR_String) "primitives",
  (MR_String) "var",
  (MR_String) "closure"
};

#line 2525 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0 = {
  (MR_String) "primitive_list_and_var",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0,
  mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0,
  NULL,
  NULL
};

#line 2540 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0
};

#line 2545 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0
  }
};

#line 2554 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0
};

#line 2559 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1[1] = {
  (MR_Integer) 0
};

#line 2564 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_primitive_list_and_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "primitive_list_and_var",
  {
    mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1
  },
  {
    mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1
};

#line 2585 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0 = {
  (MR_String) "cur_goal",
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

#line 2600 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2608 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1
};

#line 2614 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1 = {
  (MR_String) "parent_goal",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1,
  NULL,
  NULL,
  NULL
};

#line 2629 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0
};

#line 2634 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1
};

#line 2639 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_start_loc_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1
  }
};

#line 2653 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0,
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1
};

#line 2659 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2665 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____start_loc_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____start_loc_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "start_loc",
  {
    mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1
  },
  {
    mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_start_loc_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1
};

#line 2686 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1[1] = {
  (MR_Integer) 0
};

#line 2691 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1 = {
  (MR_String) "wrap",
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  NULL
};

#line 2698 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdb__declarative_tree____Unify____wrap_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____wrap_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "wrap",
  {
    &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1
  },
  {
    &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1
};

#line 2719 "mdb.declarative_tree.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__[20] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 15)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001)),
  ((MR_Box) (mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001))
};

#line 2743 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0_10001(
#line 2746 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2748 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2750 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2752 "mdb.declarative_tree.c"
{
#line 2754 "mdb.declarative_tree.c"
  {
#line 2756 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2759 "mdb.declarative_tree.c"
    {
#line 2761 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____annotated_primitive_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2764 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2766 "mdb.declarative_tree.c"
  }
#line 2768 "mdb.declarative_tree.c"
}

#line 2771 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0_10001(
#line 2774 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2776 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2778 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2780 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2782 "mdb.declarative_tree.c"
{
#line 2784 "mdb.declarative_tree.c"
  {
#line 2786 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2789 "mdb.declarative_tree.c"
    {
#line 2791 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____annotated_primitive_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2794 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2796 "mdb.declarative_tree.c"
  }
#line 2798 "mdb.declarative_tree.c"
}

#line 2801 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0_10001(
#line 2804 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2806 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 2808 "mdb.declarative_tree.c"
{
#line 2810 "mdb.declarative_tree.c"
  {
#line 2812 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2815 "mdb.declarative_tree.c"
    {
#line 2817 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____contour_type_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 2820 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2822 "mdb.declarative_tree.c"
  }
#line 2824 "mdb.declarative_tree.c"
}

#line 2827 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0_10001(
#line 2830 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 2832 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2834 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2836 "mdb.declarative_tree.c"
{
#line 2838 "mdb.declarative_tree.c"
  {
#line 2840 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2843 "mdb.declarative_tree.c"
    {
#line 2845 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____contour_type_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2848 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2850 "mdb.declarative_tree.c"
  }
#line 2852 "mdb.declarative_tree.c"
}

#line 2855 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001(
#line 2858 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2860 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2862 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2864 "mdb.declarative_tree.c"
{
#line 2866 "mdb.declarative_tree.c"
  {
#line 2868 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2871 "mdb.declarative_tree.c"
    {
#line 2873 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____dependency_chain_start_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2876 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2878 "mdb.declarative_tree.c"
  }
#line 2880 "mdb.declarative_tree.c"
}

#line 2883 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001(
#line 2886 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2888 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2890 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2892 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2894 "mdb.declarative_tree.c"
{
#line 2896 "mdb.declarative_tree.c"
  {
#line 2898 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2901 "mdb.declarative_tree.c"
    {
#line 2903 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____dependency_chain_start_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2906 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2908 "mdb.declarative_tree.c"
  }
#line 2910 "mdb.declarative_tree.c"
}

#line 2913 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0_10001(
#line 2916 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2918 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2920 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2922 "mdb.declarative_tree.c"
{
#line 2924 "mdb.declarative_tree.c"
  {
#line 2926 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2929 "mdb.declarative_tree.c"
    {
#line 2931 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____edt_node_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2934 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2936 "mdb.declarative_tree.c"
  }
#line 2938 "mdb.declarative_tree.c"
}

#line 2941 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0_10001(
#line 2944 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2946 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2948 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2950 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2952 "mdb.declarative_tree.c"
{
#line 2954 "mdb.declarative_tree.c"
  {
#line 2956 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2959 "mdb.declarative_tree.c"
    {
#line 2961 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____edt_node_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2964 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2966 "mdb.declarative_tree.c"
  }
#line 2968 "mdb.declarative_tree.c"
}

#line 2971 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0_10001(
#line 2974 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2976 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 2978 "mdb.declarative_tree.c"
{
#line 2980 "mdb.declarative_tree.c"
  {
#line 2982 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2985 "mdb.declarative_tree.c"
    {
#line 2987 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____goal_and_path_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 2990 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2992 "mdb.declarative_tree.c"
  }
#line 2994 "mdb.declarative_tree.c"
}

#line 2997 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0_10001(
#line 3000 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 3002 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3004 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3006 "mdb.declarative_tree.c"
{
#line 3008 "mdb.declarative_tree.c"
  {
#line 3010 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3013 "mdb.declarative_tree.c"
    {
#line 3015 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____goal_and_path_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3018 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3020 "mdb.declarative_tree.c"
  }
#line 3022 "mdb.declarative_tree.c"
}

#line 3025 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001(
#line 3028 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3030 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3032 "mdb.declarative_tree.c"
{
#line 3034 "mdb.declarative_tree.c"
  {
#line 3036 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3039 "mdb.declarative_tree.c"
    {
#line 3041 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____goal_and_path_list_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3044 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3046 "mdb.declarative_tree.c"
  }
#line 3048 "mdb.declarative_tree.c"
}

#line 3051 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001(
#line 3054 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 3056 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3058 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3060 "mdb.declarative_tree.c"
{
#line 3062 "mdb.declarative_tree.c"
  {
#line 3064 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3067 "mdb.declarative_tree.c"
    {
#line 3069 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____goal_and_path_list_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3072 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3074 "mdb.declarative_tree.c"
  }
#line 3076 "mdb.declarative_tree.c"
}

#line 3079 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0_10001(
#line 3082 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3084 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3086 "mdb.declarative_tree.c"
{
#line 3088 "mdb.declarative_tree.c"
  {
#line 3090 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3093 "mdb.declarative_tree.c"
    {
#line 3095 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____plain_call_info_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3098 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3100 "mdb.declarative_tree.c"
  }
#line 3102 "mdb.declarative_tree.c"
}

#line 3105 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0_10001(
#line 3108 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 3110 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3112 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3114 "mdb.declarative_tree.c"
{
#line 3116 "mdb.declarative_tree.c"
  {
#line 3118 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3121 "mdb.declarative_tree.c"
    {
#line 3123 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____plain_call_info_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3126 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3128 "mdb.declarative_tree.c"
  }
#line 3130 "mdb.declarative_tree.c"
}

#line 3133 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001(
#line 3136 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3138 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3140 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3142 "mdb.declarative_tree.c"
{
#line 3144 "mdb.declarative_tree.c"
  {
#line 3146 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3149 "mdb.declarative_tree.c"
    {
#line 3151 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____primitive_list_and_var_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3154 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3156 "mdb.declarative_tree.c"
  }
#line 3158 "mdb.declarative_tree.c"
}

#line 3161 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001(
#line 3164 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3166 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3168 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3170 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3172 "mdb.declarative_tree.c"
{
#line 3174 "mdb.declarative_tree.c"
  {
#line 3176 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3179 "mdb.declarative_tree.c"
    {
#line 3181 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____primitive_list_and_var_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3184 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3186 "mdb.declarative_tree.c"
  }
#line 3188 "mdb.declarative_tree.c"
}

#line 3191 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0_10001(
#line 3194 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3196 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3198 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3200 "mdb.declarative_tree.c"
{
#line 3202 "mdb.declarative_tree.c"
  {
#line 3204 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3207 "mdb.declarative_tree.c"
    {
#line 3209 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____start_loc_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3212 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3214 "mdb.declarative_tree.c"
  }
#line 3216 "mdb.declarative_tree.c"
}

#line 3219 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0_10001(
#line 3222 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3224 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3226 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3228 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3230 "mdb.declarative_tree.c"
{
#line 3232 "mdb.declarative_tree.c"
  {
#line 3234 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3237 "mdb.declarative_tree.c"
    {
#line 3239 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____start_loc_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3242 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3244 "mdb.declarative_tree.c"
  }
#line 3246 "mdb.declarative_tree.c"
}

#line 3249 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0_10001(
#line 3252 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3254 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3256 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3258 "mdb.declarative_tree.c"
{
#line 3260 "mdb.declarative_tree.c"
  {
#line 3262 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3265 "mdb.declarative_tree.c"
    {
#line 3267 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____wrap_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3270 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3272 "mdb.declarative_tree.c"
  }
#line 3274 "mdb.declarative_tree.c"
}

#line 3277 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0_10001(
#line 3280 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3282 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3284 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3286 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3288 "mdb.declarative_tree.c"
{
#line 3290 "mdb.declarative_tree.c"
  {
#line 3292 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3295 "mdb.declarative_tree.c"
    {
#line 3297 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____wrap_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3300 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3302 "mdb.declarative_tree.c"
  }
#line 3304 "mdb.declarative_tree.c"
}

#line 3307 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001(
#line 3310 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3312 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3314 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3316 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3318 "mdb.declarative_tree.c"
{
#line 3320 "mdb.declarative_tree.c"
  {
#line 3322 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3324 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3327 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3329 "mdb.declarative_tree.c"
    {
#line 3331 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3334 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3336 "mdb.declarative_tree.c"
  }
#line 3338 "mdb.declarative_tree.c"
}

#line 3341 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001(
#line 3344 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3346 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3348 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3350 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3352 "mdb.declarative_tree.c"
{
#line 3354 "mdb.declarative_tree.c"
  {
#line 3356 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3358 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3361 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3363 "mdb.declarative_tree.c"
    {
#line 3365 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3368 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3370 "mdb.declarative_tree.c"
  }
#line 3372 "mdb.declarative_tree.c"
}

#line 3375 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001(
#line 3378 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3380 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3382 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3384 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3386 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3388 "mdb.declarative_tree.c"
{
#line 3390 "mdb.declarative_tree.c"
  {
#line 3392 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3394 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3397 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3399 "mdb.declarative_tree.c"
    {
#line 3401 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3404 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3406 "mdb.declarative_tree.c"
  }
#line 3408 "mdb.declarative_tree.c"
}

#line 3411 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001(
#line 3414 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3416 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3418 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3420 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3422 "mdb.declarative_tree.c"
{
#line 3424 "mdb.declarative_tree.c"
  {
#line 3426 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3428 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3430 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3433 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3435 "mdb.declarative_tree.c"
    {
#line 3437 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3440 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3442 "mdb.declarative_tree.c"
      {
#line 3444 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3446 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3448 "mdb.declarative_tree.c"
      }
#line 3450 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3452 "mdb.declarative_tree.c"
  }
#line 3454 "mdb.declarative_tree.c"
}

#line 3457 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001(
#line 3460 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3462 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3464 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3466 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3468 "mdb.declarative_tree.c"
{
#line 3470 "mdb.declarative_tree.c"
  {
#line 3472 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3474 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3476 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3479 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3481 "mdb.declarative_tree.c"
    {
#line 3483 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3486 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3488 "mdb.declarative_tree.c"
      {
#line 3490 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3492 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3494 "mdb.declarative_tree.c"
      }
#line 3496 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3498 "mdb.declarative_tree.c"
  }
#line 3500 "mdb.declarative_tree.c"
}

#line 3503 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001(
#line 3506 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3508 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3510 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3512 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3514 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 3516 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5,
#line 3518 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_6)
#line 3520 "mdb.declarative_tree.c"
{
#line 3522 "mdb.declarative_tree.c"
  {
#line 3524 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3526 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv1_HeadVar__5_5;
#line 3528 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__6_6;

#line 3531 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3533 "mdb.declarative_tree.c"
    {
#line 3535 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4), &mdb__declarative_tree__conv1_HeadVar__5_5, &mdb__declarative_tree__conv0_HeadVar__6_6);
    }
#line 3538 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_5 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__5_5));
#line 3540 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_6 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__6_6));
#line 3542 "mdb.declarative_tree.c"
  }
#line 3544 "mdb.declarative_tree.c"
}

#line 3547 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001(
#line 3550 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3552 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3554 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3556 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3558 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 3560 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5)
#line 3562 "mdb.declarative_tree.c"
{
#line 3564 "mdb.declarative_tree.c"
  {
#line 3566 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3568 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__5_5;

#line 3571 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3573 "mdb.declarative_tree.c"
    {
#line 3575 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4), &mdb__declarative_tree__conv0_HeadVar__5_5);
    }
#line 3578 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_5 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__5_5));
#line 3580 "mdb.declarative_tree.c"
  }
#line 3582 "mdb.declarative_tree.c"
}

#line 3585 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001(
#line 3588 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3590 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3592 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3594 "mdb.declarative_tree.c"
{
#line 3596 "mdb.declarative_tree.c"
  {
#line 3598 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3600 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3603 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3605 "mdb.declarative_tree.c"
    {
#line 3607 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3610 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3612 "mdb.declarative_tree.c"
  }
#line 3614 "mdb.declarative_tree.c"
}

#line 3617 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001(
#line 3620 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3622 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3624 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3626 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3628 "mdb.declarative_tree.c"
{
#line 3630 "mdb.declarative_tree.c"
  {
#line 3632 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3634 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3637 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3639 "mdb.declarative_tree.c"
    {
#line 3641 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3644 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3646 "mdb.declarative_tree.c"
  }
#line 3648 "mdb.declarative_tree.c"
}

#line 3651 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001(
#line 3654 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3656 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3658 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3660 "mdb.declarative_tree.c"
{
#line 3662 "mdb.declarative_tree.c"
  {
#line 3664 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3666 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3669 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3671 "mdb.declarative_tree.c"
    {
#line 3673 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3676 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3678 "mdb.declarative_tree.c"
  }
#line 3680 "mdb.declarative_tree.c"
}

#line 3683 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001(
#line 3686 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3688 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3690 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3692 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3694 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3696 "mdb.declarative_tree.c"
{
#line 3698 "mdb.declarative_tree.c"
  {
#line 3700 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3702 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3704 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3707 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3709 "mdb.declarative_tree.c"
    {
#line 3711 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3714 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3716 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3718 "mdb.declarative_tree.c"
  }
#line 3720 "mdb.declarative_tree.c"
}

#line 3723 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001(
#line 3726 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3728 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3730 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3732 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3734 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3736 "mdb.declarative_tree.c"
{
#line 3738 "mdb.declarative_tree.c"
  {
#line 3740 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3742 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3744 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3747 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3749 "mdb.declarative_tree.c"
    {
#line 3751 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3754 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3756 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3758 "mdb.declarative_tree.c"
  }
#line 3760 "mdb.declarative_tree.c"
}

#line 3763 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001(
#line 3766 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3768 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3770 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3772 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3774 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3776 "mdb.declarative_tree.c"
{
#line 3778 "mdb.declarative_tree.c"
  {
#line 3780 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3782 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3784 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3786 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3789 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3791 "mdb.declarative_tree.c"
    {
#line 3793 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3796 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3798 "mdb.declarative_tree.c"
      {
#line 3800 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3802 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3804 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3806 "mdb.declarative_tree.c"
      }
#line 3808 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3810 "mdb.declarative_tree.c"
  }
#line 3812 "mdb.declarative_tree.c"
}

#line 3815 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001(
#line 3818 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3820 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3822 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3824 "mdb.declarative_tree.c"
{
#line 3826 "mdb.declarative_tree.c"
  {
#line 3828 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__wrapper_arg_3;
#line 3830 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3832 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3835 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3837 "mdb.declarative_tree.c"
    {
#line 3839 "mdb.declarative_tree.c"
      mdb__declarative_tree__conv0_HeadVar__3_3 = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3842 "mdb.declarative_tree.c"
    mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3844 "mdb.declarative_tree.c"
    return mdb__declarative_tree__wrapper_arg_3;
#line 3846 "mdb.declarative_tree.c"
  }
#line 3848 "mdb.declarative_tree.c"
}

#line 3851 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001(
#line 3854 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3856 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3858 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3860 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3862 "mdb.declarative_tree.c"
{
#line 3864 "mdb.declarative_tree.c"
  {
#line 3866 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__wrapper_arg_4;
#line 3868 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3870 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3873 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3875 "mdb.declarative_tree.c"
    {
#line 3877 "mdb.declarative_tree.c"
      mdb__declarative_tree__conv0_HeadVar__4_4 = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3880 "mdb.declarative_tree.c"
    mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3882 "mdb.declarative_tree.c"
    return mdb__declarative_tree__wrapper_arg_4;
#line 3884 "mdb.declarative_tree.c"
  }
#line 3886 "mdb.declarative_tree.c"
}

#line 1922 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
#line 1922 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_9_9,
#line 1922 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_10_10,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1922 "declarative_tree.m"
{
#line 1928 "declarative_tree.m"
  {
#line 1928 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1197 "declarative_tree.m"
    {
#line 1197 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[0], ((MR_Box) (mdb__declarative_tree__V_9_9)), ((MR_Box) (mdb__declarative_tree__V_10_10)));
    }
#line 1928 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1927 "declarative_tree.m"
      {
#line 1927 "declarative_tree.m"
      }
#line 1928 "declarative_tree.m"
    else
#line 1929 "declarative_tree.m"
      {
#line 1929 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1929 "declarative_tree.m"
        {
#line 1929 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1929 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1929 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1929 "declarative_tree.m"
        }
#line 1929 "declarative_tree.m"
        {
#line 1929 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1929 "declarative_tree.m"
          return;
        }
#line 1929 "declarative_tree.m"
      }
#line 1928 "declarative_tree.m"
  }
#line 1922 "declarative_tree.m"
}

#line 1922 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 1922 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1922 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1922 "declarative_tree.m"
{
#line 1928 "declarative_tree.m"
  {
#line 1928 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1926 "declarative_tree.m"
    {
#line 1926 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1675__1_2_p_0(mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_10_10);
    }
#line 1928 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1927 "declarative_tree.m"
      {
#line 1927 "declarative_tree.m"
      }
#line 1928 "declarative_tree.m"
    else
#line 1929 "declarative_tree.m"
      {
#line 1929 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1929 "declarative_tree.m"
        {
#line 1929 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1929 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1929 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1929 "declarative_tree.m"
        }
#line 1929 "declarative_tree.m"
        {
#line 1929 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1929 "declarative_tree.m"
          return;
        }
#line 1929 "declarative_tree.m"
      }
#line 1928 "declarative_tree.m"
  }
#line 1922 "declarative_tree.m"
}

#line 1922 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1922 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1922 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1922 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1922 "declarative_tree.m"
{
#line 1928 "declarative_tree.m"
  {
#line 1928 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1926 "declarative_tree.m"
    {
#line 1926 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1663__1_2_p_0(mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_10_10);
    }
#line 1928 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1927 "declarative_tree.m"
      {
#line 1927 "declarative_tree.m"
      }
#line 1928 "declarative_tree.m"
    else
#line 1929 "declarative_tree.m"
      {
#line 1929 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1929 "declarative_tree.m"
        {
#line 1929 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1929 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1929 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1929 "declarative_tree.m"
        }
#line 1929 "declarative_tree.m"
        {
#line 1929 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1929 "declarative_tree.m"
          return;
        }
#line 1929 "declarative_tree.m"
      }
#line 1928 "declarative_tree.m"
  }
#line 1922 "declarative_tree.m"
}

#line 87 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 87 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5)
#line 87 "declarative_tree.m"
{
#line 801 "declarative_tree.m"
  {
#line 801 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 801 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_10 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 801 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_11 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 801 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ChainStart_12;

#line 802 "declarative_tree.m"
    {
#line 802 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, mdb__declarative_tree__Store_10, mdb__declarative_tree__Ref_11, mdb__declarative_tree__HeadVar__3_3, &mdb__declarative_tree__ChainStart_12);
    }
#line 806 "declarative_tree.m"
    if ((mdb__declarative_tree__ChainStart_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 810 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 806 "declarative_tree.m"
    else
#line 804 "declarative_tree.m"
      {
#line 804 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartLoc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 0)));
#line 804 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 1)));
#line 804 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 2)));
#line 804 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 3));
#line 804 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 4)));
#line 804 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 5)));
#line 4120 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_20_20;

#line 4123 "mdb.declarative_tree.c"
        {
#line 4125 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_20_20);
        }
#line 1809 "declarative_tree.m"
        if ((mdb__declarative_tree__StartLoc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1809 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 1809 "declarative_tree.m"
        else
#line 1810 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 0;
#line 804 "declarative_tree.m"
      }
#line 801 "declarative_tree.m"
  }
#line 87 "declarative_tree.m"
}

#line 1759 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_12,
#line 1759 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_13,
#line 1759 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_14,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_15,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeNodeId_16,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Prims_17,
#line 1759 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_18,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_19,
#line 1759 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_21,
#line 1759 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_22)
#line 1759 "declarative_tree.m"
{
#line 1775 "declarative_tree.m"
  {
#line 1775 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1766 "declarative_tree.m"
    {
#line 1766 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var_18)), mdb__declarative_tree__BoundVars_12);
    }
#line 1775 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1767 "declarative_tree.m"
      {
#line 1767 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Pos_23;
#line 1767 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_32_32;

#line 1817 "declarative_tree.m"
        {
#line 1817 "declarative_tree.m"
          mdb__declarative_tree__V_32_32 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__Args_15);
        }
#line 1817 "declarative_tree.m"
        {
#line 1817 "declarative_tree.m"
          mdb__declarative_tree__find_arg_pos_from_back_4_p_0(mdb__declarative_tree__Args_15, mdb__declarative_tree__Var_18, mdb__declarative_tree__V_32_32, &mdb__declarative_tree__Pos_23);
        }
#line 1771 "declarative_tree.m"
        if ((mdb__declarative_tree__MaybeNodeId_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1772 "declarative_tree.m"
          {
#line 1773 "declarative_tree.m"
            {
#line 1773 "declarative_tree.m"
              MR_Word base;
#line 1773 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "declarative_tree.m"
              *mdb__declarative_tree__Origin_22 = base;
#line 1773 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_13));
#line 1773 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_14));
#line 1773 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 2));
#line 1773 "declarative_tree.m"
            }
#line 1772 "declarative_tree.m"
          }
#line 1771 "declarative_tree.m"
        else
#line 1769 "declarative_tree.m"
          {
#line 1769 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NodeId_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeNodeId_16, (MR_Integer) 0));
#line 1769 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_26_26 = ((MR_Word) mdb__declarative_tree__NodeId_24);

#line 1770 "declarative_tree.m"
            {
#line 1770 "declarative_tree.m"
              MR_Word base;
#line 1770 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1770 "declarative_tree.m"
              *mdb__declarative_tree__Origin_22 = base;
#line 1770 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_26_26));
#line 1770 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__Pos_23));
#line 1770 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TermPath_19));
#line 1770 "declarative_tree.m"
            }
#line 1769 "declarative_tree.m"
          }
#line 1767 "declarative_tree.m"
      }
#line 1775 "declarative_tree.m"
    else
#line 1776 "declarative_tree.m"
      {
#line 1776 "declarative_tree.m"
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var_18, mdb__declarative_tree__TermPath_19, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__Origin_22);
#line 1776 "declarative_tree.m"
        return;
      }
#line 1775 "declarative_tree.m"
  }
#line 1759 "declarative_tree.m"
}

#line 1571 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
#line 1571 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1571 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 1571 "declarative_tree.m"
{
#line 1571 "declarative_tree.m"
  {
#line 1571 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 1571 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 1571 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 1571 "declarative_tree.m"
    {
#line 1571 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 1571 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 1571 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 1571 "declarative_tree.m"
  }
#line 1571 "declarative_tree.m"
}

#line 1566 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
#line 1566 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1566 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1566 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath0_3,
#line 1566 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_5,
#line 1566 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_6)
#line 1566 "declarative_tree.m"
{
#line 1570 "declarative_tree.m"
  while (MR_TRUE)
#line 1570 "declarative_tree.m"
    {
#line 1570 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1570 "declarative_tree.m"
      {
#line 1570 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1570 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "declarative_tree.m"
          {
#line 1570 "declarative_tree.m"
            MR_Word mdb__declarative_tree__HeadVars_12;
#line 1570 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArgPos_13;
#line 1570 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 0)));
#line 1571 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 1)));
#line 1571 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 2)));
#line 1571 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 3)));
#line 1571 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 4)));

#line 1571 "declarative_tree.m"
            {
#line 1571 "declarative_tree.m"
              mdb__declarative_tree__HeadVars_12 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[3], mdb__declarative_tree__V_15_15);
            }
#line 1572 "declarative_tree.m"
            {
#line 1572 "declarative_tree.m"
              mdb__declarative_tree__ArgPos_13 = mdb__declarative_tree__find_arg_pos_2_f_0(mdb__declarative_tree__HeadVars_12, mdb__declarative_tree__Var0_2);
            }
#line 1573 "declarative_tree.m"
            {
#line 1573 "declarative_tree.m"
              MR_Word base;
#line 1573 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1573 "declarative_tree.m"
              *mdb__declarative_tree__Origin_6 = base;
#line 1573 "declarative_tree.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__ArgPos_13));
#line 1573 "declarative_tree.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__TermPath0_3));
#line 1573 "declarative_tree.m"
            }
#line 1570 "declarative_tree.m"
          }
#line 1570 "declarative_tree.m"
        else
#line 1575 "declarative_tree.m"
          {
#line 1575 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Prim_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1575 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Prims_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1575 "declarative_tree.m"
            MR_String mdb__declarative_tree__File_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 0)));
#line 1575 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__Line_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 1)));
#line 1575 "declarative_tree.m"
            MR_Word mdb__declarative_tree__BoundVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 2)));
#line 1575 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 3)));
#line 1575 "declarative_tree.m"
            MR_Word mdb__declarative_tree__MaybeNodeId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 5)));
#line 1576 "declarative_tree.m"
            MR_Word mdb__declarative_tree___GoalPath_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 4)));

#line 1594 "declarative_tree.m"
            if (((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 2))))
#line 1608 "declarative_tree.m"
              {
#line 1608 "declarative_tree.m"
                MR_Word mdb__declarative_tree__MaybeFieldVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1608 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1608 "declarative_tree.m"
                MR_String mdb__declarative_tree__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1627 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__TermPathStep0_89;
#line 1627 "declarative_tree.m"
                MR_Word mdb__declarative_tree__TermPath_90;

#line 1610 "declarative_tree.m"
                {
#line 1610 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1610 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1610 "declarative_tree.m"
                  {
#line 1611 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__TermPath0_3)) == (MR_mktag((MR_Integer) 1)));
#line 1611 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1611 "declarative_tree.m"
                      {
#line 1611 "declarative_tree.m"
                        mdb__declarative_tree__TermPathStep0_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1611 "declarative_tree.m"
                        mdb__declarative_tree__TermPath_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1611 "declarative_tree.m"
                      }
#line 1610 "declarative_tree.m"
                  }
#line 1627 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1613 "declarative_tree.m"
                  {
#line 1613 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__MaybeVar_40;
#line 1613 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__conv1_MaybeVar_40;

#line 1613 "declarative_tree.m"
                    {
#line 1613 "declarative_tree.m"
                      mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[3], mdb__declarative_tree__MaybeFieldVars_39, mdb__declarative_tree__TermPathStep0_89, &mdb__declarative_tree__conv1_MaybeVar_40);
                    }
#line 1613 "declarative_tree.m"
                    mdb__declarative_tree__MaybeVar_40 = ((MR_Word) mdb__declarative_tree__conv1_MaybeVar_40);
#line 1620 "declarative_tree.m"
                    if ((mdb__declarative_tree__MaybeVar_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1624 "declarative_tree.m"
                      {
#line 1624 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1624 "declarative_tree.m"
                        {
#line 1624 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1624 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1624 "declarative_tree.m"
                        }
#line 1624 "declarative_tree.m"
                        continue;
#line 1624 "declarative_tree.m"
                      }
#line 1620 "declarative_tree.m"
                    else
#line 1615 "declarative_tree.m"
                      {
#line 1615 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeVar_40, (MR_Integer) 0)));

#line 1618 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1618 "declarative_tree.m"
                        {
#line 1618 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1618 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_86;
#line 1618 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_90;

#line 1618 "declarative_tree.m"
                          mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1618 "declarative_tree.m"
                          mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1618 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1618 "declarative_tree.m"
                        }
#line 1618 "declarative_tree.m"
                        continue;
#line 1615 "declarative_tree.m"
                      }
#line 1613 "declarative_tree.m"
                  }
#line 1627 "declarative_tree.m"
                else
#line 1628 "declarative_tree.m"
                  {
#line 1628 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1628 "declarative_tree.m"
                    {
#line 1628 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1628 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1628 "declarative_tree.m"
                    }
#line 1628 "declarative_tree.m"
                    continue;
#line 1628 "declarative_tree.m"
                  }
#line 1608 "declarative_tree.m"
              }
#line 1594 "declarative_tree.m"
            else
#line 1594 "declarative_tree.m"
              if (((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 0))))
#line 1579 "declarative_tree.m"
                {
#line 1579 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__FieldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1579 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree___CellVar_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1579 "declarative_tree.m"
                  MR_String mdb__declarative_tree___Cons_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1580 "declarative_tree.m"
                  {
#line 1580 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                  }
#line 1590 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1584 "declarative_tree.m"
                    if ((mdb__declarative_tree__TermPath0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1582 "declarative_tree.m"
                      {
#line 1583 "declarative_tree.m"
                        {
#line 1583 "declarative_tree.m"
                          MR_Word base;
#line 1583 "declarative_tree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1583 "declarative_tree.m"
                          *mdb__declarative_tree__Origin_6 = base;
#line 1583 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1583 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1583 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1583 "declarative_tree.m"
                        }
#line 1582 "declarative_tree.m"
                      }
#line 1584 "declarative_tree.m"
                    else
#line 1585 "declarative_tree.m"
                      {
#line 1585 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__TermPathStep0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1585 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__TermPath_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1585 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__Var_34;
#line 1586 "declarative_tree.m"
                        MR_Box mdb__declarative_tree__conv2_Var_34;

#line 1586 "declarative_tree.m"
                        {
#line 1586 "declarative_tree.m"
                          mercury__list__det_index1_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__FieldVars_31, mdb__declarative_tree__TermPathStep0_32, &mdb__declarative_tree__conv2_Var_34);
                        }
#line 1586 "declarative_tree.m"
                        mdb__declarative_tree__Var_34 = ((MR_Integer) mdb__declarative_tree__conv2_Var_34);
#line 1587 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1587 "declarative_tree.m"
                        {
#line 1587 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1587 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_34;
#line 1587 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_33;

#line 1587 "declarative_tree.m"
                          mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1587 "declarative_tree.m"
                          mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1587 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1587 "declarative_tree.m"
                        }
#line 1587 "declarative_tree.m"
                        continue;
#line 1585 "declarative_tree.m"
                      }
#line 1590 "declarative_tree.m"
                  else
#line 1591 "declarative_tree.m"
                    {
#line 1591 "declarative_tree.m"
                      /* direct tailcall eliminated */
#line 1591 "declarative_tree.m"
                      {
#line 1591 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1591 "declarative_tree.m"
                        mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1591 "declarative_tree.m"
                      }
#line 1591 "declarative_tree.m"
                      continue;
#line 1591 "declarative_tree.m"
                    }
#line 1579 "declarative_tree.m"
                }
#line 1594 "declarative_tree.m"
              else
#line 1594 "declarative_tree.m"
                if (((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 1))))
#line 1595 "declarative_tree.m"
                  {
#line 1595 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__CellVar_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1595 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__FieldVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1595 "declarative_tree.m"
                    MR_String mdb__declarative_tree___Cons_83 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1596 "declarative_tree.m"
                    {
#line 1596 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                    }
#line 1603 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1600 "declarative_tree.m"
                      {
#line 1600 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__Pos_36;

#line 1597 "declarative_tree.m"
                        {
#line 1597 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mercury__list__nth_member_search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__FieldVars_85, ((MR_Box) (mdb__declarative_tree__Var0_2)), &mdb__declarative_tree__Pos_36);
                        }
#line 1600 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1598 "declarative_tree.m"
                          {
#line 1598 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__V_78_78;

#line 1598 "declarative_tree.m"
                            {
#line 1598 "declarative_tree.m"
                              mdb__declarative_tree__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "declarative_tree.m"
                              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_78_78, 0) = ((MR_Box) (mdb__declarative_tree__Pos_36));
#line 1598 "declarative_tree.m"
                              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_78_78, 1) = ((MR_Box) (mdb__declarative_tree__TermPath0_3));
#line 1598 "declarative_tree.m"
                            }
#line 1598 "declarative_tree.m"
                            /* direct tailcall eliminated */
#line 1598 "declarative_tree.m"
                            {
#line 1598 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1598 "declarative_tree.m"
                              MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__CellVar_35;
#line 1598 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__V_78_78;

#line 1598 "declarative_tree.m"
                              mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1598 "declarative_tree.m"
                              mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1598 "declarative_tree.m"
                              mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1598 "declarative_tree.m"
                            }
#line 1598 "declarative_tree.m"
                            continue;
#line 1598 "declarative_tree.m"
                          }
#line 1600 "declarative_tree.m"
                        else
#line 1601 "declarative_tree.m"
                          {
#line 1601 "declarative_tree.m"
                            {
#line 1601 "declarative_tree.m"
                              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[30])));
#line 1601 "declarative_tree.m"
                              return;
                            }
#line 1601 "declarative_tree.m"
                          }
#line 1600 "declarative_tree.m"
                      }
#line 1603 "declarative_tree.m"
                    else
#line 1604 "declarative_tree.m"
                      {
#line 1604 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1604 "declarative_tree.m"
                        {
#line 1604 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1604 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1604 "declarative_tree.m"
                        }
#line 1604 "declarative_tree.m"
                        continue;
#line 1604 "declarative_tree.m"
                      }
#line 1595 "declarative_tree.m"
                  }
#line 1594 "declarative_tree.m"
                else
#line 1594 "declarative_tree.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1722 "declarative_tree.m"
                    {
#line 1720 "declarative_tree.m"
                      {
#line 1720 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1722 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1721 "declarative_tree.m"
                        {
#line 1721 "declarative_tree.m"
                          {
#line 1721 "declarative_tree.m"
                            MR_Word base;
#line 1721 "declarative_tree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "declarative_tree.m"
                            *mdb__declarative_tree__Origin_6 = base;
#line 1721 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1721 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1721 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1721 "declarative_tree.m"
                          }
#line 1721 "declarative_tree.m"
                        }
#line 1722 "declarative_tree.m"
                      else
#line 1723 "declarative_tree.m"
                        {
#line 1723 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1723 "declarative_tree.m"
                          {
#line 1723 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1723 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1723 "declarative_tree.m"
                          }
#line 1723 "declarative_tree.m"
                          continue;
#line 1723 "declarative_tree.m"
                        }
#line 1722 "declarative_tree.m"
                    }
#line 1594 "declarative_tree.m"
                  else
#line 1594 "declarative_tree.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1672 "declarative_tree.m"
                      {
#line 1672 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__ToVar_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1672 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__FromVar_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1674 "declarative_tree.m"
                        {
#line 1674 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                        }
#line 1678 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1675 "declarative_tree.m"
                          {
#line 1675 "declarative_tree.m"
                            {
#line 1675 "declarative_tree.m"
                              mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__Var0_2, mdb__declarative_tree__ToVar_114, (MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6", (MR_String) "bad unsafe_cast");
                            }
#line 1676 "declarative_tree.m"
                            /* direct tailcall eliminated */
#line 1676 "declarative_tree.m"
                            {
#line 1676 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1676 "declarative_tree.m"
                              MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__FromVar_115;

#line 1676 "declarative_tree.m"
                              mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1676 "declarative_tree.m"
                              mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1676 "declarative_tree.m"
                            }
#line 1676 "declarative_tree.m"
                            continue;
#line 1675 "declarative_tree.m"
                          }
#line 1678 "declarative_tree.m"
                        else
#line 1679 "declarative_tree.m"
                          {
#line 1679 "declarative_tree.m"
                            /* direct tailcall eliminated */
#line 1679 "declarative_tree.m"
                            {
#line 1679 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1679 "declarative_tree.m"
                              mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1679 "declarative_tree.m"
                            }
#line 1679 "declarative_tree.m"
                            continue;
#line 1679 "declarative_tree.m"
                          }
#line 1672 "declarative_tree.m"
                      }
#line 1594 "declarative_tree.m"
                    else
#line 1594 "declarative_tree.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1730 "declarative_tree.m"
                        {
#line 1728 "declarative_tree.m"
                          {
#line 1728 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                          }
#line 1730 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1729 "declarative_tree.m"
                            {
#line 1729 "declarative_tree.m"
                              {
#line 1729 "declarative_tree.m"
                                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[31])));
#line 1729 "declarative_tree.m"
                                return;
                              }
#line 1729 "declarative_tree.m"
                            }
#line 1730 "declarative_tree.m"
                          else
#line 1731 "declarative_tree.m"
                            {
#line 1731 "declarative_tree.m"
                              /* direct tailcall eliminated */
#line 1731 "declarative_tree.m"
                              {
#line 1731 "declarative_tree.m"
                                MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1731 "declarative_tree.m"
                                mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1731 "declarative_tree.m"
                              }
#line 1731 "declarative_tree.m"
                              continue;
#line 1731 "declarative_tree.m"
                            }
#line 1730 "declarative_tree.m"
                        }
#line 1594 "declarative_tree.m"
                      else
#line 1594 "declarative_tree.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1699 "declarative_tree.m"
                          {
#line 1699 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__Args_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1699 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1700 "declarative_tree.m"
                            {
#line 1700 "declarative_tree.m"
                              mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_49, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1700 "declarative_tree.m"
                              return;
                            }
#line 1699 "declarative_tree.m"
                          }
#line 1594 "declarative_tree.m"
                        else
#line 1594 "declarative_tree.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1703 "declarative_tree.m"
                            {
#line 1703 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__Args_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1703 "declarative_tree.m"
                              MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1703 "declarative_tree.m"
                              MR_Integer mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1704 "declarative_tree.m"
                              {
#line 1704 "declarative_tree.m"
                                mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_116, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1704 "declarative_tree.m"
                                return;
                              }
#line 1703 "declarative_tree.m"
                            }
#line 1594 "declarative_tree.m"
                          else
#line 1594 "declarative_tree.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1632 "declarative_tree.m"
                              {
#line 1632 "declarative_tree.m"
                                MR_Word mdb__declarative_tree__MaybeFieldVars_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1632 "declarative_tree.m"
                                MR_Integer mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1632 "declarative_tree.m"
                                MR_String mdb__declarative_tree__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1633 "declarative_tree.m"
                                {
#line 1633 "declarative_tree.m"
                                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                                }
#line 1655 "declarative_tree.m"
                                if (mdb__declarative_tree__succeeded)
#line 1637 "declarative_tree.m"
                                  if ((mdb__declarative_tree__TermPath0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1635 "declarative_tree.m"
                                    {
#line 1636 "declarative_tree.m"
                                      {
#line 1636 "declarative_tree.m"
                                        MR_Word base;
#line 1636 "declarative_tree.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1636 "declarative_tree.m"
                                        *mdb__declarative_tree__Origin_6 = base;
#line 1636 "declarative_tree.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1636 "declarative_tree.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1636 "declarative_tree.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1636 "declarative_tree.m"
                                      }
#line 1635 "declarative_tree.m"
                                    }
#line 1637 "declarative_tree.m"
                                  else
#line 1638 "declarative_tree.m"
                                    {
#line 1638 "declarative_tree.m"
                                      MR_Integer mdb__declarative_tree__TermPathStep0_97 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1638 "declarative_tree.m"
                                      MR_Word mdb__declarative_tree__TermPath_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1638 "declarative_tree.m"
                                      MR_Word mdb__declarative_tree__MaybeVar_100;
#line 1639 "declarative_tree.m"
                                      MR_Box mdb__declarative_tree__conv3_MaybeVar_100;

#line 1639 "declarative_tree.m"
                                      {
#line 1639 "declarative_tree.m"
                                        mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[3], mdb__declarative_tree__MaybeFieldVars_112, mdb__declarative_tree__TermPathStep0_97, &mdb__declarative_tree__conv3_MaybeVar_100);
                                      }
#line 1639 "declarative_tree.m"
                                      mdb__declarative_tree__MaybeVar_100 = ((MR_Word) mdb__declarative_tree__conv3_MaybeVar_100);
#line 1646 "declarative_tree.m"
                                      if ((mdb__declarative_tree__MaybeVar_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1647 "declarative_tree.m"
                                        {
#line 1652 "declarative_tree.m"
                                          {
#line 1652 "declarative_tree.m"
                                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[32])));
#line 1652 "declarative_tree.m"
                                            return;
                                          }
#line 1647 "declarative_tree.m"
                                        }
#line 1646 "declarative_tree.m"
                                      else
#line 1641 "declarative_tree.m"
                                        {
#line 1641 "declarative_tree.m"
                                          MR_Integer mdb__declarative_tree__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeVar_100, (MR_Integer) 0)));

#line 1644 "declarative_tree.m"
                                          /* direct tailcall eliminated */
#line 1644 "declarative_tree.m"
                                          {
#line 1644 "declarative_tree.m"
                                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1644 "declarative_tree.m"
                                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_95;
#line 1644 "declarative_tree.m"
                                            MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_98;

#line 1644 "declarative_tree.m"
                                            mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1644 "declarative_tree.m"
                                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1644 "declarative_tree.m"
                                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1644 "declarative_tree.m"
                                          }
#line 1644 "declarative_tree.m"
                                          continue;
#line 1641 "declarative_tree.m"
                                        }
#line 1638 "declarative_tree.m"
                                    }
#line 1655 "declarative_tree.m"
                                else
#line 1656 "declarative_tree.m"
                                  {
#line 1656 "declarative_tree.m"
                                    /* direct tailcall eliminated */
#line 1656 "declarative_tree.m"
                                    {
#line 1656 "declarative_tree.m"
                                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1656 "declarative_tree.m"
                                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1656 "declarative_tree.m"
                                    }
#line 1656 "declarative_tree.m"
                                    continue;
#line 1656 "declarative_tree.m"
                                  }
#line 1632 "declarative_tree.m"
                              }
#line 1594 "declarative_tree.m"
                            else
#line 1594 "declarative_tree.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1707 "declarative_tree.m"
                                {
#line 1707 "declarative_tree.m"
                                  MR_String mdb__declarative_tree__Module_52 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1707 "declarative_tree.m"
                                  MR_String mdb__declarative_tree__Name_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1707 "declarative_tree.m"
                                  MR_Word mdb__declarative_tree__Args_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1714 "declarative_tree.m"
                                  MR_Integer mdb__declarative_tree__NewVar_54;

#line 1709 "declarative_tree.m"
                                  {
#line 1709 "declarative_tree.m"
                                    mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                                  }
#line 1709 "declarative_tree.m"
                                  if (mdb__declarative_tree__succeeded)
#line 1710 "declarative_tree.m"
                                    {
#line 1710 "declarative_tree.m"
                                      mdb__declarative_tree__succeeded = mdb__declarative_tree__plain_call_is_special_case_4_p_0(mdb__declarative_tree__Module_52, mdb__declarative_tree__Name_53, mdb__declarative_tree__Args_117, &mdb__declarative_tree__NewVar_54);
                                    }
#line 1714 "declarative_tree.m"
                                  if (mdb__declarative_tree__succeeded)
#line 1712 "declarative_tree.m"
                                    {
#line 1712 "declarative_tree.m"
                                      /* direct tailcall eliminated */
#line 1712 "declarative_tree.m"
                                      {
#line 1712 "declarative_tree.m"
                                        MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1712 "declarative_tree.m"
                                        MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__NewVar_54;

#line 1712 "declarative_tree.m"
                                        mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1712 "declarative_tree.m"
                                        mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1712 "declarative_tree.m"
                                      }
#line 1712 "declarative_tree.m"
                                      continue;
#line 1712 "declarative_tree.m"
                                    }
#line 1714 "declarative_tree.m"
                                  else
#line 1715 "declarative_tree.m"
                                    {
#line 1715 "declarative_tree.m"
                                      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_117, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1715 "declarative_tree.m"
                                      return;
                                    }
#line 1707 "declarative_tree.m"
                                }
#line 1594 "declarative_tree.m"
                              else
#line 1594 "declarative_tree.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1686 "declarative_tree.m"
                                  {
#line 1684 "declarative_tree.m"
                                    {
#line 1684 "declarative_tree.m"
                                      mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                                    }
#line 1686 "declarative_tree.m"
                                    if (mdb__declarative_tree__succeeded)
#line 1685 "declarative_tree.m"
                                      {
#line 1685 "declarative_tree.m"
                                        {
#line 1685 "declarative_tree.m"
                                          MR_Word base;
#line 1685 "declarative_tree.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1685 "declarative_tree.m"
                                          *mdb__declarative_tree__Origin_6 = base;
#line 1685 "declarative_tree.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1685 "declarative_tree.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1685 "declarative_tree.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1685 "declarative_tree.m"
                                        }
#line 1685 "declarative_tree.m"
                                      }
#line 1686 "declarative_tree.m"
                                    else
#line 1687 "declarative_tree.m"
                                      {
#line 1687 "declarative_tree.m"
                                        /* direct tailcall eliminated */
#line 1687 "declarative_tree.m"
                                        {
#line 1687 "declarative_tree.m"
                                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1687 "declarative_tree.m"
                                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1687 "declarative_tree.m"
                                        }
#line 1687 "declarative_tree.m"
                                        continue;
#line 1687 "declarative_tree.m"
                                      }
#line 1686 "declarative_tree.m"
                                  }
#line 1594 "declarative_tree.m"
                                else
#line 1594 "declarative_tree.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1660 "declarative_tree.m"
                                    {
#line 1660 "declarative_tree.m"
                                      MR_Integer mdb__declarative_tree__ToVar_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1660 "declarative_tree.m"
                                      MR_Integer mdb__declarative_tree__FromVar_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1662 "declarative_tree.m"
                                      {
#line 1662 "declarative_tree.m"
                                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                                      }
#line 1667 "declarative_tree.m"
                                      if (mdb__declarative_tree__succeeded)
#line 1664 "declarative_tree.m"
                                        {
#line 1663 "declarative_tree.m"
                                          {
#line 1663 "declarative_tree.m"
                                            mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__Var0_2, mdb__declarative_tree__ToVar_43, (MR_String) "traverse_primitives", (MR_String) "bad assign");
                                          }
#line 1665 "declarative_tree.m"
                                          /* direct tailcall eliminated */
#line 1665 "declarative_tree.m"
                                          {
#line 1665 "declarative_tree.m"
                                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1665 "declarative_tree.m"
                                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__FromVar_44;

#line 1665 "declarative_tree.m"
                                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1665 "declarative_tree.m"
                                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1665 "declarative_tree.m"
                                          }
#line 1665 "declarative_tree.m"
                                          continue;
#line 1664 "declarative_tree.m"
                                        }
#line 1667 "declarative_tree.m"
                                      else
#line 1668 "declarative_tree.m"
                                        {
#line 1668 "declarative_tree.m"
                                          /* direct tailcall eliminated */
#line 1668 "declarative_tree.m"
                                          {
#line 1668 "declarative_tree.m"
                                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1668 "declarative_tree.m"
                                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1668 "declarative_tree.m"
                                          }
#line 1668 "declarative_tree.m"
                                          continue;
#line 1668 "declarative_tree.m"
                                        }
#line 1660 "declarative_tree.m"
                                    }
#line 1594 "declarative_tree.m"
                                  else
#line 1694 "declarative_tree.m"
                                    {
#line 1692 "declarative_tree.m"
                                      {
#line 1692 "declarative_tree.m"
                                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                                      }
#line 1694 "declarative_tree.m"
                                      if (mdb__declarative_tree__succeeded)
#line 1693 "declarative_tree.m"
                                        {
#line 1693 "declarative_tree.m"
                                          {
#line 1693 "declarative_tree.m"
                                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[33])));
#line 1693 "declarative_tree.m"
                                            return;
                                          }
#line 1693 "declarative_tree.m"
                                        }
#line 1694 "declarative_tree.m"
                                      else
#line 1695 "declarative_tree.m"
                                        {
#line 1695 "declarative_tree.m"
                                          /* direct tailcall eliminated */
#line 1695 "declarative_tree.m"
                                          {
#line 1695 "declarative_tree.m"
                                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1695 "declarative_tree.m"
                                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1695 "declarative_tree.m"
                                          }
#line 1695 "declarative_tree.m"
                                          continue;
#line 1695 "declarative_tree.m"
                                        }
#line 1694 "declarative_tree.m"
                                    }
#line 1575 "declarative_tree.m"
          }
#line 1570 "declarative_tree.m"
      }
#line 1570 "declarative_tree.m"
      break;
#line 1570 "declarative_tree.m"
    }
#line 1566 "declarative_tree.m"
}

#line 1369 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
#line 1369 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1369 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__2_2)
#line 1369 "declarative_tree.m"
{
#line 1373 "declarative_tree.m"
  while (MR_TRUE)
#line 1373 "declarative_tree.m"
    {
#line 1373 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1373 "declarative_tree.m"
      {
#line 1373 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1373 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "declarative_tree.m"
        else
#line 1374 "declarative_tree.m"
          {
#line 1374 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourHeadNode_6;
#line 1374 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1374 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1375 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_22_22, (MR_Integer) 0));

#line 1375 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_22_22, (MR_Integer) 1)));
#line 1379 "declarative_tree.m"
            if (((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_6)) == (MR_mktag((MR_Integer) 1))))
#line 1378 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1379 "declarative_tree.m"
            else
#line 1379 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1380 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1379 "declarative_tree.m"
              else
#line 1379 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_FALSE;
#line 1384 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1383 "declarative_tree.m"
              {
#line 1383 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1383 "declarative_tree.m"
                {
#line 1383 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__ContourTail_7;

#line 1383 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1383 "declarative_tree.m"
                }
#line 1383 "declarative_tree.m"
                continue;
#line 1383 "declarative_tree.m"
              }
#line 1384 "declarative_tree.m"
            else
#line 1385 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__2_2 = mdb__declarative_tree__HeadVar__1_1;
#line 1374 "declarative_tree.m"
          }
#line 1373 "declarative_tree.m"
      }
#line 1373 "declarative_tree.m"
      break;
#line 1373 "declarative_tree.m"
    }
#line 1369 "declarative_tree.m"
}

#line 954 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
#line 954 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49,
#line 954 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 954 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_7,
#line 954 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_8,
#line 954 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10)
#line 954 "declarative_tree.m"
{
#line 957 "declarative_tree.m"
  {
#line 957 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 957 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;

#line 958 "declarative_tree.m"
    {
#line 958 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_11);
    }
#line 976 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 1))))
#line 960 "declarative_tree.m"
      {
#line 960 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_51_51;
#line 960 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_52_52;
#line 960 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 960 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ExitAtom_20;
#line 960 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_21;
#line 960 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_22;
#line 960 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 960 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 960 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 960 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 960 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 960 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 960 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1892 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Args_73;
#line 1892 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ArgInfo_74;
#line 1892 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeArg_77;
#line 1892 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_72_72;
#line 1894 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_75_75;
#line 1894 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_76_76;
#line 1895 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_78_78;

#line 5451 "mdb.declarative_tree.c"
        {
#line 5453 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_51_51);
        }
#line 961 "declarative_tree.m"
        {
#line 961 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_51_51, mdb__declarative_tree__Node_11);
        }
#line 962 "declarative_tree.m"
        {
#line 962 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13, &mdb__declarative_tree__CallNode_21);
        }
#line 5466 "mdb.declarative_tree.c"
        {
#line 5468 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_52_52);
        }
#line 963 "declarative_tree.m"
        {
#line 963 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_22 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_52_52, mdb__declarative_tree__CallNode_21);
        }
#line 1892 "declarative_tree.m"
        mdb__declarative_tree__V_72_72 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_22, (MR_Integer) 0)));
#line 1892 "declarative_tree.m"
        mdb__declarative_tree__Args_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_22, (MR_Integer) 1)));
#line 1893 "declarative_tree.m"
        {
#line 1893 "declarative_tree.m"
          mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_73, &mdb__declarative_tree__ArgInfo_74);
        }
#line 1894 "declarative_tree.m"
        mdb__declarative_tree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
        mdb__declarative_tree__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
        mdb__declarative_tree__MaybeArg_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 2)));
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_77)) == (MR_mktag((MR_Integer) 1)));
#line 1895 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1895 "declarative_tree.m"
          {
#line 1895 "declarative_tree.m"
            mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_77, (MR_Integer) 0)));
#line 965 "declarative_tree.m"
            {
#line 965 "declarative_tree.m"
              mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13, mdb__declarative_tree__CallNode_21, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 965 "declarative_tree.m"
              return;
            }
#line 1895 "declarative_tree.m"
          }
#line 1895 "declarative_tree.m"
        else
#line 973 "declarative_tree.m"
          {
#line 1892 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 1)));
#line 1892 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArgInfo_83;
#line 1892 "declarative_tree.m"
            MR_Word mdb__declarative_tree__MaybeArg_86;
#line 1892 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_84_84;
#line 1894 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_85_85;
#line 1895 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_87_87;

#line 1893 "declarative_tree.m"
            {
#line 1893 "declarative_tree.m"
              mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_82, &mdb__declarative_tree__ArgInfo_83);
            }
#line 1894 "declarative_tree.m"
            mdb__declarative_tree__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
            mdb__declarative_tree__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
            mdb__declarative_tree__MaybeArg_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 2)));
#line 1895 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_86)) == (MR_mktag((MR_Integer) 1)));
#line 1895 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1895 "declarative_tree.m"
              {
#line 1895 "declarative_tree.m"
                mdb__declarative_tree__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_86, (MR_Integer) 0)));
#line 968 "declarative_tree.m"
                {
#line 968 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13);
                }
#line 970 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 969 "declarative_tree.m"
                  {
#line 969 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_53_53;

#line 5558 "mdb.declarative_tree.c"
                    {
#line 5560 "mdb.declarative_tree.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_53_53);
                    }
#line 969 "declarative_tree.m"
                    {
#line 969 "declarative_tree.m"
                      mdb__declarative_tree__find_chain_start_outside_4_p_0(mdb__declarative_tree__TypeInfo_53_53, mdb__declarative_tree__CallNode_21, mdb__declarative_tree__Node_11, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 969 "declarative_tree.m"
                      return;
                    }
#line 969 "declarative_tree.m"
                  }
#line 970 "declarative_tree.m"
                else
#line 971 "declarative_tree.m"
                  *mdb__declarative_tree__ChainStart_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1895 "declarative_tree.m"
              }
#line 1895 "declarative_tree.m"
            else
#line 974 "declarative_tree.m"
              {
#line 974 "declarative_tree.m"
                {
#line 974 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[27])));
#line 974 "declarative_tree.m"
                  return;
                }
#line 974 "declarative_tree.m"
              }
#line 973 "declarative_tree.m"
          }
#line 960 "declarative_tree.m"
      }
#line 976 "declarative_tree.m"
    else
#line 976 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 987 "declarative_tree.m"
        {
#line 987 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_59_59;
#line 987 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 987 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_47;
#line 987 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_48;
#line 987 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 987 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 987 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 987 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 987 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 987 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1892 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Args_64;
#line 1892 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArgInfo_65;
#line 1892 "declarative_tree.m"
          MR_Word mdb__declarative_tree__MaybeArg_68;
#line 1892 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_63_63;
#line 1894 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_66_66;
#line 1894 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_67_67;
#line 1895 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_69_69;

#line 988 "declarative_tree.m"
          {
#line 988 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_46, &mdb__declarative_tree__CallNode_47);
          }
#line 5641 "mdb.declarative_tree.c"
          {
#line 5643 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_59_59);
          }
#line 989 "declarative_tree.m"
          {
#line 989 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_59_59, mdb__declarative_tree__CallNode_47);
          }
#line 1892 "declarative_tree.m"
          mdb__declarative_tree__V_63_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_48, (MR_Integer) 0)));
#line 1892 "declarative_tree.m"
          mdb__declarative_tree__Args_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_48, (MR_Integer) 1)));
#line 1893 "declarative_tree.m"
          {
#line 1893 "declarative_tree.m"
            mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_64, &mdb__declarative_tree__ArgInfo_65);
          }
#line 1894 "declarative_tree.m"
          mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
          mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
          mdb__declarative_tree__MaybeArg_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 2)));
#line 1895 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_68)) == (MR_mktag((MR_Integer) 1)));
#line 1895 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1895 "declarative_tree.m"
            {
#line 1895 "declarative_tree.m"
              mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_68, (MR_Integer) 0)));
#line 994 "declarative_tree.m"
              {
#line 994 "declarative_tree.m"
                mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_46, mdb__declarative_tree__CallNode_47, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 994 "declarative_tree.m"
                return;
              }
#line 1895 "declarative_tree.m"
            }
#line 1895 "declarative_tree.m"
          else
#line 997 "declarative_tree.m"
            {
#line 997 "declarative_tree.m"
              {
#line 997 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[28])));
#line 997 "declarative_tree.m"
                return;
              }
#line 997 "declarative_tree.m"
            }
#line 987 "declarative_tree.m"
        }
#line 976 "declarative_tree.m"
      else
#line 977 "declarative_tree.m"
        {
#line 977 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_56_56;
#line 977 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_43 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 977 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_44;
#line 977 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_45;
#line 977 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 977 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 977 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 977 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 977 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1892 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Args_91;
#line 1892 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArgInfo_92;
#line 1892 "declarative_tree.m"
          MR_Word mdb__declarative_tree__MaybeArg_95;
#line 1892 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_90_90;
#line 1894 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_93_93;
#line 1894 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_94_94;
#line 1895 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_96_96;

#line 978 "declarative_tree.m"
          {
#line 978 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_43, &mdb__declarative_tree__CallNode_44);
          }
#line 5740 "mdb.declarative_tree.c"
          {
#line 5742 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_56_56);
          }
#line 979 "declarative_tree.m"
          {
#line 979 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_45 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_56_56, mdb__declarative_tree__CallNode_44);
          }
#line 1892 "declarative_tree.m"
          mdb__declarative_tree__V_90_90 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_45, (MR_Integer) 0)));
#line 1892 "declarative_tree.m"
          mdb__declarative_tree__Args_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_45, (MR_Integer) 1)));
#line 1893 "declarative_tree.m"
          {
#line 1893 "declarative_tree.m"
            mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_91, &mdb__declarative_tree__ArgInfo_92);
          }
#line 1894 "declarative_tree.m"
          mdb__declarative_tree__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
          mdb__declarative_tree__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
          mdb__declarative_tree__MaybeArg_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 2)));
#line 1895 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_95)) == (MR_mktag((MR_Integer) 1)));
#line 1895 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1895 "declarative_tree.m"
            {
#line 1895 "declarative_tree.m"
              mdb__declarative_tree__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_95, (MR_Integer) 0)));
#line 981 "declarative_tree.m"
              {
#line 981 "declarative_tree.m"
                mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_43, mdb__declarative_tree__CallNode_44, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 981 "declarative_tree.m"
                return;
              }
#line 1895 "declarative_tree.m"
            }
#line 1895 "declarative_tree.m"
          else
#line 984 "declarative_tree.m"
            {
#line 984 "declarative_tree.m"
              {
#line 984 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[29])));
#line 984 "declarative_tree.m"
                return;
              }
#line 984 "declarative_tree.m"
            }
#line 977 "declarative_tree.m"
        }
#line 957 "declarative_tree.m"
  }
#line 954 "declarative_tree.m"
}

#line 46 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_97_116_111_109_95_115_117_98_116_101_114_109_95_105_115_95_103_114_111_117_110_100_95_95_91_51_93_95_48_3_p_0(
#line 46 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 46 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_6)
#line 46 "declarative_tree.m"
{
#line 1892 "declarative_tree.m"
  {
#line 1892 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1892 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1892 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ArgInfo_8;
#line 1892 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybeArg_11;
#line 1892 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 1894 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 1895 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;

#line 1893 "declarative_tree.m"
    {
#line 1893 "declarative_tree.m"
      mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_6, mdb__declarative_tree__Args_5, &mdb__declarative_tree__ArgInfo_8);
    }
#line 1894 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
    mdb__declarative_tree__MaybeArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 2)));
#line 1895 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_11)) == (MR_mktag((MR_Integer) 1)));
#line 1895 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1895 "declarative_tree.m"
      mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_11, (MR_Integer) 0)));
#line 1892 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1892 "declarative_tree.m"
  }
#line 46 "declarative_tree.m"
}

#line 1663 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1663__1_2_p_0(
#line 1663 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1663 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_43)
#line 1663 "declarative_tree.m"
{
#line 1663 "declarative_tree.m"
  {
#line 1663 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__Var0_2 == mdb__declarative_tree__ToVar_43);

#line 1663 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1663 "declarative_tree.m"
  }
#line 1663 "declarative_tree.m"
}

#line 1675 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1675__1_2_p_0(
#line 1675 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1675 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_114)
#line 1675 "declarative_tree.m"
{
#line 1675 "declarative_tree.m"
  {
#line 1675 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__Var0_2 == mdb__declarative_tree__ToVar_114);

#line 1675 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1675 "declarative_tree.m"
  }
#line 1675 "declarative_tree.m"
}

#line 1195 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1195__1_3_p_0(
#line 1195 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1195 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AdjustedContour_21,
#line 1195 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_29)
#line 1195 "declarative_tree.m"
{
#line 1195 "declarative_tree.m"
  {
#line 1195 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1195 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_43_43;
#line 1195 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_44_44;
#line 1195 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_46_46;
#line 1195 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_48_48;

#line 5920 "mdb.declarative_tree.c"
    {
#line 5922 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_43_43);
    }
#line 5925 "mdb.declarative_tree.c"
    {
#line 5927 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_44_44);
    }
#line 5930 "mdb.declarative_tree.c"
    {
#line 5932 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5934 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 5936 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_46_46, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_44_44));
#line 5938 "mdb.declarative_tree.c"
    }
#line 5940 "mdb.declarative_tree.c"
    {
#line 5942 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5944 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 5946 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_43_43));
#line 5948 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_46_46));
#line 5950 "mdb.declarative_tree.c"
    }
#line 1195 "declarative_tree.m"
    {
#line 1195 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_tree__TypeInfo_48_48, mdb__declarative_tree__AdjustedContour_21, mdb__declarative_tree__HeadVar__3_29);
    }
#line 1195 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1195 "declarative_tree.m"
  }
#line 1195 "declarative_tree.m"
}

#line 278 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
#line 278 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_127,
#line 278 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 278 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 278 "declarative_tree.m"
{
#line 278 "declarative_tree.m"
  {
#line 278 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 278 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 278 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1));
#line 278 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 278 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 278 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 278 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 278 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 6)));
#line 278 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 7)));
#line 278 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 8)));
#line 278 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 9)));
#line 278 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_128_128;

#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)) = mdb__declarative_tree__V_13_13;
#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)) = mdb__declarative_tree__V_14_14;
#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)) = ((MR_Box) (mdb__declarative_tree__V_15_15));
#line 278 "declarative_tree.m"
    mdb__declarative_tree__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (mdb__declarative_tree__V_17_17));
#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)) = ((MR_Box) (mdb__declarative_tree__V_18_18));
#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 6)) = ((MR_Box) (mdb__declarative_tree__V_19_19));
#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 7)) = ((MR_Box) (mdb__declarative_tree__V_20_20));
#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 8)) = ((MR_Box) (mdb__declarative_tree__V_21_21));
#line 278 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 9)) = ((MR_Box) (mdb__declarative_tree__V_22_22));
#line 278 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == mdb__declarative_tree__V_128_128);
#line 278 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 278 "declarative_tree.m"
  }
#line 278 "declarative_tree.m"
}

#line 95 "declarative_tree.m"
static MR_Integer MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 95 "declarative_tree.m"
{
#line 1900 "declarative_tree.m"
  {
#line 1900 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1900 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__HeadVar__4_4;
#line 1900 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_14_14;
#line 1900 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 1900 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_9 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 1900 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_10;
#line 1900 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_11;
#line 1900 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Atom_12;
#line 1886 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_20;
#line 1876 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_18;
#line 6066 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6068 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_18;

#line 6071 "mdb.declarative_tree.c"
    {
#line 6073 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5), mdb__declarative_tree__Store_8, mdb__declarative_tree__Ref_9, &mdb__declarative_tree__conv1_Node0_18);
    }
#line 6076 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 6078 "mdb.declarative_tree.c"
      {
#line 6080 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_18 = ((MR_Word) mdb__declarative_tree__conv1_Node0_18);
#line 6082 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 6084 "mdb.declarative_tree.c"
      }
#line 1876 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1879 "declarative_tree.m"
      {
#line 1879 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node0_18)) == (MR_mktag((MR_Integer) 1))))
#line 1878 "declarative_tree.m"
          {
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 0));
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_21_21;
#line 1878 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_22_22;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_23_23;
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_25_25;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_26_26;

#line 1878 "declarative_tree.m"
            mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 3)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 7)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1878 "declarative_tree.m"
          }
#line 1879 "declarative_tree.m"
        else
#line 1879 "declarative_tree.m"
          if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1882 "declarative_tree.m"
            {
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_33_33;
#line 1882 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_34_34;
#line 1882 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_35_35;
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_36_36;
#line 1882 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_37_37;

#line 1882 "declarative_tree.m"
              mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 3));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_36_36 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 7)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1882 "declarative_tree.m"
            }
#line 1879 "declarative_tree.m"
          else
#line 1879 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1880 "declarative_tree.m"
              {
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_28_28;
#line 1880 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_29_29;
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_30_30;
#line 1880 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_31_31;

#line 1880 "declarative_tree.m"
                mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 3));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1880 "declarative_tree.m"
              }
#line 1879 "declarative_tree.m"
            else
#line 1879 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1879 "declarative_tree.m"
      }
#line 1886 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1885 "declarative_tree.m"
      mdb__declarative_tree__CallId_10 = mdb__declarative_tree__CallId0_20;
#line 1886 "declarative_tree.m"
    else
#line 1887 "declarative_tree.m"
      {
#line 1887 "declarative_tree.m"
        {
#line 1887 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1887 "declarative_tree.m"
      }
#line 1902 "declarative_tree.m"
    {
#line 1902 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__Call_11);
    }
#line 6219 "mdb.declarative_tree.c"
    {
#line 6221 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_14_14);
    }
#line 1903 "declarative_tree.m"
    {
#line 1903 "declarative_tree.m"
      mdb__declarative_tree__Atom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_14_14, mdb__declarative_tree__Call_11);
    }
#line 1904 "declarative_tree.m"
    {
#line 1904 "declarative_tree.m"
      mdb__declarative_execution__user_arg_num_3_p_0(mdb__declarative_tree__HeadVar__3_3, mdb__declarative_tree__Atom_12, &mdb__declarative_tree__HeadVar__4_4);
    }
#line 1900 "declarative_tree.m"
    return mdb__declarative_tree__HeadVar__4_4;
#line 1900 "declarative_tree.m"
  }
#line 95 "declarative_tree.m"
}

#line 94 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 94 "declarative_tree.m"
{
#line 482 "declarative_tree.m"
  {
#line 482 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 482 "declarative_tree.m"
    MR_Word mdb__declarative_tree__HeadVar__3_3;
#line 482 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 482 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 482 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;
#line 482 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Label_13;
#line 482 "declarative_tree.m"
    MR_Box mdb__declarative_tree__ProcLayout_28;

#line 483 "declarative_tree.m"
    {
#line 483 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 486 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 487 "declarative_tree.m"
      {
#line 487 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 487 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 487 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 487 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 487 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 487 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20;
#line 487 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_21_21;

#line 487 "declarative_tree.m"
        mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 487 "declarative_tree.m"
        mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 487 "declarative_tree.m"
        mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 487 "declarative_tree.m"
      }
#line 486 "declarative_tree.m"
    else
#line 486 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 489 "declarative_tree.m"
        {
#line 489 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 489 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 489 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 489 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 489 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 489 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_27_27;

#line 489 "declarative_tree.m"
          mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 489 "declarative_tree.m"
          mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 489 "declarative_tree.m"
        }
#line 486 "declarative_tree.m"
      else
#line 485 "declarative_tree.m"
        {
#line 485 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 485 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 485 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 485 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 485 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_14_14;

#line 485 "declarative_tree.m"
          mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 485 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 485 "declarative_tree.m"
        }
#line 491 "declarative_tree.m"
    {
#line 491 "declarative_tree.m"
      mdb__declarative_tree__ProcLayout_28 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_tree__Label_13);
    }
#line 492 "declarative_tree.m"
    {
#line 492 "declarative_tree.m"
      return mdb__declarative_tree__HeadVar__3_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__ProcLayout_28);
    }
#line 482 "declarative_tree.m"
    return mdb__declarative_tree__HeadVar__3_3;
#line 482 "declarative_tree.m"
  }
#line 94 "declarative_tree.m"
}

#line 93 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 93 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3,
#line 93 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 93 "declarative_tree.m"
{
#line 431 "declarative_tree.m"
  {
#line 431 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 431 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 431 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 431 "declarative_tree.m"
    MR_String mdb__declarative_tree__FileName_9;
#line 431 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__LineNo_10;
#line 431 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Final_11;
#line 431 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_13;
#line 431 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Label_17;
#line 431 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_29;
#line 431 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_57_57;
#line 443 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_54_54;
#line 443 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_55_55;
#line 443 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_56_56;
#line 443 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_58_58;
#line 443 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_59_59;
#line 443 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_60_60;
#line 443 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_61_61;
#line 443 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_62_62;
#line 443 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_63_63;

#line 432 "declarative_tree.m"
    {
#line 432 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_7, mdb__declarative_tree__Ref_8, &mdb__declarative_tree__Final_11);
    }
#line 435 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Final_11)) == (MR_mktag((MR_Integer) 1))))
#line 434 "declarative_tree.m"
      {
#line 434 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 0));
#line 434 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_14_14;
#line 434 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15;
#line 434 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16;
#line 434 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18;
#line 434 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19;

#line 434 "declarative_tree.m"
        mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 434 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 434 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 3)));
#line 434 "declarative_tree.m"
        mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 434 "declarative_tree.m"
        mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 434 "declarative_tree.m"
        mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 434 "declarative_tree.m"
        mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 7)));
#line 434 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 434 "declarative_tree.m"
      }
#line 435 "declarative_tree.m"
    else
#line 435 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Final_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 438 "declarative_tree.m"
        {
#line 438 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 438 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_25_25;
#line 438 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_26_26;
#line 438 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_27_27;
#line 438 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_28_28;

#line 438 "declarative_tree.m"
          mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 438 "declarative_tree.m"
          mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 3));
#line 438 "declarative_tree.m"
          mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 438 "declarative_tree.m"
          mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 438 "declarative_tree.m"
          mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 438 "declarative_tree.m"
          mdb__declarative_tree__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 7)));
#line 438 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 438 "declarative_tree.m"
        }
#line 435 "declarative_tree.m"
      else
#line 435 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Final_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 436 "declarative_tree.m"
          {
#line 436 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 436 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_21_21;
#line 436 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_22_22;
#line 436 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_23_23;

#line 436 "declarative_tree.m"
            mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 436 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 3));
#line 436 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 436 "declarative_tree.m"
            mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 436 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 436 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 436 "declarative_tree.m"
          }
#line 435 "declarative_tree.m"
        else
#line 435 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 431 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 431 "declarative_tree.m"
      {
#line 440 "declarative_tree.m"
        {
#line 440 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(mdb__declarative_tree__Label_17, &mdb__declarative_tree__FileName_9, &mdb__declarative_tree__LineNo_10);
        }
#line 431 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 431 "declarative_tree.m"
          {
#line 431 "declarative_tree.m"
            {
#line 431 "declarative_tree.m"
              MR_Word base;
#line 431 "declarative_tree.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__3_3 = base;
#line 431 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__FileName_9));
#line 431 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__LineNo_10));
#line 431 "declarative_tree.m"
            }
#line 441 "declarative_tree.m"
            {
#line 441 "declarative_tree.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_7, mdb__declarative_tree__CallId_13, &mdb__declarative_tree__Call_29);
            }
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_63_63 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 0));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_62_62 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 1));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 2)));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 3)));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 4)));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 5)));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 6)));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_56_56 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 7)));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 8)));
#line 443 "declarative_tree.m"
            mdb__declarative_tree__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 9)));
#line 447 "declarative_tree.m"
            if ((mdb__declarative_tree__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 449 "declarative_tree.m"
              {
#line 449 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 449 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 449 "declarative_tree.m"
              }
#line 447 "declarative_tree.m"
            else
#line 443 "declarative_tree.m"
              {
#line 443 "declarative_tree.m"
                MR_Box mdb__declarative_tree__ReturnLabel_30 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_57_57, (MR_Integer) 0)));
#line 443 "declarative_tree.m"
                MR_String mdb__declarative_tree__ReturnFileName_31;
#line 443 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__ReturnLineNo_32;
#line 443 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_35_35;

#line 444 "declarative_tree.m"
                {
#line 444 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(mdb__declarative_tree__ReturnLabel_30, &mdb__declarative_tree__ReturnFileName_31, &mdb__declarative_tree__ReturnLineNo_32);
                }
#line 443 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 443 "declarative_tree.m"
                  {
#line 446 "declarative_tree.m"
                    {
#line 446 "declarative_tree.m"
                      mdb__declarative_tree__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 0) = ((MR_Box) (mdb__declarative_tree__ReturnFileName_31));
#line 446 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 1) = ((MR_Box) (mdb__declarative_tree__ReturnLineNo_32));
#line 446 "declarative_tree.m"
                    }
#line 446 "declarative_tree.m"
                    {
#line 446 "declarative_tree.m"
                      MR_Word base;
#line 446 "declarative_tree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 446 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__4_4 = base;
#line 446 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_35_35));
#line 446 "declarative_tree.m"
                    }
#line 446 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 443 "declarative_tree.m"
                  }
#line 443 "declarative_tree.m"
              }
#line 431 "declarative_tree.m"
          }
#line 431 "declarative_tree.m"
      }
#line 431 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 431 "declarative_tree.m"
  }
#line 93 "declarative_tree.m"
}

#line 92 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 92 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__3_3,
#line 92 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__4_4)
#line 92 "declarative_tree.m"
{
#line 326 "declarative_tree.m"
  {
#line 326 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 327 "declarative_tree.m"
    {
#line 327 "declarative_tree.m"
      mdb__declarative_tree__trace_weight_9_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 1, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0, mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__declarative_tree__HeadVar__4_4);
#line 327 "declarative_tree.m"
      return;
    }
#line 326 "declarative_tree.m"
  }
#line 92 "declarative_tree.m"
}

#line 91 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 91 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__3_3,
#line 91 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__4_4)
#line 91 "declarative_tree.m"
{
#line 319 "declarative_tree.m"
  {
#line 319 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 320 "declarative_tree.m"
    {
#line 320 "declarative_tree.m"
      mdb__declarative_tree__trace_weight_9_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0, mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__declarative_tree__HeadVar__4_4);
#line 320 "declarative_tree.m"
      return;
    }
#line 319 "declarative_tree.m"
  }
#line 91 "declarative_tree.m"
}

#line 90 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 90 "declarative_tree.m"
{
#line 267 "declarative_tree.m"
  {
#line 267 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 267 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_39_39;
#line 267 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 267 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 267 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_6;
#line 267 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_8;
#line 267 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_35_35;
#line 267 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 278 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_26_26;
#line 278 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_27_27;
#line 278 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_28_28;
#line 278 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_29_29;
#line 278 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_30_30;
#line 278 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_31_31;
#line 278 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 278 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 278 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;

#line 268 "declarative_tree.m"
    {
#line 268 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__Node_6);
    }
#line 271 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_6)) == (MR_mktag((MR_Integer) 1))))
#line 270 "declarative_tree.m"
      {
#line 270 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 0));
#line 270 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9;
#line 270 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 270 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 270 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 270 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_13_13;
#line 270 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14;

#line 270 "declarative_tree.m"
        mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 270 "declarative_tree.m"
        mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 270 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 3)));
#line 270 "declarative_tree.m"
        mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 270 "declarative_tree.m"
        mdb__declarative_tree__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 270 "declarative_tree.m"
        mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 270 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 7)));
#line 270 "declarative_tree.m"
      }
#line 271 "declarative_tree.m"
    else
#line 271 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 274 "declarative_tree.m"
        {
#line 274 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 274 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_21_21;
#line 274 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_22_22;
#line 274 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_23_23;
#line 274 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_24_24;
#line 274 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_25_25;

#line 274 "declarative_tree.m"
          mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 274 "declarative_tree.m"
          mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 3));
#line 274 "declarative_tree.m"
          mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 274 "declarative_tree.m"
          mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 274 "declarative_tree.m"
          mdb__declarative_tree__V_24_24 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 274 "declarative_tree.m"
          mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 7)));
#line 274 "declarative_tree.m"
        }
#line 271 "declarative_tree.m"
      else
#line 272 "declarative_tree.m"
        {
#line 272 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 272 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_16_16;
#line 272 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_17_17;
#line 272 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_18_18;
#line 272 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19;

#line 272 "declarative_tree.m"
          mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 272 "declarative_tree.m"
          mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 3));
#line 272 "declarative_tree.m"
          mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 272 "declarative_tree.m"
          mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 272 "declarative_tree.m"
          mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 272 "declarative_tree.m"
        }
#line 278 "declarative_tree.m"
    {
#line 278 "declarative_tree.m"
      mdb__declarative_tree__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 0) = NULL;
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 1) = NULL;
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 2) = NULL;
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 3) = ((MR_Box) ((MR_Integer) 1));
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 4) = NULL;
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 5) = NULL;
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 6) = NULL;
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 7) = NULL;
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 8) = NULL;
#line 278 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 9) = NULL;
#line 278 "declarative_tree.m"
    }
#line 278 "declarative_tree.m"
    {
#line 278 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_8, &mdb__declarative_tree__V_37_37);
    }
#line 6892 "mdb.declarative_tree.c"
    {
#line 6894 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_39_39);
    }
#line 278 "declarative_tree.m"
    {
#line 278 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(mdb__declarative_tree__TypeInfo_39_39, mdb__declarative_tree__V_35_35, mdb__declarative_tree__V_37_37);
    }
#line 267 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 267 "declarative_tree.m"
  }
#line 90 "declarative_tree.m"
}

#line 89 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 89 "declarative_tree.m"
{
#line 250 "declarative_tree.m"
  {
#line 250 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 250 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 250 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref1_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 250 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref2_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 250 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node1_8;
#line 250 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node2_9;

#line 251 "declarative_tree.m"
    {
#line 251 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref1_6, &mdb__declarative_tree__Node1_8);
    }
#line 252 "declarative_tree.m"
    {
#line 252 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref2_7, &mdb__declarative_tree__Node2_9);
    }
#line 256 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node1_8)) == (MR_mktag((MR_Integer) 1))))
#line 254 "declarative_tree.m"
      {
#line 254 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Event_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 254 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_49_49;
#line 254 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 0));
#line 254 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 254 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 254 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 3)));
#line 254 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 254 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 254 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 7)));
#line 255 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18;
#line 255 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19;
#line 255 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_20_20;
#line 255 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_21_21;
#line 255 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22;
#line 255 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23;
#line 255 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_24_24;

#line 255 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 1)));
#line 255 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 255 "declarative_tree.m"
          {
#line 255 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 0));
#line 255 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 255 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 255 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 3)));
#line 255 "declarative_tree.m"
            mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 255 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 255 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 255 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 7)));
#line 255 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_14 == mdb__declarative_tree__V_49_49);
#line 255 "declarative_tree.m"
          }
#line 254 "declarative_tree.m"
      }
#line 256 "declarative_tree.m"
    else
#line 256 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node1_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 260 "declarative_tree.m"
        {
#line 260 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__Event_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 260 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_51_51;
#line 260 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 260 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 260 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 3));
#line 260 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 260 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_39_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 260 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 7)));
#line 261 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_41_41;
#line 261 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_42_42;
#line 261 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_43_43;
#line 261 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_44_44;
#line 261 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_45_45;
#line 261 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_46_46;

#line 261 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 261 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 261 "declarative_tree.m"
            {
#line 261 "declarative_tree.m"
              mdb__declarative_tree__V_41_41 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 261 "declarative_tree.m"
              mdb__declarative_tree__V_42_42 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 261 "declarative_tree.m"
              mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 3));
#line 261 "declarative_tree.m"
              mdb__declarative_tree__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 261 "declarative_tree.m"
              mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 261 "declarative_tree.m"
              mdb__declarative_tree__V_45_45 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 261 "declarative_tree.m"
              mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 7)));
#line 261 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_48 == mdb__declarative_tree__V_51_51);
#line 261 "declarative_tree.m"
            }
#line 260 "declarative_tree.m"
        }
#line 256 "declarative_tree.m"
      else
#line 257 "declarative_tree.m"
        {
#line 257 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__Event_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 257 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_50_50;
#line 257 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 257 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 257 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 3));
#line 257 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 257 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 258 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_30_30;
#line 258 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_31_31;
#line 258 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_32_32;
#line 258 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_33_33;
#line 258 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_34_34;

#line 258 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 258 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 258 "declarative_tree.m"
            {
#line 258 "declarative_tree.m"
              mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 258 "declarative_tree.m"
              mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 258 "declarative_tree.m"
              mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 3));
#line 258 "declarative_tree.m"
              mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 258 "declarative_tree.m"
              mdb__declarative_tree__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 258 "declarative_tree.m"
              mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 258 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_47 == mdb__declarative_tree__V_50_50);
#line 258 "declarative_tree.m"
            }
#line 257 "declarative_tree.m"
        }
#line 250 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 250 "declarative_tree.m"
  }
#line 89 "declarative_tree.m"
}

#line 88 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 88 "declarative_tree.m"
{
#line 307 "declarative_tree.m"
  {
#line 307 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 307 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 307 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 307 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_6;
#line 1886 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_12;
#line 1876 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_10;
#line 7158 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7160 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_10;
#line 475 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_36;
#line 475 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_38_38;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_39_39;
#line 477 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_40_40;
#line 477 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_41_41;
#line 477 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_42_42;
#line 477 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_43_43;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_44_44;
#line 477 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_45_45;
#line 477 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_46_46;

#line 7185 "mdb.declarative_tree.c"
    {
#line 7187 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_10);
    }
#line 7190 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 7192 "mdb.declarative_tree.c"
      {
#line 7194 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_10 = ((MR_Word) mdb__declarative_tree__conv1_Node0_10);
#line 7196 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 7198 "mdb.declarative_tree.c"
      }
#line 1876 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1879 "declarative_tree.m"
      {
#line 1879 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node0_10)) == (MR_mktag((MR_Integer) 1))))
#line 1878 "declarative_tree.m"
          {
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 0));
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_13_13;
#line 1878 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_14_14;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_15_15;
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_16_16;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_17_17;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_18_18;

#line 1878 "declarative_tree.m"
            mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 3)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 7)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1878 "declarative_tree.m"
          }
#line 1879 "declarative_tree.m"
        else
#line 1879 "declarative_tree.m"
          if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1882 "declarative_tree.m"
            {
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25;
#line 1882 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_26_26;
#line 1882 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_28_28;
#line 1882 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_29_29;

#line 1882 "declarative_tree.m"
              mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 3));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 7)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1882 "declarative_tree.m"
            }
#line 1879 "declarative_tree.m"
          else
#line 1879 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1880 "declarative_tree.m"
              {
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_20_20;
#line 1880 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_21_21;
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_22_22;
#line 1880 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_23_23;

#line 1880 "declarative_tree.m"
                mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 3));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1880 "declarative_tree.m"
              }
#line 1879 "declarative_tree.m"
            else
#line 1879 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1879 "declarative_tree.m"
      }
#line 1886 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1885 "declarative_tree.m"
      mdb__declarative_tree__CallId_6 = mdb__declarative_tree__CallId0_12;
#line 1886 "declarative_tree.m"
    else
#line 1887 "declarative_tree.m"
      {
#line 1887 "declarative_tree.m"
        {
#line 1887 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1887 "declarative_tree.m"
      }
#line 476 "declarative_tree.m"
    {
#line 476 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_6, &mdb__declarative_tree__CallNode_36);
    }
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 0));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 1));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 2)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 3)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 4)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 5)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 6)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_44_44 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 7)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 8)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 9)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 307 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 307 "declarative_tree.m"
  }
#line 88 "declarative_tree.m"
}

#line 87 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 87 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5)
#line 87 "declarative_tree.m"
{
#line 801 "declarative_tree.m"
  {
#line 801 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 801 "declarative_tree.m"
    {
#line 801 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, mdb__declarative_tree__HeadVar__3_3, mdb__declarative_tree__HeadVar__5_5);
#line 801 "declarative_tree.m"
      return;
    }
#line 801 "declarative_tree.m"
  }
#line 87 "declarative_tree.m"
}

#line 908 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
#line 908 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 908 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 908 "declarative_tree.m"
{
#line 908 "declarative_tree.m"
  {
#line 908 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 908 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 908 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 908 "declarative_tree.m"
    {
#line 908 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 908 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 908 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 908 "declarative_tree.m"
  }
#line 908 "declarative_tree.m"
}

#line 86 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__6_6)
#line 86 "declarative_tree.m"
{
#line 817 "declarative_tree.m"
  {
#line 817 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 817 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_12 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 817 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_13 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 817 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ChainStart_14;

#line 818 "declarative_tree.m"
    {
#line 818 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__Ref_13, mdb__declarative_tree__HeadVar__3_3, &mdb__declarative_tree__ChainStart_14);
    }
#line 838 "declarative_tree.m"
    if ((mdb__declarative_tree__ChainStart_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "declarative_tree.m"
      {
#line 840 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 842 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 839 "declarative_tree.m"
      }
#line 838 "declarative_tree.m"
    else
#line 821 "declarative_tree.m"
      {
#line 821 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartLoc_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 0)));
#line 821 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__ArgNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 1)));
#line 821 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__TotalArgs_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 2)));
#line 821 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NodeId_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 3));
#line 821 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartPath_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 4)));
#line 821 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeProcDefnRep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 5)));
#line 7491 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_24_24;

#line 7494 "mdb.declarative_tree.c"
        {
#line 7496 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_24_24);
        }
#line 1809 "declarative_tree.m"
        if ((mdb__declarative_tree__StartLoc_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1809 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 1809 "declarative_tree.m"
        else
#line 1810 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 0;
#line 826 "declarative_tree.m"
        if ((mdb__declarative_tree__MaybeProcDefnRep_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "declarative_tree.m"
        else
#line 827 "declarative_tree.m"
          {
#line 827 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ProcDefnRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeProcDefnRep_20, (MR_Integer) 0)));
#line 833 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Origin0_22;

#line 829 "declarative_tree.m"
            {
#line 829 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_tree__trace_dependency_special_case_8_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__Ref_13, mdb__declarative_tree__StartLoc_15, mdb__declarative_tree__ArgNum_16, mdb__declarative_tree__HeadVar__4_4, mdb__declarative_tree__NodeId_18, &mdb__declarative_tree__Origin0_22);
            }
#line 833 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 832 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__6_6 = mdb__declarative_tree__Origin0_22;
#line 833 "declarative_tree.m"
            else
#line 898 "declarative_tree.m"
              {
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Node_36;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Contour0_37;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Contour_40;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__HeadVars_41;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__GoalRep_42;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__AllTraced_43;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__MaybePrims_44;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_54_54;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_55_55;
#line 898 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_56_56;
#line 908 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_61_61;
#line 908 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_62_62;
#line 908 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_63_63;
#line 908 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_64_64;
#line 909 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_65_65;
#line 909 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_66_66;
#line 909 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_67_67;
#line 909 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_68_68;

#line 899 "declarative_tree.m"
                {
#line 899 "declarative_tree.m"
                  mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__NodeId_18, &mdb__declarative_tree__Node_36);
                }
#line 900 "declarative_tree.m"
                {
#line 900 "declarative_tree.m"
                  mdb__declarative_tree__materialize_contour_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__NodeId_18, mdb__declarative_tree__Node_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Contour0_37);
                }
#line 904 "declarative_tree.m"
                if ((mdb__declarative_tree__StartLoc_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 906 "declarative_tree.m"
                  mdb__declarative_tree__Contour_40 = mdb__declarative_tree__Contour0_37;
#line 904 "declarative_tree.m"
                else
#line 902 "declarative_tree.m"
                  {
#line 902 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_54_70;
#line 902 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_55_71;
#line 902 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_57_73;
#line 902 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_59_75;
#line 902 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CallId_38 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, (MR_Integer) 0));
#line 902 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CallNode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, (MR_Integer) 1)));
#line 902 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_50_50;
#line 902 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_51_51;

#line 7605 "mdb.declarative_tree.c"
                    {
#line 7607 "mdb.declarative_tree.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_54_70);
                    }
#line 7610 "mdb.declarative_tree.c"
                    {
#line 7612 "mdb.declarative_tree.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_55_71);
                    }
#line 7615 "mdb.declarative_tree.c"
                    {
#line 7617 "mdb.declarative_tree.c"
                      mdb__declarative_tree__TypeInfo_57_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7619 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_57_73, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 7621 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_57_73, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_55_71));
#line 7623 "mdb.declarative_tree.c"
                    }
#line 7625 "mdb.declarative_tree.c"
                    {
#line 7627 "mdb.declarative_tree.c"
                      mdb__declarative_tree__TypeInfo_59_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7629 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7631 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_54_70));
#line 7633 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_57_73));
#line 7635 "mdb.declarative_tree.c"
                    }
#line 903 "declarative_tree.m"
                    {
#line 903 "declarative_tree.m"
                      mdb__declarative_tree__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 903 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_51_51, 0) = mdb__declarative_tree__CallId_38;
#line 903 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_51_51, 1) = ((MR_Box) (mdb__declarative_tree__CallNode_39));
#line 903 "declarative_tree.m"
                    }
#line 903 "declarative_tree.m"
                    {
#line 903 "declarative_tree.m"
                      mdb__declarative_tree__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_50_50, 0) = ((MR_Box) (mdb__declarative_tree__V_51_51));
#line 903 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "declarative_tree.m"
                    }
#line 903 "declarative_tree.m"
                    {
#line 903 "declarative_tree.m"
                      mdb__declarative_tree__Contour_40 = mercury__list__append_2_f_0(mdb__declarative_tree__TypeInfo_59_75, mdb__declarative_tree__Contour0_37, mdb__declarative_tree__V_50_50);
                    }
#line 902 "declarative_tree.m"
                  }
#line 908 "declarative_tree.m"
                mdb__declarative_tree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 0)));
#line 908 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 1)));
#line 908 "declarative_tree.m"
                mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 2)));
#line 908 "declarative_tree.m"
                mdb__declarative_tree__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 3)));
#line 908 "declarative_tree.m"
                mdb__declarative_tree__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 4)));
#line 908 "declarative_tree.m"
                {
#line 908 "declarative_tree.m"
                  mdb__declarative_tree__HeadVars_41 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[2], mdb__declarative_tree__V_54_54);
                }
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 0)));
#line 909 "declarative_tree.m"
                mdb__declarative_tree__GoalRep_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 1)));
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 2)));
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 3)));
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 4)));
#line 1797 "declarative_tree.m"
{
#define MR_PROC_LABEL mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0

	MR_Word TracingOn;

		{
#line 1797 "declarative_tree.m"

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif

#line 7704 "mdb.declarative_tree.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_tree__AllTraced_43  = TracingOn;
#line 1797 "declarative_tree.m"
}
#line 912 "declarative_tree.m"
                {
#line 912 "declarative_tree.m"
                  mdb__declarative_tree__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 912 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_56_56, 0) = ((MR_Box) (mdb__declarative_tree__GoalRep_42));
#line 912 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 912 "declarative_tree.m"
                }
#line 911 "declarative_tree.m"
                {
#line 911 "declarative_tree.m"
                  mdb__declarative_tree__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_55_55, 0) = ((MR_Box) (mdb__declarative_tree__V_56_56));
#line 911 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 911 "declarative_tree.m"
                }
#line 911 "declarative_tree.m"
                {
#line 911 "declarative_tree.m"
                  mdb__declarative_tree__MaybePrims_44 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__V_55_55, mdb__declarative_tree__Contour_40, mdb__declarative_tree__StartPath_19, mdb__declarative_tree__ArgNum_16, mdb__declarative_tree__TotalArgs_17, mdb__declarative_tree__HeadVars_41, mdb__declarative_tree__AllTraced_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 934 "declarative_tree.m"
                if ((mdb__declarative_tree__MaybePrims_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "declarative_tree.m"
                else
#line 916 "declarative_tree.m"
                  {
#line 916 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Primitives_45;
#line 916 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_46;
#line 916 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__MaybeClosure_47;
#line 916 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__AdjustedTermPath_48;
#line 916 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_44, (MR_Integer) 0)));

#line 915 "declarative_tree.m"
                    mdb__declarative_tree__Primitives_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 0)));
#line 915 "declarative_tree.m"
                    mdb__declarative_tree__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 1)));
#line 915 "declarative_tree.m"
                    mdb__declarative_tree__MaybeClosure_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 2)));
#line 928 "declarative_tree.m"
                    if ((mdb__declarative_tree__MaybeClosure_47 == (MR_Integer) 0))
#line 930 "declarative_tree.m"
                      mdb__declarative_tree__AdjustedTermPath_48 = mdb__declarative_tree__HeadVar__4_4;
#line 928 "declarative_tree.m"
                    else
#line 927 "declarative_tree.m"
                      {
#line 927 "declarative_tree.m"
                        mdb__declarative_tree__AdjustedTermPath_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedTermPath_48, 0) = ((MR_Box) (mdb__declarative_tree__ArgNum_16));
#line 927 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedTermPath_48, 1) = ((MR_Box) (mdb__declarative_tree__HeadVar__4_4));
#line 927 "declarative_tree.m"
                      }
#line 932 "declarative_tree.m"
                    {
#line 932 "declarative_tree.m"
                      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(mdb__declarative_tree__Primitives_45, mdb__declarative_tree__Var_46, mdb__declarative_tree__AdjustedTermPath_48, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__HeadVar__6_6);
#line 932 "declarative_tree.m"
                      return;
                    }
#line 916 "declarative_tree.m"
                  }
#line 898 "declarative_tree.m"
              }
#line 827 "declarative_tree.m"
          }
#line 821 "declarative_tree.m"
      }
#line 817 "declarative_tree.m"
  }
#line 86 "declarative_tree.m"
}

#line 85 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 85 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3)
#line 85 "declarative_tree.m"
{
#line 233 "declarative_tree.m"
  {
#line 233 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 233 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 233 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 233 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Parent_7;
#line 233 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;
#line 233 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_10;
#line 233 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_28;
#line 233 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallPrecId_29;
#line 233 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ParentCallNode_30;
#line 243 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_31_31;
#line 243 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_32_32;
#line 243 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 243 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;
#line 243 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_35_35;
#line 243 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_36_36;
#line 243 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_37_37;
#line 243 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_38_38;
#line 243 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 245 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_40_40;
#line 245 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_41_41;
#line 245 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_42_42;
#line 245 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_43_43;
#line 245 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_44_44;
#line 245 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_45_45;
#line 245 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_46_46;
#line 245 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_47_47;
#line 245 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_48_48;

#line 234 "declarative_tree.m"
    {
#line 234 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref_6, &mdb__declarative_tree__Node_8);
    }
#line 237 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 238 "declarative_tree.m"
      {
#line 238 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 238 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16;
#line 238 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17;
#line 238 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18;
#line 238 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19;
#line 238 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20;
#line 238 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_21_21;

#line 238 "declarative_tree.m"
        mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 238 "declarative_tree.m"
        mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 238 "declarative_tree.m"
        mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 238 "declarative_tree.m"
        mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 238 "declarative_tree.m"
        mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 238 "declarative_tree.m"
        mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 238 "declarative_tree.m"
        mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 238 "declarative_tree.m"
      }
#line 237 "declarative_tree.m"
    else
#line 237 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 240 "declarative_tree.m"
        {
#line 240 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 240 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_23_23;
#line 240 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_24_24;
#line 240 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_25_25;
#line 240 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_26_26;
#line 240 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_27_27;

#line 240 "declarative_tree.m"
          mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 240 "declarative_tree.m"
          mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 240 "declarative_tree.m"
          mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 240 "declarative_tree.m"
          mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 240 "declarative_tree.m"
          mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 240 "declarative_tree.m"
          mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 240 "declarative_tree.m"
        }
#line 237 "declarative_tree.m"
      else
#line 236 "declarative_tree.m"
        {
#line 236 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 236 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_11_11;
#line 236 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_12_12;
#line 236 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_13_13;
#line 236 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_14_14;

#line 236 "declarative_tree.m"
          mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 236 "declarative_tree.m"
        }
#line 242 "declarative_tree.m"
    {
#line 242 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__Call_28);
    }
#line 243 "declarative_tree.m"
    mdb__declarative_tree__CallPrecId_29 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 0));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 1));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 2)));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 3)));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 4)));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 5)));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 6)));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 7)));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 8)));
#line 243 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 9)));
#line 244 "declarative_tree.m"
    {
#line 244 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallPrecId_29, &mdb__declarative_tree__ParentCallNode_30);
    }
#line 233 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 233 "declarative_tree.m"
      {
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_40_40 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 0));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__Parent_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 1));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 2)));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 3)));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 4)));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 5)));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 6)));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_46_46 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 7)));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 8)));
#line 245 "declarative_tree.m"
        mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 9)));
#line 233 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__3_3 = ((MR_Word) mdb__declarative_tree__Parent_7);
#line 233 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 233 "declarative_tree.m"
      }
#line 233 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 233 "declarative_tree.m"
  }
#line 85 "declarative_tree.m"
}

#line 84 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 84 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3)
#line 84 "declarative_tree.m"
{
#line 283 "declarative_tree.m"
  {
#line 283 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 283 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 283 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 283 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 284 "declarative_tree.m"
    {
#line 284 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 289 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 290 "declarative_tree.m"
      {
#line 290 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_38_38;
#line 290 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_21;
#line 290 "declarative_tree.m"
        MR_Box mdb__declarative_tree__PrecId_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 290 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_34 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 290 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_62;
#line 290 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_63_63;
#line 290 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 290 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 290 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 290 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 290 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 290 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 477 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_64_64;
#line 477 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_65_65;
#line 477 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_66_66;
#line 477 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_67_67;
#line 477 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_68_68;
#line 477 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_69_69;
#line 477 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_70_70;
#line 477 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_71_71;
#line 477 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_72_72;

#line 8110 "mdb.declarative_tree.c"
        {
#line 8112 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_38_38);
        }
#line 291 "declarative_tree.m"
        {
#line 291 "declarative_tree.m"
          mdb__declarative_tree__Atom_21 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_38_38, mdb__declarative_tree__Node_8);
        }
#line 476 "declarative_tree.m"
        {
#line 476 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_34, &mdb__declarative_tree__CallNode_62);
        }
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 0));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 1));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 2)));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 3)));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 4)));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 5)));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 6)));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 7)));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 8)));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 9)));
#line 477 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 290 "declarative_tree.m"
          {
#line 293 "declarative_tree.m"
            {
#line 293 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_tree__missing_answer_special_case_1_p_0(mdb__declarative_tree__Atom_21);
            }
#line 295 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 294 "declarative_tree.m"
              {
#line 294 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "declarative_tree.m"
                MR_Word mdb__declarative_tree__TypeInfo_13_79;

#line 8165 "mdb.declarative_tree.c"
                {
#line 8167 "mdb.declarative_tree.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_13_79);
                }
#line 638 "declarative_tree.m"
                {
#line 638 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_79, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34);
                }
#line 640 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 639 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_29_29;
#line 640 "declarative_tree.m"
                else
#line 641 "declarative_tree.m"
                  {
#line 641 "declarative_tree.m"
                    mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34, mdb__declarative_tree__V_29_29, mdb__declarative_tree__HeadVar__3_3);
                  }
#line 294 "declarative_tree.m"
              }
#line 295 "declarative_tree.m"
            else
#line 296 "declarative_tree.m"
              {
#line 296 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 506 "declarative_tree.m"
                MR_Word mdb__declarative_tree__TypeInfo_15_87;

#line 8197 "mdb.declarative_tree.c"
                {
#line 8199 "mdb.declarative_tree.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_15_87);
                }
#line 506 "declarative_tree.m"
                {
#line 506 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_87, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34);
                }
#line 508 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 507 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_31_31;
#line 508 "declarative_tree.m"
                else
#line 509 "declarative_tree.m"
                  {
#line 509 "declarative_tree.m"
                    mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34, mdb__declarative_tree__V_31_31, mdb__declarative_tree__HeadVar__3_3);
                  }
#line 296 "declarative_tree.m"
              }
#line 295 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 290 "declarative_tree.m"
          }
#line 290 "declarative_tree.m"
      }
#line 289 "declarative_tree.m"
    else
#line 289 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 299 "declarative_tree.m"
        {
#line 299 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_27_27;
#line 299 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_28_28;
#line 299 "declarative_tree.m"
          MR_Box mdb__declarative_tree__PrecId_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 299 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 299 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_41;
#line 299 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_42_42;
#line 299 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 299 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 299 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 299 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 299 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 477 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_43_43;
#line 477 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_44_44;
#line 477 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_45_45;
#line 477 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_46_46;
#line 477 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_47_47;
#line 477 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_48_48;
#line 477 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_49_49;
#line 477 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_50_50;
#line 477 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_51_51;
#line 506 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_15_59;
#line 506 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__TypeInfoIndex_58;

#line 476 "declarative_tree.m"
          {
#line 476 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_41);
          }
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 0));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 1));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 2)));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 3)));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 4)));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 5)));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 6)));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 7)));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 8)));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 9)));
#line 477 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 299 "declarative_tree.m"
            {
#line 301 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = (MR_Integer) 1;
#line 301 "declarative_tree.m"
              mdb__declarative_tree__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8312 "mdb.declarative_tree.c"
              mdb__declarative_tree__TypeInfoIndex_58 = (MR_Integer) 2;
#line 8314 "mdb.declarative_tree.c"
              {
#line 8316 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__TypeInfoIndex_58, &mdb__declarative_tree__TypeInfo_15_59);
              }
#line 506 "declarative_tree.m"
              {
#line 506 "declarative_tree.m"
                mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_59, mdb__declarative_tree__PrecId_35, mdb__declarative_tree__CallId_36);
              }
#line 508 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 507 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_28_28;
#line 508 "declarative_tree.m"
              else
#line 509 "declarative_tree.m"
                {
#line 509 "declarative_tree.m"
                  mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__V_27_27, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_35, mdb__declarative_tree__CallId_36, mdb__declarative_tree__V_28_28, mdb__declarative_tree__HeadVar__3_3);
                }
#line 508 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 299 "declarative_tree.m"
            }
#line 299 "declarative_tree.m"
        }
#line 289 "declarative_tree.m"
      else
#line 286 "declarative_tree.m"
        {
#line 286 "declarative_tree.m"
          MR_Box mdb__declarative_tree__PrecId_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 286 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 286 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_32_32;
#line 286 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 286 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 286 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 286 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 638 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_13_94;
#line 638 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__TypeInfoIndex_93;

#line 287 "declarative_tree.m"
          {
#line 287 "declarative_tree.m"
            mdb__declarative_tree__succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10);
          }
#line 286 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 286 "declarative_tree.m"
            {
#line 288 "declarative_tree.m"
              mdb__declarative_tree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8375 "mdb.declarative_tree.c"
              mdb__declarative_tree__TypeInfoIndex_93 = (MR_Integer) 2;
#line 8377 "mdb.declarative_tree.c"
              {
#line 8379 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__TypeInfoIndex_93, &mdb__declarative_tree__TypeInfo_13_94);
              }
#line 638 "declarative_tree.m"
              {
#line 638 "declarative_tree.m"
                mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_94, mdb__declarative_tree__PrecId_9, mdb__declarative_tree__CallId_10);
              }
#line 640 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 639 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_32_32;
#line 640 "declarative_tree.m"
              else
#line 641 "declarative_tree.m"
                {
#line 641 "declarative_tree.m"
                  mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_9, mdb__declarative_tree__CallId_10, mdb__declarative_tree__V_32_32, mdb__declarative_tree__HeadVar__3_3);
                }
#line 640 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 286 "declarative_tree.m"
            }
#line 286 "declarative_tree.m"
        }
#line 283 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 283 "declarative_tree.m"
  }
#line 84 "declarative_tree.m"
}

#line 83 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 83 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 83 "declarative_tree.m"
{
#line 215 "declarative_tree.m"
  {
#line 215 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 215 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 215 "declarative_tree.m"
    MR_Box mdb__declarative_tree__BugRef_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 215 "declarative_tree.m"
    MR_Box mdb__declarative_tree__InadmissibleRef_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 215 "declarative_tree.m"
    MR_Word mdb__declarative_tree__BugAtom_9;
#line 215 "declarative_tree.m"
    MR_Word mdb__declarative_tree__InadmissibleAtom_10;
#line 215 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Event_11;
#line 215 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_16;
#line 215 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_62;

#line 215 "declarative_tree.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 128 "declarative_tree.m"
    {
#line 128 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__BugRef_7, &mdb__declarative_tree__Node_16);
    }
#line 132 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_16)) == (MR_mktag((MR_Integer) 1))))
#line 130 "declarative_tree.m"
      {
#line 130 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_51;
#line 130 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 130 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_48;
#line 130 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_49;
#line 130 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 0));
#line 130 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 130 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 3)));
#line 130 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 130 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 130 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 6)));
#line 130 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 7)));

#line 120 "declarative_tree.m"
        {
#line 120 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_18, &mdb__declarative_tree__CallNode_48);
        }
#line 8486 "mdb.declarative_tree.c"
        {
#line 8488 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_51);
        }
#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_49 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_51, mdb__declarative_tree__CallNode_48);
        }
#line 122 "declarative_tree.m"
        mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_49;
#line 130 "declarative_tree.m"
      }
#line 132 "declarative_tree.m"
    else
#line 132 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 136 "declarative_tree.m"
        {
#line 136 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_44;
#line 136 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 136 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_41;
#line 136 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_42;
#line 136 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 136 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 3));
#line 136 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 136 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 136 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 6)));
#line 136 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 7)));

#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_37, &mdb__declarative_tree__CallNode_41);
          }
#line 8532 "mdb.declarative_tree.c"
          {
#line 8534 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_44);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_42 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_44, mdb__declarative_tree__CallNode_41);
          }
#line 122 "declarative_tree.m"
          mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_42;
#line 136 "declarative_tree.m"
        }
#line 132 "declarative_tree.m"
      else
#line 133 "declarative_tree.m"
        {
#line 133 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_58;
#line 133 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 133 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_55;
#line 133 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_56;
#line 133 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 133 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 3));
#line 133 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 133 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 133 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 6)));

#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_55);
          }
#line 8574 "mdb.declarative_tree.c"
          {
#line 8576 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_58);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_56 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_58, mdb__declarative_tree__CallNode_55);
          }
#line 122 "declarative_tree.m"
          mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_56;
#line 133 "declarative_tree.m"
        }
#line 217 "declarative_tree.m"
    {
#line 217 "declarative_tree.m"
      mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__InadmissibleRef_8, &mdb__declarative_tree__InadmissibleAtom_10);
    }
#line 144 "declarative_tree.m"
    {
#line 144 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__BugRef_7, &mdb__declarative_tree__Node_62);
    }
#line 147 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_62)) == (MR_mktag((MR_Integer) 1))))
#line 146 "declarative_tree.m"
      {
#line 146 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_63_63 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 0));
#line 146 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 146 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 146 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 3)));
#line 146 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_67_67;
#line 146 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_68_68;
#line 146 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_69_69;

#line 146 "declarative_tree.m"
        mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 146 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 146 "declarative_tree.m"
        mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 146 "declarative_tree.m"
        mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 7)));
#line 146 "declarative_tree.m"
      }
#line 147 "declarative_tree.m"
    else
#line 147 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 150 "declarative_tree.m"
        {
#line 150 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_75_75 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 150 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 150 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_77_77 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 3));
#line 150 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 150 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_79_79;
#line 150 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_80_80;

#line 150 "declarative_tree.m"
          mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 150 "declarative_tree.m"
          mdb__declarative_tree__V_79_79 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 150 "declarative_tree.m"
          mdb__declarative_tree__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 7)));
#line 150 "declarative_tree.m"
        }
#line 147 "declarative_tree.m"
      else
#line 148 "declarative_tree.m"
        {
#line 148 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_70_70 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 148 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_71_71 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 148 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 3));
#line 148 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_73_73;
#line 148 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_74_74;

#line 148 "declarative_tree.m"
          mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 148 "declarative_tree.m"
          mdb__declarative_tree__V_73_73 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 148 "declarative_tree.m"
          mdb__declarative_tree__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 148 "declarative_tree.m"
        }
#line 215 "declarative_tree.m"
    {
#line 215 "declarative_tree.m"
      MR_Word base;
#line 215 "declarative_tree.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 215 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__4_4 = base;
#line 215 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__BugAtom_9));
#line 215 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 1) = NULL;
#line 215 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__InadmissibleAtom_10));
#line 215 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_tree__Event_11));
#line 215 "declarative_tree.m"
    }
#line 215 "declarative_tree.m"
  }
#line 83 "declarative_tree.m"
}

#line 82 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 82 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3)
#line 82 "declarative_tree.m"
{
#line 193 "declarative_tree.m"
  {
#line 193 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 193 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 193 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 193 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 194 "declarative_tree.m"
    {
#line 194 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 201 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 196 "declarative_tree.m"
      {
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_48;
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_40_84;
#line 196 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 196 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Event_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__InitDeclAtom_17;
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__FinalDeclAtom_18;
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Contour_19;
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_45;
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_46;
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ExitAtom_52;
#line 196 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_53;
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Call_54;
#line 196 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CallIoSeq_55;
#line 196 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__ExitIoSeq_56;
#line 196 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 196 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 196 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 196 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 196 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 196 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 106 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_60_60;
#line 106 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_61_61;
#line 106 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_62_62;
#line 106 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_63_63;
#line 106 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_64_64;
#line 106 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_65_65;
#line 106 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_66_66;
#line 108 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_67_67;
#line 108 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_68_68;
#line 108 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_69_69;
#line 108 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_70_70;
#line 108 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_71_71;
#line 108 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_72_72;
#line 108 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_73_73;
#line 108 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_74_74;
#line 108 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_75_75;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_76_76;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_77_77;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_78_78;
#line 109 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_79_79;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_80_80;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_81_81;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_82_82;

#line 120 "declarative_tree.m"
        {
#line 120 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__CallNode_45);
        }
#line 8825 "mdb.declarative_tree.c"
        {
#line 8827 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_48);
        }
#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_48, mdb__declarative_tree__CallNode_45);
        }
#line 122 "declarative_tree.m"
        mdb__declarative_tree__InitDeclAtom_17 = (MR_Word) mdb__declarative_tree__CallAtom_46;
#line 8837 "mdb.declarative_tree.c"
        {
#line 8839 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_84);
        }
#line 105 "declarative_tree.m"
        {
#line 105 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_52 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_84, mdb__declarative_tree__Node_8);
        }
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__CallId_53 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_64_64 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
        {
#line 107 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_53, &mdb__declarative_tree__Call_54);
        }
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 0));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_68_68 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 1));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 2)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 3)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 4)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 5)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 6)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_74_74 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 7)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__CallIoSeq_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 8)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 9)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_77_77 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_78_78 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__ExitIoSeq_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_55 == mdb__declarative_tree__ExitIoSeq_56);
#line 112 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 111 "declarative_tree.m"
          {
#line 111 "declarative_tree.m"
            {
#line 111 "declarative_tree.m"
              mdb__declarative_tree__FinalDeclAtom_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_52));
#line 111 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "declarative_tree.m"
            }
#line 111 "declarative_tree.m"
          }
#line 112 "declarative_tree.m"
        else
#line 113 "declarative_tree.m"
          {
#line 113 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_58_58;
#line 113 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_59_59;

#line 114 "declarative_tree.m"
            {
#line 114 "declarative_tree.m"
              mdb__declarative_tree__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_59_59, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_55));
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_59_59, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_56));
#line 114 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
            {
#line 113 "declarative_tree.m"
              mdb__declarative_tree__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_58_58, 0) = ((MR_Box) (mdb__declarative_tree__V_59_59));
#line 113 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
            {
#line 113 "declarative_tree.m"
              mdb__declarative_tree__FinalDeclAtom_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_52));
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 1) = ((MR_Box) (mdb__declarative_tree__V_58_58));
#line 113 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
          }
#line 199 "declarative_tree.m"
        {
#line 199 "declarative_tree.m"
          mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_8, &mdb__declarative_tree__Contour_19);
        }
#line 200 "declarative_tree.m"
        {
#line 200 "declarative_tree.m"
          MR_Word base;
#line 200 "declarative_tree.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 200 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__3_3 = base;
#line 200 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__InitDeclAtom_17));
#line 200 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__FinalDeclAtom_18));
#line 200 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__Contour_19));
#line 200 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_tree__Event_13));
#line 200 "declarative_tree.m"
        }
#line 196 "declarative_tree.m"
      }
#line 201 "declarative_tree.m"
    else
#line 201 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 206 "declarative_tree.m"
        {
#line 206 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_41;
#line 206 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Exception_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 206 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 206 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__Event_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 206 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DeclAtom_34;
#line 206 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_38;
#line 206 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_39;
#line 206 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 206 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 206 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 206 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));

#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_32, &mdb__declarative_tree__CallNode_38);
          }
#line 9020 "mdb.declarative_tree.c"
          {
#line 9022 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_41);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_39 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_41, mdb__declarative_tree__CallNode_38);
          }
#line 122 "declarative_tree.m"
          mdb__declarative_tree__DeclAtom_34 = (MR_Word) mdb__declarative_tree__CallAtom_39;
#line 208 "declarative_tree.m"
          {
#line 208 "declarative_tree.m"
            MR_Word base;
#line 208 "declarative_tree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 208 "declarative_tree.m"
            *mdb__declarative_tree__HeadVar__3_3 = base;
#line 208 "declarative_tree.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_34));
#line 208 "declarative_tree.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__Exception_27));
#line 208 "declarative_tree.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_tree__Event_33));
#line 208 "declarative_tree.m"
          }
#line 206 "declarative_tree.m"
        }
#line 201 "declarative_tree.m"
      else
#line 202 "declarative_tree.m"
        {
#line 202 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_91;
#line 202 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DeclAtom_24;
#line 202 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 202 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__Event_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 202 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_88;
#line 202 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_89;
#line 202 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 202 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 202 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 202 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));

#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_30, &mdb__declarative_tree__CallNode_88);
          }
#line 9080 "mdb.declarative_tree.c"
          {
#line 9082 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_91);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_89 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_91, mdb__declarative_tree__CallNode_88);
          }
#line 122 "declarative_tree.m"
          mdb__declarative_tree__DeclAtom_24 = (MR_Word) mdb__declarative_tree__CallAtom_89;
#line 204 "declarative_tree.m"
          {
#line 204 "declarative_tree.m"
            MR_Word base;
#line 204 "declarative_tree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "declarative_tree.m"
            *mdb__declarative_tree__HeadVar__3_3 = base;
#line 204 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_24));
#line 204 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__Event_31));
#line 204 "declarative_tree.m"
          }
#line 202 "declarative_tree.m"
        }
#line 193 "declarative_tree.m"
  }
#line 82 "declarative_tree.m"
}

#line 81 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 81 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3)
#line 81 "declarative_tree.m"
{
#line 158 "declarative_tree.m"
  {
#line 158 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 158 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 158 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 158 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 159 "declarative_tree.m"
    {
#line 159 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 165 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 166 "declarative_tree.m"
      {
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_52;
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_40_88;
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__InitDeclAtom_24;
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__FinalDeclAtom_25;
#line 166 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_49;
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_50;
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ExitAtom_56;
#line 166 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_57;
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Call_58;
#line 166 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CallIoSeq_59;
#line 166 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__ExitIoSeq_60;
#line 166 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 166 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 166 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 166 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 166 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 166 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 166 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 106 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_64_64;
#line 106 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_65_65;
#line 106 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_66_66;
#line 106 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_67_67;
#line 106 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_68_68;
#line 106 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_69_69;
#line 106 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_70_70;
#line 108 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_71_71;
#line 108 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_72_72;
#line 108 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_73_73;
#line 108 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_74_74;
#line 108 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_75_75;
#line 108 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_76_76;
#line 108 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_77_77;
#line 108 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_78_78;
#line 108 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_79_79;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_80_80;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_81_81;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_82_82;
#line 109 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_83_83;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_84_84;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_85_85;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_86_86;

#line 120 "declarative_tree.m"
        {
#line 120 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_49);
        }
#line 9236 "mdb.declarative_tree.c"
        {
#line 9238 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_52);
        }
#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_50 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_52, mdb__declarative_tree__CallNode_49);
        }
#line 122 "declarative_tree.m"
        mdb__declarative_tree__InitDeclAtom_24 = (MR_Word) mdb__declarative_tree__CallAtom_50;
#line 9248 "mdb.declarative_tree.c"
        {
#line 9250 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_88);
        }
#line 105 "declarative_tree.m"
        {
#line 105 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_56 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_88, mdb__declarative_tree__Node_8);
        }
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__CallId_57 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_68_68 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
        {
#line 107 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_57, &mdb__declarative_tree__Call_58);
        }
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_71_71 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 0));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 1));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 2)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 3)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 4)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 5)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 6)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 7)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__CallIoSeq_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 8)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 9)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_80_80 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_81_81 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_82_82 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_85_85 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__ExitIoSeq_60 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_59 == mdb__declarative_tree__ExitIoSeq_60);
#line 112 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 111 "declarative_tree.m"
          {
#line 111 "declarative_tree.m"
            {
#line 111 "declarative_tree.m"
              mdb__declarative_tree__FinalDeclAtom_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_56));
#line 111 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "declarative_tree.m"
            }
#line 111 "declarative_tree.m"
          }
#line 112 "declarative_tree.m"
        else
#line 113 "declarative_tree.m"
          {
#line 113 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_62_62;
#line 113 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_63_63;

#line 114 "declarative_tree.m"
            {
#line 114 "declarative_tree.m"
              mdb__declarative_tree__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_63_63, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_59));
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_63_63, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_60));
#line 114 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
            {
#line 113 "declarative_tree.m"
              mdb__declarative_tree__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_62_62, 0) = ((MR_Box) (mdb__declarative_tree__V_63_63));
#line 113 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
            {
#line 113 "declarative_tree.m"
              mdb__declarative_tree__FinalDeclAtom_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_56));
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 1) = ((MR_Box) (mdb__declarative_tree__V_62_62));
#line 113 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
          }
#line 169 "declarative_tree.m"
        {
#line 169 "declarative_tree.m"
          MR_Word base;
#line 169 "declarative_tree.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 169 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__3_3 = base;
#line 169 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 169 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__InitDeclAtom_24));
#line 169 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__FinalDeclAtom_25));
#line 169 "declarative_tree.m"
        }
#line 166 "declarative_tree.m"
      }
#line 165 "declarative_tree.m"
    else
#line 165 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 171 "declarative_tree.m"
        {
#line 171 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_45;
#line 171 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Exception_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 171 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 171 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DeclAtom_38;
#line 171 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_42;
#line 171 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_43;
#line 171 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 171 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 171 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 171 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 171 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));

#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_37, &mdb__declarative_tree__CallNode_42);
          }
#line 9424 "mdb.declarative_tree.c"
          {
#line 9426 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_45);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_43 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_45, mdb__declarative_tree__CallNode_42);
          }
#line 122 "declarative_tree.m"
          mdb__declarative_tree__DeclAtom_38 = (MR_Word) mdb__declarative_tree__CallAtom_43;
#line 173 "declarative_tree.m"
          {
#line 173 "declarative_tree.m"
            MR_Word base;
#line 173 "declarative_tree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 173 "declarative_tree.m"
            *mdb__declarative_tree__HeadVar__3_3 = base;
#line 173 "declarative_tree.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 173 "declarative_tree.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtom_38));
#line 173 "declarative_tree.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_tree__Exception_28));
#line 173 "declarative_tree.m"
          }
#line 171 "declarative_tree.m"
        }
#line 165 "declarative_tree.m"
      else
#line 161 "declarative_tree.m"
        {
#line 161 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_95;
#line 161 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 161 "declarative_tree.m"
          MR_Box mdb__declarative_tree__RedoId_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 161 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DeclAtom_15;
#line 161 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Answers_16;
#line 161 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_92;
#line 161 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_93;
#line 161 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 161 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 161 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 161 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));

#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__CallNode_92);
          }
#line 9486 "mdb.declarative_tree.c"
          {
#line 9488 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_95);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_93 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_95, mdb__declarative_tree__CallNode_92);
          }
#line 122 "declarative_tree.m"
          mdb__declarative_tree__DeclAtom_15 = (MR_Word) mdb__declarative_tree__CallAtom_93;
#line 163 "declarative_tree.m"
          {
#line 163 "declarative_tree.m"
            mdb__declarative_tree__get_answers_4_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__RedoId_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Answers_16);
          }
#line 164 "declarative_tree.m"
          {
#line 164 "declarative_tree.m"
            MR_Word base;
#line 164 "declarative_tree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 164 "declarative_tree.m"
            *mdb__declarative_tree__HeadVar__3_3 = base;
#line 164 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 164 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtom_15));
#line 164 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__Answers_16));
#line 164 "declarative_tree.m"
          }
#line 161 "declarative_tree.m"
        }
#line 158 "declarative_tree.m"
  }
#line 81 "declarative_tree.m"
}

#line 40 "declarative_tree.m"
void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0(
#line 40 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_S_8,
#line 40 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 40 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 40 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 40 "declarative_tree.m"
{
#line 40 "declarative_tree.m"
  {
#line 40 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 40 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_6 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 40 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_7 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 40 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_6 == mdb__declarative_tree__CastY_7);
#line 40 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9552 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "declarative_tree.m"
    else
#line 40 "declarative_tree.m"
      {
#line 40 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 40 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_5_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));

#line 40 "declarative_tree.m"
        {
#line 40 "declarative_tree.m"
          mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_S_8, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_5_5);
#line 40 "declarative_tree.m"
          return;
        }
#line 40 "declarative_tree.m"
      }
#line 40 "declarative_tree.m"
  }
#line 40 "declarative_tree.m"
}

#line 40 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0(
#line 40 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_S_7,
#line 40 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 40 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 40 "declarative_tree.m"
{
#line 40 "declarative_tree.m"
  {
#line 40 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 40 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_5 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 40 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_6 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 40 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_5 == mdb__declarative_tree__CastY_6);
#line 40 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 40 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 40 "declarative_tree.m"
    else
#line 40 "declarative_tree.m"
      {
#line 40 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_3_3 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 40 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));

#line 9612 "mdb.declarative_tree.c"
        {
#line 9614 "mdb.declarative_tree.c"
          return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_S_7, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_4_4);
        }
#line 40 "declarative_tree.m"
      }
#line 40 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 40 "declarative_tree.m"
  }
#line 40 "declarative_tree.m"
}

#line 778 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_15,
#line 778 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 778 "declarative_tree.m"
{
#line 778 "declarative_tree.m"
  {
#line 778 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 778 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_13 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 778 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_14 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 778 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_13 == mdb__declarative_tree__CastY_14);
#line 778 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9652 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 778 "declarative_tree.m"
    else
#line 778 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 778 "declarative_tree.m"
        else
#line 9664 "mdb.declarative_tree.c"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 1;
#line 778 "declarative_tree.m"
      else
#line 778 "declarative_tree.m"
        {
#line 778 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 778 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));

#line 778 "declarative_tree.m"
          if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9677 "mdb.declarative_tree.c"
            *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 2;
#line 778 "declarative_tree.m"
          else
#line 778 "declarative_tree.m"
            {
#line 778 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0));
#line 778 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 778 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_12_12;

#line 778 "declarative_tree.m"
              {
#line 778 "declarative_tree.m"
                mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_15, &mdb__declarative_tree__V_12_12, mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_10_10);
              }
#line 9695 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_12_12 == (MR_Integer) 0);
#line 778 "declarative_tree.m"
              mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 778 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 778 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_12_12;
#line 778 "declarative_tree.m"
              else
#line 778 "declarative_tree.m"
                {
#line 778 "declarative_tree.m"
                  mdb__declarative_execution____Compare____trace_node_1_0(mdb__declarative_tree__TypeInfo_for_R_15, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_18_18, mdb__declarative_tree__V_11_11);
#line 778 "declarative_tree.m"
                  return;
                }
#line 778 "declarative_tree.m"
            }
#line 778 "declarative_tree.m"
        }
#line 778 "declarative_tree.m"
  }
#line 778 "declarative_tree.m"
}

#line 778 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 778 "declarative_tree.m"
{
#line 778 "declarative_tree.m"
  {
#line 778 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 778 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 778 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 778 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 778 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 778 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 778 "declarative_tree.m"
    else
#line 778 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "declarative_tree.m"
        {
#line 778 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__CastX_3 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 778 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__CastY_4 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 778 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastY_4 == mdb__declarative_tree__CastX_3);
#line 778 "declarative_tree.m"
        }
#line 778 "declarative_tree.m"
      else
#line 778 "declarative_tree.m"
        {
#line 778 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0));
#line 778 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 778 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_7_7;
#line 778 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_8_8;

#line 778 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 778 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 778 "declarative_tree.m"
            {
#line 778 "declarative_tree.m"
              mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 778 "declarative_tree.m"
              mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 9785 "mdb.declarative_tree.c"
              {
#line 9787 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_11, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_7_7);
              }
#line 778 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 9792 "mdb.declarative_tree.c"
                {
#line 9794 "mdb.declarative_tree.c"
                  return mdb__declarative_tree__succeeded = mdb__declarative_execution____Unify____trace_node_1_0(mdb__declarative_tree__TypeInfo_for_R_11, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_8_8);
                }
#line 778 "declarative_tree.m"
            }
#line 778 "declarative_tree.m"
        }
#line 778 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 778 "declarative_tree.m"
  }
#line 778 "declarative_tree.m"
}

#line 1120 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_14,
#line 1120 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 1120 "declarative_tree.m"
{
#line 1120 "declarative_tree.m"
  {
#line 1120 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1120 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_12 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 1120 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_13 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 1120 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_12 == mdb__declarative_tree__CastY_13);
#line 1120 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9834 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 1120 "declarative_tree.m"
    else
#line 1120 "declarative_tree.m"
      {
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1120 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 1120 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_16_16;

#line 9857 "mdb.declarative_tree.c"
        {
#line 9859 "mdb.declarative_tree.c"
          mdb__declarative_tree__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9861 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_16_16, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
#line 9863 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_16_16, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_for_R_14));
#line 9865 "mdb.declarative_tree.c"
        }
#line 1120 "declarative_tree.m"
        {
#line 1120 "declarative_tree.m"
          mercury__list____Compare____list_1_0(mdb__declarative_tree__TypeInfo_16_16, &mdb__declarative_tree__V_10_10, (MR_Word) mdb__declarative_tree__V_4_4, (MR_Word) mdb__declarative_tree__V_7_7);
        }
#line 9872 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_10_10 == (MR_Integer) 0);
#line 1120 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1120 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1120 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_10_10;
#line 1120 "declarative_tree.m"
        else
#line 1120 "declarative_tree.m"
          {
#line 1120 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_11_11;

#line 1120 "declarative_tree.m"
            {
#line 1120 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_11_11, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_8_8);
            }
#line 9892 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_11_11 == (MR_Integer) 0);
#line 1120 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1120 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1120 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_11_11;
#line 1120 "declarative_tree.m"
            else
#line 1120 "declarative_tree.m"
              {
#line 1120 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_21_21 = (MR_Integer) mdb__declarative_tree__V_6_6;
#line 1120 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_22_22 = (MR_Integer) mdb__declarative_tree__V_9_9;

#line 1120 "declarative_tree.m"
                {
#line 1120 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_21_21, mdb__declarative_tree__V_22_22);
#line 1120 "declarative_tree.m"
                  return;
                }
#line 1120 "declarative_tree.m"
              }
#line 1120 "declarative_tree.m"
          }
#line 1120 "declarative_tree.m"
      }
#line 1120 "declarative_tree.m"
  }
#line 1120 "declarative_tree.m"
}

#line 1120 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1120 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 1120 "declarative_tree.m"
{
#line 1120 "declarative_tree.m"
  {
#line 1120 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1120 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 1120 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 1120 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 1120 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1120 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 1120 "declarative_tree.m"
    else
#line 1120 "declarative_tree.m"
      {
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_13_13;
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1120 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1120 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1120 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));

#line 9972 "mdb.declarative_tree.c"
        {
#line 9974 "mdb.declarative_tree.c"
          mdb__declarative_tree__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9976 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_13_13, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
#line 9978 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_13_13, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_for_R_11));
#line 9980 "mdb.declarative_tree.c"
        }
#line 9982 "mdb.declarative_tree.c"
        {
#line 9984 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_tree__TypeInfo_13_13, (MR_Word) mdb__declarative_tree__V_3_3, (MR_Word) mdb__declarative_tree__V_6_6);
        }
#line 1120 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1120 "declarative_tree.m"
          {
#line 9991 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_7_7);
#line 1120 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 9995 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_5_5 == mdb__declarative_tree__V_8_8);
#line 1120 "declarative_tree.m"
          }
#line 1120 "declarative_tree.m"
      }
#line 1120 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1120 "declarative_tree.m"
  }
#line 1120 "declarative_tree.m"
}

#line 1751 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
#line 1751 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1751 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1751 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 1751 "declarative_tree.m"
{
#line 1751 "declarative_tree.m"
  {
#line 1751 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1751 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 1751 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 1751 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_15 == mdb__declarative_tree__CastY_16);
#line 1751 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10032 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 1751 "declarative_tree.m"
    else
#line 1751 "declarative_tree.m"
      {
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1751 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 1751 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3)));
#line 1751 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12;

#line 1751 "declarative_tree.m"
        {
#line 1751 "declarative_tree.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_12_12, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_8_8);
        }
#line 10062 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_12_12 == (MR_Integer) 0);
#line 1751 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1751 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1751 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_12_12;
#line 1751 "declarative_tree.m"
        else
#line 1751 "declarative_tree.m"
          {
#line 1751 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_13_13;

#line 1751 "declarative_tree.m"
            {
#line 1751 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_13_13, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_9_9);
            }
#line 10082 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_13_13 == (MR_Integer) 0);
#line 1751 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1751 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1751 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_13_13;
#line 1751 "declarative_tree.m"
            else
#line 1751 "declarative_tree.m"
              {
#line 1751 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_14_14;

#line 1751 "declarative_tree.m"
                {
#line 1751 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_14_14, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_10_10);
                }
#line 10102 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_14_14 == (MR_Integer) 0);
#line 1751 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1751 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1751 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_14_14;
#line 1751 "declarative_tree.m"
                else
#line 1751 "declarative_tree.m"
                  {
#line 1751 "declarative_tree.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_11_11);
#line 1751 "declarative_tree.m"
                    return;
                  }
#line 1751 "declarative_tree.m"
              }
#line 1751 "declarative_tree.m"
          }
#line 1751 "declarative_tree.m"
      }
#line 1751 "declarative_tree.m"
  }
#line 1751 "declarative_tree.m"
}

#line 1751 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
#line 1751 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1751 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 1751 "declarative_tree.m"
{
#line 1751 "declarative_tree.m"
  {
#line 1751 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1751 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_11 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 1751 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_12 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 1751 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_11 == mdb__declarative_tree__CastY_12);
#line 1751 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1751 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 1751 "declarative_tree.m"
    else
#line 1751 "declarative_tree.m"
      {
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1751 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1751 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1751 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));

#line 10175 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_7_7) == 0);
#line 1751 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1751 "declarative_tree.m"
          {
#line 10181 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_8_8);
#line 1751 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1751 "declarative_tree.m"
              {
#line 10187 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_9_9) == 0);
#line 1751 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 10191 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_10_10) == 0);
#line 1751 "declarative_tree.m"
              }
#line 1751 "declarative_tree.m"
          }
#line 1751 "declarative_tree.m"
      }
#line 1751 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1751 "declarative_tree.m"
  }
#line 1751 "declarative_tree.m"
}

#line 785 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
#line 785 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 785 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 785 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 785 "declarative_tree.m"
{
#line 785 "declarative_tree.m"
  {
#line 785 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 785 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar1_4 = mdb__declarative_tree__HeadVar__2_2;
#line 785 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar2_5 = mdb__declarative_tree__HeadVar__3_3;

#line 785 "declarative_tree.m"
    {
#line 785 "declarative_tree.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[7], mdb__declarative_tree__HeadVar__1_1, ((MR_Box) (mdb__declarative_tree__Cast_HeadVar1_4)), ((MR_Box) (mdb__declarative_tree__Cast_HeadVar2_5)));
#line 785 "declarative_tree.m"
      return;
    }
#line 785 "declarative_tree.m"
  }
#line 785 "declarative_tree.m"
}

#line 785 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
#line 785 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 785 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 785 "declarative_tree.m"
{
#line 785 "declarative_tree.m"
  {
#line 785 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 785 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar1_3 = mdb__declarative_tree__HeadVar__1_1;
#line 785 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar2_4 = mdb__declarative_tree__HeadVar__2_2;

#line 785 "declarative_tree.m"
    {
#line 785 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[7], ((MR_Box) (mdb__declarative_tree__Cast_HeadVar1_3)), ((MR_Box) (mdb__declarative_tree__Cast_HeadVar2_4)));
    }
#line 785 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 785 "declarative_tree.m"
  }
#line 785 "declarative_tree.m"
}

#line 782 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
#line 782 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 782 "declarative_tree.m"
{
#line 782 "declarative_tree.m"
  {
#line 782 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 782 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 782 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 782 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 782 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10292 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 782 "declarative_tree.m"
    else
#line 782 "declarative_tree.m"
      {
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8;

#line 782 "declarative_tree.m"
        {
#line 782 "declarative_tree.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], &mdb__declarative_tree__V_8_8, ((MR_Box) (mdb__declarative_tree__V_4_4)), ((MR_Box) (mdb__declarative_tree__V_6_6)));
        }
#line 10314 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_8_8 == (MR_Integer) 0);
#line 782 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 782 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 782 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_8_8;
#line 782 "declarative_tree.m"
        else
#line 782 "declarative_tree.m"
          {
#line 782 "declarative_tree.m"
            mdbcomp__goal_path____Compare____reverse_goal_path_0_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_7_7);
#line 782 "declarative_tree.m"
            return;
          }
#line 782 "declarative_tree.m"
      }
#line 782 "declarative_tree.m"
  }
#line 782 "declarative_tree.m"
}

#line 782 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
#line 782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 782 "declarative_tree.m"
{
#line 782 "declarative_tree.m"
  {
#line 782 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 782 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_7 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 782 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_8 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 782 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_7 == mdb__declarative_tree__CastY_8);
#line 782 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 782 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 782 "declarative_tree.m"
    else
#line 782 "declarative_tree.m"
      {
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 782 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));

#line 10375 "mdb.declarative_tree.c"
        {
#line 10377 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], ((MR_Box) (mdb__declarative_tree__V_3_3)), ((MR_Box) (mdb__declarative_tree__V_5_5)));
        }
#line 782 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 10382 "mdb.declarative_tree.c"
          {
#line 10384 "mdb.declarative_tree.c"
            return mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_6_6);
          }
#line 782 "declarative_tree.m"
      }
#line 782 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 782 "declarative_tree.m"
  }
#line 782 "declarative_tree.m"
}

#line 32 "declarative_tree.m"
void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0(
#line 32 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_8,
#line 32 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 32 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 32 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 32 "declarative_tree.m"
{
#line 32 "declarative_tree.m"
  {
#line 32 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 32 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_6 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 32 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_7 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 32 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_6 == mdb__declarative_tree__CastY_7);
#line 32 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10422 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "declarative_tree.m"
    else
#line 32 "declarative_tree.m"
      {
#line 32 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 32 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_5_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));

#line 32 "declarative_tree.m"
        {
#line 32 "declarative_tree.m"
          mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_8, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_5_5);
#line 32 "declarative_tree.m"
          return;
        }
#line 32 "declarative_tree.m"
      }
#line 32 "declarative_tree.m"
  }
#line 32 "declarative_tree.m"
}

#line 32 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0(
#line 32 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_7,
#line 32 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 32 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 32 "declarative_tree.m"
{
#line 32 "declarative_tree.m"
  {
#line 32 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 32 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_5 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 32 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_6 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 32 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_5 == mdb__declarative_tree__CastY_6);
#line 32 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 32 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 32 "declarative_tree.m"
    else
#line 32 "declarative_tree.m"
      {
#line 32 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_3_3 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 32 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));

#line 10482 "mdb.declarative_tree.c"
        {
#line 10484 "mdb.declarative_tree.c"
          return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_7, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_4_4);
        }
#line 32 "declarative_tree.m"
      }
#line 32 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 32 "declarative_tree.m"
  }
#line 32 "declarative_tree.m"
}

#line 748 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_35,
#line 748 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 748 "declarative_tree.m"
{
#line 748 "declarative_tree.m"
  {
#line 748 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 748 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_33 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 748 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_34 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 748 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_33 == mdb__declarative_tree__CastY_34);
#line 748 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10522 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 748 "declarative_tree.m"
    else
#line 748 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 748 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 748 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 748 "declarative_tree.m"
        else
#line 10534 "mdb.declarative_tree.c"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 2;
#line 748 "declarative_tree.m"
      else
#line 748 "declarative_tree.m"
        {
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 748 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3));
#line 748 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 748 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));

#line 748 "declarative_tree.m"
          if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10555 "mdb.declarative_tree.c"
            *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 1;
#line 748 "declarative_tree.m"
          else
#line 748 "declarative_tree.m"
            {
#line 748 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 748 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 748 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 748 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3));
#line 748 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 4)));
#line 748 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 5)));
#line 748 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_16_16;

#line 748 "declarative_tree.m"
              {
#line 748 "declarative_tree.m"
                mdb__declarative_tree____Compare____start_loc_1_0(mdb__declarative_tree__TypeInfo_for_R_35, &mdb__declarative_tree__V_16_16, mdb__declarative_tree__V_47_47, mdb__declarative_tree__V_10_10);
              }
#line 10581 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == (MR_Integer) 0);
#line 748 "declarative_tree.m"
              mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 748 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_16_16;
#line 748 "declarative_tree.m"
              else
#line 748 "declarative_tree.m"
                {
#line 748 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_17_17;

#line 748 "declarative_tree.m"
                  {
#line 748 "declarative_tree.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_17_17, mdb__declarative_tree__V_46_46, mdb__declarative_tree__V_11_11);
                  }
#line 10601 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_17_17 == (MR_Integer) 0);
#line 748 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 748 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_17_17;
#line 748 "declarative_tree.m"
                  else
#line 748 "declarative_tree.m"
                    {
#line 748 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_18_18;

#line 748 "declarative_tree.m"
                      {
#line 748 "declarative_tree.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_18_18, mdb__declarative_tree__V_45_45, mdb__declarative_tree__V_12_12);
                      }
#line 10621 "mdb.declarative_tree.c"
                      mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_18_18 == (MR_Integer) 0);
#line 748 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 748 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                        *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_18_18;
#line 748 "declarative_tree.m"
                      else
#line 748 "declarative_tree.m"
                        {
#line 748 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__V_19_19;

#line 748 "declarative_tree.m"
                          {
#line 748 "declarative_tree.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_35, &mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_44_44, mdb__declarative_tree__V_13_13);
                          }
#line 10641 "mdb.declarative_tree.c"
                          mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_19_19 == (MR_Integer) 0);
#line 748 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 748 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                            *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_19_19;
#line 748 "declarative_tree.m"
                          else
#line 748 "declarative_tree.m"
                            {
#line 748 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_20_20;

#line 748 "declarative_tree.m"
                              {
#line 748 "declarative_tree.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[0], &mdb__declarative_tree__V_20_20, ((MR_Box) (mdb__declarative_tree__V_43_43)), ((MR_Box) (mdb__declarative_tree__V_14_14)));
                              }
#line 10661 "mdb.declarative_tree.c"
                              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_20_20 == (MR_Integer) 0);
#line 748 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 748 "declarative_tree.m"
                              if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                                *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_20_20;
#line 748 "declarative_tree.m"
                              else
#line 748 "declarative_tree.m"
                                {
#line 748 "declarative_tree.m"
                                  {
#line 748 "declarative_tree.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[6], mdb__declarative_tree__HeadVar__1_1, ((MR_Box) (mdb__declarative_tree__V_42_42)), ((MR_Box) (mdb__declarative_tree__V_15_15)));
#line 748 "declarative_tree.m"
                                    return;
                                  }
#line 748 "declarative_tree.m"
                                }
#line 748 "declarative_tree.m"
                            }
#line 748 "declarative_tree.m"
                        }
#line 748 "declarative_tree.m"
                    }
#line 748 "declarative_tree.m"
                }
#line 748 "declarative_tree.m"
            }
#line 748 "declarative_tree.m"
        }
#line 748 "declarative_tree.m"
  }
#line 748 "declarative_tree.m"
}

#line 748 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_19,
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 748 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 748 "declarative_tree.m"
{
#line 748 "declarative_tree.m"
  {
#line 748 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 748 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_17 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 748 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_18 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 748 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_17 == mdb__declarative_tree__CastY_18);
#line 748 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 748 "declarative_tree.m"
    else
#line 748 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 748 "declarative_tree.m"
        {
#line 748 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 748 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 748 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastY_16 == mdb__declarative_tree__CastX_15);
#line 748 "declarative_tree.m"
        }
#line 748 "declarative_tree.m"
      else
#line 748 "declarative_tree.m"
        {
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_20_20;
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_21_21;
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 748 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 748 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 748 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_6_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3));
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)));
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)));
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_9_9;
#line 748 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_10_10;
#line 748 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_11_11;
#line 748 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12;
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_13_13;
#line 748 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_14_14;

#line 748 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 748 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
            {
#line 748 "declarative_tree.m"
              mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 748 "declarative_tree.m"
              mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 748 "declarative_tree.m"
              mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 748 "declarative_tree.m"
              mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3));
#line 748 "declarative_tree.m"
              mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 748 "declarative_tree.m"
              mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 10791 "mdb.declarative_tree.c"
              {
#line 10793 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____start_loc_1_0(mdb__declarative_tree__TypeInfo_for_R_19, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_9_9);
              }
#line 748 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                {
#line 10800 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_10_10);
#line 748 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                    {
#line 10806 "mdb.declarative_tree.c"
                      mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_5_5 == mdb__declarative_tree__V_11_11);
#line 748 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                        {
#line 10812 "mdb.declarative_tree.c"
                          {
#line 10814 "mdb.declarative_tree.c"
                            mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_19, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_12_12);
                          }
#line 748 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                            {
#line 10821 "mdb.declarative_tree.c"
                              mdb__declarative_tree__TypeInfo_20_20 = (MR_Word) &mdb__declarative_tree_scalar_common_1[0];
#line 10823 "mdb.declarative_tree.c"
                              {
#line 10825 "mdb.declarative_tree.c"
                                mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_20_20, ((MR_Box) (mdb__declarative_tree__V_7_7)), ((MR_Box) (mdb__declarative_tree__V_13_13)));
                              }
#line 748 "declarative_tree.m"
                              if (mdb__declarative_tree__succeeded)
#line 748 "declarative_tree.m"
                                {
#line 10832 "mdb.declarative_tree.c"
                                  mdb__declarative_tree__TypeInfo_21_21 = (MR_Word) &mdb__declarative_tree_scalar_common_1[6];
#line 10834 "mdb.declarative_tree.c"
                                  {
#line 10836 "mdb.declarative_tree.c"
                                    return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_21_21, ((MR_Box) (mdb__declarative_tree__V_8_8)), ((MR_Box) (mdb__declarative_tree__V_14_14)));
                                  }
#line 748 "declarative_tree.m"
                                }
#line 748 "declarative_tree.m"
                            }
#line 748 "declarative_tree.m"
                        }
#line 748 "declarative_tree.m"
                    }
#line 748 "declarative_tree.m"
                }
#line 748 "declarative_tree.m"
            }
#line 748 "declarative_tree.m"
        }
#line 748 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 748 "declarative_tree.m"
  }
#line 748 "declarative_tree.m"
}

#line 494 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
#line 494 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 494 "declarative_tree.m"
{
#line 494 "declarative_tree.m"
  {
#line 494 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 494 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 494 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 494 "declarative_tree.m"
    {
#line 494 "declarative_tree.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__Cast_HeadVar1_4, mdb__declarative_tree__Cast_HeadVar2_5);
#line 494 "declarative_tree.m"
      return;
    }
#line 494 "declarative_tree.m"
  }
#line 494 "declarative_tree.m"
}

#line 494 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_1,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 494 "declarative_tree.m"
{
#line 10901 "mdb.declarative_tree.c"
  {
#line 10903 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__HeadVar__2_1 == mdb__declarative_tree__HeadVar__2_2);

#line 10906 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 10908 "mdb.declarative_tree.c"
  }
#line 494 "declarative_tree.m"
}

#line 787 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_23,
#line 787 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 787 "declarative_tree.m"
{
#line 787 "declarative_tree.m"
  {
#line 787 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 787 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_21 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 787 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_22 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 787 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_21 == mdb__declarative_tree__CastY_22);
#line 787 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10939 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 787 "declarative_tree.m"
    else
#line 787 "declarative_tree.m"
      {
#line 787 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 787 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 787 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 787 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 4)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 5)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16;

#line 787 "declarative_tree.m"
        {
#line 787 "declarative_tree.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_16_16, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_10_10);
        }
#line 10977 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == (MR_Integer) 0);
#line 787 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 787 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_16_16;
#line 787 "declarative_tree.m"
        else
#line 787 "declarative_tree.m"
          {
#line 787 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_17_17;

#line 787 "declarative_tree.m"
            {
#line 787 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_17_17, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_11_11);
            }
#line 10997 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_17_17 == (MR_Integer) 0);
#line 787 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 787 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_17_17;
#line 787 "declarative_tree.m"
            else
#line 787 "declarative_tree.m"
              {
#line 787 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_18_18;

#line 787 "declarative_tree.m"
                {
#line 787 "declarative_tree.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[4], &mdb__declarative_tree__V_18_18, ((MR_Box) (mdb__declarative_tree__V_6_6)), ((MR_Box) (mdb__declarative_tree__V_12_12)));
                }
#line 11017 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_18_18 == (MR_Integer) 0);
#line 787 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 787 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_18_18;
#line 787 "declarative_tree.m"
                else
#line 787 "declarative_tree.m"
                  {
#line 787 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_19_19;

#line 787 "declarative_tree.m"
                    {
#line 787 "declarative_tree.m"
                      mdbcomp__program_representation____Compare____atomic_goal_rep_0_0(&mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_13_13);
                    }
#line 11037 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_19_19 == (MR_Integer) 0);
#line 787 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 787 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_19_19;
#line 787 "declarative_tree.m"
                    else
#line 787 "declarative_tree.m"
                      {
#line 787 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_20_20;

#line 787 "declarative_tree.m"
                        {
#line 787 "declarative_tree.m"
                          mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdb__declarative_tree__V_20_20, mdb__declarative_tree__V_8_8, mdb__declarative_tree__V_14_14);
                        }
#line 11057 "mdb.declarative_tree.c"
                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_20_20 == (MR_Integer) 0);
#line 787 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 787 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
                          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_20_20;
#line 787 "declarative_tree.m"
                        else
#line 787 "declarative_tree.m"
                          {
#line 787 "declarative_tree.m"
                            mercury__maybe____Compare____maybe_1_0(mdb__declarative_tree__TypeInfo_for_R_23, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_15_15);
#line 787 "declarative_tree.m"
                            return;
                          }
#line 787 "declarative_tree.m"
                      }
#line 787 "declarative_tree.m"
                  }
#line 787 "declarative_tree.m"
              }
#line 787 "declarative_tree.m"
          }
#line 787 "declarative_tree.m"
      }
#line 787 "declarative_tree.m"
  }
#line 787 "declarative_tree.m"
}

#line 787 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_17,
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 787 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 787 "declarative_tree.m"
{
#line 787 "declarative_tree.m"
  {
#line 787 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 787 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 787 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 787 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_15 == mdb__declarative_tree__CastY_16);
#line 787 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 787 "declarative_tree.m"
    else
#line 787 "declarative_tree.m"
      {
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_18_18;
#line 787 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 787 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)));
#line 787 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 787 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));

#line 11146 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_9_9) == 0);
#line 787 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
          {
#line 11152 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_10_10);
#line 787 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
              {
#line 11158 "mdb.declarative_tree.c"
                mdb__declarative_tree__TypeInfo_18_18 = (MR_Word) &mdb__declarative_tree_scalar_common_1[4];
#line 11160 "mdb.declarative_tree.c"
                {
#line 11162 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_18_18, ((MR_Box) (mdb__declarative_tree__V_5_5)), ((MR_Box) (mdb__declarative_tree__V_11_11)));
                }
#line 787 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
                  {
#line 11169 "mdb.declarative_tree.c"
                    {
#line 11171 "mdb.declarative_tree.c"
                      mdb__declarative_tree__succeeded = mdbcomp__program_representation____Unify____atomic_goal_rep_0_0(mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_12_12);
                    }
#line 787 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 787 "declarative_tree.m"
                      {
#line 11178 "mdb.declarative_tree.c"
                        {
#line 11180 "mdb.declarative_tree.c"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_13_13);
                        }
#line 787 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 11185 "mdb.declarative_tree.c"
                          {
#line 11187 "mdb.declarative_tree.c"
                            return mdb__declarative_tree__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_tree__TypeInfo_for_R_17, mdb__declarative_tree__V_8_8, mdb__declarative_tree__V_14_14);
                          }
#line 787 "declarative_tree.m"
                      }
#line 787 "declarative_tree.m"
                  }
#line 787 "declarative_tree.m"
              }
#line 787 "declarative_tree.m"
          }
#line 787 "declarative_tree.m"
      }
#line 787 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 787 "declarative_tree.m"
  }
#line 787 "declarative_tree.m"
}

#line 1914 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
#line 1914 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1914 "declarative_tree.m"
{
#line 1914 "declarative_tree.m"
  {
#line 1914 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1914 "declarative_tree.m"
    MR_builtin_longjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0, 1);
#line 1914 "declarative_tree.m"
  }
#line 1914 "declarative_tree.m"
}

#line 1915 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
#line 1915 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1915 "declarative_tree.m"
{
#line 1915 "declarative_tree.m"
  {
#line 1915 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1915 "declarative_tree.m"
    (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7 = ((MR_Word) (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7);
#line 1915 "declarative_tree.m"
    {
#line 1915 "declarative_tree.m"
      mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(mdb__declarative_tree__env_ptr);
#line 1915 "declarative_tree.m"
      return;
    }
#line 1915 "declarative_tree.m"
  }
#line 1915 "declarative_tree.m"
}

#line 1914 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
#line 1914 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1914 "declarative_tree.m"
{
#line 1914 "declarative_tree.m"
  {
#line 1914 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1914 "declarative_tree.m"
    {
#line 1917 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 2)));
#line 1917 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 0)));
#line 1917 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 1)));
#line 1917 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_10_10;

#line 1917 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1917 "declarative_tree.m"
      if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
#line 1917 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_11_11, (MR_Integer) 0)));
#line 1916 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
#line 1916 "declarative_tree.m"
      if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
#line 1916 "declarative_tree.m"
        {
#line 1916 "declarative_tree.m"
          mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(mdb__declarative_tree__env_ptr);
#line 1916 "declarative_tree.m"
          return;
        }
#line 1914 "declarative_tree.m"
    }
#line 1914 "declarative_tree.m"
  }
#line 1914 "declarative_tree.m"
}

#line 1914 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
#line 1914 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1914 "declarative_tree.m"
{
#line 1914 "declarative_tree.m"
  {
#line 1914 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1914 "declarative_tree.m"
    if (MR_builtin_setjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0) == 0)
#line 1914 "declarative_tree.m"
      {
#line 1914 "declarative_tree.m"
        {
#line 1915 "declarative_tree.m"
          {
#line 1915 "declarative_tree.m"
            mercury__list__member_2_p_1((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, &(mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6, mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3, mdb__declarative_tree__env_ptr);
          }
#line 1914 "declarative_tree.m"
        }
#line 1914 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_FALSE;
#line 1914 "declarative_tree.m"
      }
#line 1914 "declarative_tree.m"
    else
#line 1914 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_TRUE;
#line 1914 "declarative_tree.m"
  }
#line 1914 "declarative_tree.m"
}

#line 1906 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
#line 1906 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21,
#line 1906 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 1906 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_4)
#line 1906 "declarative_tree.m"
{
#line 1906 "declarative_tree.m"
  {
#line 1906 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s mdb__declarative_tree__env;

#line 1909 "declarative_tree.m"
    {
#line 1909 "declarative_tree.m"
      MR_Word mdb__declarative_tree__Call_5;
#line 1911 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_12_12;
#line 1911 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_13_13;
#line 1911 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_14_14;
#line 1911 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_15_15;
#line 1911 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_16_16;
#line 1911 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_17_17;
#line 1911 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_18_18;
#line 1911 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_19_19;
#line 1911 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_20_20;

#line 1910 "declarative_tree.m"
      {
#line 1910 "declarative_tree.m"
        mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21, mdb__declarative_tree__Store_3, mdb__declarative_tree__CallId_4, &mdb__declarative_tree__Call_5);
      }
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 0));
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 1));
#line 1911 "declarative_tree.m"
      (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 2)));
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 3)));
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 4)));
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 5)));
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 6)));
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 7)));
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 8)));
#line 1911 "declarative_tree.m"
      mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 9)));
#line 1914 "declarative_tree.m"
      {
#line 1914 "declarative_tree.m"
        mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(&mdb__declarative_tree__env);
      }
#line 1914 "declarative_tree.m"
      (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
#line 1909 "declarative_tree.m"
      return (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
#line 1909 "declarative_tree.m"
    }
#line 1906 "declarative_tree.m"
  }
#line 1906 "declarative_tree.m"
}

#line 1852 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
#line 1852 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32,
#line 1852 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1852 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 1852 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Node_6)
#line 1852 "declarative_tree.m"
{
#line 1867 "declarative_tree.m"
  {
#line 1867 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1867 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_7;
#line 11436 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11438 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_7;

#line 11441 "mdb.declarative_tree.c"
    {
#line 11443 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_7);
    }
#line 11446 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 11448 "mdb.declarative_tree.c"
      {
#line 11450 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_7 = ((MR_Word) mdb__declarative_tree__conv1_Node0_7);
#line 11452 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 11454 "mdb.declarative_tree.c"
      }
#line 1857 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1860 "declarative_tree.m"
      {
#line 1860 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node0_7)) == (MR_mktag((MR_Integer) 1))))
#line 1859 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 1860 "declarative_tree.m"
        else
#line 1860 "declarative_tree.m"
          if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1863 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1860 "declarative_tree.m"
          else
#line 1860 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1861 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1860 "declarative_tree.m"
            else
#line 1860 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1860 "declarative_tree.m"
      }
#line 1867 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1866 "declarative_tree.m"
      *mdb__declarative_tree__Node_6 = mdb__declarative_tree__Node0_7;
#line 1867 "declarative_tree.m"
    else
#line 1868 "declarative_tree.m"
      {
#line 1868 "declarative_tree.m"
        {
#line 1868 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[26])));
#line 1868 "declarative_tree.m"
          return;
        }
#line 1868 "declarative_tree.m"
      }
#line 1867 "declarative_tree.m"
  }
#line 1852 "declarative_tree.m"
}

#line 1819 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
#line 1819 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1819 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_2,
#line 1819 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Pos_3,
#line 1819 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ArgPos_4)
#line 1819 "declarative_tree.m"
{
#line 1822 "declarative_tree.m"
  while (MR_TRUE)
#line 1822 "declarative_tree.m"
    {
#line 1822 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1822 "declarative_tree.m"
      {
#line 1822 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1822 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1822 "declarative_tree.m"
          {
#line 1823 "declarative_tree.m"
            {
#line 1823 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[25])));
#line 1823 "declarative_tree.m"
              return;
            }
#line 1822 "declarative_tree.m"
          }
#line 1822 "declarative_tree.m"
        else
#line 1824 "declarative_tree.m"
          {
#line 1824 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__HeadVar_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1824 "declarative_tree.m"
            MR_Word mdb__declarative_tree__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));

#line 1825 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__HeadVar_11 == mdb__declarative_tree__Var_2);
#line 1827 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1826 "declarative_tree.m"
              {
#line 1826 "declarative_tree.m"
                MR_Word base;
#line 1826 "declarative_tree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "declarative_tree.m"
                *mdb__declarative_tree__ArgPos_4 = base;
#line 1826 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__Pos_3));
#line 1826 "declarative_tree.m"
              }
#line 1827 "declarative_tree.m"
            else
#line 1828 "declarative_tree.m"
              {
#line 1828 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_16_16 = (mdb__declarative_tree__Pos_3 - (MR_Integer) 1);

#line 1828 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1828 "declarative_tree.m"
                {
#line 1828 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__HeadVars_12;
#line 1828 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__Pos__tmp_copy_3 = mdb__declarative_tree__V_16_16;

#line 1828 "declarative_tree.m"
                  mdb__declarative_tree__Pos_3 = mdb__declarative_tree__Pos__tmp_copy_3;
#line 1828 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1828 "declarative_tree.m"
                }
#line 1828 "declarative_tree.m"
                continue;
#line 1828 "declarative_tree.m"
              }
#line 1824 "declarative_tree.m"
          }
#line 1822 "declarative_tree.m"
      }
#line 1822 "declarative_tree.m"
      break;
#line 1822 "declarative_tree.m"
    }
#line 1819 "declarative_tree.m"
}

#line 1814 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
#line 1814 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_4,
#line 1814 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_5)
#line 1814 "declarative_tree.m"
{
#line 1816 "declarative_tree.m"
  {
#line 1816 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1816 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ArgPos_6;
#line 1816 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_7_7;

#line 1817 "declarative_tree.m"
    {
#line 1817 "declarative_tree.m"
      mdb__declarative_tree__V_7_7 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__HeadVars_4);
    }
#line 1817 "declarative_tree.m"
    {
#line 1817 "declarative_tree.m"
      mdb__declarative_tree__find_arg_pos_from_back_4_p_0(mdb__declarative_tree__HeadVars_4, mdb__declarative_tree__Var_5, mdb__declarative_tree__V_7_7, &mdb__declarative_tree__ArgPos_6);
    }
#line 1816 "declarative_tree.m"
    return mdb__declarative_tree__ArgPos_6;
#line 1816 "declarative_tree.m"
  }
#line 1814 "declarative_tree.m"
}

#line 1792 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
#line 1792 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__TracingOn_1)
#line 1792 "declarative_tree.m"
{
#line 1794 "declarative_tree.m"
  {
#line 1794 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1797 "declarative_tree.m"
{
#define MR_PROC_LABEL mdb__declarative_tree__is_traced_grade_1_p_0

	MR_Word TracingOn;

		{
#line 1797 "declarative_tree.m"

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif

#line 11665 "mdb.declarative_tree.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_tree__TracingOn_1  = TracingOn;
#line 1797 "declarative_tree.m"
}
#line 1794 "declarative_tree.m"
  }
#line 1792 "declarative_tree.m"
}

#line 1781 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
#line 1781 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1781 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ParentPath_2,
#line 1781 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__N_3,
#line 1781 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 1781 "declarative_tree.m"
{
#line 1784 "declarative_tree.m"
  {
#line 1784 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1784 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1784 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1784 "declarative_tree.m"
    else
#line 1786 "declarative_tree.m"
      {
#line 1786 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1786 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1786 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Path_11;
#line 1786 "declarative_tree.m"
        MR_Word mdb__declarative_tree__GoalAndPaths_12;
#line 1786 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1786 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;
#line 1786 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15;

#line 1787 "declarative_tree.m"
        {
#line 1787 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1787 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_14_14, 0) = ((MR_Box) (mdb__declarative_tree__N_3));
#line 1787 "declarative_tree.m"
        }
#line 1787 "declarative_tree.m"
        {
#line 1787 "declarative_tree.m"
          mdb__declarative_tree__Path_11 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__ParentPath_2, mdb__declarative_tree__V_14_14);
        }
#line 1786 "declarative_tree.m"
        {
#line 1786 "declarative_tree.m"
          mdb__declarative_tree__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1786 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_13_13, 0) = ((MR_Box) (mdb__declarative_tree__Goal_7));
#line 1786 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_13_13, 1) = ((MR_Box) (mdb__declarative_tree__Path_11));
#line 1786 "declarative_tree.m"
        }
#line 1788 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = (mdb__declarative_tree__N_3 + (MR_Integer) 1);
#line 1788 "declarative_tree.m"
        {
#line 1788 "declarative_tree.m"
          mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(mdb__declarative_tree__Goals_8, mdb__declarative_tree__ParentPath_2, mdb__declarative_tree__V_15_15, &mdb__declarative_tree__GoalAndPaths_12);
        }
#line 1786 "declarative_tree.m"
        {
#line 1786 "declarative_tree.m"
          MR_Word base;
#line 1786 "declarative_tree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__4_4 = base;
#line 1786 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_13_13));
#line 1786 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__GoalAndPaths_12));
#line 1786 "declarative_tree.m"
        }
#line 1786 "declarative_tree.m"
      }
#line 1784 "declarative_tree.m"
  }
#line 1781 "declarative_tree.m"
}

#line 1739 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
#line 1739 "declarative_tree.m"
  MR_String mdb__declarative_tree__Module_5,
#line 1739 "declarative_tree.m"
  MR_String mdb__declarative_tree__Name_6,
#line 1739 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_7,
#line 1739 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__NewVar_8)
#line 1739 "declarative_tree.m"
{
#line 1742 "declarative_tree.m"
  {
#line 1742 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Module_5, (MR_String) "builtin") == 0);
#line 1742 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeCtorInfo_11_11;
#line 1742 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_9_9;
#line 1742 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 1742 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1749 "declarative_tree.m"
    MR_Box mdb__declarative_tree__conv0_NewVar_8;

#line 1742 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1742 "declarative_tree.m"
      {
#line 1747 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Name_6, (MR_String) "cc_multi_equal") == 0);
#line 1742 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1742 "declarative_tree.m"
          {
#line 1748 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = (MR_Integer) 3;
#line 11809 "mdb.declarative_tree.c"
            mdb__declarative_tree__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1748 "declarative_tree.m"
            {
#line 1748 "declarative_tree.m"
              mercury__list__length_2_p_0(mdb__declarative_tree__TypeCtorInfo_11_11, mdb__declarative_tree__Args_7, &mdb__declarative_tree__V_12_12);
            }
#line 1748 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_9_9 == mdb__declarative_tree__V_12_12);
#line 1742 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1742 "declarative_tree.m"
              {
#line 1749 "declarative_tree.m"
                mdb__declarative_tree__V_10_10 = (MR_Integer) 2;
#line 1749 "declarative_tree.m"
                {
#line 1749 "declarative_tree.m"
                  mdb__declarative_tree__conv0_NewVar_8 = mercury__list__det_index1_2_f_0(mdb__declarative_tree__TypeCtorInfo_11_11, mdb__declarative_tree__Args_7, mdb__declarative_tree__V_10_10);
                }
#line 1749 "declarative_tree.m"
                *mdb__declarative_tree__NewVar_8 = ((MR_Integer) mdb__declarative_tree__conv0_NewVar_8);
#line 1749 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1742 "declarative_tree.m"
              }
#line 1742 "declarative_tree.m"
          }
#line 1742 "declarative_tree.m"
      }
#line 1742 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1742 "declarative_tree.m"
  }
#line 1739 "declarative_tree.m"
}

#line 1554 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
#line 1554 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_5,
#line 1554 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_6,
#line 1554 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_7,
#line 1554 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Var_8)
#line 1554 "declarative_tree.m"
{
#line 1562 "declarative_tree.m"
  {
#line 1562 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1562 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__FoundVar_9;
#line 1560 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1560 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_10_10;
#line 1560 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 1560 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1560 "declarative_tree.m"
    MR_Box mdb__declarative_tree__conv0_FoundVar_9;

#line 1560 "declarative_tree.m"
    {
#line 1560 "declarative_tree.m"
      mdb__declarative_tree__V_10_10 = mercury__list__reverse_1_f_0(mdb__declarative_tree__TypeCtorInfo_17_17, mdb__declarative_tree__Args_5);
    }
#line 1560 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = (mdb__declarative_tree__TotalArgs_7 - mdb__declarative_tree__ArgNum_6);
#line 1560 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = (mdb__declarative_tree__V_12_12 + (MR_Integer) 1);
#line 1560 "declarative_tree.m"
    {
#line 1560 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list__index1_3_p_0(mdb__declarative_tree__TypeCtorInfo_17_17, mdb__declarative_tree__V_10_10, mdb__declarative_tree__V_11_11, &mdb__declarative_tree__conv0_FoundVar_9);
    }
#line 1560 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1560 "declarative_tree.m"
      {
#line 1560 "declarative_tree.m"
        mdb__declarative_tree__FoundVar_9 = ((MR_Integer) mdb__declarative_tree__conv0_FoundVar_9);
#line 1560 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1560 "declarative_tree.m"
      }
#line 1562 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1561 "declarative_tree.m"
      *mdb__declarative_tree__Var_8 = mdb__declarative_tree__FoundVar_9;
#line 1562 "declarative_tree.m"
    else
#line 1563 "declarative_tree.m"
      {
#line 1563 "declarative_tree.m"
        {
#line 1563 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[24])));
#line 1563 "declarative_tree.m"
          return;
        }
#line 1563 "declarative_tree.m"
      }
#line 1562 "declarative_tree.m"
  }
#line 1554 "declarative_tree.m"
}

#line 1542 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
#line 1542 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalId_3,
#line 1542 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_4)
#line 1542 "declarative_tree.m"
{
#line 1545 "declarative_tree.m"
  {
#line 1545 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1545 "declarative_tree.m"
    MR_String mdb__declarative_tree__GoalModule_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 0)));
#line 1545 "declarative_tree.m"
    MR_String mdb__declarative_tree__GoalName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 1)));
#line 1545 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__GoalArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 2)));
#line 1545 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ProcLabel_8;
#line 1545 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EventModule_9;
#line 1545 "declarative_tree.m"
    MR_String mdb__declarative_tree__EventName_10;
#line 1545 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__EventArity_13;
#line 1545 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 0)));
#line 1545 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15;
#line 1545 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_19_19;
#line 1547 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 1)));
#line 1548 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 1548 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 1549 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_17_17;

#line 1547 "declarative_tree.m"
    {
#line 1547 "declarative_tree.m"
      mdb__declarative_tree__ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__V_14_14);
    }
#line 1548 "declarative_tree.m"
    {
#line 1548 "declarative_tree.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_tree__ProcLabel_8, &mdb__declarative_tree__EventModule_9, &mdb__declarative_tree__EventName_10, &mdb__declarative_tree__V_11_11, &mdb__declarative_tree__V_12_12);
    }
#line 1549 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 0)));
#line 1549 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 1)));
#line 1549 "declarative_tree.m"
    {
#line 1549 "declarative_tree.m"
      mdb__declarative_tree__EventArity_13 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_15_15);
    }
#line 1550 "declarative_tree.m"
    {
#line 1550 "declarative_tree.m"
      mdb__declarative_tree__V_19_19 = mdbcomp__prim_data__sym_name_to_string_1_f_0(mdb__declarative_tree__EventModule_9);
    }
#line 1550 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__GoalModule_5, mdb__declarative_tree__V_19_19) == 0);
#line 1545 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1545 "declarative_tree.m"
      {
#line 1551 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__EventName_10, mdb__declarative_tree__GoalName_6) == 0);
#line 1545 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1552 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__EventArity_13 == mdb__declarative_tree__GoalArity_7);
#line 1545 "declarative_tree.m"
      }
#line 1545 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1545 "declarative_tree.m"
  }
#line 1542 "declarative_tree.m"
}

#line 1400 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145,
#line 1400 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_17,
#line 1400 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_18,
#line 1400 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_19,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_20,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoal_21,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalArgs_22,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_23,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_24,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_25,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_26,
#line 1400 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_27,
#line 1400 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_28,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_29,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_30,
#line 1400 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_31)
#line 1400 "declarative_tree.m"
{
#line 1480 "declarative_tree.m"
  {
#line 1480 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_25)) == (MR_mktag((MR_Integer) 1)));
#line 1480 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_32;
#line 1480 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ContourHeadNode_34;
#line 1480 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EndPath_35;
#line 1410 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_89_89;
#line 1410 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_90_90;
#line 1410 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_33_33;

#line 1410 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1410 "declarative_tree.m"
      {
#line 1410 "declarative_tree.m"
        mdb__declarative_tree__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 0)));
#line 1410 "declarative_tree.m"
        mdb__declarative_tree__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 1)));
#line 1410 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1410 "declarative_tree.m"
          {
#line 1410 "declarative_tree.m"
            mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_89_89, (MR_Integer) 0));
#line 1410 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_89_89, (MR_Integer) 1)));
#line 1411 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeEnd_26)) == (MR_mktag((MR_Integer) 1)));
#line 1411 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1411 "declarative_tree.m"
              mdb__declarative_tree__EndPath_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeEnd_26, (MR_Integer) 0)));
#line 1410 "declarative_tree.m"
          }
#line 1410 "declarative_tree.m"
      }
#line 1480 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1477 "declarative_tree.m"
      {
#line 1477 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_46;
#line 1415 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_147_147;
#line 1415 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeReturnLabel_42;
#line 1415 "declarative_tree.m"
        MR_String mdb__declarative_tree__CallPathStr_47;
#line 1415 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallPath_48;
#line 1415 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__PolyConst2_146;
#line 1414 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_36_36;
#line 1414 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_37_37;
#line 1414 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_38_38;
#line 1414 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_39_39;
#line 1414 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_40_40;
#line 1414 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_41_41;
#line 1414 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43;
#line 1414 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_44_44;
#line 1414 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_45_45;

#line 1414 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_34)) == (MR_mktag((MR_Integer) 0)));
#line 1414 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1414 "declarative_tree.m"
          {
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 0));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 1));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 2)));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 3)));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 4)));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 5)));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__MaybeReturnLabel_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 6)));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 7)));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 8)));
#line 1414 "declarative_tree.m"
            mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 9)));
#line 12152 "mdb.declarative_tree.c"
            mdb__declarative_tree__PolyConst2_146 = (MR_Integer) 2;
#line 12154 "mdb.declarative_tree.c"
            {
#line 12156 "mdb.declarative_tree.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__PolyConst2_146, &mdb__declarative_tree__TypeInfo_147_147);
            }
#line 1416 "declarative_tree.m"
            {
#line 1416 "declarative_tree.m"
              mdb__declarative_tree__Atom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_147_147, mdb__declarative_tree__ContourHeadNode_34);
            }
#line 1417 "declarative_tree.m"
            {
#line 1417 "declarative_tree.m"
              mdb__declarative_tree__CallPathStr_47 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__MaybeReturnLabel_42);
            }
#line 1418 "declarative_tree.m"
            {
#line 1418 "declarative_tree.m"
              mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_47, &mdb__declarative_tree__CallPath_48);
            }
#line 1419 "declarative_tree.m"
            {
#line 1419 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CallPath_48, mdb__declarative_tree__EndPath_35);
            }
#line 1414 "declarative_tree.m"
          }
#line 1477 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1463 "declarative_tree.m"
          {
#line 1424 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoalId_49;
#line 1422 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_91_91;

#line 1422 "declarative_tree.m"
            {
#line 1422 "declarative_tree.m"
              mdb__declarative_tree__V_91_91 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(mdb__declarative_tree__AtomicGoal_21);
            }
#line 1422 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_91_91)) == (MR_mktag((MR_Integer) 1)));
#line 1422 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1422 "declarative_tree.m"
              {
#line 1422 "declarative_tree.m"
                mdb__declarative_tree__AtomicGoalId_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_91_91, (MR_Integer) 0)));
#line 1423 "declarative_tree.m"
                {
#line 1423 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(mdb__declarative_tree__AtomicGoalId_49, mdb__declarative_tree__Atom_46);
                }
#line 1422 "declarative_tree.m"
              }
#line 1422 "declarative_tree.m"
            else
#line 1425 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 1);
#line 1463 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1437 "declarative_tree.m"
              {
#line 1431 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_92_92;
#line 1431 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_93_93;

#line 1431 "declarative_tree.m"
                {
#line 1431 "declarative_tree.m"
                  mdb__declarative_tree__V_93_93 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__AtomicGoalArgs_22);
                }
#line 1431 "declarative_tree.m"
                mdb__declarative_tree__V_92_92 = (mdb__declarative_tree__TotalArgs_28 - mdb__declarative_tree__V_93_93);
#line 1431 "declarative_tree.m"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__ArgNum_27 > mdb__declarative_tree__V_92_92);
#line 1437 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1434 "declarative_tree.m"
                  {
#line 1434 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_50;
#line 1434 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_94_94;

#line 1433 "declarative_tree.m"
                    {
#line 1433 "declarative_tree.m"
                      mdb__declarative_tree__find_variable_in_args_4_p_0(mdb__declarative_tree__AtomicGoalArgs_22, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, &mdb__declarative_tree__Var_50);
                    }
#line 1435 "declarative_tree.m"
                    {
#line 1435 "declarative_tree.m"
                      mdb__declarative_tree__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1435 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1435 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 1) = ((MR_Box) (mdb__declarative_tree__Var_50));
#line 1435 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1435 "declarative_tree.m"
                    }
#line 1435 "declarative_tree.m"
                    {
#line 1435 "declarative_tree.m"
                      mdb__declarative_tree__MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1435 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_32, 0) = ((MR_Box) (mdb__declarative_tree__V_94_94));
#line 1435 "declarative_tree.m"
                    }
#line 1434 "declarative_tree.m"
                  }
#line 1437 "declarative_tree.m"
                else
#line 1445 "declarative_tree.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1441 "declarative_tree.m"
                    {
#line 1441 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_99_99;
#line 1441 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 1)));
#line 1441 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 2)));

#line 1443 "declarative_tree.m"
                      {
#line 1443 "declarative_tree.m"
                        mdb__declarative_tree__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1443 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 1) = ((MR_Box) (mdb__declarative_tree__Var_123));
#line 1443 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1443 "declarative_tree.m"
                      }
#line 1443 "declarative_tree.m"
                      {
#line 1443 "declarative_tree.m"
                        mdb__declarative_tree__MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_32, 0) = ((MR_Box) (mdb__declarative_tree__V_99_99));
#line 1443 "declarative_tree.m"
                      }
#line 1441 "declarative_tree.m"
                    }
#line 1445 "declarative_tree.m"
                  else
#line 1458 "declarative_tree.m"
                    {
#line 1459 "declarative_tree.m"
                      {
#line 1459 "declarative_tree.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                      }
#line 1458 "declarative_tree.m"
                    }
#line 1437 "declarative_tree.m"
              }
#line 1463 "declarative_tree.m"
            else
#line 1467 "declarative_tree.m"
              if ((mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0))
#line 1468 "declarative_tree.m"
                {
#line 1468 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__Primitive_83;
#line 1468 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__Primitives1_84;

#line 1469 "declarative_tree.m"
                  {
#line 1469 "declarative_tree.m"
                    mdb__declarative_tree__Primitive_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1469 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1469 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1469 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1469 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1469 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1469 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1469 "declarative_tree.m"
                  }
#line 1471 "declarative_tree.m"
                  {
#line 1471 "declarative_tree.m"
                    mdb__declarative_tree__Primitives1_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_84, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_83));
#line 1471 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_84, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1471 "declarative_tree.m"
                  }
#line 1472 "declarative_tree.m"
                  {
#line 1472 "declarative_tree.m"
                    return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, mdb__declarative_tree__Contour_25, mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_84);
                  }
#line 1468 "declarative_tree.m"
                }
#line 1467 "declarative_tree.m"
              else
#line 1465 "declarative_tree.m"
                {
#line 1466 "declarative_tree.m"
                  {
#line 1466 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[19])));
                  }
#line 1465 "declarative_tree.m"
                }
#line 1463 "declarative_tree.m"
          }
#line 1477 "declarative_tree.m"
        else
#line 1478 "declarative_tree.m"
          {
#line 1478 "declarative_tree.m"
            {
#line 1478 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
            }
#line 1478 "declarative_tree.m"
          }
#line 1477 "declarative_tree.m"
      }
#line 1480 "declarative_tree.m"
    else
#line 1524 "declarative_tree.m"
      if ((mdb__declarative_tree__Contour_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1536 "declarative_tree.m"
        {
#line 1527 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__MaybeEnd_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1528 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0);
#line 1536 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1531 "declarative_tree.m"
            {
#line 1531 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Primitive_134;
#line 1531 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Primitives1_135;

#line 1530 "declarative_tree.m"
              {
#line 1530 "declarative_tree.m"
                mdb__declarative_tree__Primitive_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1530 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1530 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1530 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1530 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1530 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1530 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1530 "declarative_tree.m"
              }
#line 1532 "declarative_tree.m"
              {
#line 1532 "declarative_tree.m"
                mdb__declarative_tree__Primitives1_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_135, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_134));
#line 1532 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_135, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1532 "declarative_tree.m"
              }
#line 1533 "declarative_tree.m"
              {
#line 1533 "declarative_tree.m"
                return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_135);
              }
#line 1531 "declarative_tree.m"
            }
#line 1536 "declarative_tree.m"
          else
#line 1537 "declarative_tree.m"
            {
#line 1537 "declarative_tree.m"
              {
#line 1537 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[21])));
              }
#line 1537 "declarative_tree.m"
            }
#line 1536 "declarative_tree.m"
        }
#line 1524 "declarative_tree.m"
      else
#line 1482 "declarative_tree.m"
        {
#line 1482 "declarative_tree.m"
          MR_Box mdb__declarative_tree__ContourHeadId_85;
#line 1482 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourTail_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 1)));
#line 1482 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallInfo_87;
#line 1482 "declarative_tree.m"
          MR_Word mdb__declarative_tree__NewContour_88;
#line 1482 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 0)));
#line 1482 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourHeadNode_129;
#line 1482 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Primitive_132;
#line 1482 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Primitives1_133;
#line 1507 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Atom_127;
#line 1483 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_153_153;

#line 1482 "declarative_tree.m"
          mdb__declarative_tree__ContourHeadId_85 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 0));
#line 1482 "declarative_tree.m"
          mdb__declarative_tree__ContourHeadNode_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 1)));
#line 12486 "mdb.declarative_tree.c"
          {
#line 12488 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_153_153);
          }
#line 1483 "declarative_tree.m"
          {
#line 1483 "declarative_tree.m"
            mdb__declarative_tree__succeeded = mdb__declarative_execution__get_trace_exit_atom_1_f_1(mdb__declarative_tree__TypeInfo_153_153, mdb__declarative_tree__ContourHeadNode_129, &mdb__declarative_tree__Atom_127);
          }
#line 1507 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1496 "declarative_tree.m"
            {
#line 1490 "declarative_tree.m"
              MR_Word mdb__declarative_tree__AtomicGoalId_125;
#line 1486 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_114_114;

#line 1486 "declarative_tree.m"
              {
#line 1486 "declarative_tree.m"
                mdb__declarative_tree__V_114_114 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(mdb__declarative_tree__AtomicGoal_21);
              }
#line 1486 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 1486 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1486 "declarative_tree.m"
                {
#line 1486 "declarative_tree.m"
                  mdb__declarative_tree__AtomicGoalId_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_114_114, (MR_Integer) 0)));
#line 1489 "declarative_tree.m"
                  {
#line 1489 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(mdb__declarative_tree__AtomicGoalId_125, mdb__declarative_tree__Atom_127);
                  }
#line 1486 "declarative_tree.m"
                }
#line 1486 "declarative_tree.m"
              else
#line 1491 "declarative_tree.m"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 1);
#line 1496 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1494 "declarative_tree.m"
                {
#line 1494 "declarative_tree.m"
                  {
#line 1494 "declarative_tree.m"
                    mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__CallInfo_87, 0) = mdb__declarative_tree__ContourHeadId_85;
#line 1494 "declarative_tree.m"
                  }
#line 1495 "declarative_tree.m"
                  mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__ContourTail_86;
#line 1494 "declarative_tree.m"
                }
#line 1496 "declarative_tree.m"
              else
#line 1501 "declarative_tree.m"
                if ((mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0))
#line 1502 "declarative_tree.m"
                  {
#line 1503 "declarative_tree.m"
                    mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1504 "declarative_tree.m"
                    mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__Contour_25;
#line 1502 "declarative_tree.m"
                  }
#line 1501 "declarative_tree.m"
                else
#line 1498 "declarative_tree.m"
                  {
#line 1499 "declarative_tree.m"
                    {
#line 1499 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[22])));
                    }
#line 1498 "declarative_tree.m"
                  }
#line 1496 "declarative_tree.m"
            }
#line 1507 "declarative_tree.m"
          else
#line 1513 "declarative_tree.m"
            if ((mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0))
#line 1514 "declarative_tree.m"
              {
#line 1515 "declarative_tree.m"
                mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1516 "declarative_tree.m"
                mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__Contour_25;
#line 1514 "declarative_tree.m"
              }
#line 1513 "declarative_tree.m"
            else
#line 1509 "declarative_tree.m"
              {
#line 1510 "declarative_tree.m"
                {
#line 1510 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[23])));
                }
#line 1509 "declarative_tree.m"
              }
#line 1519 "declarative_tree.m"
          {
#line 1519 "declarative_tree.m"
            mdb__declarative_tree__Primitive_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1519 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1519 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1519 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1519 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1519 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 5) = ((MR_Box) (mdb__declarative_tree__CallInfo_87));
#line 1519 "declarative_tree.m"
          }
#line 1521 "declarative_tree.m"
          {
#line 1521 "declarative_tree.m"
            mdb__declarative_tree__Primitives1_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1521 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_133, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_132));
#line 1521 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_133, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1521 "declarative_tree.m"
          }
#line 1522 "declarative_tree.m"
          {
#line 1522 "declarative_tree.m"
            return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, mdb__declarative_tree__NewContour_88, mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_133);
          }
#line 1482 "declarative_tree.m"
        }
#line 1480 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_32;
#line 1480 "declarative_tree.m"
  }
#line 1400 "declarative_tree.m"
}

#line 1229 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177,
#line 1229 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_13,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Goal_14,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_15,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_16,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_17,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_18,
#line 1229 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_19,
#line 1229 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_20,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_21,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_22,
#line 1229 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_23)
#line 1229 "declarative_tree.m"
{
#line 1235 "declarative_tree.m"
  {
#line 1235 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1235 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_24;
#line 1235 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalExpr_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Goal_14, (MR_Integer) 0)));
#line 1236 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Goal_14, (MR_Integer) 1)));

#line 1243 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 0))))
#line 1238 "declarative_tree.m"
      {
#line 1238 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Conjs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1238 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ConjPaths_29;
#line 1238 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_137_137;

#line 1239 "declarative_tree.m"
        {
#line 1239 "declarative_tree.m"
          mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(mdb__declarative_tree__Conjs_28, mdb__declarative_tree__Path_15, (MR_Integer) 1, &mdb__declarative_tree__ConjPaths_29);
        }
#line 1240 "declarative_tree.m"
        {
#line 1240 "declarative_tree.m"
          mdb__declarative_tree__V_137_137 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0, mdb__declarative_tree__ConjPaths_29, mdb__declarative_tree__GoalPaths_16);
        }
#line 1240 "declarative_tree.m"
        {
#line 1240 "declarative_tree.m"
          return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_137_137, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
        }
#line 1238 "declarative_tree.m"
      }
#line 1243 "declarative_tree.m"
    else
#line 1243 "declarative_tree.m"
      if (((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 1))))
#line 1267 "declarative_tree.m"
        {
#line 1267 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Disjs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1286 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourTail_45;
#line 1286 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjPath_51;
#line 1286 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__N_54;
#line 1269 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourHeadNode_44;
#line 1269 "declarative_tree.m"
          MR_Box mdb__declarative_tree__Label_47;
#line 1269 "declarative_tree.m"
          MR_String mdb__declarative_tree__DisjPathStr_50;
#line 1269 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjInitialPath_52;
#line 1269 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjLastStep_53;
#line 1269 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_128_128;
#line 1269 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_43_43;

#line 1269 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1269 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1269 "declarative_tree.m"
            {
#line 1269 "declarative_tree.m"
              mdb__declarative_tree__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1269 "declarative_tree.m"
              mdb__declarative_tree__ContourTail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1269 "declarative_tree.m"
              mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_128_128, (MR_Integer) 0));
#line 1269 "declarative_tree.m"
              mdb__declarative_tree__ContourHeadNode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_128_128, (MR_Integer) 1)));
#line 1272 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1271 "declarative_tree.m"
                {
#line 1271 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 1));

#line 1271 "declarative_tree.m"
                  mdb__declarative_tree__Label_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 2)));
#line 1271 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 1271 "declarative_tree.m"
                }
#line 1272 "declarative_tree.m"
              else
#line 1272 "declarative_tree.m"
                if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1273 "declarative_tree.m"
                  {
#line 1273 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_48_48 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 1));
#line 1273 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_49_49;

#line 1273 "declarative_tree.m"
                    mdb__declarative_tree__Label_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 2)));
#line 1273 "declarative_tree.m"
                    mdb__declarative_tree__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 3));
#line 1273 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 1273 "declarative_tree.m"
                  }
#line 1272 "declarative_tree.m"
                else
#line 1272 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_FALSE;
#line 1269 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1269 "declarative_tree.m"
                {
#line 1275 "declarative_tree.m"
                  {
#line 1275 "declarative_tree.m"
                    mdb__declarative_tree__DisjPathStr_50 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_47);
                  }
#line 1276 "declarative_tree.m"
                  {
#line 1276 "declarative_tree.m"
                    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__DisjPathStr_50, &mdb__declarative_tree__DisjPath_51);
                  }
#line 1277 "declarative_tree.m"
                  {
#line 1277 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__DisjPath_51, &mdb__declarative_tree__DisjInitialPath_52, &mdb__declarative_tree__DisjLastStep_53);
                  }
#line 1269 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1269 "declarative_tree.m"
                    {
#line 1278 "declarative_tree.m"
                      {
#line 1278 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__DisjInitialPath_52, mdb__declarative_tree__Path_15);
                      }
#line 1269 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1269 "declarative_tree.m"
                        {
#line 1279 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__DisjLastStep_53)) == (MR_mktag((MR_Integer) 2)));
#line 1279 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1279 "declarative_tree.m"
                            mdb__declarative_tree__N_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__DisjLastStep_53, (MR_Integer) 0)));
#line 1269 "declarative_tree.m"
                        }
#line 1269 "declarative_tree.m"
                    }
#line 1269 "declarative_tree.m"
                }
#line 1269 "declarative_tree.m"
            }
#line 1286 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1281 "declarative_tree.m"
            {
#line 1281 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Disj_55;
#line 1281 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DisjAndPath_56;
#line 1281 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_129_129;
#line 1281 "declarative_tree.m"
              MR_Box mdb__declarative_tree__conv0_Disj_55;

#line 1281 "declarative_tree.m"
              {
#line 1281 "declarative_tree.m"
                mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], mdb__declarative_tree__Disjs_42, mdb__declarative_tree__N_54, &mdb__declarative_tree__conv0_Disj_55);
              }
#line 1281 "declarative_tree.m"
              mdb__declarative_tree__Disj_55 = ((MR_Word) mdb__declarative_tree__conv0_Disj_55);
#line 1282 "declarative_tree.m"
              {
#line 1282 "declarative_tree.m"
                mdb__declarative_tree__DisjAndPath_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__DisjAndPath_56, 0) = ((MR_Box) (mdb__declarative_tree__Disj_55));
#line 1282 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__DisjAndPath_56, 1) = ((MR_Box) (mdb__declarative_tree__DisjPath_51));
#line 1282 "declarative_tree.m"
              }
#line 1283 "declarative_tree.m"
              {
#line 1283 "declarative_tree.m"
                mdb__declarative_tree__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_129_129, 0) = ((MR_Box) (mdb__declarative_tree__DisjAndPath_56));
#line 1283 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_129_129, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1283 "declarative_tree.m"
              }
#line 1283 "declarative_tree.m"
              {
#line 1283 "declarative_tree.m"
                return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_129_129, mdb__declarative_tree__ContourTail_45, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
              }
#line 1281 "declarative_tree.m"
            }
#line 1286 "declarative_tree.m"
          else
#line 1287 "declarative_tree.m"
            {
#line 1287 "declarative_tree.m"
              {
#line 1287 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[14])));
              }
#line 1287 "declarative_tree.m"
            }
#line 1267 "declarative_tree.m"
        }
#line 1243 "declarative_tree.m"
      else
#line 1243 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 2))))
#line 1290 "declarative_tree.m"
          {
#line 1290 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1290 "declarative_tree.m"
            MR_Integer mdb__declarative_tree___SwitchVar_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1290 "declarative_tree.m"
            MR_Word mdb__declarative_tree___SwitchCanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1306 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArmPath_63;
#line 1306 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourTail_141;
#line 1306 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__N_143;
#line 1292 "declarative_tree.m"
            MR_String mdb__declarative_tree__ArmPathStr_62;
#line 1292 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArmInitialPath_64;
#line 1292 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArmLastStep_65;
#line 1292 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_123_123;
#line 1292 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourHeadNode_138;
#line 1292 "declarative_tree.m"
            MR_Box mdb__declarative_tree__Label_139;
#line 1292 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_60_60;
#line 1293 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_61_61;
#line 1298 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_66_66;

#line 1292 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1292 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1292 "declarative_tree.m"
              {
#line 1292 "declarative_tree.m"
                mdb__declarative_tree__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1292 "declarative_tree.m"
                mdb__declarative_tree__ContourTail_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1292 "declarative_tree.m"
                mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_123_123, (MR_Integer) 0));
#line 1292 "declarative_tree.m"
                mdb__declarative_tree__ContourHeadNode_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_123_123, (MR_Integer) 1)));
#line 1293 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1293 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1293 "declarative_tree.m"
                  {
#line 1293 "declarative_tree.m"
                    mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 1));
#line 1293 "declarative_tree.m"
                    mdb__declarative_tree__Label_139 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 2)));
#line 1294 "declarative_tree.m"
                    {
#line 1294 "declarative_tree.m"
                      mdb__declarative_tree__ArmPathStr_62 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_139);
                    }
#line 1295 "declarative_tree.m"
                    {
#line 1295 "declarative_tree.m"
                      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__ArmPathStr_62, &mdb__declarative_tree__ArmPath_63);
                    }
#line 1296 "declarative_tree.m"
                    {
#line 1296 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__ArmPath_63, &mdb__declarative_tree__ArmInitialPath_64, &mdb__declarative_tree__ArmLastStep_65);
                    }
#line 1292 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1292 "declarative_tree.m"
                      {
#line 1297 "declarative_tree.m"
                        {
#line 1297 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__ArmInitialPath_64, mdb__declarative_tree__Path_15);
                        }
#line 1292 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1292 "declarative_tree.m"
                          {
#line 1298 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ArmLastStep_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1298 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 1298 "declarative_tree.m"
                              {
#line 1298 "declarative_tree.m"
                                mdb__declarative_tree__N_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 1)));
#line 1298 "declarative_tree.m"
                                mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 2)));
#line 1298 "declarative_tree.m"
                              }
#line 1292 "declarative_tree.m"
                          }
#line 1292 "declarative_tree.m"
                      }
#line 1293 "declarative_tree.m"
                  }
#line 1292 "declarative_tree.m"
              }
#line 1306 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1300 "declarative_tree.m"
              {
#line 1300 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Case_67;
#line 1300 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Arm_70;
#line 1300 "declarative_tree.m"
                MR_Word mdb__declarative_tree__ArmAndPath_71;
#line 1300 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_124_124;
#line 1300 "declarative_tree.m"
                MR_Box mdb__declarative_tree__conv1_Case_67;
#line 1301 "declarative_tree.m"
                MR_Word mdb__declarative_tree___ConsId_68;
#line 1301 "declarative_tree.m"
                MR_Word mdb__declarative_tree___ConsIdArity_69;

#line 1300 "declarative_tree.m"
                {
#line 1300 "declarative_tree.m"
                  mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[2], mdb__declarative_tree__Cases_59, mdb__declarative_tree__N_143, &mdb__declarative_tree__conv1_Case_67);
                }
#line 1300 "declarative_tree.m"
                mdb__declarative_tree__Case_67 = ((MR_Word) mdb__declarative_tree__conv1_Case_67);
#line 1301 "declarative_tree.m"
                mdb__declarative_tree___ConsId_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 0)));
#line 1301 "declarative_tree.m"
                mdb__declarative_tree___ConsIdArity_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 1)));
#line 1301 "declarative_tree.m"
                mdb__declarative_tree__Arm_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 2)));
#line 1302 "declarative_tree.m"
                {
#line 1302 "declarative_tree.m"
                  mdb__declarative_tree__ArmAndPath_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArmAndPath_71, 0) = ((MR_Box) (mdb__declarative_tree__Arm_70));
#line 1302 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArmAndPath_71, 1) = ((MR_Box) (mdb__declarative_tree__ArmPath_63));
#line 1302 "declarative_tree.m"
                }
#line 1303 "declarative_tree.m"
                {
#line 1303 "declarative_tree.m"
                  mdb__declarative_tree__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_124_124, 0) = ((MR_Box) (mdb__declarative_tree__ArmAndPath_71));
#line 1303 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_124_124, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1303 "declarative_tree.m"
                }
#line 1303 "declarative_tree.m"
                {
#line 1303 "declarative_tree.m"
                  return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_124_124, mdb__declarative_tree__ContourTail_141, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                }
#line 1300 "declarative_tree.m"
              }
#line 1306 "declarative_tree.m"
            else
#line 1307 "declarative_tree.m"
              {
#line 1307 "declarative_tree.m"
                {
#line 1307 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[15])));
                }
#line 1307 "declarative_tree.m"
              }
#line 1290 "declarative_tree.m"
          }
#line 1243 "declarative_tree.m"
        else
#line 1243 "declarative_tree.m"
          if (((((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1251 "declarative_tree.m"
            {
#line 1251 "declarative_tree.m"
              MR_String mdb__declarative_tree__File_34 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1251 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Line_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1251 "declarative_tree.m"
              MR_Word mdb__declarative_tree__BoundVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 3)));
#line 1251 "declarative_tree.m"
              MR_Word mdb__declarative_tree__AtomicGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 4)));
#line 1251 "declarative_tree.m"
              MR_Word mdb__declarative_tree__GeneratesEvent_38;

#line 1252 "declarative_tree.m"
              {
#line 1252 "declarative_tree.m"
                mdb__declarative_tree__GeneratesEvent_38 = mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_f_0(mdb__declarative_tree__AtomicGoal_37);
              }
#line 1259 "declarative_tree.m"
              if ((mdb__declarative_tree__GeneratesEvent_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1260 "declarative_tree.m"
                {
#line 1260 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__Primitive_40;
#line 1260 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__Primitives1_41;

#line 1261 "declarative_tree.m"
                  {
#line 1261 "declarative_tree.m"
                    mdb__declarative_tree__Primitive_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1261 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 0) = ((MR_Box) (mdb__declarative_tree__File_34));
#line 1261 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 1) = ((MR_Box) (mdb__declarative_tree__Line_35));
#line 1261 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_36));
#line 1261 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_37));
#line 1261 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 4) = ((MR_Box) (mdb__declarative_tree__Path_15));
#line 1261 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "declarative_tree.m"
                  }
#line 1262 "declarative_tree.m"
                  {
#line 1262 "declarative_tree.m"
                    mdb__declarative_tree__Primitives1_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_41, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_40));
#line 1262 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_41, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_23));
#line 1262 "declarative_tree.m"
                  }
#line 1263 "declarative_tree.m"
                  {
#line 1263 "declarative_tree.m"
                    return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives1_41);
                  }
#line 1260 "declarative_tree.m"
                }
#line 1259 "declarative_tree.m"
              else
#line 1254 "declarative_tree.m"
                {
#line 1254 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__AtomicGoalArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GeneratesEvent_38, (MR_Integer) 0)));

#line 1255 "declarative_tree.m"
                  {
#line 1255 "declarative_tree.m"
                    return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__File_34, mdb__declarative_tree__Line_35, mdb__declarative_tree__BoundVars_36, mdb__declarative_tree__AtomicGoal_37, mdb__declarative_tree__AtomicGoalArgs_39, mdb__declarative_tree__Path_15, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                  }
#line 1254 "declarative_tree.m"
                }
#line 1251 "declarative_tree.m"
            }
#line 1243 "declarative_tree.m"
          else
#line 1243 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1310 "declarative_tree.m"
              {
#line 1310 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Cond_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1310 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Then_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1310 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Else_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 3)));
#line 1326 "declarative_tree.m"
                MR_Word mdb__declarative_tree__CondPath_79;
#line 1326 "declarative_tree.m"
                MR_Word mdb__declarative_tree__ContourTail_164;
#line 1312 "declarative_tree.m"
                MR_String mdb__declarative_tree__CondPathStr_78;
#line 1312 "declarative_tree.m"
                MR_Word mdb__declarative_tree__CondInitialPath_80;
#line 1312 "declarative_tree.m"
                MR_Word mdb__declarative_tree__CondLastStep_81;
#line 1312 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_113_113;
#line 1312 "declarative_tree.m"
                MR_Word mdb__declarative_tree__ContourHeadNode_148;
#line 1312 "declarative_tree.m"
                MR_Box mdb__declarative_tree__Label_149;
#line 1312 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_75_75;
#line 1313 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_76_76;
#line 1313 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_77_77;

#line 1312 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1312 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1312 "declarative_tree.m"
                  {
#line 1312 "declarative_tree.m"
                    mdb__declarative_tree__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1312 "declarative_tree.m"
                    mdb__declarative_tree__ContourTail_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1312 "declarative_tree.m"
                    mdb__declarative_tree__V_75_75 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 0));
#line 1312 "declarative_tree.m"
                    mdb__declarative_tree__ContourHeadNode_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 1)));
#line 1313 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1313 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1313 "declarative_tree.m"
                      {
#line 1313 "declarative_tree.m"
                        mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 1));
#line 1313 "declarative_tree.m"
                        mdb__declarative_tree__Label_149 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 2)));
#line 1313 "declarative_tree.m"
                        mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 3)));
#line 1314 "declarative_tree.m"
                        {
#line 1314 "declarative_tree.m"
                          mdb__declarative_tree__CondPathStr_78 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_149);
                        }
#line 1315 "declarative_tree.m"
                        {
#line 1315 "declarative_tree.m"
                          mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CondPathStr_78, &mdb__declarative_tree__CondPath_79);
                        }
#line 1316 "declarative_tree.m"
                        {
#line 1316 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__CondPath_79, &mdb__declarative_tree__CondInitialPath_80, &mdb__declarative_tree__CondLastStep_81);
                        }
#line 1312 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1312 "declarative_tree.m"
                          {
#line 1317 "declarative_tree.m"
                            {
#line 1317 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CondInitialPath_80, mdb__declarative_tree__Path_15);
                            }
#line 1312 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 1318 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = (mdb__declarative_tree__CondLastStep_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "declarative_tree.m"
                          }
#line 1313 "declarative_tree.m"
                      }
#line 1312 "declarative_tree.m"
                  }
#line 1326 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1320 "declarative_tree.m"
                  {
#line 1320 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__ThenPath_82;
#line 1320 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CondAndPath_83;
#line 1320 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__ThenAndPath_84;
#line 1320 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_115_115;
#line 1320 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_116_116;

#line 1320 "declarative_tree.m"
                    {
#line 1320 "declarative_tree.m"
                      mdb__declarative_tree__ThenPath_82 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
                    }
#line 1321 "declarative_tree.m"
                    {
#line 1321 "declarative_tree.m"
                      mdb__declarative_tree__CondAndPath_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__CondAndPath_83, 0) = ((MR_Box) (mdb__declarative_tree__Cond_72));
#line 1321 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__CondAndPath_83, 1) = ((MR_Box) (mdb__declarative_tree__CondPath_79));
#line 1321 "declarative_tree.m"
                    }
#line 1322 "declarative_tree.m"
                    {
#line 1322 "declarative_tree.m"
                      mdb__declarative_tree__ThenAndPath_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__ThenAndPath_84, 0) = ((MR_Box) (mdb__declarative_tree__Then_73));
#line 1322 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__ThenAndPath_84, 1) = ((MR_Box) (mdb__declarative_tree__ThenPath_82));
#line 1322 "declarative_tree.m"
                    }
#line 1324 "declarative_tree.m"
                    {
#line 1324 "declarative_tree.m"
                      mdb__declarative_tree__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_116_116, 0) = ((MR_Box) (mdb__declarative_tree__ThenAndPath_84));
#line 1324 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_116_116, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1324 "declarative_tree.m"
                    }
#line 1323 "declarative_tree.m"
                    {
#line 1323 "declarative_tree.m"
                      mdb__declarative_tree__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_115_115, 0) = ((MR_Box) (mdb__declarative_tree__CondAndPath_83));
#line 1323 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_115_115, 1) = ((MR_Box) (mdb__declarative_tree__V_116_116));
#line 1323 "declarative_tree.m"
                    }
#line 1323 "declarative_tree.m"
                    {
#line 1323 "declarative_tree.m"
                      return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_115_115, mdb__declarative_tree__ContourTail_164, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                    }
#line 1320 "declarative_tree.m"
                  }
#line 1326 "declarative_tree.m"
                else
#line 1342 "declarative_tree.m"
                  {
#line 1342 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__ContourTail_157;
#line 1327 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__ElseCondId_87;
#line 1327 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CondNode_89;
#line 1327 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_117_117;
#line 1327 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__ContourHeadNode_150;
#line 1327 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__Label_151;
#line 1327 "declarative_tree.m"
                    MR_String mdb__declarative_tree__CondPathStr_152;
#line 1327 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CondPath_153;
#line 1327 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CondInitialPath_154;
#line 1327 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CondLastStep_155;
#line 1327 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_85_85;
#line 1328 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_86_86;
#line 1328 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_88_88;
#line 1330 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_90_90;
#line 1330 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_91_91;

#line 1327 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1327 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1327 "declarative_tree.m"
                      {
#line 1327 "declarative_tree.m"
                        mdb__declarative_tree__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1327 "declarative_tree.m"
                        mdb__declarative_tree__ContourTail_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1327 "declarative_tree.m"
                        mdb__declarative_tree__V_85_85 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_117_117, (MR_Integer) 0));
#line 1327 "declarative_tree.m"
                        mdb__declarative_tree__ContourHeadNode_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_117_117, (MR_Integer) 1)));
#line 1328 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_150)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1328 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1328 "declarative_tree.m"
                          {
#line 1328 "declarative_tree.m"
                            mdb__declarative_tree__V_86_86 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 1));
#line 1328 "declarative_tree.m"
                            mdb__declarative_tree__ElseCondId_87 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 2));
#line 1328 "declarative_tree.m"
                            mdb__declarative_tree__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 3)));
#line 1329 "declarative_tree.m"
                            {
#line 1329 "declarative_tree.m"
                              mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__ElseCondId_87, &mdb__declarative_tree__CondNode_89);
                            }
#line 1330 "declarative_tree.m"
                            mdb__declarative_tree__V_90_90 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 1));
#line 1330 "declarative_tree.m"
                            mdb__declarative_tree__Label_151 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 2)));
#line 1330 "declarative_tree.m"
                            mdb__declarative_tree__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 3)));
#line 1331 "declarative_tree.m"
                            {
#line 1331 "declarative_tree.m"
                              mdb__declarative_tree__CondPathStr_152 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_151);
                            }
#line 1332 "declarative_tree.m"
                            {
#line 1332 "declarative_tree.m"
                              mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CondPathStr_152, &mdb__declarative_tree__CondPath_153);
                            }
#line 1333 "declarative_tree.m"
                            {
#line 1333 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__CondPath_153, &mdb__declarative_tree__CondInitialPath_154, &mdb__declarative_tree__CondLastStep_155);
                            }
#line 1327 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 1327 "declarative_tree.m"
                              {
#line 1334 "declarative_tree.m"
                                {
#line 1334 "declarative_tree.m"
                                  mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CondInitialPath_154, mdb__declarative_tree__Path_15);
                                }
#line 1327 "declarative_tree.m"
                                if (mdb__declarative_tree__succeeded)
#line 1335 "declarative_tree.m"
                                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__CondLastStep_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1327 "declarative_tree.m"
                              }
#line 1328 "declarative_tree.m"
                          }
#line 1327 "declarative_tree.m"
                      }
#line 1342 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1337 "declarative_tree.m"
                      {
#line 1337 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__ElsePath_92;
#line 1337 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__ElseAndPath_93;
#line 1337 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_119_119;

#line 1337 "declarative_tree.m"
                        {
#line 1337 "declarative_tree.m"
                          mdb__declarative_tree__ElsePath_92 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                        }
#line 1338 "declarative_tree.m"
                        {
#line 1338 "declarative_tree.m"
                          mdb__declarative_tree__ElseAndPath_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1338 "declarative_tree.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_tree__ElseAndPath_93, 0) = ((MR_Box) (mdb__declarative_tree__Else_74));
#line 1338 "declarative_tree.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_tree__ElseAndPath_93, 1) = ((MR_Box) (mdb__declarative_tree__ElsePath_92));
#line 1338 "declarative_tree.m"
                        }
#line 1339 "declarative_tree.m"
                        {
#line 1339 "declarative_tree.m"
                          mdb__declarative_tree__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "declarative_tree.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_119_119, 0) = ((MR_Box) (mdb__declarative_tree__ElseAndPath_93));
#line 1339 "declarative_tree.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_119_119, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1339 "declarative_tree.m"
                        }
#line 1339 "declarative_tree.m"
                        {
#line 1339 "declarative_tree.m"
                          return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_119_119, mdb__declarative_tree__ContourTail_157, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                        }
#line 1337 "declarative_tree.m"
                      }
#line 1342 "declarative_tree.m"
                    else
#line 1343 "declarative_tree.m"
                      {
#line 1343 "declarative_tree.m"
                        {
#line 1343 "declarative_tree.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[16])));
                        }
#line 1343 "declarative_tree.m"
                      }
#line 1342 "declarative_tree.m"
                  }
#line 1310 "declarative_tree.m"
              }
#line 1243 "declarative_tree.m"
            else
#line 1243 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1346 "declarative_tree.m"
                {
#line 1346 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__NegGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1354 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourTail_174;
#line 1348 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_105_105;
#line 1348 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourHeadNode_169;
#line 1348 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_95_95;
#line 1349 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_96_96;
#line 1349 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_97_97;
#line 1349 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_98_98;

#line 1348 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1348 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1348 "declarative_tree.m"
                    {
#line 1348 "declarative_tree.m"
                      mdb__declarative_tree__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1348 "declarative_tree.m"
                      mdb__declarative_tree__ContourTail_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1348 "declarative_tree.m"
                      mdb__declarative_tree__V_95_95 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_105_105, (MR_Integer) 0));
#line 1348 "declarative_tree.m"
                      mdb__declarative_tree__ContourHeadNode_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_105_105, (MR_Integer) 1)));
#line 1349 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_169)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1349 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1349 "declarative_tree.m"
                        {
#line 1349 "declarative_tree.m"
                          mdb__declarative_tree__V_96_96 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 1));
#line 1349 "declarative_tree.m"
                          mdb__declarative_tree__V_97_97 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 2));
#line 1349 "declarative_tree.m"
                          mdb__declarative_tree__V_98_98 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 3)));
#line 1349 "declarative_tree.m"
                        }
#line 1348 "declarative_tree.m"
                    }
#line 1354 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1352 "declarative_tree.m"
                    {
#line 1352 "declarative_tree.m"
                      return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__ContourTail_174, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                    }
#line 1354 "declarative_tree.m"
                  else
#line 1364 "declarative_tree.m"
                    {
#line 1364 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__ContourTail_172;
#line 1355 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_106_106;
#line 1355 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__ContourHeadNode_170;
#line 1355 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__V_99_99;
#line 1356 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__V_100_100;
#line 1356 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__V_101_101;
#line 1356 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_102_102;

#line 1355 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1355 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1355 "declarative_tree.m"
                        {
#line 1355 "declarative_tree.m"
                          mdb__declarative_tree__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1355 "declarative_tree.m"
                          mdb__declarative_tree__ContourTail_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1355 "declarative_tree.m"
                          mdb__declarative_tree__V_99_99 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_106_106, (MR_Integer) 0));
#line 1355 "declarative_tree.m"
                          mdb__declarative_tree__ContourHeadNode_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_106_106, (MR_Integer) 1)));
#line 1356 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1356 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1356 "declarative_tree.m"
                            {
#line 1356 "declarative_tree.m"
                              mdb__declarative_tree__V_100_100 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 1));
#line 1356 "declarative_tree.m"
                              mdb__declarative_tree__V_101_101 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 2)));
#line 1356 "declarative_tree.m"
                              mdb__declarative_tree__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 3)));
#line 1356 "declarative_tree.m"
                            }
#line 1355 "declarative_tree.m"
                        }
#line 1364 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1360 "declarative_tree.m"
                        {
#line 1360 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__NegPath_103;
#line 1360 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__NegAndPath_104;
#line 1360 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__V_108_108;

#line 1360 "declarative_tree.m"
                          {
#line 1360 "declarative_tree.m"
                            mdb__declarative_tree__NegPath_103 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
                          }
#line 1361 "declarative_tree.m"
                          {
#line 1361 "declarative_tree.m"
                            mdb__declarative_tree__NegAndPath_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1361 "declarative_tree.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_tree__NegAndPath_104, 0) = ((MR_Box) (mdb__declarative_tree__NegGoal_94));
#line 1361 "declarative_tree.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_tree__NegAndPath_104, 1) = ((MR_Box) (mdb__declarative_tree__NegPath_103));
#line 1361 "declarative_tree.m"
                          }
#line 1362 "declarative_tree.m"
                          {
#line 1362 "declarative_tree.m"
                            mdb__declarative_tree__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "declarative_tree.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_108_108, 0) = ((MR_Box) (mdb__declarative_tree__NegAndPath_104));
#line 1362 "declarative_tree.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1362 "declarative_tree.m"
                          }
#line 1362 "declarative_tree.m"
                          {
#line 1362 "declarative_tree.m"
                            return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_108_108, mdb__declarative_tree__ContourTail_172, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                          }
#line 1360 "declarative_tree.m"
                        }
#line 1364 "declarative_tree.m"
                      else
#line 1365 "declarative_tree.m"
                        {
#line 1365 "declarative_tree.m"
                          {
#line 1365 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[17])));
                          }
#line 1365 "declarative_tree.m"
                        }
#line 1364 "declarative_tree.m"
                    }
#line 1346 "declarative_tree.m"
                }
#line 1243 "declarative_tree.m"
              else
#line 1244 "declarative_tree.m"
                {
#line 1244 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__InnerGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1244 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__MaybeCut_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1244 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__InnerPath_32;
#line 1244 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__InnerAndPath_33;
#line 1244 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_134_134;
#line 1244 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_135_135;

#line 1245 "declarative_tree.m"
                  {
#line 1245 "declarative_tree.m"
                    mdb__declarative_tree__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "declarative_tree.m"
                    MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1245 "declarative_tree.m"
                    MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_134_134, 1) = ((MR_Box) (mdb__declarative_tree__MaybeCut_31));
#line 1245 "declarative_tree.m"
                  }
#line 1245 "declarative_tree.m"
                  {
#line 1245 "declarative_tree.m"
                    mdb__declarative_tree__InnerPath_32 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, mdb__declarative_tree__V_134_134);
                  }
#line 1246 "declarative_tree.m"
                  {
#line 1246 "declarative_tree.m"
                    mdb__declarative_tree__InnerAndPath_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__InnerAndPath_33, 0) = ((MR_Box) (mdb__declarative_tree__InnerGoal_30));
#line 1246 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__InnerAndPath_33, 1) = ((MR_Box) (mdb__declarative_tree__InnerPath_32));
#line 1246 "declarative_tree.m"
                  }
#line 1247 "declarative_tree.m"
                  {
#line 1247 "declarative_tree.m"
                    mdb__declarative_tree__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_135_135, 0) = ((MR_Box) (mdb__declarative_tree__InnerAndPath_33));
#line 1247 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_135_135, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1247 "declarative_tree.m"
                  }
#line 1247 "declarative_tree.m"
                  {
#line 1247 "declarative_tree.m"
                    return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_135_135, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                  }
#line 1244 "declarative_tree.m"
                }
#line 1235 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_24;
#line 1235 "declarative_tree.m"
  }
#line 1229 "declarative_tree.m"
}

#line 1150 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1150 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_11,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_12,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_13,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_14,
#line 1150 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_15,
#line 1150 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_16,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_17,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_18,
#line 1150 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_19)
#line 1150 "declarative_tree.m"
{
#line 1156 "declarative_tree.m"
  {
#line 1156 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_18 == (MR_Integer) 0);
#line 1156 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_20;
#line 1156 "declarative_tree.m"
    MR_Word mdb__declarative_tree__AdjustedContour_21;
#line 1174 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__PolyConst2_40;
#line 1174 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_58;
#line 1174 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EndPath_59;
#line 1174 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybeReturnLabel_66;
#line 1174 "declarative_tree.m"
    MR_String mdb__declarative_tree__CallPathStr_70;
#line 1174 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallPath_71;
#line 1174 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_72_72;
#line 1174 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_73_73;
#line 13759 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__TypeInfo_41_41;
#line 1207 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_57_57;
#line 1208 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_60_60;
#line 1208 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_61_61;
#line 1208 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_62_62;
#line 1208 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_63_63;
#line 1208 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_64_64;
#line 1208 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_65_65;
#line 1208 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_67_67;
#line 1208 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_68_68;
#line 1208 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_69_69;

#line 1158 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1158 "declarative_tree.m"
      {
#line 1215 "declarative_tree.m"
        {
#line 1215 "declarative_tree.m"
          MR_Word mdb__declarative_tree__NextGoal_52;
#line 1215 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_55_55;
#line 1215 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_56_56;
#line 1215 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_54_54;
#line 1215 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_53_53;

#line 1215 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__GoalPaths_12)) == (MR_mktag((MR_Integer) 1)));
#line 1215 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1215 "declarative_tree.m"
            {
#line 1215 "declarative_tree.m"
              mdb__declarative_tree__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));
#line 1215 "declarative_tree.m"
              mdb__declarative_tree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1215 "declarative_tree.m"
              mdb__declarative_tree__NextGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_55_55, (MR_Integer) 0)));
#line 1215 "declarative_tree.m"
              mdb__declarative_tree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_55_55, (MR_Integer) 1)));
#line 1216 "declarative_tree.m"
              {
#line 1216 "declarative_tree.m"
                mdb__declarative_tree__V_56_56 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(mdb__declarative_tree__NextGoal_52);
              }
#line 1216 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_56_56 == (MR_Integer) 1);
#line 1215 "declarative_tree.m"
            }
#line 1215 "declarative_tree.m"
        }
#line 1161 "declarative_tree.m"
        if (!(mdb__declarative_tree__succeeded))
#line 1162 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "declarative_tree.m"
      }
#line 1170 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1169 "declarative_tree.m"
      {
#line 13834 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_39_39;

#line 13837 "mdb.declarative_tree.c"
        {
#line 13839 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_39_39);
        }
#line 1169 "declarative_tree.m"
        {
#line 1169 "declarative_tree.m"
          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_tree__Contour_13, &mdb__declarative_tree__AdjustedContour_21);
        }
#line 1169 "declarative_tree.m"
      }
#line 1170 "declarative_tree.m"
    else
#line 1171 "declarative_tree.m"
      mdb__declarative_tree__AdjustedContour_21 = mdb__declarative_tree__Contour_13;
#line 1174 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_18 == (MR_Integer) 0);
#line 1174 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1174 "declarative_tree.m"
      {
#line 13859 "mdb.declarative_tree.c"
        mdb__declarative_tree__PolyConst2_40 = (MR_Integer) 2;
#line 13861 "mdb.declarative_tree.c"
        {
#line 13863 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__PolyConst2_40, &mdb__declarative_tree__TypeInfo_41_41);
        }
#line 1207 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__AdjustedContour_21)) == (MR_mktag((MR_Integer) 1)));
#line 1207 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1207 "declarative_tree.m"
          {
#line 1207 "declarative_tree.m"
            mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedContour_21, (MR_Integer) 0)));
#line 1207 "declarative_tree.m"
            mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedContour_21, (MR_Integer) 1)));
#line 1207 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1174 "declarative_tree.m"
              {
#line 1207 "declarative_tree.m"
                mdb__declarative_tree__V_57_57 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_72_72, (MR_Integer) 0));
#line 1207 "declarative_tree.m"
                mdb__declarative_tree__Node_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_72_72, (MR_Integer) 1)));
#line 1207 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeEnd_14)) == (MR_mktag((MR_Integer) 1)));
#line 1207 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1207 "declarative_tree.m"
                  {
#line 1207 "declarative_tree.m"
                    mdb__declarative_tree__EndPath_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeEnd_14, (MR_Integer) 0)));
#line 1208 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_58)) == (MR_mktag((MR_Integer) 0)));
#line 1208 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1208 "declarative_tree.m"
                      {
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 0));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 1));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 2)));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 3)));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 4)));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 5)));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__MaybeReturnLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 6)));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 7)));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 8)));
#line 1208 "declarative_tree.m"
                        mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 9)));
#line 1209 "declarative_tree.m"
                        {
#line 1209 "declarative_tree.m"
                          mdb__declarative_tree__CallPathStr_70 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__MaybeReturnLabel_66);
                        }
#line 1210 "declarative_tree.m"
                        {
#line 1210 "declarative_tree.m"
                          mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_70, &mdb__declarative_tree__CallPath_71);
                        }
#line 1211 "declarative_tree.m"
                        {
#line 1211 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CallPath_71, mdb__declarative_tree__EndPath_59);
                        }
#line 1174 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1174 "declarative_tree.m"
                          {
#line 1215 "declarative_tree.m"
                            {
#line 1215 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__NextGoal_75;
#line 1215 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_78_78;
#line 1215 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_79_79;
#line 1215 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_77_77;
#line 1215 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_76_76;

#line 1215 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__GoalPaths_12)) == (MR_mktag((MR_Integer) 1)));
#line 1215 "declarative_tree.m"
                              if (mdb__declarative_tree__succeeded)
#line 1215 "declarative_tree.m"
                                {
#line 1215 "declarative_tree.m"
                                  mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));
#line 1215 "declarative_tree.m"
                                  mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1215 "declarative_tree.m"
                                  mdb__declarative_tree__NextGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_78_78, (MR_Integer) 0)));
#line 1215 "declarative_tree.m"
                                  mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_78_78, (MR_Integer) 1)));
#line 1216 "declarative_tree.m"
                                  {
#line 1216 "declarative_tree.m"
                                    mdb__declarative_tree__V_79_79 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(mdb__declarative_tree__NextGoal_75);
                                  }
#line 1216 "declarative_tree.m"
                                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_79_79 == (MR_Integer) 1);
#line 1215 "declarative_tree.m"
                                }
#line 1215 "declarative_tree.m"
                            }
#line 1178 "declarative_tree.m"
                            if (!(mdb__declarative_tree__succeeded))
#line 1179 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = (mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1174 "declarative_tree.m"
                          }
#line 1208 "declarative_tree.m"
                      }
#line 1207 "declarative_tree.m"
                  }
#line 1174 "declarative_tree.m"
              }
#line 1207 "declarative_tree.m"
          }
#line 1174 "declarative_tree.m"
      }
#line 1187 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1186 "declarative_tree.m"
      mdb__declarative_tree__MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1187 "declarative_tree.m"
    else
#line 1193 "declarative_tree.m"
      if ((mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1194 "declarative_tree.m"
        {
#line 1194 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__Var_25;
#line 1194 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_34_34;

#line 1926 "declarative_tree.m"
          {
#line 1926 "declarative_tree.m"
            mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1195__1_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__AdjustedContour_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1928 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1927 "declarative_tree.m"
            {
#line 1927 "declarative_tree.m"
            }
#line 1928 "declarative_tree.m"
          else
#line 1929 "declarative_tree.m"
            {
#line 1929 "declarative_tree.m"
              {
#line 1929 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
              }
#line 1929 "declarative_tree.m"
            }
#line 1197 "declarative_tree.m"
          {
#line 1197 "declarative_tree.m"
            mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__MaybeEnd_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "make_primitive_list", (MR_String) "found end when looking for call");
          }
#line 1199 "declarative_tree.m"
          {
#line 1199 "declarative_tree.m"
            mdb__declarative_tree__find_variable_in_args_4_p_0(mdb__declarative_tree__HeadVars_17, mdb__declarative_tree__ArgNum_15, mdb__declarative_tree__TotalArgs_16, &mdb__declarative_tree__Var_25);
          }
#line 1200 "declarative_tree.m"
          {
#line 1200 "declarative_tree.m"
            mdb__declarative_tree__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_19));
#line 1200 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 1) = ((MR_Box) (mdb__declarative_tree__Var_25));
#line 1200 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1200 "declarative_tree.m"
          }
#line 1200 "declarative_tree.m"
          {
#line 1200 "declarative_tree.m"
            mdb__declarative_tree__MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_20, 0) = ((MR_Box) (mdb__declarative_tree__V_34_34));
#line 1200 "declarative_tree.m"
          }
#line 1194 "declarative_tree.m"
        }
#line 1193 "declarative_tree.m"
      else
#line 1189 "declarative_tree.m"
        {
#line 1189 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Goal_22;
#line 1189 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Path_23;
#line 1189 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Tail_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1189 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));

#line 1189 "declarative_tree.m"
          mdb__declarative_tree__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_36_36, (MR_Integer) 0)));
#line 1189 "declarative_tree.m"
          mdb__declarative_tree__Path_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_36_36, (MR_Integer) 1)));
#line 1190 "declarative_tree.m"
          {
#line 1190 "declarative_tree.m"
            return mdb__declarative_tree__MaybePrims_20 = mdb__declarative_tree__match_goal_to_contour_event_11_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__Store_11, mdb__declarative_tree__Goal_22, mdb__declarative_tree__Path_23, mdb__declarative_tree__Tail_24, mdb__declarative_tree__AdjustedContour_21, mdb__declarative_tree__MaybeEnd_14, mdb__declarative_tree__ArgNum_15, mdb__declarative_tree__TotalArgs_16, mdb__declarative_tree__HeadVars_17, mdb__declarative_tree__AllTraced_18, mdb__declarative_tree__Primitives0_19);
          }
#line 1189 "declarative_tree.m"
        }
#line 1156 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_20;
#line 1156 "declarative_tree.m"
  }
#line 1150 "declarative_tree.m"
}

#line 1113 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 1113 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1113 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__FinalAtom_7)
#line 1113 "declarative_tree.m"
{
#line 1116 "declarative_tree.m"
  {
#line 1116 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1116 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_40_52;
#line 1116 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Exit_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1116 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitAtom_20;
#line 1116 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_21;
#line 1116 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_22;
#line 1116 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CallIoSeq_23;
#line 1116 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ExitIoSeq_24;
#line 1116 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__PolyConst2_51;
#line 1116 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 1117 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_8_8;
#line 1117 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_9_9;
#line 1117 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_10_10;
#line 1117 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_11_11;
#line 1117 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1117 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13;
#line 1117 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 1117 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15;
#line 106 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_28_28;
#line 106 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_29_29;
#line 106 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_30_30;
#line 106 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_31_31;
#line 106 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 106 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 106 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;
#line 108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_35_35;
#line 108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_36_36;
#line 108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_38_38;
#line 108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_40_40;
#line 108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_41_41;
#line 108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_42_42;
#line 108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_43_43;
#line 109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_44_44;
#line 109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_45_45;
#line 109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_46_46;
#line 109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_47_47;
#line 109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_48_48;
#line 109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_49_49;
#line 109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_50_50;

#line 1117 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Exit_6)) == (MR_mktag((MR_Integer) 1)));
#line 1117 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1117 "declarative_tree.m"
      {
#line 1117 "declarative_tree.m"
        mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 1117 "declarative_tree.m"
        mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 1117 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 1117 "declarative_tree.m"
        mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 1117 "declarative_tree.m"
        mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 1117 "declarative_tree.m"
        mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 1117 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 1117 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 14213 "mdb.declarative_tree.c"
        mdb__declarative_tree__PolyConst2_51 = (MR_Integer) 2;
#line 14215 "mdb.declarative_tree.c"
        {
#line 14217 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__PolyConst2_51, &mdb__declarative_tree__TypeInfo_40_52);
        }
#line 105 "declarative_tree.m"
        {
#line 105 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_52, mdb__declarative_tree__Exit_6);
        }
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 106 "declarative_tree.m"
        mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
        {
#line 107 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_21, &mdb__declarative_tree__Call_22);
        }
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 0));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 1));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 2)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 3)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 4)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 5)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 6)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 7)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__CallIoSeq_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 8)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 9)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__ExitIoSeq_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_23 == mdb__declarative_tree__ExitIoSeq_24);
#line 112 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 111 "declarative_tree.m"
          {
#line 111 "declarative_tree.m"
            {
#line 111 "declarative_tree.m"
              MR_Word base;
#line 111 "declarative_tree.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "declarative_tree.m"
              *mdb__declarative_tree__FinalAtom_7 = base;
#line 111 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_20));
#line 111 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "declarative_tree.m"
            }
#line 111 "declarative_tree.m"
          }
#line 112 "declarative_tree.m"
        else
#line 113 "declarative_tree.m"
          {
#line 113 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_26_26;
#line 113 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_27_27;

#line 114 "declarative_tree.m"
            {
#line 114 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_27_27, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_23));
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_27_27, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_24));
#line 114 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
            {
#line 113 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_26_26, 0) = ((MR_Box) (mdb__declarative_tree__V_27_27));
#line 113 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
            {
#line 113 "declarative_tree.m"
              MR_Word base;
#line 113 "declarative_tree.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "declarative_tree.m"
              *mdb__declarative_tree__FinalAtom_7 = base;
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_20));
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__V_26_26));
#line 113 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
          }
#line 112 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1117 "declarative_tree.m"
      }
#line 1116 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1116 "declarative_tree.m"
  }
#line 1113 "declarative_tree.m"
}

#line 1111 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
#line 1111 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1111 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 1111 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__wrapper_arg_2)
#line 1111 "declarative_tree.m"
{
#line 1111 "declarative_tree.m"
  {
#line 1111 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1111 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 1111 "declarative_tree.m"
    MR_Word mdb__declarative_tree__conv0_FinalAtom_7;

#line 1111 "declarative_tree.m"
    {
#line 1111 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__get_exit_atom_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 4)), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_FinalAtom_7);
    }
#line 1111 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1111 "declarative_tree.m"
      {
#line 1111 "declarative_tree.m"
        *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_FinalAtom_7));
#line 1111 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1111 "declarative_tree.m"
      }
#line 1111 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1111 "declarative_tree.m"
  }
#line 1111 "declarative_tree.m"
}

#line 1103 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
#line 1103 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 1103 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1103 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_5,
#line 1103 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ExitAtoms_6)
#line 1103 "declarative_tree.m"
{
#line 1107 "declarative_tree.m"
  {
#line 1107 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_23_23;
#line 1107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_24_24;
#line 1107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_26_26;
#line 1107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_28_28;
#line 1107 "declarative_tree.m"
    MR_Box mdb__declarative_tree__ExitPrecId_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 0));
#line 1107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitPrec_8;
#line 1107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Contour_9;
#line 1107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_11_11;
#line 1108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 1));
#line 1108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 2));
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 3)));
#line 1108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 4)));
#line 1108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 5)));
#line 1108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 6)));
#line 1108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 7)));

#line 1109 "declarative_tree.m"
    {
#line 1109 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__ExitPrecId_7, &mdb__declarative_tree__ExitPrec_8);
    }
#line 1110 "declarative_tree.m"
    {
#line 1110 "declarative_tree.m"
      mdb__declarative_tree__materialize_contour_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__ExitPrecId_7, mdb__declarative_tree__ExitPrec_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Contour_9);
    }
#line 1111 "declarative_tree.m"
    {
#line 1111 "declarative_tree.m"
      mdb__declarative_tree__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_6[0]));
#line 1111 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 1) = ((MR_Box) (mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1));
#line 1111 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1111 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 3) = ((MR_Box) (mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19));
#line 1111 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 4) = mdb__declarative_tree__Store_4;
#line 1111 "declarative_tree.m"
    }
#line 14474 "mdb.declarative_tree.c"
    {
#line 14476 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_23_23);
    }
#line 14479 "mdb.declarative_tree.c"
    {
#line 14481 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_24_24);
    }
#line 14484 "mdb.declarative_tree.c"
    {
#line 14486 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14488 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_26_26, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 14490 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_26_26, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_24_24));
#line 14492 "mdb.declarative_tree.c"
    }
#line 14494 "mdb.declarative_tree.c"
    {
#line 14496 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14498 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 14500 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_23_23));
#line 14502 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_26_26));
#line 14504 "mdb.declarative_tree.c"
    }
#line 1111 "declarative_tree.m"
    {
#line 1111 "declarative_tree.m"
      mercury__list__filter_map_3_p_0(mdb__declarative_tree__TypeInfo_28_28, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_tree__V_11_11, mdb__declarative_tree__Contour_9, mdb__declarative_tree__ExitAtoms_6);
#line 1111 "declarative_tree.m"
      return;
    }
#line 1107 "declarative_tree.m"
  }
#line 1103 "declarative_tree.m"
}

#line 1073 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
#line 1073 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34,
#line 1073 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1073 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 1073 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Node_8,
#line 1073 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Nodes0_9,
#line 1073 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Nodes_10)
#line 1073 "declarative_tree.m"
{
#line 1080 "declarative_tree.m"
  while (MR_TRUE)
#line 1080 "declarative_tree.m"
    {
#line 1080 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1080 "declarative_tree.m"
      {
#line 1080 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 0)));
#line 1078 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11;
#line 1078 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 1078 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1078 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14;
#line 1078 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15;
#line 1078 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16;
#line 1078 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17;
#line 1078 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18;
#line 1078 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19;
#line 1078 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20;

#line 1078 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1078 "declarative_tree.m"
          {
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 8)));
#line 1078 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 9)));
#line 1079 "declarative_tree.m"
            *mdb__declarative_tree__Nodes_10 = mdb__declarative_tree__Nodes0_9;
#line 1078 "declarative_tree.m"
          }
#line 1078 "declarative_tree.m"
        else
#line 1090 "declarative_tree.m"
          {
#line 1090 "declarative_tree.m"
            MR_Box mdb__declarative_tree__PrevNodeId_24;
#line 1090 "declarative_tree.m"
            MR_Word mdb__declarative_tree__PrevNode_28;
#line 1090 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Nodes1_32;
#line 1086 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NegPrec_21;
#line 1084 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_22_22;
#line 1084 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_23_23;
#line 1092 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29;
#line 1092 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_30_30;
#line 1092 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_31_31;

#line 1084 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1084 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1084 "declarative_tree.m"
              {
#line 1084 "declarative_tree.m"
                mdb__declarative_tree__NegPrec_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1084 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1084 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1085 "declarative_tree.m"
                mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_tree__NegPrec_21;
#line 1084 "declarative_tree.m"
              }
#line 1084 "declarative_tree.m"
            else
#line 1088 "declarative_tree.m"
              {
#line 1088 "declarative_tree.m"
                MR_Box mdb__declarative_tree__CondPrec_25;
#line 1086 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_26_26;
#line 1086 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_27_27;

#line 1086 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1086 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1086 "declarative_tree.m"
                  {
#line 1086 "declarative_tree.m"
                    mdb__declarative_tree__CondPrec_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1086 "declarative_tree.m"
                    mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1086 "declarative_tree.m"
                    mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1087 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_tree__CondPrec_25;
#line 1086 "declarative_tree.m"
                  }
#line 1086 "declarative_tree.m"
                else
#line 1089 "declarative_tree.m"
                  {
#line 1089 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_8);
                  }
#line 1088 "declarative_tree.m"
              }
#line 1091 "declarative_tree.m"
            {
#line 1091 "declarative_tree.m"
              mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrevNodeId_24, &mdb__declarative_tree__PrevNode_28);
            }
#line 1092 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1092 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1092 "declarative_tree.m"
              {
#line 1092 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1092 "declarative_tree.m"
                mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 1092 "declarative_tree.m"
                mdb__declarative_tree__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1096 "declarative_tree.m"
                mdb__declarative_tree__Nodes1_32 = mdb__declarative_tree__Nodes0_9;
#line 1092 "declarative_tree.m"
              }
#line 1092 "declarative_tree.m"
            else
#line 1098 "declarative_tree.m"
              {
#line 1098 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_33_33;

#line 1098 "declarative_tree.m"
                {
#line 1098 "declarative_tree.m"
                  mdb__declarative_tree__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_33_33, 0) = mdb__declarative_tree__NodeId_7;
#line 1098 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_33_33, 1) = ((MR_Box) (mdb__declarative_tree__Node_8));
#line 1098 "declarative_tree.m"
                }
#line 1098 "declarative_tree.m"
                {
#line 1098 "declarative_tree.m"
                  mdb__declarative_tree__Nodes1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Nodes1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_33_33));
#line 1098 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Nodes1_32, 1) = ((MR_Box) (mdb__declarative_tree__Nodes0_9));
#line 1098 "declarative_tree.m"
                }
#line 1098 "declarative_tree.m"
              }
#line 1100 "declarative_tree.m"
            /* direct tailcall eliminated */
#line 1100 "declarative_tree.m"
            {
#line 1100 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NodeId__tmp_copy_7 = mdb__declarative_tree__PrevNodeId_24;
#line 1100 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Node__tmp_copy_8 = mdb__declarative_tree__PrevNode_28;
#line 1100 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Nodes0__tmp_copy_9 = mdb__declarative_tree__Nodes1_32;

#line 1100 "declarative_tree.m"
              mdb__declarative_tree__Nodes0_9 = mdb__declarative_tree__Nodes0__tmp_copy_9;
#line 1100 "declarative_tree.m"
              mdb__declarative_tree__Node_8 = mdb__declarative_tree__Node__tmp_copy_8;
#line 1100 "declarative_tree.m"
              mdb__declarative_tree__NodeId_7 = mdb__declarative_tree__NodeId__tmp_copy_7;
#line 1100 "declarative_tree.m"
            }
#line 1100 "declarative_tree.m"
            continue;
#line 1090 "declarative_tree.m"
          }
#line 1080 "declarative_tree.m"
      }
#line 1080 "declarative_tree.m"
      break;
#line 1080 "declarative_tree.m"
    }
#line 1073 "declarative_tree.m"
}

#line 1050 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
#line 1050 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25,
#line 1050 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1050 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_5,
#line 1050 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ParentCallNode_6)
#line 1050 "declarative_tree.m"
{
#line 1053 "declarative_tree.m"
  while (MR_TRUE)
#line 1053 "declarative_tree.m"
    {
#line 1053 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1053 "declarative_tree.m"
      {
#line 1053 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 1053 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Node_7;
#line 14776 "mdb.declarative_tree.c"
        MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14778 "mdb.declarative_tree.c"
        MR_Box mdb__declarative_tree__conv1_Node_7;
#line 1055 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_8_8;
#line 1055 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9;
#line 1055 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 1055 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 1055 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12;
#line 1055 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1055 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;
#line 1055 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15;
#line 1055 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16;
#line 1055 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17;

#line 14801 "mdb.declarative_tree.c"
        {
#line 14803 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25), mdb__declarative_tree__Store_4, mdb__declarative_tree__NodeId_5, &mdb__declarative_tree__conv1_Node_7);
        }
#line 14806 "mdb.declarative_tree.c"
        if (mdb__declarative_tree__succeeded)
#line 14808 "mdb.declarative_tree.c"
          {
#line 14810 "mdb.declarative_tree.c"
            mdb__declarative_tree__Node_7 = ((MR_Word) mdb__declarative_tree__conv1_Node_7);
#line 14812 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 14814 "mdb.declarative_tree.c"
          }
#line 1053 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1053 "declarative_tree.m"
          {
#line 1055 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 0)));
#line 1055 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1055 "declarative_tree.m"
              {
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 0));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 7)));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 8)));
#line 1055 "declarative_tree.m"
                mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 9)));
#line 1056 "declarative_tree.m"
                *mdb__declarative_tree__ParentCallNode_6 = mdb__declarative_tree__Node_7;
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1055 "declarative_tree.m"
              }
#line 1055 "declarative_tree.m"
            else
#line 1069 "declarative_tree.m"
              {
#line 1069 "declarative_tree.m"
                MR_Box mdb__declarative_tree__PrevNodeId_21;
#line 1065 "declarative_tree.m"
                MR_Box mdb__declarative_tree__NegPrec_18;
#line 1063 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_19_19;
#line 1063 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_20_20;

#line 1063 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1063 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1063 "declarative_tree.m"
                  {
#line 1063 "declarative_tree.m"
                    mdb__declarative_tree__NegPrec_18 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1063 "declarative_tree.m"
                    mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1063 "declarative_tree.m"
                    mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1064 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_tree__NegPrec_18;
#line 1063 "declarative_tree.m"
                  }
#line 1063 "declarative_tree.m"
                else
#line 1067 "declarative_tree.m"
                  {
#line 1067 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CondPrec_22;
#line 1065 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_23_23;
#line 1065 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_24_24;

#line 1065 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1065 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1065 "declarative_tree.m"
                      {
#line 1065 "declarative_tree.m"
                        mdb__declarative_tree__CondPrec_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1065 "declarative_tree.m"
                        mdb__declarative_tree__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1065 "declarative_tree.m"
                        mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1066 "declarative_tree.m"
                        mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_tree__CondPrec_22;
#line 1065 "declarative_tree.m"
                      }
#line 1065 "declarative_tree.m"
                    else
#line 1068 "declarative_tree.m"
                      {
#line 1068 "declarative_tree.m"
                        mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25, mdb__declarative_tree__Store_4, mdb__declarative_tree__Node_7);
                      }
#line 1067 "declarative_tree.m"
                  }
#line 1070 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1070 "declarative_tree.m"
                {
#line 1070 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__NodeId__tmp_copy_5 = mdb__declarative_tree__PrevNodeId_21;

#line 1070 "declarative_tree.m"
                  mdb__declarative_tree__NodeId_5 = mdb__declarative_tree__NodeId__tmp_copy_5;
#line 1070 "declarative_tree.m"
                }
#line 1070 "declarative_tree.m"
                continue;
#line 1069 "declarative_tree.m"
              }
#line 1053 "declarative_tree.m"
          }
#line 1053 "declarative_tree.m"
        return mdb__declarative_tree__succeeded;
#line 1053 "declarative_tree.m"
      }
#line 1053 "declarative_tree.m"
      break;
#line 1053 "declarative_tree.m"
    }
#line 1050 "declarative_tree.m"
}

#line 1019 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
#line 1019 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_25,
#line 1019 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_5,
#line 1019 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_6,
#line 1019 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_7,
#line 1019 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_8)
#line 1019 "declarative_tree.m"
{
#line 1023 "declarative_tree.m"
  {
#line 1023 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1023 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitAtom_10;
#line 1023 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ArgNum_11;
#line 1023 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__TotalArgs_12;
#line 1023 "declarative_tree.m"
    MR_Box mdb__declarative_tree__StartId_13;
#line 1023 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartRep_15;
#line 1023 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_16_16;
#line 1027 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_17_17;
#line 1028 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_18_18;
#line 1028 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_19_19;
#line 1028 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_20_20;
#line 1028 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_21_21;
#line 1028 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_22_22;
#line 1028 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_23_23;
#line 1028 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_24_24;

#line 1025 "declarative_tree.m"
    {
#line 1025 "declarative_tree.m"
      mdb__declarative_tree__ExitAtom_10 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_for_R_25, mdb__declarative_tree__ExitNode_6);
    }
#line 1026 "declarative_tree.m"
    {
#line 1026 "declarative_tree.m"
      mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_tree__ArgPos_7, mdb__declarative_tree__ExitAtom_10, &mdb__declarative_tree__ArgNum_11);
    }
#line 1027 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_10, (MR_Integer) 0)));
#line 1027 "declarative_tree.m"
    mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_10, (MR_Integer) 1)));
#line 1027 "declarative_tree.m"
    {
#line 1027 "declarative_tree.m"
      mdb__declarative_tree__TotalArgs_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_16_16);
    }
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__StartId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 0));
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 1));
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 2));
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 3)));
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 4)));
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 5)));
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 6)));
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 7)));
#line 1030 "declarative_tree.m"
    {
#line 1030 "declarative_tree.m"
      mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(mdb__declarative_tree__TypeInfo_for_R_25, mdb__declarative_tree__CallNode_5, &mdb__declarative_tree__StartRep_15);
    }
#line 1031 "declarative_tree.m"
    {
#line 1031 "declarative_tree.m"
      MR_Word base;
#line 1031 "declarative_tree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1031 "declarative_tree.m"
      *mdb__declarative_tree__ChainStart_8 = base;
#line 1031 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1031 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__ArgNum_11));
#line 1031 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TotalArgs_12));
#line 1031 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 3) = mdb__declarative_tree__StartId_13;
#line 1031 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1031 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (mdb__declarative_tree__StartRep_15));
#line 1031 "declarative_tree.m"
    }
#line 1023 "declarative_tree.m"
  }
#line 1019 "declarative_tree.m"
}

#line 1001 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
#line 1001 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42,
#line 1001 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1001 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_7,
#line 1001 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_8,
#line 1001 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_9,
#line 1001 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10)
#line 1001 "declarative_tree.m"
{
#line 1005 "declarative_tree.m"
  {
#line 1005 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_44_44;
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallAtom_12;
#line 1005 "declarative_tree.m"
    MR_String mdb__declarative_tree__CallPathStr_13;
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallPath_14;
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartLoc_15;
#line 1005 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ArgNum_16;
#line 1005 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__TotalArgs_17;
#line 1005 "declarative_tree.m"
    MR_Box mdb__declarative_tree__StartId_18 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartPath_19;
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartRep_20;
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_21_21;
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_22_22;
#line 1005 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_49;
#line 1005 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallPrecId_50;
#line 1006 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 1006 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 1006 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 1006 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 1006 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 1006 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 1008 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 1008 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_33_33;
#line 1008 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_34_34;
#line 1008 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_35_35;
#line 1008 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_36_36;
#line 1008 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 1008 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_38_38;
#line 1008 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 1008 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_40_40;
#line 1012 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_41_41;
#line 1039 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_52_52;
#line 1039 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_53_53;
#line 1039 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_54_54;
#line 1039 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_55_55;
#line 1039 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_56_56;
#line 1039 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_57_57;
#line 1039 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_58_58;
#line 1039 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_59_59;
#line 1039 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_60_60;
#line 1042 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ParentCallNode_51;

#line 15168 "mdb.declarative_tree.c"
    {
#line 15170 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_44_44);
    }
#line 1007 "declarative_tree.m"
    {
#line 1007 "declarative_tree.m"
      mdb__declarative_tree__CallAtom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_44_44, mdb__declarative_tree__CallNode_8);
    }
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 1008 "declarative_tree.m"
    mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 1008 "declarative_tree.m"
    {
#line 1008 "declarative_tree.m"
      mdb__declarative_tree__CallPathStr_13 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__V_21_21);
    }
#line 1009 "declarative_tree.m"
    {
#line 1009 "declarative_tree.m"
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_13, &mdb__declarative_tree__CallPath_14);
    }
#line 1010 "declarative_tree.m"
    {
#line 1010 "declarative_tree.m"
      mdb__declarative_tree__StartLoc_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, 0) = mdb__declarative_tree__CallId_7;
#line 1010 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, 1) = ((MR_Box) (mdb__declarative_tree__CallNode_8));
#line 1010 "declarative_tree.m"
    }
#line 1011 "declarative_tree.m"
    {
#line 1011 "declarative_tree.m"
      mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_tree__ArgPos_9, mdb__declarative_tree__CallAtom_12, &mdb__declarative_tree__ArgNum_16);
    }
#line 1012 "declarative_tree.m"
    mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_12, (MR_Integer) 0)));
#line 1012 "declarative_tree.m"
    mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_12, (MR_Integer) 1)));
#line 1012 "declarative_tree.m"
    {
#line 1012 "declarative_tree.m"
      mdb__declarative_tree__TotalArgs_17 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_22_22);
    }
#line 1014 "declarative_tree.m"
    {
#line 1014 "declarative_tree.m"
      mdb__declarative_tree__StartPath_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartPath_19, 0) = ((MR_Box) (mdb__declarative_tree__CallPath_14));
#line 1014 "declarative_tree.m"
    }
#line 1038 "declarative_tree.m"
    {
#line 1038 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_7, &mdb__declarative_tree__Call_49);
    }
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__CallPrecId_50 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 0));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_52_52 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 1));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 2)));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 3)));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 4)));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 5)));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 6)));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_58_58 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 7)));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 8)));
#line 1039 "declarative_tree.m"
    mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 9)));
#line 1040 "declarative_tree.m"
    {
#line 1040 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallPrecId_50, &mdb__declarative_tree__ParentCallNode_51);
    }
#line 1042 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1041 "declarative_tree.m"
      {
#line 1041 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_21_62;

#line 15277 "mdb.declarative_tree.c"
        {
#line 15279 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_21_62);
        }
#line 1041 "declarative_tree.m"
        {
#line 1041 "declarative_tree.m"
          mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(mdb__declarative_tree__TypeInfo_21_62, mdb__declarative_tree__ParentCallNode_51, &mdb__declarative_tree__StartRep_20);
        }
#line 1041 "declarative_tree.m"
      }
#line 1042 "declarative_tree.m"
    else
#line 1043 "declarative_tree.m"
      mdb__declarative_tree__StartRep_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "declarative_tree.m"
    {
#line 1016 "declarative_tree.m"
      MR_Word base;
#line 1016 "declarative_tree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "declarative_tree.m"
      *mdb__declarative_tree__ChainStart_10 = base;
#line 1016 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__StartLoc_15));
#line 1016 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__ArgNum_16));
#line 1016 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TotalArgs_17));
#line 1016 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 3) = mdb__declarative_tree__StartId_18;
#line 1016 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_tree__StartPath_19));
#line 1016 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (mdb__declarative_tree__StartRep_20));
#line 1016 "declarative_tree.m"
    }
#line 1005 "declarative_tree.m"
  }
#line 1001 "declarative_tree.m"
}

#line 948 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
#line 948 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 948 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 948 "declarative_tree.m"
{
#line 948 "declarative_tree.m"
  {
#line 948 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 948 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 948 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 948 "declarative_tree.m"
    {
#line 948 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 948 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 948 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 948 "declarative_tree.m"
  }
#line 948 "declarative_tree.m"
}

#line 849 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
#line 849 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43,
#line 849 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_9,
#line 849 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_10,
#line 849 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_11,
#line 849 "declarative_tree.m"
  MR_Word mdb__declarative_tree__StartLoc_12,
#line 849 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_13,
#line 849 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_14,
#line 849 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_15,
#line 849 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_16)
#line 849 "declarative_tree.m"
{
#line 854 "declarative_tree.m"
  {
#line 854 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalRep_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 1)));
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__HeadVars_50;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalExprRep_51;
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__A_52;
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__B_53;
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__C_54;
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__D_55;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_59_59;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_60_60;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_61_61;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_62_62;
#line 854 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_63_63;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_64_64;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_65_65;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_66_66;
#line 854 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_67_67;
#line 854 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_68_68;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_69_69;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_70_70;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_71_71;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_72_72;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_73_73;
#line 854 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 0)));
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_88_88;
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_89_89;
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_90_90;
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_91_91;
#line 854 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_92_92;
#line 947 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 2)));
#line 947 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 3)));
#line 947 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 4)));
#line 949 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_82_82;
#line 951 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_56_56;

#line 948 "declarative_tree.m"
    {
#line 948 "declarative_tree.m"
      mdb__declarative_tree__HeadVars_50 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[0], mdb__declarative_tree__V_74_74);
    }
#line 949 "declarative_tree.m"
    mdb__declarative_tree__GoalExprRep_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalRep_49, (MR_Integer) 0)));
#line 949 "declarative_tree.m"
    mdb__declarative_tree__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalRep_49, (MR_Integer) 1)));
#line 950 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVars_50)) == (MR_mktag((MR_Integer) 1)));
#line 950 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 950 "declarative_tree.m"
      {
#line 950 "declarative_tree.m"
        mdb__declarative_tree__A_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVars_50, (MR_Integer) 0)));
#line 950 "declarative_tree.m"
        mdb__declarative_tree__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVars_50, (MR_Integer) 1)));
#line 950 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 950 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 950 "declarative_tree.m"
          {
#line 950 "declarative_tree.m"
            mdb__declarative_tree__B_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_59_59, (MR_Integer) 0)));
#line 950 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_59_59, (MR_Integer) 1)));
#line 950 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 950 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 950 "declarative_tree.m"
              {
#line 950 "declarative_tree.m"
                mdb__declarative_tree__C_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_60_60, (MR_Integer) 0)));
#line 950 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_60_60, (MR_Integer) 1)));
#line 950 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 950 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 950 "declarative_tree.m"
                  {
#line 950 "declarative_tree.m"
                    mdb__declarative_tree__D_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_61_61, (MR_Integer) 0)));
#line 950 "declarative_tree.m"
                    mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_61_61, (MR_Integer) 1)));
#line 950 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                      {
#line 951 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__GoalExprRep_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 951 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 951 "declarative_tree.m"
                          {
#line 951 "declarative_tree.m"
                            mdb__declarative_tree__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 1)));
#line 951 "declarative_tree.m"
                            mdb__declarative_tree__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 2)));
#line 951 "declarative_tree.m"
                            mdb__declarative_tree__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 3)));
#line 951 "declarative_tree.m"
                            mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 4)));
#line 951 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_63_63, (MR_String) "exception.m") == 0);
#line 854 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                              {
#line 951 "declarative_tree.m"
                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 951 "declarative_tree.m"
                                if (mdb__declarative_tree__succeeded)
#line 951 "declarative_tree.m"
                                  {
#line 951 "declarative_tree.m"
                                    mdb__declarative_tree__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_64_64, (MR_Integer) 0)));
#line 951 "declarative_tree.m"
                                    mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_64_64, (MR_Integer) 1)));
#line 951 "declarative_tree.m"
                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__D_55 == mdb__declarative_tree__V_88_88);
#line 854 "declarative_tree.m"
                                    if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                                      {
#line 951 "declarative_tree.m"
                                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "declarative_tree.m"
                                        if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                                          {
#line 951 "declarative_tree.m"
                                            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 951 "declarative_tree.m"
                                            if (mdb__declarative_tree__succeeded)
#line 951 "declarative_tree.m"
                                              {
#line 951 "declarative_tree.m"
                                                mdb__declarative_tree__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 1)));
#line 951 "declarative_tree.m"
                                                mdb__declarative_tree__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 2)));
#line 951 "declarative_tree.m"
                                                mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 3)));
#line 952 "declarative_tree.m"
                                                mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_67_67, (MR_String) "exception") == 0);
#line 854 "declarative_tree.m"
                                                if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                                                  {
#line 952 "declarative_tree.m"
                                                    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_68_68, (MR_String) "builtin_catch") == 0);
#line 854 "declarative_tree.m"
                                                    if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                                                      {
#line 952 "declarative_tree.m"
                                                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                                        if (mdb__declarative_tree__succeeded)
#line 952 "declarative_tree.m"
                                                          {
#line 952 "declarative_tree.m"
                                                            mdb__declarative_tree__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_69_69, (MR_Integer) 0)));
#line 952 "declarative_tree.m"
                                                            mdb__declarative_tree__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_69_69, (MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__A_52 == mdb__declarative_tree__V_89_89);
#line 854 "declarative_tree.m"
                                                            if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                                                              {
#line 952 "declarative_tree.m"
                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                                                if (mdb__declarative_tree__succeeded)
#line 952 "declarative_tree.m"
                                                                  {
#line 952 "declarative_tree.m"
                                                                    mdb__declarative_tree__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_70_70, (MR_Integer) 0)));
#line 952 "declarative_tree.m"
                                                                    mdb__declarative_tree__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_70_70, (MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__B_53 == mdb__declarative_tree__V_90_90);
#line 854 "declarative_tree.m"
                                                                    if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                                                                      {
#line 952 "declarative_tree.m"
                                                                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                                                        if (mdb__declarative_tree__succeeded)
#line 952 "declarative_tree.m"
                                                                          {
#line 952 "declarative_tree.m"
                                                                            mdb__declarative_tree__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_71_71, (MR_Integer) 0)));
#line 952 "declarative_tree.m"
                                                                            mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_71_71, (MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                                                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__C_54 == mdb__declarative_tree__V_91_91);
#line 854 "declarative_tree.m"
                                                                            if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                                                                              {
#line 952 "declarative_tree.m"
                                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                                                                if (mdb__declarative_tree__succeeded)
#line 952 "declarative_tree.m"
                                                                                  {
#line 952 "declarative_tree.m"
                                                                                    mdb__declarative_tree__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_72_72, (MR_Integer) 0)));
#line 952 "declarative_tree.m"
                                                                                    mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_72_72, (MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                                                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__D_55 == mdb__declarative_tree__V_92_92);
#line 854 "declarative_tree.m"
                                                                                    if (mdb__declarative_tree__succeeded)
#line 854 "declarative_tree.m"
                                                                                      {
#line 952 "declarative_tree.m"
                                                                                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "declarative_tree.m"
                                                                                        if (mdb__declarative_tree__succeeded)
#line 866 "declarative_tree.m"
                                                                                          {
#line 866 "declarative_tree.m"
                                                                                            if ((mdb__declarative_tree__StartLoc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "declarative_tree.m"
                                                                                              {
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TypeInfo_45_45;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TypeInfo_47_47;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__ExitNode_19;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__ExitAtom_20;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__Args_22;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultArgInfo_23;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultRep_26;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultUniv_27;
#line 867 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__TryResult_28;
#line 867 "declarative_tree.m"
                                                                                                MR_String mdb__declarative_tree__Functor_29;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_32_32;
#line 867 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_33_33;
#line 878 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__V_21_21;
#line 879 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__conv1_TryResultArgInfo_23;
#line 880 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_24_24;
#line 880 "declarative_tree.m"
                                                                                                MR_Integer mdb__declarative_tree__V_25_25;
#line 883 "declarative_tree.m"
                                                                                                MR_Integer mdb__declarative_tree__V_30_30;
#line 883 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_31_31;

#line 876 "declarative_tree.m"
                                                                                                {
#line 876 "declarative_tree.m"
                                                                                                  mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43, mdb__declarative_tree__Store_9, mdb__declarative_tree__Ref_11, &mdb__declarative_tree__ExitNode_19);
                                                                                                }
#line 15683 "mdb.declarative_tree.c"
                                                                                                {
#line 15685 "mdb.declarative_tree.c"
                                                                                                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_45_45);
                                                                                                }
#line 877 "declarative_tree.m"
                                                                                                {
#line 877 "declarative_tree.m"
                                                                                                  mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_45_45, mdb__declarative_tree__ExitNode_19);
                                                                                                }
#line 878 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 0)));
#line 878 "declarative_tree.m"
                                                                                                mdb__declarative_tree__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 1)));
#line 879 "declarative_tree.m"
                                                                                                {
#line 879 "declarative_tree.m"
                                                                                                  mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__Args_22, mdb__declarative_tree__ArgNum_13, &mdb__declarative_tree__conv1_TryResultArgInfo_23);
                                                                                                }
#line 879 "declarative_tree.m"
                                                                                                mdb__declarative_tree__TryResultArgInfo_23 = ((MR_Word) mdb__declarative_tree__conv1_TryResultArgInfo_23);
#line 880 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 0)));
#line 880 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 1)));
#line 880 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 2)));
#line 880 "declarative_tree.m"
                                                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 880 "declarative_tree.m"
                                                                                                if (mdb__declarative_tree__succeeded)
#line 880 "declarative_tree.m"
                                                                                                  {
#line 880 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__TryResultRep_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_32_32, (MR_Integer) 0)));
#line 881 "declarative_tree.m"
                                                                                                    {
#line 881 "declarative_tree.m"
                                                                                                      mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_tree__TryResultRep_26, &mdb__declarative_tree__TryResultUniv_27);
                                                                                                    }
#line 882 "declarative_tree.m"
                                                                                                    {
#line 882 "declarative_tree.m"
                                                                                                      mdb__declarative_tree__TryResult_28 = mercury__univ__univ_value_1_f_0(&mdb__declarative_tree__TypeInfo_47_47, mdb__declarative_tree__TryResultUniv_27);
                                                                                                    }
#line 883 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__V_33_33 = (MR_Integer) 1;
#line 883 "declarative_tree.m"
                                                                                                    {
#line 883 "declarative_tree.m"
                                                                                                      mercury__deconstruct__deconstruct_5_p_1(mdb__declarative_tree__TypeInfo_47_47, mdb__declarative_tree__TryResult_28, mdb__declarative_tree__V_33_33, &mdb__declarative_tree__Functor_29, &mdb__declarative_tree__V_30_30, &mdb__declarative_tree__V_31_31);
                                                                                                    }
#line 884 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Functor_29, (MR_String) "succeeded") == 0);
#line 887 "declarative_tree.m"
                                                                                                    if (mdb__declarative_tree__succeeded)
#line 885 "declarative_tree.m"
                                                                                                      {
#line 885 "declarative_tree.m"
                                                                                                        MR_Word mdb__declarative_tree__V_34_34 = ((MR_Word) mdb__declarative_tree__NodeId_15);

#line 885 "declarative_tree.m"
                                                                                                        {
#line 885 "declarative_tree.m"
                                                                                                          MR_Word base;
#line 885 "declarative_tree.m"
                                                                                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 885 "declarative_tree.m"
                                                                                                          *mdb__declarative_tree__Origin_16 = base;
#line 885 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_34_34));
#line 885 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &mdb__declarative_tree_scalar_common_2[2])));
#line 885 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TermPath_14));
#line 885 "declarative_tree.m"
                                                                                                        }
#line 885 "declarative_tree.m"
                                                                                                      }
#line 887 "declarative_tree.m"
                                                                                                    else
#line 888 "declarative_tree.m"
                                                                                                      {
#line 888 "declarative_tree.m"
                                                                                                        *mdb__declarative_tree__Origin_16 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_tree_scalar_common_4[1]);
#line 888 "declarative_tree.m"
                                                                                                      }
#line 887 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 880 "declarative_tree.m"
                                                                                                  }
#line 867 "declarative_tree.m"
                                                                                              }
#line 866 "declarative_tree.m"
                                                                                            else
#line 860 "declarative_tree.m"
                                                                                              {
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_42_42;

#line 865 "declarative_tree.m"
                                                                                                {
#line 865 "declarative_tree.m"
                                                                                                  mdb__declarative_tree__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_42_42, 0) = ((MR_Box) (mdb__declarative_tree__ArgNum_13));
#line 865 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_42_42, 1) = ((MR_Box) (mdb__declarative_tree__TermPath_14));
#line 865 "declarative_tree.m"
                                                                                                }
#line 865 "declarative_tree.m"
                                                                                                {
#line 865 "declarative_tree.m"
                                                                                                  MR_Word base;
#line 865 "declarative_tree.m"
                                                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "declarative_tree.m"
                                                                                                  *mdb__declarative_tree__Origin_16 = base;
#line 865 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_2[2]));
#line 865 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__V_42_42));
#line 865 "declarative_tree.m"
                                                                                                }
#line 860 "declarative_tree.m"
                                                                                                mdb__declarative_tree__succeeded = MR_TRUE;
#line 860 "declarative_tree.m"
                                                                                              }
#line 866 "declarative_tree.m"
                                                                                          }
#line 854 "declarative_tree.m"
                                                                                      }
#line 952 "declarative_tree.m"
                                                                                  }
#line 854 "declarative_tree.m"
                                                                              }
#line 952 "declarative_tree.m"
                                                                          }
#line 854 "declarative_tree.m"
                                                                      }
#line 952 "declarative_tree.m"
                                                                  }
#line 854 "declarative_tree.m"
                                                              }
#line 952 "declarative_tree.m"
                                                          }
#line 854 "declarative_tree.m"
                                                      }
#line 854 "declarative_tree.m"
                                                  }
#line 951 "declarative_tree.m"
                                              }
#line 854 "declarative_tree.m"
                                          }
#line 854 "declarative_tree.m"
                                      }
#line 951 "declarative_tree.m"
                                  }
#line 854 "declarative_tree.m"
                              }
#line 951 "declarative_tree.m"
                          }
#line 854 "declarative_tree.m"
                      }
#line 950 "declarative_tree.m"
                  }
#line 950 "declarative_tree.m"
              }
#line 950 "declarative_tree.m"
          }
#line 950 "declarative_tree.m"
      }
#line 854 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 854 "declarative_tree.m"
  }
#line 849 "declarative_tree.m"
}

#line 644 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
#line 644 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84,
#line 644 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 644 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 644 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 644 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 644 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10)
#line 644 "declarative_tree.m"
{
#line 647 "declarative_tree.m"
  {
#line 647 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 647 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;
#line 647 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Ns1_38;
#line 647 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Next_72;

#line 648 "declarative_tree.m"
    {
#line 648 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__NodeId_7, &mdb__declarative_tree__Node_11);
    }
#line 654 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 0))))
#line 652 "declarative_tree.m"
      {
#line 653 "declarative_tree.m"
        {
#line 653 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 653 "declarative_tree.m"
          return;
        }
#line 652 "declarative_tree.m"
      }
#line 654 "declarative_tree.m"
    else
#line 654 "declarative_tree.m"
      if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 1))))
#line 669 "declarative_tree.m"
        {
#line 669 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 669 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 669 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 669 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 669 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 669 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_48_48 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 669 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 669 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));

#line 677 "declarative_tree.m"
          {
#line 677 "declarative_tree.m"
            mdb__declarative_tree__succeeded = mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_44);
          }
#line 679 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 678 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 679 "declarative_tree.m"
          else
#line 680 "declarative_tree.m"
            {
#line 680 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_76_76 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 680 "declarative_tree.m"
              {
#line 680 "declarative_tree.m"
                mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_76_76));
#line 680 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 680 "declarative_tree.m"
              }
#line 680 "declarative_tree.m"
            }
#line 669 "declarative_tree.m"
        }
#line 654 "declarative_tree.m"
      else
#line 654 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 2))))
#line 692 "declarative_tree.m"
          mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 654 "declarative_tree.m"
        else
#line 654 "declarative_tree.m"
          if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 694 "declarative_tree.m"
            {
#line 694 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 694 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 694 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2)));

#line 700 "declarative_tree.m"
              if ((mdb__declarative_tree__CondStatus_71 == (MR_Integer) 1))
#line 701 "declarative_tree.m"
                {
#line 702 "declarative_tree.m"
                  {
#line 702 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 702 "declarative_tree.m"
                    return;
                  }
#line 701 "declarative_tree.m"
                }
#line 700 "declarative_tree.m"
              else
#line 699 "declarative_tree.m"
                mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 694 "declarative_tree.m"
            }
#line 654 "declarative_tree.m"
          else
#line 654 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 665 "declarative_tree.m"
              {
#line 665 "declarative_tree.m"
                MR_Box mdb__declarative_tree__Prec_82 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 665 "declarative_tree.m"
                MR_Box mdb__declarative_tree__NestedStartId_83 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 665 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));

#line 667 "declarative_tree.m"
                {
#line 667 "declarative_tree.m"
                  mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Prec_82, mdb__declarative_tree__NestedStartId_83, mdb__declarative_tree__Ns0_9, &mdb__declarative_tree__Ns1_38);
                }
#line 665 "declarative_tree.m"
              }
#line 654 "declarative_tree.m"
            else
#line 654 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 657 "declarative_tree.m"
                {
#line 657 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_78_78 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 659 "declarative_tree.m"
                  {
#line 659 "declarative_tree.m"
                    mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_78_78));
#line 659 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 659 "declarative_tree.m"
                  }
#line 657 "declarative_tree.m"
                }
#line 654 "declarative_tree.m"
              else
#line 654 "declarative_tree.m"
                if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 657 "declarative_tree.m"
                  {
#line 657 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_87_87 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 659 "declarative_tree.m"
                    {
#line 659 "declarative_tree.m"
                      mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_87_87));
#line 659 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 659 "declarative_tree.m"
                    }
#line 657 "declarative_tree.m"
                  }
#line 654 "declarative_tree.m"
                else
#line 654 "declarative_tree.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 692 "declarative_tree.m"
                    mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 654 "declarative_tree.m"
                  else
#line 654 "declarative_tree.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 692 "declarative_tree.m"
                      mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 654 "declarative_tree.m"
                    else
#line 654 "declarative_tree.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 652 "declarative_tree.m"
                        {
#line 653 "declarative_tree.m"
                          {
#line 653 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 653 "declarative_tree.m"
                            return;
                          }
#line 652 "declarative_tree.m"
                        }
#line 654 "declarative_tree.m"
                      else
#line 654 "declarative_tree.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 661 "declarative_tree.m"
                          {
#line 661 "declarative_tree.m"
                            MR_Box mdb__declarative_tree__Prec_39 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 661 "declarative_tree.m"
                            MR_Box mdb__declarative_tree__NestedStartId_40 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 661 "declarative_tree.m"
                            MR_Box mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));

#line 663 "declarative_tree.m"
                            {
#line 663 "declarative_tree.m"
                              mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, (MR_Integer) 0, mdb__declarative_tree__Store_6, mdb__declarative_tree__Prec_39, mdb__declarative_tree__NestedStartId_40, mdb__declarative_tree__Ns0_9, &mdb__declarative_tree__Ns1_38);
                            }
#line 661 "declarative_tree.m"
                          }
#line 654 "declarative_tree.m"
                        else
#line 654 "declarative_tree.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 692 "declarative_tree.m"
                            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 654 "declarative_tree.m"
                          else
#line 654 "declarative_tree.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 692 "declarative_tree.m"
                              mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 654 "declarative_tree.m"
                            else
#line 692 "declarative_tree.m"
                              mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 705 "declarative_tree.m"
    {
#line 705 "declarative_tree.m"
      mdb__declarative_tree__Next_72 = mdb__declarative_execution__step_in_stratum_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_11);
    }
#line 706 "declarative_tree.m"
    {
#line 706 "declarative_tree.m"
      mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Next_72, mdb__declarative_tree__StartId_8, mdb__declarative_tree__Ns1_38, mdb__declarative_tree__Ns_10);
#line 706 "declarative_tree.m"
      return;
    }
#line 647 "declarative_tree.m"
  }
#line 644 "declarative_tree.m"
}

#line 634 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
#line 634 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11,
#line 634 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 634 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 634 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 634 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 634 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10)
#line 634 "declarative_tree.m"
{
#line 640 "declarative_tree.m"
  {
#line 640 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 638 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_13_13;

#line 16165 "mdb.declarative_tree.c"
    {
#line 16167 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_13_13);
    }
#line 638 "declarative_tree.m"
    {
#line 638 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_13, mdb__declarative_tree__NodeId_7, mdb__declarative_tree__StartId_8);
    }
#line 640 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 639 "declarative_tree.m"
      *mdb__declarative_tree__Ns_10 = mdb__declarative_tree__Ns0_9;
#line 640 "declarative_tree.m"
    else
#line 641 "declarative_tree.m"
      {
#line 641 "declarative_tree.m"
        mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11, mdb__declarative_tree__Store_6, mdb__declarative_tree__NodeId_7, mdb__declarative_tree__StartId_8, mdb__declarative_tree__Ns0_9, mdb__declarative_tree__Ns_10);
#line 641 "declarative_tree.m"
        return;
      }
#line 640 "declarative_tree.m"
  }
#line 634 "declarative_tree.m"
}

#line 512 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
#line 512 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115,
#line 512 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 512 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 512 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 512 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 512 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 512 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12)
#line 512 "declarative_tree.m"
{
#line 516 "declarative_tree.m"
  {
#line 516 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 516 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_13;
#line 516 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Ns1_32;
#line 516 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Next_72;

#line 517 "declarative_tree.m"
    {
#line 517 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, &mdb__declarative_tree__Node_13);
    }
#line 521 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 0))))
#line 519 "declarative_tree.m"
      {
#line 520 "declarative_tree.m"
        {
#line 520 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 520 "declarative_tree.m"
          return;
        }
#line 519 "declarative_tree.m"
      }
#line 521 "declarative_tree.m"
    else
#line 521 "declarative_tree.m"
      if (((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 1))))
#line 522 "declarative_tree.m"
        {
#line 522 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_83_83 = ((MR_Word) mdb__declarative_tree__NodeId_9);

#line 524 "declarative_tree.m"
          {
#line 524 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_83_83));
#line 524 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_11));
#line 524 "declarative_tree.m"
          }
#line 522 "declarative_tree.m"
        }
#line 521 "declarative_tree.m"
      else
#line 521 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 2))))
#line 598 "declarative_tree.m"
          mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 521 "declarative_tree.m"
        else
#line 521 "declarative_tree.m"
          if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 600 "declarative_tree.m"
            {
#line 600 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondStatus_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));
#line 600 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_66_66 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 600 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2)));

#line 604 "declarative_tree.m"
              if ((mdb__declarative_tree__CondStatus_68 == (MR_Integer) 1))
#line 602 "declarative_tree.m"
                {
#line 603 "declarative_tree.m"
                  {
#line 603 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 603 "declarative_tree.m"
                    return;
                  }
#line 602 "declarative_tree.m"
                }
#line 604 "declarative_tree.m"
              else
#line 608 "declarative_tree.m"
                mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 600 "declarative_tree.m"
            }
#line 521 "declarative_tree.m"
          else
#line 521 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 555 "declarative_tree.m"
              {
#line 555 "declarative_tree.m"
                MR_Box mdb__declarative_tree__NestedStartId_88 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 555 "declarative_tree.m"
                MR_Box mdb__declarative_tree__Prec_89 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 553 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 557 "declarative_tree.m"
                {
#line 557 "declarative_tree.m"
                  mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_89, mdb__declarative_tree__NestedStartId_88, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
                }
#line 555 "declarative_tree.m"
              }
#line 521 "declarative_tree.m"
            else
#line 521 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 559 "declarative_tree.m"
                {
#line 559 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__CallId_94 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 559 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 559 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3));
#line 559 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 4)));
#line 559 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 5)));
#line 559 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 6)));
#line 559 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 7)));

#line 574 "declarative_tree.m"
                  if ((mdb__declarative_tree__ContourType_7 == (MR_Integer) 1))
#line 572 "declarative_tree.m"
                    {
#line 572 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_82_82 = ((MR_Word) mdb__declarative_tree__NodeId_9);

#line 573 "declarative_tree.m"
                      {
#line 573 "declarative_tree.m"
                        mdb__declarative_tree__Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_82_82));
#line 573 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_11));
#line 573 "declarative_tree.m"
                      }
#line 572 "declarative_tree.m"
                    }
#line 574 "declarative_tree.m"
                  else
#line 575 "declarative_tree.m"
                    {
#line 575 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__Call_90;
#line 575 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__NestedStartId_91;
#line 577 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__V_106_106;
#line 577 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_107_107;
#line 577 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_108_108;
#line 577 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_109_109;
#line 577 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_110_110;
#line 577 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_111_111;
#line 577 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__V_112_112;
#line 577 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_113_113;
#line 577 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_114_114;

#line 576 "declarative_tree.m"
                      {
#line 576 "declarative_tree.m"
                        mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_94, &mdb__declarative_tree__Call_90);
                      }
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__NestedStartId_91 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 0));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_106_106 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 1));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 2)));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 3)));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 4)));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 5)));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 6)));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_112_112 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 7)));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 8)));
#line 577 "declarative_tree.m"
                      mdb__declarative_tree__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 9)));
#line 578 "declarative_tree.m"
                      {
#line 578 "declarative_tree.m"
                        mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__NestedStartId_91, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
                      }
#line 575 "declarative_tree.m"
                    }
#line 559 "declarative_tree.m"
                }
#line 521 "declarative_tree.m"
              else
#line 521 "declarative_tree.m"
                if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 526 "declarative_tree.m"
                  {
#line 526 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CallId_34 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 526 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Call_39;
#line 526 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__NestedStartId_40;
#line 526 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 526 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3));
#line 526 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 4)));
#line 526 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 5)));
#line 526 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 6)));
#line 541 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_97_97;
#line 541 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_98_98;
#line 541 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_99_99;
#line 541 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_100_100;
#line 541 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_101_101;
#line 541 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_102_102;
#line 541 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_103_103;
#line 541 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_104_104;
#line 541 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_105_105;

#line 540 "declarative_tree.m"
                    {
#line 540 "declarative_tree.m"
                      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_34, &mdb__declarative_tree__Call_39);
                    }
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__NestedStartId_40 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 0));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_97_97 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 1));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 2)));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 3)));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 4)));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 5)));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 6)));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_103_103 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 7)));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 8)));
#line 541 "declarative_tree.m"
                    mdb__declarative_tree__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 9)));
#line 542 "declarative_tree.m"
                    {
#line 542 "declarative_tree.m"
                      mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__NestedStartId_40, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
                    }
#line 526 "declarative_tree.m"
                  }
#line 521 "declarative_tree.m"
                else
#line 521 "declarative_tree.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 598 "declarative_tree.m"
                    mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 521 "declarative_tree.m"
                  else
#line 521 "declarative_tree.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 598 "declarative_tree.m"
                      mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 521 "declarative_tree.m"
                    else
#line 521 "declarative_tree.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 611 "declarative_tree.m"
                        {
#line 611 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__NegStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));
#line 611 "declarative_tree.m"
                          MR_Box mdb__declarative_tree__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 611 "declarative_tree.m"
                          MR_Box mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2)));

#line 615 "declarative_tree.m"
                          if ((mdb__declarative_tree__ContourType_7 == (MR_Integer) 1))
#line 620 "declarative_tree.m"
                            if ((mdb__declarative_tree__NegStatus_71 == (MR_Integer) 1))
#line 618 "declarative_tree.m"
                              {
#line 619 "declarative_tree.m"
                                {
#line 619 "declarative_tree.m"
                                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 619 "declarative_tree.m"
                                  return;
                                }
#line 618 "declarative_tree.m"
                              }
#line 620 "declarative_tree.m"
                            else
#line 627 "declarative_tree.m"
                              mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 615 "declarative_tree.m"
                          else
#line 613 "declarative_tree.m"
                            {
#line 614 "declarative_tree.m"
                              {
#line 614 "declarative_tree.m"
                                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 614 "declarative_tree.m"
                                return;
                              }
#line 613 "declarative_tree.m"
                            }
#line 611 "declarative_tree.m"
                        }
#line 521 "declarative_tree.m"
                      else
#line 521 "declarative_tree.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 544 "declarative_tree.m"
                          {
#line 544 "declarative_tree.m"
                            MR_Box mdb__declarative_tree__Prec_41 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 544 "declarative_tree.m"
                            MR_Box mdb__declarative_tree__NestedStartId_87 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 544 "declarative_tree.m"
                            MR_Box mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 551 "declarative_tree.m"
                            {
#line 551 "declarative_tree.m"
                              mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_41, mdb__declarative_tree__NestedStartId_87, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
                            }
#line 544 "declarative_tree.m"
                          }
#line 521 "declarative_tree.m"
                        else
#line 521 "declarative_tree.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 555 "declarative_tree.m"
                            {
#line 555 "declarative_tree.m"
                              MR_Box mdb__declarative_tree__NestedStartId_120 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 555 "declarative_tree.m"
                              MR_Box mdb__declarative_tree__Prec_121 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 554 "declarative_tree.m"
                              MR_Box mdb__declarative_tree__V_44_44 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 557 "declarative_tree.m"
                              {
#line 557 "declarative_tree.m"
                                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_121, mdb__declarative_tree__NestedStartId_120, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
                              }
#line 555 "declarative_tree.m"
                            }
#line 521 "declarative_tree.m"
                          else
#line 521 "declarative_tree.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 598 "declarative_tree.m"
                              mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 521 "declarative_tree.m"
                            else
#line 598 "declarative_tree.m"
                              mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 631 "declarative_tree.m"
    {
#line 631 "declarative_tree.m"
      mdb__declarative_tree__Next_72 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Node_13);
    }
#line 632 "declarative_tree.m"
    {
#line 632 "declarative_tree.m"
      mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__Next_72, mdb__declarative_tree__StartId_10, mdb__declarative_tree__Ns1_32, mdb__declarative_tree__Ns_12);
#line 632 "declarative_tree.m"
      return;
    }
#line 516 "declarative_tree.m"
  }
#line 512 "declarative_tree.m"
}

#line 501 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
#line 501 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13,
#line 501 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 501 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 501 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 501 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 501 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 501 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12)
#line 501 "declarative_tree.m"
{
#line 508 "declarative_tree.m"
  {
#line 508 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 506 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_15_15;

#line 16646 "mdb.declarative_tree.c"
    {
#line 16648 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_15_15);
    }
#line 506 "declarative_tree.m"
    {
#line 506 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_15, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__StartId_10);
    }
#line 508 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 507 "declarative_tree.m"
      *mdb__declarative_tree__Ns_12 = mdb__declarative_tree__Ns0_11;
#line 508 "declarative_tree.m"
    else
#line 509 "declarative_tree.m"
      {
#line 509 "declarative_tree.m"
        mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__StartId_10, mdb__declarative_tree__Ns0_11, mdb__declarative_tree__Ns_12);
#line 509 "declarative_tree.m"
        return;
      }
#line 508 "declarative_tree.m"
  }
#line 501 "declarative_tree.m"
}

#line 473 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
#line 473 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 473 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 473 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_4)
#line 473 "declarative_tree.m"
{
#line 475 "declarative_tree.m"
  {
#line 475 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 475 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_5;
#line 475 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_6_6;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_7_7;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_8_8;
#line 477 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 477 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 477 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 477 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13;
#line 477 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 477 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15;

#line 476 "declarative_tree.m"
    {
#line 476 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__Store_3, mdb__declarative_tree__Ref_4, &mdb__declarative_tree__CallNode_5);
    }
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 0));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 1));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 2)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 3)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 4)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 5)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 6)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 7)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 8)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 9)));
#line 477 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 475 "declarative_tree.m"
  }
#line 473 "declarative_tree.m"
}

#line 454 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
#line 454 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 454 "declarative_tree.m"
{
#line 454 "declarative_tree.m"
  {
#line 454 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 454 "declarative_tree.m"
    MR_builtin_longjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0, 1);
#line 454 "declarative_tree.m"
  }
#line 454 "declarative_tree.m"
}

#line 454 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
#line 454 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 454 "declarative_tree.m"
{
#line 454 "declarative_tree.m"
  {
#line 454 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 464 "declarative_tree.m"
    {
#line 464 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19);
    }
#line 464 "declarative_tree.m"
    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 464 "declarative_tree.m"
      {
#line 464 "declarative_tree.m"
        mdb__declarative_tree__missing_answer_special_case_1_p_0_1(mdb__declarative_tree__env_ptr);
#line 464 "declarative_tree.m"
        return;
      }
#line 454 "declarative_tree.m"
  }
#line 454 "declarative_tree.m"
}

#line 454 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
#line 454 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 454 "declarative_tree.m"
{
#line 454 "declarative_tree.m"
  {
#line 454 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 463 "declarative_tree.m"
    {
#line 463 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18);
    }
#line 454 "declarative_tree.m"
    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 454 "declarative_tree.m"
      {
#line 464 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_16_16 = (MR_String) "solutions";
#line 469 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19 = (MR_Word) &mdb__declarative_tree_scalar_common_2[0];
#line 469 "declarative_tree.m"
        {
#line 469 "declarative_tree.m"
          mdb__declarative_tree__missing_answer_special_case_1_p_0_3(mdb__declarative_tree__env_ptr);
        }
#line 470 "declarative_tree.m"
        {
#line 470 "declarative_tree.m"
          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[10]);
#line 470 "declarative_tree.m"
          {
#line 470 "declarative_tree.m"
            mdb__declarative_tree__missing_answer_special_case_1_p_0_3(mdb__declarative_tree__env_ptr);
          }
#line 470 "declarative_tree.m"
        }
#line 454 "declarative_tree.m"
      }
#line 454 "declarative_tree.m"
  }
#line 454 "declarative_tree.m"
}

#line 454 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
#line 454 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 454 "declarative_tree.m"
{
#line 454 "declarative_tree.m"
  {
#line 454 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 454 "declarative_tree.m"
    if (MR_builtin_setjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0) == 0)
#line 454 "declarative_tree.m"
      {
#line 454 "declarative_tree.m"
        {
#line 454 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ProcLabel_3;
#line 454 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 0)));
#line 454 "declarative_tree.m"
          MR_String mdb__declarative_tree__V_15_15;
#line 454 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21;
#line 454 "declarative_tree.m"
          MR_String mdb__declarative_tree__V_22_22;
#line 454 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_23_23;
#line 454 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_24_24;
#line 454 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_25_25;
#line 455 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 1)));
#line 457 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20;

#line 455 "declarative_tree.m"
          {
#line 455 "declarative_tree.m"
            mdb__declarative_tree__ProcLabel_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__V_8_8);
          }
#line 457 "declarative_tree.m"
          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__ProcLabel_3)) == (MR_mktag((MR_Integer) 0)));
#line 457 "declarative_tree.m"
          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 457 "declarative_tree.m"
            {
#line 457 "declarative_tree.m"
              {
#line 457 "declarative_tree.m"
                mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 0)));
#line 457 "declarative_tree.m"
                mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 1)));
#line 457 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 2)));
#line 457 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 3)));
#line 457 "declarative_tree.m"
                mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 4)));
#line 457 "declarative_tree.m"
                mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 5)));
#line 457 "declarative_tree.m"
              }
#line 454 "declarative_tree.m"
              {
#line 457 "declarative_tree.m"
                (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (mdb__declarative_tree__V_24_24 == (MR_Integer) 0);
#line 454 "declarative_tree.m"
                if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 454 "declarative_tree.m"
                  {
#line 459 "declarative_tree.m"
                    if ((mdb__declarative_tree__V_21_21 == (MR_Integer) 4))
#line 457 "declarative_tree.m"
                      {
#line 457 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(mdb__declarative_tree__V_22_22, (MR_String) "builtin_aggregate") == 0);
#line 457 "declarative_tree.m"
                        if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 457 "declarative_tree.m"
                          {
#line 457 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = mdb__declarative_tree__V_25_25;
#line 457 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = mdb__declarative_tree__V_23_23;
#line 457 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 457 "declarative_tree.m"
                          }
#line 457 "declarative_tree.m"
                      }
#line 459 "declarative_tree.m"
                    else
#line 459 "declarative_tree.m"
                      if ((mdb__declarative_tree__V_21_21 == (MR_Integer) 6))
#line 460 "declarative_tree.m"
                        {
#line 460 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(mdb__declarative_tree__V_22_22, (MR_String) "builtin_aggregate2") == 0);
#line 460 "declarative_tree.m"
                          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 460 "declarative_tree.m"
                            {
#line 460 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = mdb__declarative_tree__V_25_25;
#line 460 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = mdb__declarative_tree__V_23_23;
#line 460 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 460 "declarative_tree.m"
                            }
#line 460 "declarative_tree.m"
                        }
#line 459 "declarative_tree.m"
                      else
#line 459 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
#line 454 "declarative_tree.m"
                    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 454 "declarative_tree.m"
                      {
#line 463 "declarative_tree.m"
                        mdb__declarative_tree__V_15_15 = (MR_String) "solutions";
#line 469 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18 = (MR_Word) &mdb__declarative_tree_scalar_common_2[0];
#line 469 "declarative_tree.m"
                        {
#line 469 "declarative_tree.m"
                          mdb__declarative_tree__missing_answer_special_case_1_p_0_2(mdb__declarative_tree__env_ptr);
                        }
#line 470 "declarative_tree.m"
                        {
#line 470 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[10]);
#line 470 "declarative_tree.m"
                          {
#line 470 "declarative_tree.m"
                            mdb__declarative_tree__missing_answer_special_case_1_p_0_2(mdb__declarative_tree__env_ptr);
                          }
#line 470 "declarative_tree.m"
                        }
#line 454 "declarative_tree.m"
                      }
#line 454 "declarative_tree.m"
                  }
#line 454 "declarative_tree.m"
              }
#line 457 "declarative_tree.m"
            }
#line 454 "declarative_tree.m"
        }
#line 454 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
#line 454 "declarative_tree.m"
      }
#line 454 "declarative_tree.m"
    else
#line 454 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 454 "declarative_tree.m"
  }
#line 454 "declarative_tree.m"
}

#line 452 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
#line 452 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_2)
#line 452 "declarative_tree.m"
{
#line 452 "declarative_tree.m"
  {
#line 452 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s mdb__declarative_tree__env;

#line 452 "declarative_tree.m"
    (mdb__declarative_tree__env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2 = mdb__declarative_tree__Atom_2;
#line 454 "declarative_tree.m"
    {
#line 454 "declarative_tree.m"
      mdb__declarative_tree__missing_answer_special_case_1_p_0_4(&mdb__declarative_tree__env);
    }
#line 454 "declarative_tree.m"
    return (mdb__declarative_tree__env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
#line 452 "declarative_tree.m"
  }
#line 452 "declarative_tree.m"
}

#line 345 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90,
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Weighting_10,
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 345 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevWeight_13,
#line 345 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Weight_14,
#line 345 "declarative_tree.m"
  MR_Word mdb__declarative_tree__RecordDups_15,
#line 345 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__DupFactor_16,
#line 345 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevDupWeight_17,
#line 345 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Excess_18)
#line 345 "declarative_tree.m"
{
#line 350 "declarative_tree.m"
  while (MR_TRUE)
#line 350 "declarative_tree.m"
    {
#line 350 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 350 "declarative_tree.m"
      {
#line 350 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 350 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Store_11 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 350 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Ref_12 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 350 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Final_19;
#line 423 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_21;
#line 423 "declarative_tree.m"
        MR_Box mdb__declarative_tree__RedoId_22;
#line 423 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__FinalEvent_24;
#line 423 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__FinalSuspicion_27;
#line 423 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NewRecordDups_28;

#line 351 "declarative_tree.m"
        {
#line 351 "declarative_tree.m"
          mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__Ref_12, &mdb__declarative_tree__Final_19);
        }
#line 357 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Final_19)) == (MR_mktag((MR_Integer) 1))))
#line 355 "declarative_tree.m"
          {
#line 354 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 0));
#line 354 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_23_23;
#line 354 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_25_25;
#line 354 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_26_26;

#line 354 "declarative_tree.m"
            mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 354 "declarative_tree.m"
            mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 354 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 3)));
#line 354 "declarative_tree.m"
            mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 354 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 354 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 354 "declarative_tree.m"
            mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 7)));
#line 356 "declarative_tree.m"
            mdb__declarative_tree__NewRecordDups_28 = mdb__declarative_tree__RecordDups_15;
#line 355 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 355 "declarative_tree.m"
          }
#line 357 "declarative_tree.m"
        else
#line 357 "declarative_tree.m"
          if (((((MR_tag((MR_Word) mdb__declarative_tree__Final_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 363 "declarative_tree.m"
            {
#line 362 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 362 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_32_32;
#line 362 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_33_33;

#line 362 "declarative_tree.m"
              mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 362 "declarative_tree.m"
              mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 3));
#line 362 "declarative_tree.m"
              mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 362 "declarative_tree.m"
              mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 362 "declarative_tree.m"
              mdb__declarative_tree__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 362 "declarative_tree.m"
              mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 7)));
#line 364 "declarative_tree.m"
              mdb__declarative_tree__NewRecordDups_28 = (MR_Integer) 1;
#line 363 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 363 "declarative_tree.m"
            }
#line 357 "declarative_tree.m"
          else
#line 357 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__Final_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 359 "declarative_tree.m"
              {
#line 358 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 358 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_30_30;

#line 358 "declarative_tree.m"
                mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 358 "declarative_tree.m"
                mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 3));
#line 358 "declarative_tree.m"
                mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 358 "declarative_tree.m"
                mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 358 "declarative_tree.m"
                mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 360 "declarative_tree.m"
                mdb__declarative_tree__NewRecordDups_28 = (MR_Integer) 1;
#line 359 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 359 "declarative_tree.m"
              }
#line 357 "declarative_tree.m"
            else
#line 357 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 423 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 396 "declarative_tree.m"
          {
#line 396 "declarative_tree.m"
            MR_Box mdb__declarative_tree__ExitId_36;
#line 396 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__RedoEvent_37;
#line 396 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__RedoSuspicion_39;
#line 368 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Redo_34;
#line 369 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_35_35;
#line 369 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_38_38;

#line 368 "declarative_tree.m"
            {
#line 368 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__RedoId_22, &mdb__declarative_tree__Redo_34);
            }
#line 368 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 368 "declarative_tree.m"
              {
#line 369 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 0));
#line 369 "declarative_tree.m"
                mdb__declarative_tree__ExitId_36 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 1));
#line 369 "declarative_tree.m"
                mdb__declarative_tree__RedoEvent_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 2)));
#line 369 "declarative_tree.m"
                mdb__declarative_tree__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 3)));
#line 369 "declarative_tree.m"
                mdb__declarative_tree__RedoSuspicion_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 4)));
#line 369 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 368 "declarative_tree.m"
              }
#line 396 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 385 "declarative_tree.m"
              {
#line 385 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewPrevDupWeight_40;
#line 385 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewPrevWeight_41;
#line 385 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_56_56;
#line 385 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_57_57;

#line 17242 "mdb.declarative_tree.c"
                if ((mdb__declarative_tree__NewRecordDups_28 == (MR_Integer) 0))
#line 17244 "mdb.declarative_tree.c"
                  {
#line 384 "declarative_tree.m"
                    mdb__declarative_tree__NewPrevDupWeight_40 = (MR_Integer) 0;
#line 389 "declarative_tree.m"
                    if ((mdb__declarative_tree__Weighting_10 == (MR_Integer) 0))
#line 387 "declarative_tree.m"
                      {
#line 387 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__V_52_52;
#line 387 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__V_53_53 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);

#line 388 "declarative_tree.m"
                        mdb__declarative_tree__V_52_52 = (mdb__declarative_tree__V_53_53 - mdb__declarative_tree__RedoEvent_37);
#line 388 "declarative_tree.m"
                        mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_52_52 + (MR_Integer) 1);
#line 387 "declarative_tree.m"
                      }
#line 389 "declarative_tree.m"
                    else
#line 390 "declarative_tree.m"
                      {
#line 390 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__V_51_51 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);

#line 391 "declarative_tree.m"
                        mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_51_51 - mdb__declarative_tree__RedoSuspicion_39);
#line 390 "declarative_tree.m"
                      }
#line 17274 "mdb.declarative_tree.c"
                  }
#line 17276 "mdb.declarative_tree.c"
                else
#line 17278 "mdb.declarative_tree.c"
                  if ((mdb__declarative_tree__Weighting_10 == (MR_Integer) 0))
#line 17280 "mdb.declarative_tree.c"
                    {
#line 17282 "mdb.declarative_tree.c"
                      MR_Integer mdb__declarative_tree__V_47_47;
#line 17284 "mdb.declarative_tree.c"
                      MR_Integer mdb__declarative_tree__V_48_48;
#line 17286 "mdb.declarative_tree.c"
                      MR_Integer mdb__declarative_tree__V_49_49 = (mdb__declarative_tree__FinalEvent_24 - mdb__declarative_tree__RedoEvent_37);
#line 17288 "mdb.declarative_tree.c"
                      MR_Integer mdb__declarative_tree__V_92_92;
#line 17290 "mdb.declarative_tree.c"
                      MR_Integer mdb__declarative_tree__V_93_93;

#line 376 "declarative_tree.m"
                      mdb__declarative_tree__V_48_48 = (mdb__declarative_tree__V_49_49 + (MR_Integer) 1);
#line 375 "declarative_tree.m"
                      mdb__declarative_tree__V_47_47 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_48_48);
#line 375 "declarative_tree.m"
                      mdb__declarative_tree__NewPrevDupWeight_40 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_47_47);
#line 388 "declarative_tree.m"
                      mdb__declarative_tree__V_93_93 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);
#line 388 "declarative_tree.m"
                      mdb__declarative_tree__V_92_92 = (mdb__declarative_tree__V_93_93 - mdb__declarative_tree__RedoEvent_37);
#line 388 "declarative_tree.m"
                      mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_92_92 + (MR_Integer) 1);
#line 17305 "mdb.declarative_tree.c"
                    }
#line 17307 "mdb.declarative_tree.c"
                  else
#line 17309 "mdb.declarative_tree.c"
                    {
#line 17311 "mdb.declarative_tree.c"
                      MR_Integer mdb__declarative_tree__V_45_45;
#line 17313 "mdb.declarative_tree.c"
                      MR_Integer mdb__declarative_tree__V_46_46 = (mdb__declarative_tree__FinalSuspicion_27 - mdb__declarative_tree__RedoSuspicion_39);
#line 17315 "mdb.declarative_tree.c"
                      MR_Integer mdb__declarative_tree__V_95_95;

#line 379 "declarative_tree.m"
                      mdb__declarative_tree__V_45_45 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_46_46);
#line 379 "declarative_tree.m"
                      mdb__declarative_tree__NewPrevDupWeight_40 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_45_45);
#line 391 "declarative_tree.m"
                      mdb__declarative_tree__V_95_95 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);
#line 391 "declarative_tree.m"
                      mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_95_95 - mdb__declarative_tree__RedoSuspicion_39);
#line 17326 "mdb.declarative_tree.c"
                    }
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_56_56 = ((MR_Word) mdb__declarative_tree__ExitId_36);
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_57_57 = (mdb__declarative_tree__DupFactor_16 + (MR_Integer) 1);
#line 393 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 393 "declarative_tree.m"
                {
#line 393 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__3__tmp_copy_3 = mdb__declarative_tree__V_56_56;
#line 393 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__PrevWeight__tmp_copy_13 = mdb__declarative_tree__NewPrevWeight_41;
#line 393 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__RecordDups__tmp_copy_15 = mdb__declarative_tree__NewRecordDups_28;
#line 393 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__DupFactor__tmp_copy_16 = mdb__declarative_tree__V_57_57;
#line 393 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__PrevDupWeight__tmp_copy_17 = mdb__declarative_tree__NewPrevDupWeight_40;

#line 393 "declarative_tree.m"
                  mdb__declarative_tree__PrevDupWeight_17 = mdb__declarative_tree__PrevDupWeight__tmp_copy_17;
#line 393 "declarative_tree.m"
                  mdb__declarative_tree__DupFactor_16 = mdb__declarative_tree__DupFactor__tmp_copy_16;
#line 393 "declarative_tree.m"
                  mdb__declarative_tree__RecordDups_15 = mdb__declarative_tree__RecordDups__tmp_copy_15;
#line 393 "declarative_tree.m"
                  mdb__declarative_tree__PrevWeight_13 = mdb__declarative_tree__PrevWeight__tmp_copy_13;
#line 393 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__HeadVar__3__tmp_copy_3;
#line 393 "declarative_tree.m"
                }
#line 393 "declarative_tree.m"
                continue;
#line 385 "declarative_tree.m"
              }
#line 396 "declarative_tree.m"
            else
#line 397 "declarative_tree.m"
              {
#line 397 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Call_42;
#line 397 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CallEvent_43;
#line 397 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CallSuspicion_44;
#line 398 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_72_72;
#line 398 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_73_73;
#line 398 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_74_74;
#line 398 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_75_75;
#line 398 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_76_76;
#line 398 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_77_77;
#line 398 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_78_78;
#line 398 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_79_79;

#line 397 "declarative_tree.m"
                {
#line 397 "declarative_tree.m"
                  mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__CallId_21, &mdb__declarative_tree__Call_42);
                }
#line 398 "declarative_tree.m"
                mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 0));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__V_73_73 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 1));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 2)));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 3)));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__CallEvent_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 4)));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 5)));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 6)));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 7)));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 8)));
#line 398 "declarative_tree.m"
                mdb__declarative_tree__CallSuspicion_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 9)));
#line 403 "declarative_tree.m"
                if ((mdb__declarative_tree__Weighting_10 == (MR_Integer) 0))
#line 401 "declarative_tree.m"
                  {
#line 401 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_60_60;
#line 401 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_61_61 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);

#line 402 "declarative_tree.m"
                    mdb__declarative_tree__V_60_60 = (mdb__declarative_tree__V_61_61 - mdb__declarative_tree__CallEvent_43);
#line 402 "declarative_tree.m"
                    *mdb__declarative_tree__Weight_14 = (mdb__declarative_tree__V_60_60 + (MR_Integer) 1);
#line 401 "declarative_tree.m"
                  }
#line 403 "declarative_tree.m"
                else
#line 404 "declarative_tree.m"
                  {
#line 404 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_59_59 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);

#line 405 "declarative_tree.m"
                    *mdb__declarative_tree__Weight_14 = (mdb__declarative_tree__V_59_59 - mdb__declarative_tree__CallSuspicion_44);
#line 404 "declarative_tree.m"
                  }
#line 418 "declarative_tree.m"
                if ((mdb__declarative_tree__NewRecordDups_28 == (MR_Integer) 0))
#line 420 "declarative_tree.m"
                  *mdb__declarative_tree__Excess_18 = (MR_Integer) 0;
#line 418 "declarative_tree.m"
                else
#line 413 "declarative_tree.m"
                  if ((mdb__declarative_tree__Weighting_10 == (MR_Integer) 0))
#line 410 "declarative_tree.m"
                    {
#line 410 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_65_65;
#line 410 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_66_66;
#line 410 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_67_67 = (mdb__declarative_tree__FinalEvent_24 - mdb__declarative_tree__CallEvent_43);

#line 411 "declarative_tree.m"
                      mdb__declarative_tree__V_66_66 = (mdb__declarative_tree__V_67_67 + (MR_Integer) 1);
#line 411 "declarative_tree.m"
                      mdb__declarative_tree__V_65_65 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_66_66);
#line 411 "declarative_tree.m"
                      *mdb__declarative_tree__Excess_18 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_65_65);
#line 410 "declarative_tree.m"
                    }
#line 413 "declarative_tree.m"
                  else
#line 414 "declarative_tree.m"
                    {
#line 414 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_63_63;
#line 414 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_64_64 = (mdb__declarative_tree__FinalSuspicion_27 - mdb__declarative_tree__CallSuspicion_44);

#line 415 "declarative_tree.m"
                      mdb__declarative_tree__V_63_63 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_64_64);
#line 415 "declarative_tree.m"
                      *mdb__declarative_tree__Excess_18 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_63_63);
#line 414 "declarative_tree.m"
                    }
#line 397 "declarative_tree.m"
              }
#line 396 "declarative_tree.m"
          }
#line 423 "declarative_tree.m"
        else
#line 424 "declarative_tree.m"
          {
#line 424 "declarative_tree.m"
            {
#line 424 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[9])));
#line 424 "declarative_tree.m"
              return;
            }
#line 424 "declarative_tree.m"
          }
#line 350 "declarative_tree.m"
      }
#line 350 "declarative_tree.m"
      break;
#line 350 "declarative_tree.m"
    }
#line 345 "declarative_tree.m"
}

#line 176 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_answers_4_p_0(
#line 176 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26,
#line 176 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_5,
#line 176 "declarative_tree.m"
  MR_Box mdb__declarative_tree__RedoId_6,
#line 176 "declarative_tree.m"
  MR_Word mdb__declarative_tree__DeclAtoms0_7,
#line 176 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__DeclAtoms_8)
#line 176 "declarative_tree.m"
{
#line 186 "declarative_tree.m"
  while (MR_TRUE)
#line 186 "declarative_tree.m"
    {
#line 186 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 186 "declarative_tree.m"
      {
#line 186 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 186 "declarative_tree.m"
        MR_Box mdb__declarative_tree__ExitId_10;
#line 181 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17;
#line 181 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9;
#line 181 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 181 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 181 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_13_13;

#line 181 "declarative_tree.m"
        {
#line 181 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, mdb__declarative_tree__Store_5, mdb__declarative_tree__RedoId_6, &mdb__declarative_tree__V_17_17);
        }
#line 181 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 181 "declarative_tree.m"
          {
#line 181 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 0));
#line 181 "declarative_tree.m"
            mdb__declarative_tree__ExitId_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 1));
#line 181 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 2)));
#line 181 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 3)));
#line 181 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 4)));
#line 181 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 181 "declarative_tree.m"
          }
#line 186 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 182 "declarative_tree.m"
          {
#line 182 "declarative_tree.m"
            MR_Word mdb__declarative_tree__TypeInfo_40_62;
#line 182 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ExitNode_14;
#line 182 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NextId_15;
#line 182 "declarative_tree.m"
            MR_Word mdb__declarative_tree__DeclAtom_16;
#line 182 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_18_18;
#line 182 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ExitAtom_30;
#line 182 "declarative_tree.m"
            MR_Box mdb__declarative_tree__CallId_31;
#line 182 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Call_32;
#line 182 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__CallIoSeq_33;
#line 182 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__ExitIoSeq_34;
#line 183 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_19_19;
#line 183 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_20_20;
#line 183 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_21_21;
#line 183 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_22_22;
#line 183 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_23_23;
#line 183 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_24_24;
#line 183 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_25_25;
#line 106 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_38_38;
#line 106 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_39_39;
#line 106 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_40_40;
#line 106 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_41_41;
#line 106 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_42_42;
#line 106 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_43_43;
#line 106 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_44_44;
#line 108 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_45_45;
#line 108 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_46_46;
#line 108 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_47_47;
#line 108 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_48_48;
#line 108 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_49_49;
#line 108 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_50_50;
#line 108 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_51_51;
#line 108 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_52_52;
#line 108 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_53_53;
#line 109 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_54_54;
#line 109 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_55_55;
#line 109 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_56_56;
#line 109 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_57_57;
#line 109 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_58_58;
#line 109 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_59_59;
#line 109 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_60_60;

#line 182 "declarative_tree.m"
            {
#line 182 "declarative_tree.m"
              mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, mdb__declarative_tree__Store_5, mdb__declarative_tree__ExitId_10, &mdb__declarative_tree__ExitNode_14);
            }
#line 183 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 183 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 183 "declarative_tree.m"
            mdb__declarative_tree__NextId_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 183 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 183 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 183 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 183 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 183 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 17674 "mdb.declarative_tree.c"
            {
#line 17676 "mdb.declarative_tree.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_62);
            }
#line 105 "declarative_tree.m"
            {
#line 105 "declarative_tree.m"
              mdb__declarative_tree__ExitAtom_30 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_62, mdb__declarative_tree__ExitNode_14);
            }
#line 106 "declarative_tree.m"
            mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 106 "declarative_tree.m"
            mdb__declarative_tree__CallId_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 106 "declarative_tree.m"
            mdb__declarative_tree__V_39_39 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 106 "declarative_tree.m"
            mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 106 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 106 "declarative_tree.m"
            mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 106 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 106 "declarative_tree.m"
            mdb__declarative_tree__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
            {
#line 107 "declarative_tree.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallId_31, &mdb__declarative_tree__Call_32);
            }
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 0));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 1));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 2)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 3)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 4)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 5)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 6)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 7)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__CallIoSeq_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 8)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 9)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_54_54 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_55_55 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_56_56 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_59_59 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__ExitIoSeq_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_33 == mdb__declarative_tree__ExitIoSeq_34);
#line 112 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 111 "declarative_tree.m"
              {
#line 111 "declarative_tree.m"
                {
#line 111 "declarative_tree.m"
                  mdb__declarative_tree__DeclAtom_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 111 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_30));
#line 111 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "declarative_tree.m"
                }
#line 111 "declarative_tree.m"
              }
#line 112 "declarative_tree.m"
            else
#line 113 "declarative_tree.m"
              {
#line 113 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_36_36;
#line 113 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_37_37;

#line 114 "declarative_tree.m"
                {
#line 114 "declarative_tree.m"
                  mdb__declarative_tree__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_37_37, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_33));
#line 114 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_37_37, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_34));
#line 114 "declarative_tree.m"
                }
#line 113 "declarative_tree.m"
                {
#line 113 "declarative_tree.m"
                  mdb__declarative_tree__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_36_36, 0) = ((MR_Box) (mdb__declarative_tree__V_37_37));
#line 113 "declarative_tree.m"
                }
#line 113 "declarative_tree.m"
                {
#line 113 "declarative_tree.m"
                  mdb__declarative_tree__DeclAtom_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_30));
#line 113 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 1) = ((MR_Box) (mdb__declarative_tree__V_36_36));
#line 113 "declarative_tree.m"
                }
#line 113 "declarative_tree.m"
              }
#line 185 "declarative_tree.m"
            {
#line 185 "declarative_tree.m"
              mdb__declarative_tree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_18_18, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_16));
#line 185 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_18_18, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtoms0_7));
#line 185 "declarative_tree.m"
            }
#line 185 "declarative_tree.m"
            /* direct tailcall eliminated */
#line 185 "declarative_tree.m"
            {
#line 185 "declarative_tree.m"
              MR_Box mdb__declarative_tree__RedoId__tmp_copy_6 = mdb__declarative_tree__NextId_15;
#line 185 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DeclAtoms0__tmp_copy_7 = mdb__declarative_tree__V_18_18;

#line 185 "declarative_tree.m"
              mdb__declarative_tree__DeclAtoms0_7 = mdb__declarative_tree__DeclAtoms0__tmp_copy_7;
#line 185 "declarative_tree.m"
              mdb__declarative_tree__RedoId_6 = mdb__declarative_tree__RedoId__tmp_copy_6;
#line 185 "declarative_tree.m"
            }
#line 185 "declarative_tree.m"
            continue;
#line 182 "declarative_tree.m"
          }
#line 186 "declarative_tree.m"
        else
#line 187 "declarative_tree.m"
          *mdb__declarative_tree__DeclAtoms_8 = mdb__declarative_tree__DeclAtoms0_7;
#line 186 "declarative_tree.m"
      }
#line 186 "declarative_tree.m"
      break;
#line 186 "declarative_tree.m"
    }
#line 176 "declarative_tree.m"
}

#line 124 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(
#line 124 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29,
#line 124 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 124 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 124 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Atom_6)
#line 124 "declarative_tree.m"
{
#line 127 "declarative_tree.m"
  {
#line 127 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 127 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_7;

#line 128 "declarative_tree.m"
    {
#line 128 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__Node_7);
    }
#line 132 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 1))))
#line 130 "declarative_tree.m"
      {
#line 130 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_43;
#line 130 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 130 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_40;
#line 130 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_41;
#line 130 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 0));
#line 130 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 130 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 130 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 130 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 130 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 130 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 7)));

#line 120 "declarative_tree.m"
        {
#line 120 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_9, &mdb__declarative_tree__CallNode_40);
        }
#line 17897 "mdb.declarative_tree.c"
        {
#line 17899 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_43);
        }
#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_41 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_43, mdb__declarative_tree__CallNode_40);
        }
#line 122 "declarative_tree.m"
        *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_41;
#line 130 "declarative_tree.m"
      }
#line 132 "declarative_tree.m"
    else
#line 132 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 136 "declarative_tree.m"
        {
#line 136 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_36;
#line 136 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 136 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_33;
#line 136 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_34;
#line 136 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 136 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3));
#line 136 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 136 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 136 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 136 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 7)));

#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_28, &mdb__declarative_tree__CallNode_33);
          }
#line 17943 "mdb.declarative_tree.c"
          {
#line 17945 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_36);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_34 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_36, mdb__declarative_tree__CallNode_33);
          }
#line 122 "declarative_tree.m"
          *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_34;
#line 136 "declarative_tree.m"
        }
#line 132 "declarative_tree.m"
      else
#line 133 "declarative_tree.m"
        {
#line 133 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_50;
#line 133 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 133 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_47;
#line 133 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_48;
#line 133 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 133 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3));
#line 133 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 133 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 133 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 6)));

#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_27, &mdb__declarative_tree__CallNode_47);
          }
#line 17985 "mdb.declarative_tree.c"
          {
#line 17987 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_50);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_50, mdb__declarative_tree__CallNode_47);
          }
#line 122 "declarative_tree.m"
          *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_48;
#line 133 "declarative_tree.m"
        }
#line 127 "declarative_tree.m"
  }
#line 124 "declarative_tree.m"
}

#line 49 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree__trace_implicit_tree_info_3_p_0(
#line 49 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 49 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 49 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 49 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ImplicitTreeInfo_6)
#line 49 "declarative_tree.m"
{
#line 311 "declarative_tree.m"
  {
#line 311 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 311 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 311 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 311 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_7;
#line 311 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_8;
#line 311 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 1886 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_25;
#line 1876 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_23;
#line 18035 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18037 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_23;
#line 314 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_10_10;
#line 314 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_11_11;
#line 314 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 314 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_13_13;
#line 314 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 314 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15;
#line 314 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_16_16;
#line 314 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17;
#line 314 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_18_18;

#line 18058 "mdb.declarative_tree.c"
    {
#line 18060 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_23);
    }
#line 18063 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 18065 "mdb.declarative_tree.c"
      {
#line 18067 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_23 = ((MR_Word) mdb__declarative_tree__conv1_Node0_23);
#line 18069 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 18071 "mdb.declarative_tree.c"
      }
#line 1876 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1879 "declarative_tree.m"
      {
#line 1879 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node0_23)) == (MR_mktag((MR_Integer) 1))))
#line 1878 "declarative_tree.m"
          {
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 0));
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_26_26;
#line 1878 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_27_27;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_28_28;
#line 1878 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_30_30;
#line 1878 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_31_31;

#line 1878 "declarative_tree.m"
            mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 3)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 7)));
#line 1878 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1878 "declarative_tree.m"
          }
#line 1879 "declarative_tree.m"
        else
#line 1879 "declarative_tree.m"
          if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1882 "declarative_tree.m"
            {
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_38_38;
#line 1882 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_39_39;
#line 1882 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_40_40;
#line 1882 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_41_41;
#line 1882 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_42_42;

#line 1882 "declarative_tree.m"
              mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 3));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 7)));
#line 1882 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1882 "declarative_tree.m"
            }
#line 1879 "declarative_tree.m"
          else
#line 1879 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1880 "declarative_tree.m"
              {
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_33_33;
#line 1880 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_34_34;
#line 1880 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_35_35;
#line 1880 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_36_36;

#line 1880 "declarative_tree.m"
                mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 3));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1880 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1880 "declarative_tree.m"
              }
#line 1879 "declarative_tree.m"
            else
#line 1879 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1879 "declarative_tree.m"
      }
#line 1886 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1885 "declarative_tree.m"
      mdb__declarative_tree__CallId_7 = mdb__declarative_tree__CallId0_25;
#line 1886 "declarative_tree.m"
    else
#line 1887 "declarative_tree.m"
      {
#line 1887 "declarative_tree.m"
        {
#line 1887 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1887 "declarative_tree.m"
      }
#line 313 "declarative_tree.m"
    {
#line 313 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_7, &mdb__declarative_tree__CallNode_8);
    }
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 314 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 314 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 314 "declarative_tree.m"
      *mdb__declarative_tree__ImplicitTreeInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_9_9, (MR_Integer) 0)));
#line 311 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 311 "declarative_tree.m"
  }
#line 49 "declarative_tree.m"
}

#line 46 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(
#line 46 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 46 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_6,
#line 46 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_7)
#line 46 "declarative_tree.m"
{
#line 1892 "declarative_tree.m"
  {
#line 1892 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1892 "declarative_tree.m"
    {
#line 1892 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_97_116_111_109_95_115_117_98_116_101_114_109_95_105_115_95_103_114_111_117_110_100_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__ArgPos_6);
    }
#line 1892 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1892 "declarative_tree.m"
  }
#line 46 "declarative_tree.m"
}

#line 43 "declarative_tree.m"
void MR_CALL 
mdb__declarative_tree__edt_subtree_details_5_p_0(
#line 43 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47,
#line 43 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 43 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 43 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Event_8,
#line 43 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__SeqNo_9,
#line 43 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__CallPreceding_10)
#line 43 "declarative_tree.m"
{
#line 1833 "declarative_tree.m"
  {
#line 1833 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1833 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 1833 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;
#line 1833 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Call_13;
#line 1833 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_28;
#line 1843 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_30_30;
#line 1843 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_31_31;
#line 1843 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_32_32;
#line 1843 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_33_33;
#line 1843 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_34_34;
#line 1843 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_35_35;
#line 1843 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_36_36;
#line 1843 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_37_37;

#line 1834 "declarative_tree.m"
    {
#line 1834 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_11);
    }
#line 1837 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 1))))
#line 1836 "declarative_tree.m"
      {
#line 1836 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 1836 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_14_14;
#line 1836 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15;
#line 1836 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16;
#line 1836 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17;
#line 1836 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18;

#line 1836 "declarative_tree.m"
        mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1836 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1836 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 1836 "declarative_tree.m"
        *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1836 "declarative_tree.m"
        mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1836 "declarative_tree.m"
        mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1836 "declarative_tree.m"
        mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1836 "declarative_tree.m"
      }
#line 1837 "declarative_tree.m"
    else
#line 1837 "declarative_tree.m"
      if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1840 "declarative_tree.m"
        {
#line 1840 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1840 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_24_24;
#line 1840 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_25_25;
#line 1840 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_26_26;
#line 1840 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_27_27;

#line 1840 "declarative_tree.m"
          mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1840 "declarative_tree.m"
          mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 1840 "declarative_tree.m"
          mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1840 "declarative_tree.m"
          *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1840 "declarative_tree.m"
          mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1840 "declarative_tree.m"
          mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1840 "declarative_tree.m"
        }
#line 1837 "declarative_tree.m"
      else
#line 1838 "declarative_tree.m"
        {
#line 1838 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1838 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_20_20;
#line 1838 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_21_21;
#line 1838 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_22_22;

#line 1838 "declarative_tree.m"
          mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1838 "declarative_tree.m"
          mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 1838 "declarative_tree.m"
          *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1838 "declarative_tree.m"
          mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1838 "declarative_tree.m"
          mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1838 "declarative_tree.m"
        }
#line 1842 "declarative_tree.m"
    {
#line 1842 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47, mdb__declarative_tree__Store_6, mdb__declarative_tree__Call_13, &mdb__declarative_tree__CallNode_28);
    }
#line 1843 "declarative_tree.m"
    *mdb__declarative_tree__CallPreceding_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 0));
#line 1843 "declarative_tree.m"
    mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 1));
#line 1843 "declarative_tree.m"
    mdb__declarative_tree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 2)));
#line 1843 "declarative_tree.m"
    *mdb__declarative_tree__SeqNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 3)));
#line 1843 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 4)));
#line 1843 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 5)));
#line 1843 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 6)));
#line 1843 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 7)));
#line 1843 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 8)));
#line 1843 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 9)));
#line 1833 "declarative_tree.m"
  }
#line 43 "declarative_tree.m"
}

void mercury__mdb__declarative_tree__init(void)
{
}

void mercury__mdb__declarative_tree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_contour_type_0);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_dependency_chain_start_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_list_0);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_plain_call_info_0);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_primitive_list_and_var_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1);
	MR_register_type_ctor_info(&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1);
}

void mercury__mdb__declarative_tree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.declarative_tree. */
