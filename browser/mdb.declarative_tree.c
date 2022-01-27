/*
** Automatically generated from `declarative_tree.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "integer.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"



#line 1907 "declarative_tree.m"
struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s {
#line 1910 "declarative_tree.m"
  MR_bool mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
#line 1910 "declarative_tree.m"
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6;
#line 1915 "declarative_tree.m"
  jmp_buf mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0;
#line 1915 "declarative_tree.m"
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7;
#line 1916 "declarative_tree.m"
  MR_Box mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7;
#line 1907 "declarative_tree.m"
};

#line 453 "declarative_tree.m"
struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s {
#line 453 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2;
#line 455 "declarative_tree.m"
  MR_bool mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
#line 455 "declarative_tree.m"
  jmp_buf mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0;
#line 455 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4;
#line 455 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5;
#line 455 "declarative_tree.m"
  MR_String mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_16_16;
#line 455 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18;
#line 455 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19;
#line 453 "declarative_tree.m"
};


#line 128 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2;

#line 131 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2;

#line 134 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0;

#line 137 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1;

#line 140 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0[6];

#line 143 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0;

#line 146 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0[1];

#line 149 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1[1];

#line 152 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1[1];

#line 155 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1[1];

#line 158 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0;

#line 161 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1;

#line 164 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0[2];

#line 167 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0[2];

#line 170 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0[2];

#line 173 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1;

#line 176 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 179 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0;

#line 182 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0;

#line 185 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0[6];

#line 188 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0;

#line 191 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1;

#line 194 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0[1];

#line 197 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1[1];

#line 200 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_dependency_chain_start_1[2];

#line 203 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1[2];

#line 206 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1[2];

#line 209 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1[1];

#line 212 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1;

#line 215 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0;

#line 218 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0[2];

#line 221 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0;

#line 224 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0[1];

#line 227 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0[1];

#line 230 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0[1];

#line 233 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0[1];

#line 236 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0;

#line 239 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0[4];

#line 242 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0[4];

#line 245 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0;

#line 248 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0[1];

#line 251 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0[1];

#line 254 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0[1];

#line 257 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0[1];

#line 260 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1;

#line 263 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1;

#line 266 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0[3];

#line 269 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0[3];

#line 272 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0;

#line 275 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0[1];

#line 278 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1[1];

#line 281 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1[1];

#line 284 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1[1];

#line 287 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0;

#line 290 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1;

#line 293 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1[2];

#line 296 "mdb.declarative_tree.c"
static const MR_DuFunctorDesc mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1;

#line 299 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0[1];

#line 302 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1[1];

#line 305 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_start_loc_1[2];

#line 308 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1[2];

#line 311 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1[2];

#line 314 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1[1];

#line 317 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1;

#line 320 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0_10001(
#line 323 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 325 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 327 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 330 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0_10001(
#line 333 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 335 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 337 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 339 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 342 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0_10001(
#line 345 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 347 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 350 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0_10001(
#line 353 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 355 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 357 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 360 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001(
#line 363 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 365 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 367 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 370 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001(
#line 373 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 375 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 377 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 379 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 382 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0_10001(
#line 385 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 387 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 389 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 392 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0_10001(
#line 395 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 397 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 399 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 401 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 404 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0_10001(
#line 407 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 409 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 412 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0_10001(
#line 415 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 417 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 419 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 422 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001(
#line 425 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 427 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 430 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001(
#line 433 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 435 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 437 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 440 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0_10001(
#line 443 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 445 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 448 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0_10001(
#line 451 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 453 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 455 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 458 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001(
#line 461 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 463 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 465 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 468 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001(
#line 471 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 473 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 475 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 477 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 480 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0_10001(
#line 483 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 485 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 487 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 490 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0_10001(
#line 493 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 495 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 497 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 499 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 502 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0_10001(
#line 505 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 507 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 509 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 512 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0_10001(
#line 515 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 517 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 519 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 521 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4);

#line 524 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001(
#line 527 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 529 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 531 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 533 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3);

#line 536 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001(
#line 539 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 541 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 543 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 545 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3);

#line 548 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001(
#line 551 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 553 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 555 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 557 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 559 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4);

#line 562 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001(
#line 565 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 567 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 569 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 571 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3);

#line 574 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001(
#line 577 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 579 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 581 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 583 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3);

#line 586 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001(
#line 589 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 591 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 593 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 595 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 597 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 599 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5,
#line 601 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_6);

#line 604 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001(
#line 607 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 609 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 611 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 613 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 615 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 617 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5);

#line 620 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001(
#line 623 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 625 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 627 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 630 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001(
#line 633 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 635 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 637 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 639 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 642 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001(
#line 645 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 647 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 649 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 652 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001(
#line 655 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 657 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 659 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 661 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 663 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4);

#line 666 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001(
#line 669 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 671 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 673 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 675 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 677 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4);

#line 680 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001(
#line 683 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 685 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 687 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 689 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 691 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4);

#line 694 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001(
#line 697 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 699 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 701 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2);

#line 704 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001(
#line 707 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 709 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 711 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 713 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3);

#line 1923 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
#line 1923 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_9_9,
#line 1923 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_10_10,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 1923 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 1923 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1923 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 1923 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1923 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1923 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 88 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 88 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5);

#line 1760 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_12,
#line 1760 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_13,
#line 1760 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_14,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_15,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeNodeId_16,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Prims_17,
#line 1760 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_18,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_19,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_21,
#line 1760 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_22);

#line 1572 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
#line 1572 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1572 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 1567 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
#line 1567 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1567 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1567 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath0_3,
#line 1567 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_5,
#line 1567 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_6);

#line 1370 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
#line 1370 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1370 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__2_2);

#line 955 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
#line 955 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49,
#line 955 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 955 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_7,
#line 955 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_8,
#line 955 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10);

#line 1664 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1664__1_2_p_0(
#line 1664 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1664 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_43);

#line 1676 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1676__1_2_p_0(
#line 1676 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1676 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_114);

#line 1196 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1196__1_3_p_0(
#line 1196 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1196 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AdjustedContour_21,
#line 1196 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_29);

#line 279 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
#line 279 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_127,
#line 279 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 279 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 96 "declarative_tree.m"
static MR_Integer MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(
#line 96 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 96 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 96 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 96 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 95 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 94 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 94 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3,
#line 94 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 93 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 93 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__3_3,
#line 93 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__4_4);

#line 92 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(
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
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 90 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 89 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 88 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 88 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5);

#line 909 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
#line 909 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 909 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 87 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 87 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5,
#line 87 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__6_6);

#line 86 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 85 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 85 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 84 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 84 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 83 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 83 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 82 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 82 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 779 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_15,
#line 779 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 779 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1121 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_14,
#line 1121 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 1121 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1752 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
#line 1752 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1752 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1752 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 1752 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
#line 1752 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1752 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 786 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
#line 786 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 786 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 786 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 786 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
#line 786 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 786 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 783 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
#line 783 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 783 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 783 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 783 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
#line 783 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 783 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 749 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_35,
#line 749 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 749 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_19,
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 495 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
#line 495 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 495 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 495 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 495 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
#line 495 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_1,
#line 495 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 788 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_23,
#line 788 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 788 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_17,
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1915 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
#line 1915 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1916 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
#line 1916 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1915 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
#line 1915 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1915 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
#line 1915 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1907 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
#line 1907 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21,
#line 1907 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 1907 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_4);

#line 1853 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
#line 1853 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32,
#line 1853 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1853 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 1853 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Node_6);

#line 1820 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
#line 1820 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1820 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_2,
#line 1820 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Pos_3,
#line 1820 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ArgPos_4);

#line 1815 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
#line 1815 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_4,
#line 1815 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_5);

#line 1793 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
#line 1793 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__TracingOn_1);

#line 1782 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
#line 1782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ParentPath_2,
#line 1782 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__N_3,
#line 1782 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 1740 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
#line 1740 "declarative_tree.m"
  MR_String mdb__declarative_tree__Module_5,
#line 1740 "declarative_tree.m"
  MR_String mdb__declarative_tree__Name_6,
#line 1740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_7,
#line 1740 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__NewVar_8);

#line 1555 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
#line 1555 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_5,
#line 1555 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_6,
#line 1555 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_7,
#line 1555 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Var_8);

#line 1543 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
#line 1543 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalId_3,
#line 1543 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_4);

#line 1401 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145,
#line 1401 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_17,
#line 1401 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_18,
#line 1401 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_19,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_20,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoal_21,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalArgs_22,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_23,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_24,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_25,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_26,
#line 1401 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_27,
#line 1401 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_28,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_29,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_30,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_31);

#line 1230 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177,
#line 1230 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_13,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Goal_14,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_15,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_16,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_17,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_18,
#line 1230 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_19,
#line 1230 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_20,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_21,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_22,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_23);

#line 1151 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1151 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_11,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_12,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_13,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_14,
#line 1151 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_15,
#line 1151 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_16,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_17,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_18,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_19);

#line 1114 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
#line 1114 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 1114 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1114 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1114 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__FinalAtom_7);

#line 1112 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
#line 1112 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1112 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 1112 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__wrapper_arg_2);

#line 1104 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
#line 1104 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 1104 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1104 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_5,
#line 1104 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ExitAtoms_6);

#line 1074 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
#line 1074 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34,
#line 1074 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1074 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 1074 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Node_8,
#line 1074 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Nodes0_9,
#line 1074 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Nodes_10);

#line 1051 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
#line 1051 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25,
#line 1051 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1051 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_5,
#line 1051 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ParentCallNode_6);

#line 1020 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
#line 1020 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_25,
#line 1020 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_5,
#line 1020 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_6,
#line 1020 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_7,
#line 1020 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_8);

#line 1002 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
#line 1002 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42,
#line 1002 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1002 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_7,
#line 1002 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_8,
#line 1002 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_9,
#line 1002 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10);

#line 949 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
#line 949 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 949 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 850 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
#line 850 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43,
#line 850 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_9,
#line 850 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_10,
#line 850 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_11,
#line 850 "declarative_tree.m"
  MR_Word mdb__declarative_tree__StartLoc_12,
#line 850 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_13,
#line 850 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_14,
#line 850 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_15,
#line 850 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_16);

#line 645 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
#line 645 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84,
#line 645 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 645 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 645 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 645 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 645 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10);

#line 635 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
#line 635 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11,
#line 635 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 635 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 635 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 635 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 635 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10);

#line 513 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
#line 513 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115,
#line 513 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 513 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 513 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 513 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 513 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 513 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12);

#line 502 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
#line 502 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13,
#line 502 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 502 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 502 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 502 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 502 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 502 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12);

#line 474 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
#line 474 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 474 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 474 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_4);

#line 455 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
#line 455 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 455 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
#line 455 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 455 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
#line 455 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 455 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
#line 455 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 453 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
#line 453 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_2);

#line 346 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90,
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Weighting_10,
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 346 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevWeight_13,
#line 346 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Weight_14,
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__RecordDups_15,
#line 346 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__DupFactor_16,
#line 346 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevDupWeight_17,
#line 346 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Excess_18);

#line 177 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_answers_4_p_0(
#line 177 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26,
#line 177 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_5,
#line 177 "declarative_tree.m"
  MR_Box mdb__declarative_tree__RedoId_6,
#line 177 "declarative_tree.m"
  MR_Word mdb__declarative_tree__DeclAtoms0_7,
#line 177 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__DeclAtoms_8);

#line 125 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(
#line 125 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29,
#line 125 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 125 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 125 "declarative_tree.m"
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



#line 2003 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2011 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2
  }
};

#line 2020 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2028 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2036 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1
};

#line 2046 "mdb.declarative_tree.c"
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

#line 2061 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0
};

#line 2066 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0
  }
};

#line 2075 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0
};

#line 2080 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1[1] = {
  (MR_Integer) 0
};

#line 2085 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____annotated_primitive_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____annotated_primitive_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "annotated_primitive",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1
};

#line 2102 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0 = {
  (MR_String) "normal",
  (MR_Integer) 0
};

#line 2108 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1 = {
  (MR_String) "exception",
  (MR_Integer) 1
};

#line 2114 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0,
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1
};

#line 2120 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1,
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0
};

#line 2126 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2132 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_contour_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_tree____Unify____contour_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____contour_type_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "contour_type",
  {     mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0 },
  {     mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0
};

#line 2149 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2157 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 2165 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_defn_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2173 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0
  }
};

#line 2181 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0
};

#line 2191 "mdb.declarative_tree.c"
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

#line 2206 "mdb.declarative_tree.c"
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

#line 2221 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1
};

#line 2226 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0
};

#line 2231 "mdb.declarative_tree.c"
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

#line 2245 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0,
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1
};

#line 2251 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2257 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_dependency_chain_start_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "dependency_chain_start",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_dependency_chain_start_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1
};

#line 2274 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1[1] = {
  (MR_Integer) 0
};

#line 2279 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1 = {
  (MR_String) "dynamic",
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  NULL
};

#line 2286 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdb__declarative_tree____Unify____edt_node_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____edt_node_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "edt_node",
  {     &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1 },
  {     &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1
};

#line 2303 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2311 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 2317 "mdb.declarative_tree.c"
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

#line 2332 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0
};

#line 2337 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0
  }
};

#line 2346 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0
};

#line 2351 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0[1] = {
  (MR_Integer) 0
};

#line 2356 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____goal_and_path_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____goal_and_path_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "goal_and_path",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0
};

#line 2373 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0
  }
};

#line 2381 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "goal_and_path_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2398 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2406 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0[4] = {
  (MR_String) "file_name",
  (MR_String) "line_number",
  (MR_String) "flat_module_name",
  (MR_String) "pred_name"
};

#line 2414 "mdb.declarative_tree.c"
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

#line 2429 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0
};

#line 2434 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0
  }
};

#line 2443 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0
};

#line 2448 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0[1] = {
  (MR_Integer) 0
};

#line 2453 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_plain_call_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____plain_call_info_0_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____plain_call_info_0_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "plain_call_info",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0
};

#line 2470 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2478 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1
  }
};

#line 2486 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2493 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0[3] = {
  (MR_String) "primitives",
  (MR_String) "var",
  (MR_String) "closure"
};

#line 2500 "mdb.declarative_tree.c"
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

#line 2515 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0
};

#line 2520 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0
  }
};

#line 2529 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0
};

#line 2534 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1[1] = {
  (MR_Integer) 0
};

#line 2539 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_primitive_list_and_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "primitive_list_and_var",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1
};

#line 2556 "mdb.declarative_tree.c"
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

#line 2571 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2579 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1
};

#line 2585 "mdb.declarative_tree.c"
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

#line 2600 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0
};

#line 2605 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1
};

#line 2610 "mdb.declarative_tree.c"
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

#line 2624 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0,
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1
};

#line 2630 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2636 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_tree____Unify____start_loc_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____start_loc_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "start_loc",
  {     mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1 },
  {     mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_start_loc_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1
};

#line 2653 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1[1] = {
  (MR_Integer) 0
};

#line 2658 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1 = {
  (MR_String) "wrap",
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  NULL
};

#line 2665 "mdb.declarative_tree.c"
const MR_TypeCtorInfo_Struct mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdb__declarative_tree____Unify____wrap_1_0_10001)),
  ((MR_Box) (mdb__declarative_tree____Compare____wrap_1_0_10001)),
  (MR_String) "mdb.declarative_tree",
  (MR_String) "wrap",
  {     &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1 },
  {     &mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1
};

#line 2682 "mdb.declarative_tree.c"
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

#line 2706 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0_10001(
#line 2709 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2711 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2713 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2715 "mdb.declarative_tree.c"
{
#line 2717 "mdb.declarative_tree.c"
  {
#line 2719 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2722 "mdb.declarative_tree.c"
    {
#line 2724 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____annotated_primitive_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2727 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2729 "mdb.declarative_tree.c"
  }
#line 2731 "mdb.declarative_tree.c"
}

#line 2734 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0_10001(
#line 2737 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2739 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2741 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2743 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2745 "mdb.declarative_tree.c"
{
#line 2747 "mdb.declarative_tree.c"
  {
#line 2749 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2752 "mdb.declarative_tree.c"
    {
#line 2754 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____annotated_primitive_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2757 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2759 "mdb.declarative_tree.c"
  }
#line 2761 "mdb.declarative_tree.c"
}

#line 2764 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0_10001(
#line 2767 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2769 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 2771 "mdb.declarative_tree.c"
{
#line 2773 "mdb.declarative_tree.c"
  {
#line 2775 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2778 "mdb.declarative_tree.c"
    {
#line 2780 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____contour_type_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 2783 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2785 "mdb.declarative_tree.c"
  }
#line 2787 "mdb.declarative_tree.c"
}

#line 2790 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0_10001(
#line 2793 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 2795 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2797 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2799 "mdb.declarative_tree.c"
{
#line 2801 "mdb.declarative_tree.c"
  {
#line 2803 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2806 "mdb.declarative_tree.c"
    {
#line 2808 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____contour_type_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2811 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2813 "mdb.declarative_tree.c"
  }
#line 2815 "mdb.declarative_tree.c"
}

#line 2818 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001(
#line 2821 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2823 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2825 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2827 "mdb.declarative_tree.c"
{
#line 2829 "mdb.declarative_tree.c"
  {
#line 2831 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2834 "mdb.declarative_tree.c"
    {
#line 2836 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____dependency_chain_start_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2839 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2841 "mdb.declarative_tree.c"
  }
#line 2843 "mdb.declarative_tree.c"
}

#line 2846 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001(
#line 2849 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2851 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2853 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2855 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2857 "mdb.declarative_tree.c"
{
#line 2859 "mdb.declarative_tree.c"
  {
#line 2861 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2864 "mdb.declarative_tree.c"
    {
#line 2866 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____dependency_chain_start_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2869 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2871 "mdb.declarative_tree.c"
  }
#line 2873 "mdb.declarative_tree.c"
}

#line 2876 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0_10001(
#line 2879 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2881 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2883 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2885 "mdb.declarative_tree.c"
{
#line 2887 "mdb.declarative_tree.c"
  {
#line 2889 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2892 "mdb.declarative_tree.c"
    {
#line 2894 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____edt_node_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2897 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2899 "mdb.declarative_tree.c"
  }
#line 2901 "mdb.declarative_tree.c"
}

#line 2904 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0_10001(
#line 2907 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2909 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2911 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2913 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2915 "mdb.declarative_tree.c"
{
#line 2917 "mdb.declarative_tree.c"
  {
#line 2919 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2922 "mdb.declarative_tree.c"
    {
#line 2924 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____edt_node_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2927 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2929 "mdb.declarative_tree.c"
  }
#line 2931 "mdb.declarative_tree.c"
}

#line 2934 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0_10001(
#line 2937 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2939 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 2941 "mdb.declarative_tree.c"
{
#line 2943 "mdb.declarative_tree.c"
  {
#line 2945 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2948 "mdb.declarative_tree.c"
    {
#line 2950 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____goal_and_path_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 2953 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2955 "mdb.declarative_tree.c"
  }
#line 2957 "mdb.declarative_tree.c"
}

#line 2960 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0_10001(
#line 2963 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 2965 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2967 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2969 "mdb.declarative_tree.c"
{
#line 2971 "mdb.declarative_tree.c"
  {
#line 2973 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2976 "mdb.declarative_tree.c"
    {
#line 2978 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____goal_and_path_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2981 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2983 "mdb.declarative_tree.c"
  }
#line 2985 "mdb.declarative_tree.c"
}

#line 2988 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001(
#line 2991 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2993 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 2995 "mdb.declarative_tree.c"
{
#line 2997 "mdb.declarative_tree.c"
  {
#line 2999 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3002 "mdb.declarative_tree.c"
    {
#line 3004 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____goal_and_path_list_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3007 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3009 "mdb.declarative_tree.c"
  }
#line 3011 "mdb.declarative_tree.c"
}

#line 3014 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001(
#line 3017 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 3019 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3021 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3023 "mdb.declarative_tree.c"
{
#line 3025 "mdb.declarative_tree.c"
  {
#line 3027 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3030 "mdb.declarative_tree.c"
    {
#line 3032 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____goal_and_path_list_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3035 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3037 "mdb.declarative_tree.c"
  }
#line 3039 "mdb.declarative_tree.c"
}

#line 3042 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0_10001(
#line 3045 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3047 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3049 "mdb.declarative_tree.c"
{
#line 3051 "mdb.declarative_tree.c"
  {
#line 3053 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3056 "mdb.declarative_tree.c"
    {
#line 3058 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____plain_call_info_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3061 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3063 "mdb.declarative_tree.c"
  }
#line 3065 "mdb.declarative_tree.c"
}

#line 3068 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0_10001(
#line 3071 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 3073 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3075 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3077 "mdb.declarative_tree.c"
{
#line 3079 "mdb.declarative_tree.c"
  {
#line 3081 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3084 "mdb.declarative_tree.c"
    {
#line 3086 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____plain_call_info_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3089 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3091 "mdb.declarative_tree.c"
  }
#line 3093 "mdb.declarative_tree.c"
}

#line 3096 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001(
#line 3099 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3101 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3103 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3105 "mdb.declarative_tree.c"
{
#line 3107 "mdb.declarative_tree.c"
  {
#line 3109 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3112 "mdb.declarative_tree.c"
    {
#line 3114 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____primitive_list_and_var_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3117 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3119 "mdb.declarative_tree.c"
  }
#line 3121 "mdb.declarative_tree.c"
}

#line 3124 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001(
#line 3127 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3129 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3131 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3133 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3135 "mdb.declarative_tree.c"
{
#line 3137 "mdb.declarative_tree.c"
  {
#line 3139 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3142 "mdb.declarative_tree.c"
    {
#line 3144 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____primitive_list_and_var_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3147 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3149 "mdb.declarative_tree.c"
  }
#line 3151 "mdb.declarative_tree.c"
}

#line 3154 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0_10001(
#line 3157 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3159 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3161 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3163 "mdb.declarative_tree.c"
{
#line 3165 "mdb.declarative_tree.c"
  {
#line 3167 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3170 "mdb.declarative_tree.c"
    {
#line 3172 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____start_loc_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3175 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3177 "mdb.declarative_tree.c"
  }
#line 3179 "mdb.declarative_tree.c"
}

#line 3182 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0_10001(
#line 3185 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3187 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3189 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3191 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3193 "mdb.declarative_tree.c"
{
#line 3195 "mdb.declarative_tree.c"
  {
#line 3197 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3200 "mdb.declarative_tree.c"
    {
#line 3202 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____start_loc_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3205 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3207 "mdb.declarative_tree.c"
  }
#line 3209 "mdb.declarative_tree.c"
}

#line 3212 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0_10001(
#line 3215 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3217 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3219 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3221 "mdb.declarative_tree.c"
{
#line 3223 "mdb.declarative_tree.c"
  {
#line 3225 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3228 "mdb.declarative_tree.c"
    {
#line 3230 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____wrap_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3233 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3235 "mdb.declarative_tree.c"
  }
#line 3237 "mdb.declarative_tree.c"
}

#line 3240 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0_10001(
#line 3243 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3245 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3247 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3249 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3251 "mdb.declarative_tree.c"
{
#line 3253 "mdb.declarative_tree.c"
  {
#line 3255 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3258 "mdb.declarative_tree.c"
    {
#line 3260 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____wrap_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3263 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3265 "mdb.declarative_tree.c"
  }
#line 3267 "mdb.declarative_tree.c"
}

#line 3270 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001(
#line 3273 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3275 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3277 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3279 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3281 "mdb.declarative_tree.c"
{
#line 3283 "mdb.declarative_tree.c"
  {
#line 3285 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3287 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3290 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3292 "mdb.declarative_tree.c"
    {
#line 3294 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3297 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3299 "mdb.declarative_tree.c"
  }
#line 3301 "mdb.declarative_tree.c"
}

#line 3304 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001(
#line 3307 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3309 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3311 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3313 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3315 "mdb.declarative_tree.c"
{
#line 3317 "mdb.declarative_tree.c"
  {
#line 3319 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3321 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3324 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3326 "mdb.declarative_tree.c"
    {
#line 3328 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3331 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3333 "mdb.declarative_tree.c"
  }
#line 3335 "mdb.declarative_tree.c"
}

#line 3338 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001(
#line 3341 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3343 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3345 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3347 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3349 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3351 "mdb.declarative_tree.c"
{
#line 3353 "mdb.declarative_tree.c"
  {
#line 3355 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3357 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3360 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3362 "mdb.declarative_tree.c"
    {
#line 3364 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3367 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3369 "mdb.declarative_tree.c"
  }
#line 3371 "mdb.declarative_tree.c"
}

#line 3374 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001(
#line 3377 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3379 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3381 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3383 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3385 "mdb.declarative_tree.c"
{
#line 3387 "mdb.declarative_tree.c"
  {
#line 3389 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3391 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3393 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3396 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3398 "mdb.declarative_tree.c"
    {
#line 3400 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3403 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3405 "mdb.declarative_tree.c"
      {
#line 3407 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3409 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3411 "mdb.declarative_tree.c"
      }
#line 3413 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3415 "mdb.declarative_tree.c"
  }
#line 3417 "mdb.declarative_tree.c"
}

#line 3420 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001(
#line 3423 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3425 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3427 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3429 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3431 "mdb.declarative_tree.c"
{
#line 3433 "mdb.declarative_tree.c"
  {
#line 3435 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3437 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3439 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3442 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3444 "mdb.declarative_tree.c"
    {
#line 3446 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3449 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3451 "mdb.declarative_tree.c"
      {
#line 3453 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3455 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3457 "mdb.declarative_tree.c"
      }
#line 3459 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3461 "mdb.declarative_tree.c"
  }
#line 3463 "mdb.declarative_tree.c"
}

#line 3466 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001(
#line 3469 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3471 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3473 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3475 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3477 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 3479 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5,
#line 3481 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_6)
#line 3483 "mdb.declarative_tree.c"
{
#line 3485 "mdb.declarative_tree.c"
  {
#line 3487 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3489 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv1_HeadVar__5_5;
#line 3491 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__6_6;

#line 3494 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3496 "mdb.declarative_tree.c"
    {
#line 3498 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4), &mdb__declarative_tree__conv1_HeadVar__5_5, &mdb__declarative_tree__conv0_HeadVar__6_6);
    }
#line 3501 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_5 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__5_5));
#line 3503 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_6 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__6_6));
#line 3505 "mdb.declarative_tree.c"
  }
#line 3507 "mdb.declarative_tree.c"
}

#line 3510 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001(
#line 3513 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3515 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3517 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3519 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3521 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 3523 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5)
#line 3525 "mdb.declarative_tree.c"
{
#line 3527 "mdb.declarative_tree.c"
  {
#line 3529 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3531 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__5_5;

#line 3534 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3536 "mdb.declarative_tree.c"
    {
#line 3538 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4), &mdb__declarative_tree__conv0_HeadVar__5_5);
    }
#line 3541 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_5 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__5_5));
#line 3543 "mdb.declarative_tree.c"
  }
#line 3545 "mdb.declarative_tree.c"
}

#line 3548 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001(
#line 3551 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3553 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3555 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3557 "mdb.declarative_tree.c"
{
#line 3559 "mdb.declarative_tree.c"
  {
#line 3561 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3563 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3566 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3568 "mdb.declarative_tree.c"
    {
#line 3570 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3573 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3575 "mdb.declarative_tree.c"
  }
#line 3577 "mdb.declarative_tree.c"
}

#line 3580 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001(
#line 3583 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3585 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3587 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3589 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3591 "mdb.declarative_tree.c"
{
#line 3593 "mdb.declarative_tree.c"
  {
#line 3595 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3597 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3600 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3602 "mdb.declarative_tree.c"
    {
#line 3604 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3607 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3609 "mdb.declarative_tree.c"
  }
#line 3611 "mdb.declarative_tree.c"
}

#line 3614 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001(
#line 3617 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3619 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3621 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3623 "mdb.declarative_tree.c"
{
#line 3625 "mdb.declarative_tree.c"
  {
#line 3627 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3629 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3632 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3634 "mdb.declarative_tree.c"
    {
#line 3636 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3639 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3641 "mdb.declarative_tree.c"
  }
#line 3643 "mdb.declarative_tree.c"
}

#line 3646 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001(
#line 3649 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3651 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3653 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3655 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3657 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3659 "mdb.declarative_tree.c"
{
#line 3661 "mdb.declarative_tree.c"
  {
#line 3663 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3665 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3667 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3670 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3672 "mdb.declarative_tree.c"
    {
#line 3674 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3677 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3679 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3681 "mdb.declarative_tree.c"
  }
#line 3683 "mdb.declarative_tree.c"
}

#line 3686 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001(
#line 3689 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3691 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3693 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3695 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3697 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3699 "mdb.declarative_tree.c"
{
#line 3701 "mdb.declarative_tree.c"
  {
#line 3703 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3705 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3707 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3710 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3712 "mdb.declarative_tree.c"
    {
#line 3714 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3717 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3719 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3721 "mdb.declarative_tree.c"
  }
#line 3723 "mdb.declarative_tree.c"
}

#line 3726 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001(
#line 3729 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3731 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3733 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3735 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3737 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3739 "mdb.declarative_tree.c"
{
#line 3741 "mdb.declarative_tree.c"
  {
#line 3743 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3745 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3747 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3749 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3752 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3754 "mdb.declarative_tree.c"
    {
#line 3756 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3759 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3761 "mdb.declarative_tree.c"
      {
#line 3763 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3765 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3767 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3769 "mdb.declarative_tree.c"
      }
#line 3771 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3773 "mdb.declarative_tree.c"
  }
#line 3775 "mdb.declarative_tree.c"
}

#line 3778 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001(
#line 3781 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3783 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3785 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3787 "mdb.declarative_tree.c"
{
#line 3789 "mdb.declarative_tree.c"
  {
#line 3791 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__wrapper_arg_3;
#line 3793 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3795 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3798 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3800 "mdb.declarative_tree.c"
    {
#line 3802 "mdb.declarative_tree.c"
      mdb__declarative_tree__conv0_HeadVar__3_3 = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3805 "mdb.declarative_tree.c"
    mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3807 "mdb.declarative_tree.c"
    return mdb__declarative_tree__wrapper_arg_3;
#line 3809 "mdb.declarative_tree.c"
  }
#line 3811 "mdb.declarative_tree.c"
}

#line 3814 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001(
#line 3817 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3819 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3821 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3823 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3825 "mdb.declarative_tree.c"
{
#line 3827 "mdb.declarative_tree.c"
  {
#line 3829 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__wrapper_arg_4;
#line 3831 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3833 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3836 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3838 "mdb.declarative_tree.c"
    {
#line 3840 "mdb.declarative_tree.c"
      mdb__declarative_tree__conv0_HeadVar__4_4 = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3843 "mdb.declarative_tree.c"
    mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3845 "mdb.declarative_tree.c"
    return mdb__declarative_tree__wrapper_arg_4;
#line 3847 "mdb.declarative_tree.c"
  }
#line 3849 "mdb.declarative_tree.c"
}

#line 1923 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
#line 1923 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_9_9,
#line 1923 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_10_10,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1923 "declarative_tree.m"
{
#line 1929 "declarative_tree.m"
  {
#line 1929 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1198 "declarative_tree.m"
    {
#line 1198 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[0], ((MR_Box) (mdb__declarative_tree__V_9_9)), ((MR_Box) (mdb__declarative_tree__V_10_10)));
    }
#line 1929 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1928 "declarative_tree.m"
      {
#line 1928 "declarative_tree.m"
      }
#line 1929 "declarative_tree.m"
    else
#line 1930 "declarative_tree.m"
      {
#line 1930 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1930 "declarative_tree.m"
        {
#line 1930 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1930 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1930 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1930 "declarative_tree.m"
        }
#line 1930 "declarative_tree.m"
        {
#line 1930 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1930 "declarative_tree.m"
          return;
        }
#line 1930 "declarative_tree.m"
      }
#line 1929 "declarative_tree.m"
  }
#line 1923 "declarative_tree.m"
}

#line 1923 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 1923 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1923 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1923 "declarative_tree.m"
{
#line 1929 "declarative_tree.m"
  {
#line 1929 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1927 "declarative_tree.m"
    {
#line 1927 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1676__1_2_p_0(mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_10_10);
    }
#line 1929 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1928 "declarative_tree.m"
      {
#line 1928 "declarative_tree.m"
      }
#line 1929 "declarative_tree.m"
    else
#line 1930 "declarative_tree.m"
      {
#line 1930 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1930 "declarative_tree.m"
        {
#line 1930 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1930 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1930 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1930 "declarative_tree.m"
        }
#line 1930 "declarative_tree.m"
        {
#line 1930 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1930 "declarative_tree.m"
          return;
        }
#line 1930 "declarative_tree.m"
      }
#line 1929 "declarative_tree.m"
  }
#line 1923 "declarative_tree.m"
}

#line 1923 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1923 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1923 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1923 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1923 "declarative_tree.m"
{
#line 1929 "declarative_tree.m"
  {
#line 1929 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1927 "declarative_tree.m"
    {
#line 1927 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1664__1_2_p_0(mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_10_10);
    }
#line 1929 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1928 "declarative_tree.m"
      {
#line 1928 "declarative_tree.m"
      }
#line 1929 "declarative_tree.m"
    else
#line 1930 "declarative_tree.m"
      {
#line 1930 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1930 "declarative_tree.m"
        {
#line 1930 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1930 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1930 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1930 "declarative_tree.m"
        }
#line 1930 "declarative_tree.m"
        {
#line 1930 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1930 "declarative_tree.m"
          return;
        }
#line 1930 "declarative_tree.m"
      }
#line 1929 "declarative_tree.m"
  }
#line 1923 "declarative_tree.m"
}

#line 88 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 88 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5)
#line 88 "declarative_tree.m"
{
#line 802 "declarative_tree.m"
  {
#line 802 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 802 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_10 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 802 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_11 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 802 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ChainStart_12;

#line 803 "declarative_tree.m"
    {
#line 803 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, mdb__declarative_tree__Store_10, mdb__declarative_tree__Ref_11, mdb__declarative_tree__HeadVar__3_3, &mdb__declarative_tree__ChainStart_12);
    }
#line 807 "declarative_tree.m"
    if ((mdb__declarative_tree__ChainStart_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 807 "declarative_tree.m"
    else
#line 805 "declarative_tree.m"
      {
#line 805 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartLoc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 0)));
#line 805 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 1)));
#line 805 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 2)));
#line 805 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 3));
#line 805 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 4)));
#line 805 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 5)));
#line 4083 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_20_20;

#line 4086 "mdb.declarative_tree.c"
        {
#line 4088 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_20_20);
        }
#line 1810 "declarative_tree.m"
        if ((mdb__declarative_tree__StartLoc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1810 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 1810 "declarative_tree.m"
        else
#line 1811 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 0;
#line 805 "declarative_tree.m"
      }
#line 802 "declarative_tree.m"
  }
#line 88 "declarative_tree.m"
}

#line 1760 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_12,
#line 1760 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_13,
#line 1760 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_14,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_15,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeNodeId_16,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Prims_17,
#line 1760 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_18,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_19,
#line 1760 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_21,
#line 1760 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_22)
#line 1760 "declarative_tree.m"
{
#line 1776 "declarative_tree.m"
  {
#line 1776 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1767 "declarative_tree.m"
    {
#line 1767 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var_18)), mdb__declarative_tree__BoundVars_12);
    }
#line 1776 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1768 "declarative_tree.m"
      {
#line 1768 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Pos_23;
#line 1768 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_32_32;

#line 1818 "declarative_tree.m"
        {
#line 1818 "declarative_tree.m"
          mdb__declarative_tree__V_32_32 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__Args_15);
        }
#line 1818 "declarative_tree.m"
        {
#line 1818 "declarative_tree.m"
          mdb__declarative_tree__find_arg_pos_from_back_4_p_0(mdb__declarative_tree__Args_15, mdb__declarative_tree__Var_18, mdb__declarative_tree__V_32_32, &mdb__declarative_tree__Pos_23);
        }
#line 1772 "declarative_tree.m"
        if ((mdb__declarative_tree__MaybeNodeId_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1773 "declarative_tree.m"
          {
#line 1774 "declarative_tree.m"
            {
#line 1774 "declarative_tree.m"
              MR_Word base;
#line 1774 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1774 "declarative_tree.m"
              *mdb__declarative_tree__Origin_22 = base;
#line 1774 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_13));
#line 1774 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_14));
#line 1774 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 2));
#line 1774 "declarative_tree.m"
            }
#line 1773 "declarative_tree.m"
          }
#line 1772 "declarative_tree.m"
        else
#line 1770 "declarative_tree.m"
          {
#line 1770 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NodeId_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeNodeId_16, (MR_Integer) 0));
#line 1770 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_26_26 = ((MR_Word) mdb__declarative_tree__NodeId_24);

#line 1771 "declarative_tree.m"
            {
#line 1771 "declarative_tree.m"
              MR_Word base;
#line 1771 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1771 "declarative_tree.m"
              *mdb__declarative_tree__Origin_22 = base;
#line 1771 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_26_26));
#line 1771 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__Pos_23));
#line 1771 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TermPath_19));
#line 1771 "declarative_tree.m"
            }
#line 1770 "declarative_tree.m"
          }
#line 1768 "declarative_tree.m"
      }
#line 1776 "declarative_tree.m"
    else
#line 1777 "declarative_tree.m"
      {
#line 1777 "declarative_tree.m"
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var_18, mdb__declarative_tree__TermPath_19, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__Origin_22);
#line 1777 "declarative_tree.m"
        return;
      }
#line 1776 "declarative_tree.m"
  }
#line 1760 "declarative_tree.m"
}

#line 1572 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
#line 1572 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1572 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 1572 "declarative_tree.m"
{
#line 1572 "declarative_tree.m"
  {
#line 1572 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 1572 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 1572 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 1572 "declarative_tree.m"
    {
#line 1572 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 1572 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 1572 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 1572 "declarative_tree.m"
  }
#line 1572 "declarative_tree.m"
}

#line 1567 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
#line 1567 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1567 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1567 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath0_3,
#line 1567 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_5,
#line 1567 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_6)
#line 1567 "declarative_tree.m"
{
#line 1571 "declarative_tree.m"
  while (MR_TRUE)
#line 1571 "declarative_tree.m"
    {
#line 1571 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1571 "declarative_tree.m"
      {
#line 1571 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1571 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1571 "declarative_tree.m"
          {
#line 1571 "declarative_tree.m"
            MR_Word mdb__declarative_tree__HeadVars_12;
#line 1571 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArgPos_13;
#line 1571 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 0)));
#line 1572 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 1)));
#line 1572 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 2)));
#line 1572 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 3)));
#line 1572 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 4)));

#line 1572 "declarative_tree.m"
            {
#line 1572 "declarative_tree.m"
              mdb__declarative_tree__HeadVars_12 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[3], mdb__declarative_tree__V_15_15);
            }
#line 1573 "declarative_tree.m"
            {
#line 1573 "declarative_tree.m"
              mdb__declarative_tree__ArgPos_13 = mdb__declarative_tree__find_arg_pos_2_f_0(mdb__declarative_tree__HeadVars_12, mdb__declarative_tree__Var0_2);
            }
#line 1574 "declarative_tree.m"
            {
#line 1574 "declarative_tree.m"
              MR_Word base;
#line 1574 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "declarative_tree.m"
              *mdb__declarative_tree__Origin_6 = base;
#line 1574 "declarative_tree.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__ArgPos_13));
#line 1574 "declarative_tree.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__TermPath0_3));
#line 1574 "declarative_tree.m"
            }
#line 1571 "declarative_tree.m"
          }
#line 1571 "declarative_tree.m"
        else
#line 1576 "declarative_tree.m"
          {
#line 1576 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Prim_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1576 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Prims_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1576 "declarative_tree.m"
            MR_String mdb__declarative_tree__File_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 0)));
#line 1576 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__Line_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 1)));
#line 1576 "declarative_tree.m"
            MR_Word mdb__declarative_tree__BoundVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 2)));
#line 1576 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 3)));
#line 1576 "declarative_tree.m"
            MR_Word mdb__declarative_tree__MaybeNodeId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 5)));
#line 1577 "declarative_tree.m"
            MR_Word mdb__declarative_tree___GoalPath_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 4)));

#line 1595 "declarative_tree.m"
            if (((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 2))))
#line 1609 "declarative_tree.m"
              {
#line 1609 "declarative_tree.m"
                MR_Word mdb__declarative_tree__MaybeFieldVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1609 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1609 "declarative_tree.m"
                MR_String mdb__declarative_tree__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1628 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__TermPathStep0_89;
#line 1628 "declarative_tree.m"
                MR_Word mdb__declarative_tree__TermPath_90;

#line 1611 "declarative_tree.m"
                {
#line 1611 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1611 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1611 "declarative_tree.m"
                  {
#line 1612 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__TermPath0_3)) == (MR_mktag((MR_Integer) 1)));
#line 1612 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1612 "declarative_tree.m"
                      {
#line 1612 "declarative_tree.m"
                        mdb__declarative_tree__TermPathStep0_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1612 "declarative_tree.m"
                        mdb__declarative_tree__TermPath_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1612 "declarative_tree.m"
                      }
#line 1611 "declarative_tree.m"
                  }
#line 1628 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1614 "declarative_tree.m"
                  {
#line 1614 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__MaybeVar_40;
#line 1614 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__conv1_MaybeVar_40;

#line 1614 "declarative_tree.m"
                    {
#line 1614 "declarative_tree.m"
                      mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[3], mdb__declarative_tree__MaybeFieldVars_39, mdb__declarative_tree__TermPathStep0_89, &mdb__declarative_tree__conv1_MaybeVar_40);
                    }
#line 1614 "declarative_tree.m"
                    mdb__declarative_tree__MaybeVar_40 = ((MR_Word) mdb__declarative_tree__conv1_MaybeVar_40);
#line 1621 "declarative_tree.m"
                    if ((mdb__declarative_tree__MaybeVar_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "declarative_tree.m"
                      {
#line 1625 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1625 "declarative_tree.m"
                        {
#line 1625 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1625 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1625 "declarative_tree.m"
                        }
#line 1625 "declarative_tree.m"
                        continue;
#line 1625 "declarative_tree.m"
                      }
#line 1621 "declarative_tree.m"
                    else
#line 1616 "declarative_tree.m"
                      {
#line 1616 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeVar_40, (MR_Integer) 0)));

#line 1619 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1619 "declarative_tree.m"
                        {
#line 1619 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1619 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_86;
#line 1619 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_90;

#line 1619 "declarative_tree.m"
                          mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1619 "declarative_tree.m"
                          mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1619 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1619 "declarative_tree.m"
                        }
#line 1619 "declarative_tree.m"
                        continue;
#line 1616 "declarative_tree.m"
                      }
#line 1614 "declarative_tree.m"
                  }
#line 1628 "declarative_tree.m"
                else
#line 1629 "declarative_tree.m"
                  {
#line 1629 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1629 "declarative_tree.m"
                    {
#line 1629 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1629 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1629 "declarative_tree.m"
                    }
#line 1629 "declarative_tree.m"
                    continue;
#line 1629 "declarative_tree.m"
                  }
#line 1609 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 0))))
#line 1580 "declarative_tree.m"
              {
#line 1580 "declarative_tree.m"
                MR_Word mdb__declarative_tree__FieldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1580 "declarative_tree.m"
                MR_Integer mdb__declarative_tree___CellVar_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1580 "declarative_tree.m"
                MR_String mdb__declarative_tree___Cons_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1581 "declarative_tree.m"
                {
#line 1581 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1591 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1585 "declarative_tree.m"
                  if ((mdb__declarative_tree__TermPath0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1583 "declarative_tree.m"
                    {
#line 1584 "declarative_tree.m"
                      {
#line 1584 "declarative_tree.m"
                        MR_Word base;
#line 1584 "declarative_tree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "declarative_tree.m"
                        *mdb__declarative_tree__Origin_6 = base;
#line 1584 "declarative_tree.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1584 "declarative_tree.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1584 "declarative_tree.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1584 "declarative_tree.m"
                      }
#line 1583 "declarative_tree.m"
                    }
#line 1585 "declarative_tree.m"
                  else
#line 1586 "declarative_tree.m"
                    {
#line 1586 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__TermPathStep0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1586 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__TermPath_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1586 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__Var_34;
#line 1587 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__conv2_Var_34;

#line 1587 "declarative_tree.m"
                      {
#line 1587 "declarative_tree.m"
                        mercury__list__det_index1_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__FieldVars_31, mdb__declarative_tree__TermPathStep0_32, &mdb__declarative_tree__conv2_Var_34);
                      }
#line 1587 "declarative_tree.m"
                      mdb__declarative_tree__Var_34 = ((MR_Integer) mdb__declarative_tree__conv2_Var_34);
#line 1588 "declarative_tree.m"
                      /* direct tailcall eliminated */
#line 1588 "declarative_tree.m"
                      {
#line 1588 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1588 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_34;
#line 1588 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_33;

#line 1588 "declarative_tree.m"
                        mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1588 "declarative_tree.m"
                        mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1588 "declarative_tree.m"
                        mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1588 "declarative_tree.m"
                      }
#line 1588 "declarative_tree.m"
                      continue;
#line 1586 "declarative_tree.m"
                    }
#line 1591 "declarative_tree.m"
                else
#line 1592 "declarative_tree.m"
                  {
#line 1592 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1592 "declarative_tree.m"
                    {
#line 1592 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1592 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1592 "declarative_tree.m"
                    }
#line 1592 "declarative_tree.m"
                    continue;
#line 1592 "declarative_tree.m"
                  }
#line 1580 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 1))))
#line 1596 "declarative_tree.m"
              {
#line 1596 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CellVar_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1596 "declarative_tree.m"
                MR_Word mdb__declarative_tree__FieldVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1596 "declarative_tree.m"
                MR_String mdb__declarative_tree___Cons_83 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1597 "declarative_tree.m"
                {
#line 1597 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1604 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1601 "declarative_tree.m"
                  {
#line 1601 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Pos_36;

#line 1598 "declarative_tree.m"
                    {
#line 1598 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = mercury__list__nth_member_search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__FieldVars_85, ((MR_Box) (mdb__declarative_tree__Var0_2)), &mdb__declarative_tree__Pos_36);
                    }
#line 1601 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1599 "declarative_tree.m"
                      {
#line 1599 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_78_78;

#line 1599 "declarative_tree.m"
                        {
#line 1599 "declarative_tree.m"
                          mdb__declarative_tree__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1599 "declarative_tree.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_78_78, 0) = ((MR_Box) (mdb__declarative_tree__Pos_36));
#line 1599 "declarative_tree.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_78_78, 1) = ((MR_Box) (mdb__declarative_tree__TermPath0_3));
#line 1599 "declarative_tree.m"
                        }
#line 1599 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1599 "declarative_tree.m"
                        {
#line 1599 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1599 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__CellVar_35;
#line 1599 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__V_78_78;

#line 1599 "declarative_tree.m"
                          mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1599 "declarative_tree.m"
                          mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1599 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1599 "declarative_tree.m"
                        }
#line 1599 "declarative_tree.m"
                        continue;
#line 1599 "declarative_tree.m"
                      }
#line 1601 "declarative_tree.m"
                    else
#line 1602 "declarative_tree.m"
                      {
#line 1602 "declarative_tree.m"
                        {
#line 1602 "declarative_tree.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[30])));
#line 1602 "declarative_tree.m"
                          return;
                        }
#line 1602 "declarative_tree.m"
                      }
#line 1601 "declarative_tree.m"
                  }
#line 1604 "declarative_tree.m"
                else
#line 1605 "declarative_tree.m"
                  {
#line 1605 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1605 "declarative_tree.m"
                    {
#line 1605 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1605 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1605 "declarative_tree.m"
                    }
#line 1605 "declarative_tree.m"
                    continue;
#line 1605 "declarative_tree.m"
                  }
#line 1596 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1723 "declarative_tree.m"
              {
#line 1721 "declarative_tree.m"
                {
#line 1721 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1723 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1722 "declarative_tree.m"
                  {
#line 1722 "declarative_tree.m"
                    {
#line 1722 "declarative_tree.m"
                      MR_Word base;
#line 1722 "declarative_tree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "declarative_tree.m"
                      *mdb__declarative_tree__Origin_6 = base;
#line 1722 "declarative_tree.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1722 "declarative_tree.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1722 "declarative_tree.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1722 "declarative_tree.m"
                    }
#line 1722 "declarative_tree.m"
                  }
#line 1723 "declarative_tree.m"
                else
#line 1724 "declarative_tree.m"
                  {
#line 1724 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1724 "declarative_tree.m"
                    {
#line 1724 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1724 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1724 "declarative_tree.m"
                    }
#line 1724 "declarative_tree.m"
                    continue;
#line 1724 "declarative_tree.m"
                  }
#line 1723 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1673 "declarative_tree.m"
              {
#line 1673 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__ToVar_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1673 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__FromVar_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1675 "declarative_tree.m"
                {
#line 1675 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1679 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1676 "declarative_tree.m"
                  {
#line 1676 "declarative_tree.m"
                    {
#line 1676 "declarative_tree.m"
                      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__Var0_2, mdb__declarative_tree__ToVar_114, (MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6", (MR_String) "bad unsafe_cast");
                    }
#line 1677 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1677 "declarative_tree.m"
                    {
#line 1677 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1677 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__FromVar_115;

#line 1677 "declarative_tree.m"
                      mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1677 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1677 "declarative_tree.m"
                    }
#line 1677 "declarative_tree.m"
                    continue;
#line 1676 "declarative_tree.m"
                  }
#line 1679 "declarative_tree.m"
                else
#line 1680 "declarative_tree.m"
                  {
#line 1680 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1680 "declarative_tree.m"
                    {
#line 1680 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1680 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1680 "declarative_tree.m"
                    }
#line 1680 "declarative_tree.m"
                    continue;
#line 1680 "declarative_tree.m"
                  }
#line 1673 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1731 "declarative_tree.m"
              {
#line 1729 "declarative_tree.m"
                {
#line 1729 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1731 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1730 "declarative_tree.m"
                  {
#line 1730 "declarative_tree.m"
                    {
#line 1730 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[31])));
#line 1730 "declarative_tree.m"
                      return;
                    }
#line 1730 "declarative_tree.m"
                  }
#line 1731 "declarative_tree.m"
                else
#line 1732 "declarative_tree.m"
                  {
#line 1732 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1732 "declarative_tree.m"
                    {
#line 1732 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1732 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1732 "declarative_tree.m"
                    }
#line 1732 "declarative_tree.m"
                    continue;
#line 1732 "declarative_tree.m"
                  }
#line 1731 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1700 "declarative_tree.m"
              {
#line 1700 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Args_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1700 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1701 "declarative_tree.m"
                {
#line 1701 "declarative_tree.m"
                  mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_49, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1701 "declarative_tree.m"
                  return;
                }
#line 1700 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1704 "declarative_tree.m"
              {
#line 1704 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Args_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1704 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1704 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1705 "declarative_tree.m"
                {
#line 1705 "declarative_tree.m"
                  mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_116, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1705 "declarative_tree.m"
                  return;
                }
#line 1704 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1633 "declarative_tree.m"
              {
#line 1633 "declarative_tree.m"
                MR_Word mdb__declarative_tree__MaybeFieldVars_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1633 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1633 "declarative_tree.m"
                MR_String mdb__declarative_tree__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1634 "declarative_tree.m"
                {
#line 1634 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1656 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1638 "declarative_tree.m"
                  if ((mdb__declarative_tree__TermPath0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1636 "declarative_tree.m"
                    {
#line 1637 "declarative_tree.m"
                      {
#line 1637 "declarative_tree.m"
                        MR_Word base;
#line 1637 "declarative_tree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1637 "declarative_tree.m"
                        *mdb__declarative_tree__Origin_6 = base;
#line 1637 "declarative_tree.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1637 "declarative_tree.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1637 "declarative_tree.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1637 "declarative_tree.m"
                      }
#line 1636 "declarative_tree.m"
                    }
#line 1638 "declarative_tree.m"
                  else
#line 1639 "declarative_tree.m"
                    {
#line 1639 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__TermPathStep0_97 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1639 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__TermPath_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1639 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__MaybeVar_100;
#line 1640 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__conv3_MaybeVar_100;

#line 1640 "declarative_tree.m"
                      {
#line 1640 "declarative_tree.m"
                        mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[3], mdb__declarative_tree__MaybeFieldVars_112, mdb__declarative_tree__TermPathStep0_97, &mdb__declarative_tree__conv3_MaybeVar_100);
                      }
#line 1640 "declarative_tree.m"
                      mdb__declarative_tree__MaybeVar_100 = ((MR_Word) mdb__declarative_tree__conv3_MaybeVar_100);
#line 1647 "declarative_tree.m"
                      if ((mdb__declarative_tree__MaybeVar_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "declarative_tree.m"
                        {
#line 1653 "declarative_tree.m"
                          {
#line 1653 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[32])));
#line 1653 "declarative_tree.m"
                            return;
                          }
#line 1648 "declarative_tree.m"
                        }
#line 1647 "declarative_tree.m"
                      else
#line 1642 "declarative_tree.m"
                        {
#line 1642 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeVar_100, (MR_Integer) 0)));

#line 1645 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1645 "declarative_tree.m"
                          {
#line 1645 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1645 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_95;
#line 1645 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_98;

#line 1645 "declarative_tree.m"
                            mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1645 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1645 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1645 "declarative_tree.m"
                          }
#line 1645 "declarative_tree.m"
                          continue;
#line 1642 "declarative_tree.m"
                        }
#line 1639 "declarative_tree.m"
                    }
#line 1656 "declarative_tree.m"
                else
#line 1657 "declarative_tree.m"
                  {
#line 1657 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1657 "declarative_tree.m"
                    {
#line 1657 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1657 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1657 "declarative_tree.m"
                    }
#line 1657 "declarative_tree.m"
                    continue;
#line 1657 "declarative_tree.m"
                  }
#line 1633 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1708 "declarative_tree.m"
              {
#line 1708 "declarative_tree.m"
                MR_String mdb__declarative_tree__Module_52 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1708 "declarative_tree.m"
                MR_String mdb__declarative_tree__Name_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1708 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Args_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1715 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewVar_54;

#line 1710 "declarative_tree.m"
                {
#line 1710 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1710 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1711 "declarative_tree.m"
                  {
#line 1711 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdb__declarative_tree__plain_call_is_special_case_4_p_0(mdb__declarative_tree__Module_52, mdb__declarative_tree__Name_53, mdb__declarative_tree__Args_117, &mdb__declarative_tree__NewVar_54);
                  }
#line 1715 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1713 "declarative_tree.m"
                  {
#line 1713 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1713 "declarative_tree.m"
                    {
#line 1713 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1713 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__NewVar_54;

#line 1713 "declarative_tree.m"
                      mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1713 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1713 "declarative_tree.m"
                    }
#line 1713 "declarative_tree.m"
                    continue;
#line 1713 "declarative_tree.m"
                  }
#line 1715 "declarative_tree.m"
                else
#line 1716 "declarative_tree.m"
                  {
#line 1716 "declarative_tree.m"
                    mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_117, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1716 "declarative_tree.m"
                    return;
                  }
#line 1708 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1687 "declarative_tree.m"
              {
#line 1685 "declarative_tree.m"
                {
#line 1685 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1687 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1686 "declarative_tree.m"
                  {
#line 1686 "declarative_tree.m"
                    {
#line 1686 "declarative_tree.m"
                      MR_Word base;
#line 1686 "declarative_tree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1686 "declarative_tree.m"
                      *mdb__declarative_tree__Origin_6 = base;
#line 1686 "declarative_tree.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1686 "declarative_tree.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1686 "declarative_tree.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1686 "declarative_tree.m"
                    }
#line 1686 "declarative_tree.m"
                  }
#line 1687 "declarative_tree.m"
                else
#line 1688 "declarative_tree.m"
                  {
#line 1688 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1688 "declarative_tree.m"
                    {
#line 1688 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1688 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1688 "declarative_tree.m"
                    }
#line 1688 "declarative_tree.m"
                    continue;
#line 1688 "declarative_tree.m"
                  }
#line 1687 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1595 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1661 "declarative_tree.m"
              {
#line 1661 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__ToVar_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1661 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__FromVar_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1663 "declarative_tree.m"
                {
#line 1663 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1668 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1665 "declarative_tree.m"
                  {
#line 1664 "declarative_tree.m"
                    {
#line 1664 "declarative_tree.m"
                      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__Var0_2, mdb__declarative_tree__ToVar_43, (MR_String) "traverse_primitives", (MR_String) "bad assign");
                    }
#line 1666 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1666 "declarative_tree.m"
                    {
#line 1666 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1666 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__FromVar_44;

#line 1666 "declarative_tree.m"
                      mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1666 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1666 "declarative_tree.m"
                    }
#line 1666 "declarative_tree.m"
                    continue;
#line 1665 "declarative_tree.m"
                  }
#line 1668 "declarative_tree.m"
                else
#line 1669 "declarative_tree.m"
                  {
#line 1669 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1669 "declarative_tree.m"
                    {
#line 1669 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1669 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1669 "declarative_tree.m"
                    }
#line 1669 "declarative_tree.m"
                    continue;
#line 1669 "declarative_tree.m"
                  }
#line 1661 "declarative_tree.m"
              }
#line 1595 "declarative_tree.m"
            else
#line 1695 "declarative_tree.m"
              {
#line 1693 "declarative_tree.m"
                {
#line 1693 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                }
#line 1695 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1694 "declarative_tree.m"
                  {
#line 1694 "declarative_tree.m"
                    {
#line 1694 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[33])));
#line 1694 "declarative_tree.m"
                      return;
                    }
#line 1694 "declarative_tree.m"
                  }
#line 1695 "declarative_tree.m"
                else
#line 1696 "declarative_tree.m"
                  {
#line 1696 "declarative_tree.m"
                    /* direct tailcall eliminated */
#line 1696 "declarative_tree.m"
                    {
#line 1696 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1696 "declarative_tree.m"
                      mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1696 "declarative_tree.m"
                    }
#line 1696 "declarative_tree.m"
                    continue;
#line 1696 "declarative_tree.m"
                  }
#line 1695 "declarative_tree.m"
              }
#line 1576 "declarative_tree.m"
          }
#line 1571 "declarative_tree.m"
      }
#line 1571 "declarative_tree.m"
      break;
#line 1571 "declarative_tree.m"
    }
#line 1567 "declarative_tree.m"
}

#line 1370 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
#line 1370 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1370 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__2_2)
#line 1370 "declarative_tree.m"
{
#line 1374 "declarative_tree.m"
  while (MR_TRUE)
#line 1374 "declarative_tree.m"
    {
#line 1374 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1374 "declarative_tree.m"
      {
#line 1374 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1374 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1374 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1374 "declarative_tree.m"
        else
#line 1375 "declarative_tree.m"
          {
#line 1375 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourHeadNode_6;
#line 1375 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1375 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1376 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_22_22, (MR_Integer) 0));

#line 1376 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_22_22, (MR_Integer) 1)));
#line 1380 "declarative_tree.m"
            if (((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_6)) == (MR_mktag((MR_Integer) 1))))
#line 1379 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1380 "declarative_tree.m"
            else
#line 1380 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1381 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1380 "declarative_tree.m"
            else
#line 1380 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1385 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1384 "declarative_tree.m"
              {
#line 1384 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1384 "declarative_tree.m"
                {
#line 1384 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__ContourTail_7;

#line 1384 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1384 "declarative_tree.m"
                }
#line 1384 "declarative_tree.m"
                continue;
#line 1384 "declarative_tree.m"
              }
#line 1385 "declarative_tree.m"
            else
#line 1386 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__2_2 = mdb__declarative_tree__HeadVar__1_1;
#line 1375 "declarative_tree.m"
          }
#line 1374 "declarative_tree.m"
      }
#line 1374 "declarative_tree.m"
      break;
#line 1374 "declarative_tree.m"
    }
#line 1370 "declarative_tree.m"
}

#line 955 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
#line 955 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49,
#line 955 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 955 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_7,
#line 955 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_8,
#line 955 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10)
#line 955 "declarative_tree.m"
{
#line 958 "declarative_tree.m"
  {
#line 958 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 958 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;

#line 959 "declarative_tree.m"
    {
#line 959 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_11);
    }
#line 977 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 1))))
#line 961 "declarative_tree.m"
      {
#line 961 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_51_51;
#line 961 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_52_52;
#line 961 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 961 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ExitAtom_20;
#line 961 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_21;
#line 961 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_22;
#line 961 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 961 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 961 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 961 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 961 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 961 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 961 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Args_73;
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ArgInfo_74;
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeArg_77;
#line 1893 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_72_72;
#line 1895 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_75_75;
#line 1895 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_76_76;
#line 1896 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_78_78;

#line 5414 "mdb.declarative_tree.c"
        {
#line 5416 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_51_51);
        }
#line 962 "declarative_tree.m"
        {
#line 962 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_51_51, mdb__declarative_tree__Node_11);
        }
#line 963 "declarative_tree.m"
        {
#line 963 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13, &mdb__declarative_tree__CallNode_21);
        }
#line 5429 "mdb.declarative_tree.c"
        {
#line 5431 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_52_52);
        }
#line 964 "declarative_tree.m"
        {
#line 964 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_22 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_52_52, mdb__declarative_tree__CallNode_21);
        }
#line 1893 "declarative_tree.m"
        mdb__declarative_tree__V_72_72 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_22, (MR_Integer) 0)));
#line 1893 "declarative_tree.m"
        mdb__declarative_tree__Args_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_22, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
        {
#line 1894 "declarative_tree.m"
          mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_73, &mdb__declarative_tree__ArgInfo_74);
        }
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 0)));
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 1)));
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__MaybeArg_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 2)));
#line 1896 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_77)) == (MR_mktag((MR_Integer) 1)));
#line 1896 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1896 "declarative_tree.m"
          {
#line 1896 "declarative_tree.m"
            mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_77, (MR_Integer) 0)));
#line 966 "declarative_tree.m"
            {
#line 966 "declarative_tree.m"
              mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13, mdb__declarative_tree__CallNode_21, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 966 "declarative_tree.m"
              return;
            }
#line 1896 "declarative_tree.m"
          }
#line 1896 "declarative_tree.m"
        else
#line 974 "declarative_tree.m"
          {
#line 1893 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 1)));
#line 1893 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArgInfo_83;
#line 1893 "declarative_tree.m"
            MR_Word mdb__declarative_tree__MaybeArg_86;
#line 1893 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 0)));
#line 1895 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_84_84;
#line 1895 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_85_85;
#line 1896 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_87_87;

#line 1894 "declarative_tree.m"
            {
#line 1894 "declarative_tree.m"
              mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_82, &mdb__declarative_tree__ArgInfo_83);
            }
#line 1895 "declarative_tree.m"
            mdb__declarative_tree__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 0)));
#line 1895 "declarative_tree.m"
            mdb__declarative_tree__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 1)));
#line 1895 "declarative_tree.m"
            mdb__declarative_tree__MaybeArg_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 2)));
#line 1896 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_86)) == (MR_mktag((MR_Integer) 1)));
#line 1896 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1896 "declarative_tree.m"
              {
#line 1896 "declarative_tree.m"
                mdb__declarative_tree__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_86, (MR_Integer) 0)));
#line 969 "declarative_tree.m"
                {
#line 969 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13);
                }
#line 971 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 970 "declarative_tree.m"
                  {
#line 970 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_53_53;

#line 5521 "mdb.declarative_tree.c"
                    {
#line 5523 "mdb.declarative_tree.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_53_53);
                    }
#line 970 "declarative_tree.m"
                    {
#line 970 "declarative_tree.m"
                      mdb__declarative_tree__find_chain_start_outside_4_p_0(mdb__declarative_tree__TypeInfo_53_53, mdb__declarative_tree__CallNode_21, mdb__declarative_tree__Node_11, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 970 "declarative_tree.m"
                      return;
                    }
#line 970 "declarative_tree.m"
                  }
#line 971 "declarative_tree.m"
                else
#line 972 "declarative_tree.m"
                  *mdb__declarative_tree__ChainStart_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1896 "declarative_tree.m"
              }
#line 1896 "declarative_tree.m"
            else
#line 975 "declarative_tree.m"
              {
#line 975 "declarative_tree.m"
                {
#line 975 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[27])));
#line 975 "declarative_tree.m"
                  return;
                }
#line 975 "declarative_tree.m"
              }
#line 974 "declarative_tree.m"
          }
#line 961 "declarative_tree.m"
      }
#line 977 "declarative_tree.m"
    else
#line 977 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 988 "declarative_tree.m"
      {
#line 988 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_59_59;
#line 988 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 988 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_47;
#line 988 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_48;
#line 988 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 988 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 988 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 988 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 988 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 988 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Args_64;
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ArgInfo_65;
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeArg_68;
#line 1893 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_63_63;
#line 1895 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_66_66;
#line 1895 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_67_67;
#line 1896 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_69_69;

#line 989 "declarative_tree.m"
        {
#line 989 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_46, &mdb__declarative_tree__CallNode_47);
        }
#line 5604 "mdb.declarative_tree.c"
        {
#line 5606 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_59_59);
        }
#line 990 "declarative_tree.m"
        {
#line 990 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_59_59, mdb__declarative_tree__CallNode_47);
        }
#line 1893 "declarative_tree.m"
        mdb__declarative_tree__V_63_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_48, (MR_Integer) 0)));
#line 1893 "declarative_tree.m"
        mdb__declarative_tree__Args_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_48, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
        {
#line 1894 "declarative_tree.m"
          mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_64, &mdb__declarative_tree__ArgInfo_65);
        }
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 0)));
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 1)));
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__MaybeArg_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 2)));
#line 1896 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_68)) == (MR_mktag((MR_Integer) 1)));
#line 1896 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1896 "declarative_tree.m"
          {
#line 1896 "declarative_tree.m"
            mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_68, (MR_Integer) 0)));
#line 995 "declarative_tree.m"
            {
#line 995 "declarative_tree.m"
              mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_46, mdb__declarative_tree__CallNode_47, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 995 "declarative_tree.m"
              return;
            }
#line 1896 "declarative_tree.m"
          }
#line 1896 "declarative_tree.m"
        else
#line 998 "declarative_tree.m"
          {
#line 998 "declarative_tree.m"
            {
#line 998 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[28])));
#line 998 "declarative_tree.m"
              return;
            }
#line 998 "declarative_tree.m"
          }
#line 988 "declarative_tree.m"
      }
#line 977 "declarative_tree.m"
    else
#line 978 "declarative_tree.m"
      {
#line 978 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_56_56;
#line 978 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_43 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 978 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_44;
#line 978 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_45;
#line 978 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 978 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 978 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 978 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 978 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Args_91;
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ArgInfo_92;
#line 1893 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeArg_95;
#line 1893 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_90_90;
#line 1895 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_93_93;
#line 1895 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_94_94;
#line 1896 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_96_96;

#line 979 "declarative_tree.m"
        {
#line 979 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_43, &mdb__declarative_tree__CallNode_44);
        }
#line 5703 "mdb.declarative_tree.c"
        {
#line 5705 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_56_56);
        }
#line 980 "declarative_tree.m"
        {
#line 980 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_45 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_56_56, mdb__declarative_tree__CallNode_44);
        }
#line 1893 "declarative_tree.m"
        mdb__declarative_tree__V_90_90 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_45, (MR_Integer) 0)));
#line 1893 "declarative_tree.m"
        mdb__declarative_tree__Args_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_45, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
        {
#line 1894 "declarative_tree.m"
          mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_91, &mdb__declarative_tree__ArgInfo_92);
        }
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 0)));
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 1)));
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__MaybeArg_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 2)));
#line 1896 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_95)) == (MR_mktag((MR_Integer) 1)));
#line 1896 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1896 "declarative_tree.m"
          {
#line 1896 "declarative_tree.m"
            mdb__declarative_tree__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_95, (MR_Integer) 0)));
#line 982 "declarative_tree.m"
            {
#line 982 "declarative_tree.m"
              mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_43, mdb__declarative_tree__CallNode_44, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 982 "declarative_tree.m"
              return;
            }
#line 1896 "declarative_tree.m"
          }
#line 1896 "declarative_tree.m"
        else
#line 985 "declarative_tree.m"
          {
#line 985 "declarative_tree.m"
            {
#line 985 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[29])));
#line 985 "declarative_tree.m"
              return;
            }
#line 985 "declarative_tree.m"
          }
#line 978 "declarative_tree.m"
      }
#line 958 "declarative_tree.m"
  }
#line 955 "declarative_tree.m"
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
#line 1893 "declarative_tree.m"
  {
#line 1893 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1893 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1893 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ArgInfo_8;
#line 1893 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybeArg_11;
#line 1893 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1895 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 1895 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 1896 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;

#line 1894 "declarative_tree.m"
    {
#line 1894 "declarative_tree.m"
      mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_6, mdb__declarative_tree__Args_5, &mdb__declarative_tree__ArgInfo_8);
    }
#line 1895 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 0)));
#line 1895 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 1)));
#line 1895 "declarative_tree.m"
    mdb__declarative_tree__MaybeArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 2)));
#line 1896 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_11)) == (MR_mktag((MR_Integer) 1)));
#line 1896 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1896 "declarative_tree.m"
      mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_11, (MR_Integer) 0)));
#line 1893 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1893 "declarative_tree.m"
  }
#line 46 "declarative_tree.m"
}

#line 1664 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1664__1_2_p_0(
#line 1664 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1664 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_43)
#line 1664 "declarative_tree.m"
{
#line 1664 "declarative_tree.m"
  {
#line 1664 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__Var0_2 == mdb__declarative_tree__ToVar_43);

#line 1664 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1664 "declarative_tree.m"
  }
#line 1664 "declarative_tree.m"
}

#line 1676 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1676__1_2_p_0(
#line 1676 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1676 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_114)
#line 1676 "declarative_tree.m"
{
#line 1676 "declarative_tree.m"
  {
#line 1676 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__Var0_2 == mdb__declarative_tree__ToVar_114);

#line 1676 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1676 "declarative_tree.m"
  }
#line 1676 "declarative_tree.m"
}

#line 1196 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1196__1_3_p_0(
#line 1196 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1196 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AdjustedContour_21,
#line 1196 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_29)
#line 1196 "declarative_tree.m"
{
#line 1196 "declarative_tree.m"
  {
#line 1196 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1196 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_43_43;
#line 1196 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_44_44;
#line 1196 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_46_46;
#line 1196 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_48_48;

#line 5883 "mdb.declarative_tree.c"
    {
#line 5885 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_43_43);
    }
#line 5888 "mdb.declarative_tree.c"
    {
#line 5890 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_44_44);
    }
#line 5893 "mdb.declarative_tree.c"
    {
#line 5895 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5897 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 5899 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_46_46, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_44_44));
#line 5901 "mdb.declarative_tree.c"
    }
#line 5903 "mdb.declarative_tree.c"
    {
#line 5905 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5907 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 5909 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_43_43));
#line 5911 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_46_46));
#line 5913 "mdb.declarative_tree.c"
    }
#line 1196 "declarative_tree.m"
    {
#line 1196 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_tree__TypeInfo_48_48, mdb__declarative_tree__AdjustedContour_21, mdb__declarative_tree__HeadVar__3_29);
    }
#line 1196 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1196 "declarative_tree.m"
  }
#line 1196 "declarative_tree.m"
}

#line 279 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
#line 279 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_127,
#line 279 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 279 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 279 "declarative_tree.m"
{
#line 279 "declarative_tree.m"
  {
#line 279 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 279 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 279 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1));
#line 279 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 279 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 279 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 279 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 279 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 6)));
#line 279 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 7)));
#line 279 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 8)));
#line 279 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 9)));
#line 279 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_128_128;

#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)) = mdb__declarative_tree__V_13_13;
#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)) = mdb__declarative_tree__V_14_14;
#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)) = ((MR_Box) (mdb__declarative_tree__V_15_15));
#line 279 "declarative_tree.m"
    mdb__declarative_tree__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (mdb__declarative_tree__V_17_17));
#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)) = ((MR_Box) (mdb__declarative_tree__V_18_18));
#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 6)) = ((MR_Box) (mdb__declarative_tree__V_19_19));
#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 7)) = ((MR_Box) (mdb__declarative_tree__V_20_20));
#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 8)) = ((MR_Box) (mdb__declarative_tree__V_21_21));
#line 279 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 9)) = ((MR_Box) (mdb__declarative_tree__V_22_22));
#line 279 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == mdb__declarative_tree__V_128_128);
#line 279 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 279 "declarative_tree.m"
  }
#line 279 "declarative_tree.m"
}

#line 96 "declarative_tree.m"
static MR_Integer MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(
#line 96 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 96 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 96 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 96 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 96 "declarative_tree.m"
{
#line 1901 "declarative_tree.m"
  {
#line 1901 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1901 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__HeadVar__4_4;
#line 1901 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_14_14;
#line 1901 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 1901 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_9 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 1901 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_10;
#line 1901 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_11;
#line 1901 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Atom_12;
#line 1887 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_20;
#line 1877 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_18;
#line 6029 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6031 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_18;

#line 6034 "mdb.declarative_tree.c"
    {
#line 6036 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5), mdb__declarative_tree__Store_8, mdb__declarative_tree__Ref_9, &mdb__declarative_tree__conv1_Node0_18);
    }
#line 6039 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 6041 "mdb.declarative_tree.c"
      {
#line 6043 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_18 = ((MR_Word) mdb__declarative_tree__conv1_Node0_18);
#line 6045 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 6047 "mdb.declarative_tree.c"
      }
#line 1877 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1880 "declarative_tree.m"
      {
#line 1880 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node0_18)) == (MR_mktag((MR_Integer) 1))))
#line 1879 "declarative_tree.m"
          {
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 0));
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_21_21;
#line 1879 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_22_22;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_23_23;
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_25_25;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_26_26;

#line 1879 "declarative_tree.m"
            mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 3)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 7)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1879 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1883 "declarative_tree.m"
          {
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_33_33;
#line 1883 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_34_34;
#line 1883 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_35_35;
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_36_36;
#line 1883 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_37_37;

#line 1883 "declarative_tree.m"
            mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 3));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_36_36 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 7)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1883 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1881 "declarative_tree.m"
          {
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_28_28;
#line 1881 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_29_29;
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_30_30;
#line 1881 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_31_31;

#line 1881 "declarative_tree.m"
            mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 3));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1881 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1880 "declarative_tree.m"
      }
#line 1887 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1886 "declarative_tree.m"
      mdb__declarative_tree__CallId_10 = mdb__declarative_tree__CallId0_20;
#line 1887 "declarative_tree.m"
    else
#line 1888 "declarative_tree.m"
      {
#line 1888 "declarative_tree.m"
        {
#line 1888 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1888 "declarative_tree.m"
      }
#line 1903 "declarative_tree.m"
    {
#line 1903 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__Call_11);
    }
#line 6182 "mdb.declarative_tree.c"
    {
#line 6184 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_14_14);
    }
#line 1904 "declarative_tree.m"
    {
#line 1904 "declarative_tree.m"
      mdb__declarative_tree__Atom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_14_14, mdb__declarative_tree__Call_11);
    }
#line 1905 "declarative_tree.m"
    {
#line 1905 "declarative_tree.m"
      mdb__declarative_execution__user_arg_num_3_p_0(mdb__declarative_tree__HeadVar__3_3, mdb__declarative_tree__Atom_12, &mdb__declarative_tree__HeadVar__4_4);
    }
#line 1901 "declarative_tree.m"
    return mdb__declarative_tree__HeadVar__4_4;
#line 1901 "declarative_tree.m"
  }
#line 96 "declarative_tree.m"
}

#line 95 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 95 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 95 "declarative_tree.m"
{
#line 483 "declarative_tree.m"
  {
#line 483 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 483 "declarative_tree.m"
    MR_Word mdb__declarative_tree__HeadVar__3_3;
#line 483 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 483 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 483 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;
#line 483 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Label_13;
#line 483 "declarative_tree.m"
    MR_Box mdb__declarative_tree__ProcLayout_28;

#line 484 "declarative_tree.m"
    {
#line 484 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 487 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 488 "declarative_tree.m"
      {
#line 488 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 488 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 488 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 488 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 488 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 488 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20;
#line 488 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_21_21;

#line 488 "declarative_tree.m"
        mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 488 "declarative_tree.m"
        mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 488 "declarative_tree.m"
        mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 488 "declarative_tree.m"
      }
#line 487 "declarative_tree.m"
    else
#line 487 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 490 "declarative_tree.m"
      {
#line 490 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 490 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 490 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 490 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 490 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 490 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_27_27;

#line 490 "declarative_tree.m"
        mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 490 "declarative_tree.m"
        mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 490 "declarative_tree.m"
      }
#line 487 "declarative_tree.m"
    else
#line 486 "declarative_tree.m"
      {
#line 486 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 486 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 486 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 486 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 486 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14;

#line 486 "declarative_tree.m"
        mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 486 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 486 "declarative_tree.m"
      }
#line 492 "declarative_tree.m"
    {
#line 492 "declarative_tree.m"
      mdb__declarative_tree__ProcLayout_28 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_tree__Label_13);
    }
#line 493 "declarative_tree.m"
    {
#line 493 "declarative_tree.m"
      return mdb__declarative_tree__HeadVar__3_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__ProcLayout_28);
    }
#line 483 "declarative_tree.m"
    return mdb__declarative_tree__HeadVar__3_3;
#line 483 "declarative_tree.m"
  }
#line 95 "declarative_tree.m"
}

#line 94 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 94 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3,
#line 94 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 94 "declarative_tree.m"
{
#line 432 "declarative_tree.m"
  {
#line 432 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 432 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 432 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 432 "declarative_tree.m"
    MR_String mdb__declarative_tree__FileName_9;
#line 432 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__LineNo_10;
#line 432 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Final_11;
#line 432 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_13;
#line 432 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Label_17;
#line 432 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_29;
#line 432 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_57_57;
#line 444 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_54_54;
#line 444 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_55_55;
#line 444 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_56_56;
#line 444 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_58_58;
#line 444 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_59_59;
#line 444 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_60_60;
#line 444 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_61_61;
#line 444 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_62_62;
#line 444 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_63_63;

#line 433 "declarative_tree.m"
    {
#line 433 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_7, mdb__declarative_tree__Ref_8, &mdb__declarative_tree__Final_11);
    }
#line 436 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Final_11)) == (MR_mktag((MR_Integer) 1))))
#line 435 "declarative_tree.m"
      {
#line 435 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 0));
#line 435 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_14_14;
#line 435 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15;
#line 435 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16;
#line 435 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18;
#line 435 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19;

#line 435 "declarative_tree.m"
        mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 435 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 435 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 3)));
#line 435 "declarative_tree.m"
        mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 435 "declarative_tree.m"
        mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 435 "declarative_tree.m"
        mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 435 "declarative_tree.m"
        mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 7)));
#line 435 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 435 "declarative_tree.m"
      }
#line 436 "declarative_tree.m"
    else
#line 436 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Final_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 439 "declarative_tree.m"
      {
#line 439 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 439 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_25_25;
#line 439 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_26_26;
#line 439 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_27_27;
#line 439 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_28_28;

#line 439 "declarative_tree.m"
        mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 439 "declarative_tree.m"
        mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 3));
#line 439 "declarative_tree.m"
        mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 439 "declarative_tree.m"
        mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 439 "declarative_tree.m"
        mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 439 "declarative_tree.m"
        mdb__declarative_tree__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 7)));
#line 439 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 439 "declarative_tree.m"
      }
#line 436 "declarative_tree.m"
    else
#line 436 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Final_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 437 "declarative_tree.m"
      {
#line 437 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 437 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_21_21;
#line 437 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_22_22;
#line 437 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23;

#line 437 "declarative_tree.m"
        mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 437 "declarative_tree.m"
        mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 3));
#line 437 "declarative_tree.m"
        mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 437 "declarative_tree.m"
        mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 437 "declarative_tree.m"
        mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 437 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 437 "declarative_tree.m"
      }
#line 436 "declarative_tree.m"
    else
#line 436 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_FALSE;
#line 432 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 432 "declarative_tree.m"
      {
#line 441 "declarative_tree.m"
        {
#line 441 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(mdb__declarative_tree__Label_17, &mdb__declarative_tree__FileName_9, &mdb__declarative_tree__LineNo_10);
        }
#line 432 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 432 "declarative_tree.m"
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
#line 442 "declarative_tree.m"
            {
#line 442 "declarative_tree.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_7, mdb__declarative_tree__CallId_13, &mdb__declarative_tree__Call_29);
            }
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_63_63 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 0));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_62_62 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 1));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 2)));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 3)));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 4)));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 5)));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 6)));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_56_56 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 7)));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 8)));
#line 444 "declarative_tree.m"
            mdb__declarative_tree__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 9)));
#line 448 "declarative_tree.m"
            if ((mdb__declarative_tree__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 450 "declarative_tree.m"
              {
#line 450 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 450 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 450 "declarative_tree.m"
              }
#line 448 "declarative_tree.m"
            else
#line 444 "declarative_tree.m"
              {
#line 444 "declarative_tree.m"
                MR_Box mdb__declarative_tree__ReturnLabel_30 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_57_57, (MR_Integer) 0)));
#line 444 "declarative_tree.m"
                MR_String mdb__declarative_tree__ReturnFileName_31;
#line 444 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__ReturnLineNo_32;
#line 444 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_35_35;

#line 445 "declarative_tree.m"
                {
#line 445 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(mdb__declarative_tree__ReturnLabel_30, &mdb__declarative_tree__ReturnFileName_31, &mdb__declarative_tree__ReturnLineNo_32);
                }
#line 444 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 444 "declarative_tree.m"
                  {
#line 447 "declarative_tree.m"
                    {
#line 447 "declarative_tree.m"
                      mdb__declarative_tree__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 447 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 0) = ((MR_Box) (mdb__declarative_tree__ReturnFileName_31));
#line 447 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 1) = ((MR_Box) (mdb__declarative_tree__ReturnLineNo_32));
#line 447 "declarative_tree.m"
                    }
#line 447 "declarative_tree.m"
                    {
#line 447 "declarative_tree.m"
                      MR_Word base;
#line 447 "declarative_tree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 447 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__4_4 = base;
#line 447 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_35_35));
#line 447 "declarative_tree.m"
                    }
#line 447 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 444 "declarative_tree.m"
                  }
#line 444 "declarative_tree.m"
              }
#line 432 "declarative_tree.m"
          }
#line 432 "declarative_tree.m"
      }
#line 432 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 432 "declarative_tree.m"
  }
#line 94 "declarative_tree.m"
}

#line 93 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 93 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__3_3,
#line 93 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__4_4)
#line 93 "declarative_tree.m"
{
#line 327 "declarative_tree.m"
  {
#line 327 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 328 "declarative_tree.m"
    {
#line 328 "declarative_tree.m"
      mdb__declarative_tree__trace_weight_9_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 1, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0, mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__declarative_tree__HeadVar__4_4);
#line 328 "declarative_tree.m"
      return;
    }
#line 327 "declarative_tree.m"
  }
#line 93 "declarative_tree.m"
}

#line 92 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(
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
#line 320 "declarative_tree.m"
  {
#line 320 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 321 "declarative_tree.m"
    {
#line 321 "declarative_tree.m"
      mdb__declarative_tree__trace_weight_9_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0, mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__declarative_tree__HeadVar__4_4);
#line 321 "declarative_tree.m"
      return;
    }
#line 320 "declarative_tree.m"
  }
#line 92 "declarative_tree.m"
}

#line 91 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 91 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 91 "declarative_tree.m"
{
#line 268 "declarative_tree.m"
  {
#line 268 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 268 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_39_39;
#line 268 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 268 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 268 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_6;
#line 268 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_8;
#line 268 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_35_35;
#line 268 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 279 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_26_26;
#line 279 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_27_27;
#line 279 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_28_28;
#line 279 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_29_29;
#line 279 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_30_30;
#line 279 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_31_31;
#line 279 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 279 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 279 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;

#line 269 "declarative_tree.m"
    {
#line 269 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__Node_6);
    }
#line 272 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_6)) == (MR_mktag((MR_Integer) 1))))
#line 271 "declarative_tree.m"
      {
#line 271 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 0));
#line 271 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9;
#line 271 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 271 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 271 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 271 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_13_13;
#line 271 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14;

#line 271 "declarative_tree.m"
        mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 271 "declarative_tree.m"
        mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 271 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 3)));
#line 271 "declarative_tree.m"
        mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 271 "declarative_tree.m"
        mdb__declarative_tree__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 271 "declarative_tree.m"
        mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 271 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 7)));
#line 271 "declarative_tree.m"
      }
#line 272 "declarative_tree.m"
    else
#line 272 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 275 "declarative_tree.m"
      {
#line 275 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 275 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_21_21;
#line 275 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_22_22;
#line 275 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23;
#line 275 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_24_24;
#line 275 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_25_25;

#line 275 "declarative_tree.m"
        mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 275 "declarative_tree.m"
        mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 3));
#line 275 "declarative_tree.m"
        mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 275 "declarative_tree.m"
        mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 275 "declarative_tree.m"
        mdb__declarative_tree__V_24_24 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 275 "declarative_tree.m"
        mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 7)));
#line 275 "declarative_tree.m"
      }
#line 272 "declarative_tree.m"
    else
#line 273 "declarative_tree.m"
      {
#line 273 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 273 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16;
#line 273 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17;
#line 273 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18;
#line 273 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19;

#line 273 "declarative_tree.m"
        mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 273 "declarative_tree.m"
        mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 3));
#line 273 "declarative_tree.m"
        mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 273 "declarative_tree.m"
        mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 273 "declarative_tree.m"
        mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 273 "declarative_tree.m"
      }
#line 279 "declarative_tree.m"
    {
#line 279 "declarative_tree.m"
      mdb__declarative_tree__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 0) = NULL;
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 1) = NULL;
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 2) = NULL;
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 3) = ((MR_Box) ((MR_Integer) 1));
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 4) = NULL;
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 5) = NULL;
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 6) = NULL;
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 7) = NULL;
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 8) = NULL;
#line 279 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 9) = NULL;
#line 279 "declarative_tree.m"
    }
#line 279 "declarative_tree.m"
    {
#line 279 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_8, &mdb__declarative_tree__V_37_37);
    }
#line 6855 "mdb.declarative_tree.c"
    {
#line 6857 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_39_39);
    }
#line 279 "declarative_tree.m"
    {
#line 279 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(mdb__declarative_tree__TypeInfo_39_39, mdb__declarative_tree__V_35_35, mdb__declarative_tree__V_37_37);
    }
#line 268 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 268 "declarative_tree.m"
  }
#line 91 "declarative_tree.m"
}

#line 90 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 90 "declarative_tree.m"
{
#line 251 "declarative_tree.m"
  {
#line 251 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 251 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 251 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref1_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 251 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref2_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 251 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node1_8;
#line 251 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node2_9;

#line 252 "declarative_tree.m"
    {
#line 252 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref1_6, &mdb__declarative_tree__Node1_8);
    }
#line 253 "declarative_tree.m"
    {
#line 253 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref2_7, &mdb__declarative_tree__Node2_9);
    }
#line 257 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node1_8)) == (MR_mktag((MR_Integer) 1))))
#line 255 "declarative_tree.m"
      {
#line 255 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Event_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 255 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_49_49;
#line 255 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 0));
#line 255 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 255 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 255 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 3)));
#line 255 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 255 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 255 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 7)));
#line 256 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18;
#line 256 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19;
#line 256 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_20_20;
#line 256 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_21_21;
#line 256 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22;
#line 256 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23;
#line 256 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_24_24;

#line 256 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 1)));
#line 256 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 256 "declarative_tree.m"
          {
#line 256 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 0));
#line 256 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 256 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 256 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 3)));
#line 256 "declarative_tree.m"
            mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 256 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 256 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 256 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 7)));
#line 256 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_14 == mdb__declarative_tree__V_49_49);
#line 256 "declarative_tree.m"
          }
#line 255 "declarative_tree.m"
      }
#line 257 "declarative_tree.m"
    else
#line 257 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node1_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 261 "declarative_tree.m"
      {
#line 261 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Event_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 261 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_51_51;
#line 261 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 261 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 261 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 3));
#line 261 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 261 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_39_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 261 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 7)));
#line 262 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_41_41;
#line 262 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_42_42;
#line 262 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43;
#line 262 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_44_44;
#line 262 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_45_45;
#line 262 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_46_46;

#line 262 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 262 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 262 "declarative_tree.m"
          {
#line 262 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 262 "declarative_tree.m"
            mdb__declarative_tree__V_42_42 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 262 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 3));
#line 262 "declarative_tree.m"
            mdb__declarative_tree__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 262 "declarative_tree.m"
            mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 262 "declarative_tree.m"
            mdb__declarative_tree__V_45_45 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 262 "declarative_tree.m"
            mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 7)));
#line 262 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_48 == mdb__declarative_tree__V_51_51);
#line 262 "declarative_tree.m"
          }
#line 261 "declarative_tree.m"
      }
#line 257 "declarative_tree.m"
    else
#line 258 "declarative_tree.m"
      {
#line 258 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Event_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 258 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_50_50;
#line 258 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 258 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 258 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 3));
#line 258 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 258 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 259 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_30_30;
#line 259 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_31_31;
#line 259 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_32_32;
#line 259 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_33_33;
#line 259 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_34_34;

#line 259 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 259 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 259 "declarative_tree.m"
          {
#line 259 "declarative_tree.m"
            mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 259 "declarative_tree.m"
            mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 259 "declarative_tree.m"
            mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 3));
#line 259 "declarative_tree.m"
            mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 259 "declarative_tree.m"
            mdb__declarative_tree__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 259 "declarative_tree.m"
            mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 259 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_47 == mdb__declarative_tree__V_50_50);
#line 259 "declarative_tree.m"
          }
#line 258 "declarative_tree.m"
      }
#line 251 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 251 "declarative_tree.m"
  }
#line 90 "declarative_tree.m"
}

#line 89 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 89 "declarative_tree.m"
{
#line 308 "declarative_tree.m"
  {
#line 308 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 308 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 308 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 308 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_6;
#line 1887 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_12;
#line 1877 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_10;
#line 7121 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7123 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_10;
#line 476 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_36;
#line 476 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_38_38;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_39_39;
#line 478 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_40_40;
#line 478 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_41_41;
#line 478 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_42_42;
#line 478 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_43_43;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_44_44;
#line 478 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_45_45;
#line 478 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_46_46;

#line 7148 "mdb.declarative_tree.c"
    {
#line 7150 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_10);
    }
#line 7153 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 7155 "mdb.declarative_tree.c"
      {
#line 7157 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_10 = ((MR_Word) mdb__declarative_tree__conv1_Node0_10);
#line 7159 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 7161 "mdb.declarative_tree.c"
      }
#line 1877 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1880 "declarative_tree.m"
      {
#line 1880 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node0_10)) == (MR_mktag((MR_Integer) 1))))
#line 1879 "declarative_tree.m"
          {
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 0));
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_13_13;
#line 1879 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_14_14;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_15_15;
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_16_16;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_17_17;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_18_18;

#line 1879 "declarative_tree.m"
            mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 3)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 7)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1879 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1883 "declarative_tree.m"
          {
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_25_25;
#line 1883 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_26_26;
#line 1883 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_27_27;
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_28_28;
#line 1883 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_29_29;

#line 1883 "declarative_tree.m"
            mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 3));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 7)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1883 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1881 "declarative_tree.m"
          {
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_20_20;
#line 1881 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_21_21;
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_22_22;
#line 1881 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_23_23;

#line 1881 "declarative_tree.m"
            mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 3));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1881 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1880 "declarative_tree.m"
      }
#line 1887 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1886 "declarative_tree.m"
      mdb__declarative_tree__CallId_6 = mdb__declarative_tree__CallId0_12;
#line 1887 "declarative_tree.m"
    else
#line 1888 "declarative_tree.m"
      {
#line 1888 "declarative_tree.m"
        {
#line 1888 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1888 "declarative_tree.m"
      }
#line 477 "declarative_tree.m"
    {
#line 477 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_6, &mdb__declarative_tree__CallNode_36);
    }
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 0));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 1));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 2)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 3)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 4)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 5)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 6)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_44_44 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 7)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 8)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 9)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "declarative_tree.m"
    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 308 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 308 "declarative_tree.m"
  }
#line 89 "declarative_tree.m"
}

#line 88 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 88 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5)
#line 88 "declarative_tree.m"
{
#line 802 "declarative_tree.m"
  {
#line 802 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 802 "declarative_tree.m"
    {
#line 802 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, mdb__declarative_tree__HeadVar__3_3, mdb__declarative_tree__HeadVar__5_5);
#line 802 "declarative_tree.m"
      return;
    }
#line 802 "declarative_tree.m"
  }
#line 88 "declarative_tree.m"
}

#line 909 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
#line 909 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 909 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 909 "declarative_tree.m"
{
#line 909 "declarative_tree.m"
  {
#line 909 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 909 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 909 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 909 "declarative_tree.m"
    {
#line 909 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 909 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 909 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 909 "declarative_tree.m"
  }
#line 909 "declarative_tree.m"
}

#line 87 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 87 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5,
#line 87 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__6_6)
#line 87 "declarative_tree.m"
{
#line 818 "declarative_tree.m"
  {
#line 818 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 818 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_12 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 818 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_13 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 818 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ChainStart_14;

#line 819 "declarative_tree.m"
    {
#line 819 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__Ref_13, mdb__declarative_tree__HeadVar__3_3, &mdb__declarative_tree__ChainStart_14);
    }
#line 839 "declarative_tree.m"
    if ((mdb__declarative_tree__ChainStart_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "declarative_tree.m"
      {
#line 841 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 843 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 840 "declarative_tree.m"
      }
#line 839 "declarative_tree.m"
    else
#line 822 "declarative_tree.m"
      {
#line 822 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartLoc_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 0)));
#line 822 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__ArgNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 1)));
#line 822 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__TotalArgs_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 2)));
#line 822 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NodeId_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 3));
#line 822 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartPath_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 4)));
#line 822 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeProcDefnRep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 5)));
#line 7454 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_24_24;

#line 7457 "mdb.declarative_tree.c"
        {
#line 7459 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_24_24);
        }
#line 1810 "declarative_tree.m"
        if ((mdb__declarative_tree__StartLoc_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1810 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 1810 "declarative_tree.m"
        else
#line 1811 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 0;
#line 827 "declarative_tree.m"
        if ((mdb__declarative_tree__MaybeProcDefnRep_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 827 "declarative_tree.m"
        else
#line 828 "declarative_tree.m"
          {
#line 828 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ProcDefnRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeProcDefnRep_20, (MR_Integer) 0)));
#line 834 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Origin0_22;

#line 830 "declarative_tree.m"
            {
#line 830 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_tree__trace_dependency_special_case_8_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__Ref_13, mdb__declarative_tree__StartLoc_15, mdb__declarative_tree__ArgNum_16, mdb__declarative_tree__HeadVar__4_4, mdb__declarative_tree__NodeId_18, &mdb__declarative_tree__Origin0_22);
            }
#line 834 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 833 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__6_6 = mdb__declarative_tree__Origin0_22;
#line 834 "declarative_tree.m"
            else
#line 899 "declarative_tree.m"
              {
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Node_36;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Contour0_37;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Contour_40;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__HeadVars_41;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__GoalRep_42;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__AllTraced_43;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__MaybePrims_44;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_54_54;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_55_55;
#line 899 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_56_56;
#line 909 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_61_61;
#line 909 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_62_62;
#line 909 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_63_63;
#line 909 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_64_64;
#line 910 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_65_65;
#line 910 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_66_66;
#line 910 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_67_67;
#line 910 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_68_68;

#line 900 "declarative_tree.m"
                {
#line 900 "declarative_tree.m"
                  mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__NodeId_18, &mdb__declarative_tree__Node_36);
                }
#line 901 "declarative_tree.m"
                {
#line 901 "declarative_tree.m"
                  mdb__declarative_tree__materialize_contour_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__NodeId_18, mdb__declarative_tree__Node_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Contour0_37);
                }
#line 905 "declarative_tree.m"
                if ((mdb__declarative_tree__StartLoc_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 907 "declarative_tree.m"
                  mdb__declarative_tree__Contour_40 = mdb__declarative_tree__Contour0_37;
#line 905 "declarative_tree.m"
                else
#line 903 "declarative_tree.m"
                  {
#line 903 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_54_70;
#line 903 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_55_71;
#line 903 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_57_73;
#line 903 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_59_75;
#line 903 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CallId_38 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, (MR_Integer) 0));
#line 903 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CallNode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, (MR_Integer) 1)));
#line 903 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_50_50;
#line 903 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_51_51;

#line 7568 "mdb.declarative_tree.c"
                    {
#line 7570 "mdb.declarative_tree.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_54_70);
                    }
#line 7573 "mdb.declarative_tree.c"
                    {
#line 7575 "mdb.declarative_tree.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_55_71);
                    }
#line 7578 "mdb.declarative_tree.c"
                    {
#line 7580 "mdb.declarative_tree.c"
                      mdb__declarative_tree__TypeInfo_57_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7582 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_57_73, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 7584 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_57_73, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_55_71));
#line 7586 "mdb.declarative_tree.c"
                    }
#line 7588 "mdb.declarative_tree.c"
                    {
#line 7590 "mdb.declarative_tree.c"
                      mdb__declarative_tree__TypeInfo_59_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7592 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7594 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_54_70));
#line 7596 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_57_73));
#line 7598 "mdb.declarative_tree.c"
                    }
#line 904 "declarative_tree.m"
                    {
#line 904 "declarative_tree.m"
                      mdb__declarative_tree__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_51_51, 0) = mdb__declarative_tree__CallId_38;
#line 904 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_51_51, 1) = ((MR_Box) (mdb__declarative_tree__CallNode_39));
#line 904 "declarative_tree.m"
                    }
#line 904 "declarative_tree.m"
                    {
#line 904 "declarative_tree.m"
                      mdb__declarative_tree__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_50_50, 0) = ((MR_Box) (mdb__declarative_tree__V_51_51));
#line 904 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "declarative_tree.m"
                    }
#line 904 "declarative_tree.m"
                    {
#line 904 "declarative_tree.m"
                      mdb__declarative_tree__Contour_40 = mercury__list__append_2_f_0(mdb__declarative_tree__TypeInfo_59_75, mdb__declarative_tree__Contour0_37, mdb__declarative_tree__V_50_50);
                    }
#line 903 "declarative_tree.m"
                  }
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 0)));
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 1)));
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 2)));
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 3)));
#line 909 "declarative_tree.m"
                mdb__declarative_tree__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 4)));
#line 909 "declarative_tree.m"
                {
#line 909 "declarative_tree.m"
                  mdb__declarative_tree__HeadVars_41 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[2], mdb__declarative_tree__V_54_54);
                }
#line 910 "declarative_tree.m"
                mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 0)));
#line 910 "declarative_tree.m"
                mdb__declarative_tree__GoalRep_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 1)));
#line 910 "declarative_tree.m"
                mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 2)));
#line 910 "declarative_tree.m"
                mdb__declarative_tree__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 3)));
#line 910 "declarative_tree.m"
                mdb__declarative_tree__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 4)));
#line 1798 "declarative_tree.m"
{
#define MR_PROC_LABEL mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0

	MR_Word TracingOn;

		{
#line 1798 "declarative_tree.m"

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif

#line 7667 "mdb.declarative_tree.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_tree__AllTraced_43  = TracingOn;
#line 1798 "declarative_tree.m"
}
#line 913 "declarative_tree.m"
                {
#line 913 "declarative_tree.m"
                  mdb__declarative_tree__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_56_56, 0) = ((MR_Box) (mdb__declarative_tree__GoalRep_42));
#line 913 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "declarative_tree.m"
                }
#line 913 "declarative_tree.m"
                {
#line 913 "declarative_tree.m"
                  mdb__declarative_tree__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_55_55, 0) = ((MR_Box) (mdb__declarative_tree__V_56_56));
#line 913 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "declarative_tree.m"
                }
#line 912 "declarative_tree.m"
                {
#line 912 "declarative_tree.m"
                  mdb__declarative_tree__MaybePrims_44 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__V_55_55, mdb__declarative_tree__Contour_40, mdb__declarative_tree__StartPath_19, mdb__declarative_tree__ArgNum_16, mdb__declarative_tree__TotalArgs_17, mdb__declarative_tree__HeadVars_41, mdb__declarative_tree__AllTraced_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 935 "declarative_tree.m"
                if ((mdb__declarative_tree__MaybePrims_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 937 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 935 "declarative_tree.m"
                else
#line 917 "declarative_tree.m"
                  {
#line 917 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Primitives_45;
#line 917 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_46;
#line 917 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__MaybeClosure_47;
#line 917 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__AdjustedTermPath_48;
#line 917 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_44, (MR_Integer) 0)));

#line 916 "declarative_tree.m"
                    mdb__declarative_tree__Primitives_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 0)));
#line 916 "declarative_tree.m"
                    mdb__declarative_tree__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 1)));
#line 916 "declarative_tree.m"
                    mdb__declarative_tree__MaybeClosure_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 2)));
#line 929 "declarative_tree.m"
                    if ((mdb__declarative_tree__MaybeClosure_47 == (MR_Integer) 0))
#line 931 "declarative_tree.m"
                      mdb__declarative_tree__AdjustedTermPath_48 = mdb__declarative_tree__HeadVar__4_4;
#line 929 "declarative_tree.m"
                    else
#line 928 "declarative_tree.m"
                      {
#line 928 "declarative_tree.m"
                        mdb__declarative_tree__AdjustedTermPath_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedTermPath_48, 0) = ((MR_Box) (mdb__declarative_tree__ArgNum_16));
#line 928 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedTermPath_48, 1) = ((MR_Box) (mdb__declarative_tree__HeadVar__4_4));
#line 928 "declarative_tree.m"
                      }
#line 933 "declarative_tree.m"
                    {
#line 933 "declarative_tree.m"
                      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(mdb__declarative_tree__Primitives_45, mdb__declarative_tree__Var_46, mdb__declarative_tree__AdjustedTermPath_48, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__HeadVar__6_6);
#line 933 "declarative_tree.m"
                      return;
                    }
#line 917 "declarative_tree.m"
                  }
#line 899 "declarative_tree.m"
              }
#line 828 "declarative_tree.m"
          }
#line 822 "declarative_tree.m"
      }
#line 818 "declarative_tree.m"
  }
#line 87 "declarative_tree.m"
}

#line 86 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3)
#line 86 "declarative_tree.m"
{
#line 234 "declarative_tree.m"
  {
#line 234 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 234 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 234 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 234 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Parent_7;
#line 234 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;
#line 234 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_10;
#line 234 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_28;
#line 234 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallPrecId_29;
#line 234 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ParentCallNode_30;
#line 244 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_31_31;
#line 244 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_32_32;
#line 244 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 244 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;
#line 244 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_35_35;
#line 244 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_36_36;
#line 244 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_37_37;
#line 244 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_38_38;
#line 244 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 246 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_40_40;
#line 246 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_41_41;
#line 246 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_42_42;
#line 246 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_43_43;
#line 246 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_44_44;
#line 246 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_45_45;
#line 246 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_46_46;
#line 246 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_47_47;
#line 246 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_48_48;

#line 235 "declarative_tree.m"
    {
#line 235 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref_6, &mdb__declarative_tree__Node_8);
    }
#line 238 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 239 "declarative_tree.m"
      {
#line 239 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 239 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16;
#line 239 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17;
#line 239 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18;
#line 239 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19;
#line 239 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20;
#line 239 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_21_21;

#line 239 "declarative_tree.m"
        mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 239 "declarative_tree.m"
        mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 239 "declarative_tree.m"
        mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 239 "declarative_tree.m"
        mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 239 "declarative_tree.m"
        mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 239 "declarative_tree.m"
        mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 239 "declarative_tree.m"
        mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 239 "declarative_tree.m"
      }
#line 238 "declarative_tree.m"
    else
#line 238 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 241 "declarative_tree.m"
      {
#line 241 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 241 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_23_23;
#line 241 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_24_24;
#line 241 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_25_25;
#line 241 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_26_26;
#line 241 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_27_27;

#line 241 "declarative_tree.m"
        mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 241 "declarative_tree.m"
        mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 241 "declarative_tree.m"
        mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 241 "declarative_tree.m"
        mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 241 "declarative_tree.m"
        mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 241 "declarative_tree.m"
        mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 241 "declarative_tree.m"
      }
#line 238 "declarative_tree.m"
    else
#line 237 "declarative_tree.m"
      {
#line 237 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 237 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11;
#line 237 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12;
#line 237 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_13_13;
#line 237 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14;

#line 237 "declarative_tree.m"
        mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 237 "declarative_tree.m"
        mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 237 "declarative_tree.m"
        mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 237 "declarative_tree.m"
        mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 237 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 237 "declarative_tree.m"
      }
#line 243 "declarative_tree.m"
    {
#line 243 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__Call_28);
    }
#line 244 "declarative_tree.m"
    mdb__declarative_tree__CallPrecId_29 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 0));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 1));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 2)));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 3)));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 4)));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 5)));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 6)));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 7)));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 8)));
#line 244 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 9)));
#line 245 "declarative_tree.m"
    {
#line 245 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallPrecId_29, &mdb__declarative_tree__ParentCallNode_30);
    }
#line 234 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 234 "declarative_tree.m"
      {
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_40_40 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 0));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__Parent_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 1));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 2)));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 3)));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 4)));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 5)));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 6)));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_46_46 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 7)));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 8)));
#line 246 "declarative_tree.m"
        mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 9)));
#line 234 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__3_3 = ((MR_Word) mdb__declarative_tree__Parent_7);
#line 234 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 234 "declarative_tree.m"
      }
#line 234 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 234 "declarative_tree.m"
  }
#line 86 "declarative_tree.m"
}

#line 85 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(
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
#line 284 "declarative_tree.m"
  {
#line 284 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 284 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 284 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 284 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 285 "declarative_tree.m"
    {
#line 285 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 290 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 291 "declarative_tree.m"
      {
#line 291 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_38_38;
#line 291 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_21;
#line 291 "declarative_tree.m"
        MR_Box mdb__declarative_tree__PrecId_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 291 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_34 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 291 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_62;
#line 291 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_63_63;
#line 291 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 291 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 291 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 291 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 291 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 291 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 478 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_64_64;
#line 478 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_65_65;
#line 478 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_66_66;
#line 478 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_67_67;
#line 478 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_68_68;
#line 478 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_69_69;
#line 478 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_70_70;
#line 478 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_71_71;
#line 478 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_72_72;

#line 8073 "mdb.declarative_tree.c"
        {
#line 8075 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_38_38);
        }
#line 292 "declarative_tree.m"
        {
#line 292 "declarative_tree.m"
          mdb__declarative_tree__Atom_21 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_38_38, mdb__declarative_tree__Node_8);
        }
#line 477 "declarative_tree.m"
        {
#line 477 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_34, &mdb__declarative_tree__CallNode_62);
        }
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 0));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 1));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 2)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 3)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 4)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 5)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 6)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 7)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 8)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 9)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 291 "declarative_tree.m"
          {
#line 294 "declarative_tree.m"
            {
#line 294 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_tree__missing_answer_special_case_1_p_0(mdb__declarative_tree__Atom_21);
            }
#line 296 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 295 "declarative_tree.m"
              {
#line 295 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "declarative_tree.m"
                MR_Word mdb__declarative_tree__TypeInfo_13_79;

#line 8128 "mdb.declarative_tree.c"
                {
#line 8130 "mdb.declarative_tree.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_13_79);
                }
#line 639 "declarative_tree.m"
                {
#line 639 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_79, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34);
                }
#line 641 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 640 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_29_29;
#line 641 "declarative_tree.m"
                else
#line 642 "declarative_tree.m"
                  {
#line 642 "declarative_tree.m"
                    mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34, mdb__declarative_tree__V_29_29, mdb__declarative_tree__HeadVar__3_3);
                  }
#line 295 "declarative_tree.m"
              }
#line 296 "declarative_tree.m"
            else
#line 297 "declarative_tree.m"
              {
#line 297 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 507 "declarative_tree.m"
                MR_Word mdb__declarative_tree__TypeInfo_15_87;

#line 8160 "mdb.declarative_tree.c"
                {
#line 8162 "mdb.declarative_tree.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_15_87);
                }
#line 507 "declarative_tree.m"
                {
#line 507 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_87, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34);
                }
#line 509 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 508 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_31_31;
#line 509 "declarative_tree.m"
                else
#line 510 "declarative_tree.m"
                  {
#line 510 "declarative_tree.m"
                    mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34, mdb__declarative_tree__V_31_31, mdb__declarative_tree__HeadVar__3_3);
                  }
#line 297 "declarative_tree.m"
              }
#line 296 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 291 "declarative_tree.m"
          }
#line 291 "declarative_tree.m"
      }
#line 290 "declarative_tree.m"
    else
#line 290 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 300 "declarative_tree.m"
      {
#line 300 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_27_27;
#line 300 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_28_28;
#line 300 "declarative_tree.m"
        MR_Box mdb__declarative_tree__PrecId_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 300 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 300 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_41;
#line 300 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_42_42;
#line 300 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 300 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 300 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 300 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 300 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 478 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43;
#line 478 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_44_44;
#line 478 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_45_45;
#line 478 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_46_46;
#line 478 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_47_47;
#line 478 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_48_48;
#line 478 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_49_49;
#line 478 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_50_50;
#line 478 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_51_51;
#line 507 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_15_59;
#line 507 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__TypeInfoIndex_58;

#line 477 "declarative_tree.m"
        {
#line 477 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_41);
        }
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 0));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 1));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 2)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 3)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 4)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 5)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 6)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 7)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 8)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 9)));
#line 478 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 300 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 300 "declarative_tree.m"
          {
#line 302 "declarative_tree.m"
            mdb__declarative_tree__V_27_27 = (MR_Integer) 1;
#line 302 "declarative_tree.m"
            mdb__declarative_tree__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8275 "mdb.declarative_tree.c"
            mdb__declarative_tree__TypeInfoIndex_58 = (MR_Integer) 2;
#line 8277 "mdb.declarative_tree.c"
            {
#line 8279 "mdb.declarative_tree.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__TypeInfoIndex_58, &mdb__declarative_tree__TypeInfo_15_59);
            }
#line 507 "declarative_tree.m"
            {
#line 507 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_59, mdb__declarative_tree__PrecId_35, mdb__declarative_tree__CallId_36);
            }
#line 509 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 508 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_28_28;
#line 509 "declarative_tree.m"
            else
#line 510 "declarative_tree.m"
              {
#line 510 "declarative_tree.m"
                mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__V_27_27, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_35, mdb__declarative_tree__CallId_36, mdb__declarative_tree__V_28_28, mdb__declarative_tree__HeadVar__3_3);
              }
#line 509 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 300 "declarative_tree.m"
          }
#line 300 "declarative_tree.m"
      }
#line 290 "declarative_tree.m"
    else
#line 287 "declarative_tree.m"
      {
#line 287 "declarative_tree.m"
        MR_Box mdb__declarative_tree__PrecId_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 287 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 287 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_32_32;
#line 287 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 287 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 287 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 287 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 639 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_13_94;
#line 639 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__TypeInfoIndex_93;

#line 288 "declarative_tree.m"
        {
#line 288 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10);
        }
#line 287 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 287 "declarative_tree.m"
          {
#line 289 "declarative_tree.m"
            mdb__declarative_tree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8338 "mdb.declarative_tree.c"
            mdb__declarative_tree__TypeInfoIndex_93 = (MR_Integer) 2;
#line 8340 "mdb.declarative_tree.c"
            {
#line 8342 "mdb.declarative_tree.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__TypeInfoIndex_93, &mdb__declarative_tree__TypeInfo_13_94);
            }
#line 639 "declarative_tree.m"
            {
#line 639 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_94, mdb__declarative_tree__PrecId_9, mdb__declarative_tree__CallId_10);
            }
#line 641 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 640 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_32_32;
#line 641 "declarative_tree.m"
            else
#line 642 "declarative_tree.m"
              {
#line 642 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_9, mdb__declarative_tree__CallId_10, mdb__declarative_tree__V_32_32, mdb__declarative_tree__HeadVar__3_3);
              }
#line 641 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 287 "declarative_tree.m"
          }
#line 287 "declarative_tree.m"
      }
#line 284 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 284 "declarative_tree.m"
  }
#line 85 "declarative_tree.m"
}

#line 84 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 84 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 84 "declarative_tree.m"
{
#line 216 "declarative_tree.m"
  {
#line 216 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 216 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 216 "declarative_tree.m"
    MR_Box mdb__declarative_tree__BugRef_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 216 "declarative_tree.m"
    MR_Box mdb__declarative_tree__InadmissibleRef_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 216 "declarative_tree.m"
    MR_Word mdb__declarative_tree__BugAtom_9;
#line 216 "declarative_tree.m"
    MR_Word mdb__declarative_tree__InadmissibleAtom_10;
#line 216 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Event_11;
#line 216 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_16;
#line 216 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_62;

#line 216 "declarative_tree.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 129 "declarative_tree.m"
    {
#line 129 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__BugRef_7, &mdb__declarative_tree__Node_16);
    }
#line 133 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_16)) == (MR_mktag((MR_Integer) 1))))
#line 131 "declarative_tree.m"
      {
#line 131 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_51;
#line 131 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 131 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_48;
#line 131 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_49;
#line 131 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 0));
#line 131 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 131 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 3)));
#line 131 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 131 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 131 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 6)));
#line 131 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 7)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_18, &mdb__declarative_tree__CallNode_48);
        }
#line 8449 "mdb.declarative_tree.c"
        {
#line 8451 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_51);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_49 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_51, mdb__declarative_tree__CallNode_48);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_49;
#line 131 "declarative_tree.m"
      }
#line 133 "declarative_tree.m"
    else
#line 133 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 137 "declarative_tree.m"
      {
#line 137 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_44;
#line 137 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 137 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_41;
#line 137 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_42;
#line 137 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 137 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 3));
#line 137 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 137 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 137 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 6)));
#line 137 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 7)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_37, &mdb__declarative_tree__CallNode_41);
        }
#line 8495 "mdb.declarative_tree.c"
        {
#line 8497 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_44);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_42 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_44, mdb__declarative_tree__CallNode_41);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_42;
#line 137 "declarative_tree.m"
      }
#line 133 "declarative_tree.m"
    else
#line 134 "declarative_tree.m"
      {
#line 134 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_58;
#line 134 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 134 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_55;
#line 134 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_56;
#line 134 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 134 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 3));
#line 134 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 134 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 134 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 6)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_55);
        }
#line 8537 "mdb.declarative_tree.c"
        {
#line 8539 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_58);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_56 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_58, mdb__declarative_tree__CallNode_55);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_56;
#line 134 "declarative_tree.m"
      }
#line 218 "declarative_tree.m"
    {
#line 218 "declarative_tree.m"
      mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__InadmissibleRef_8, &mdb__declarative_tree__InadmissibleAtom_10);
    }
#line 145 "declarative_tree.m"
    {
#line 145 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__BugRef_7, &mdb__declarative_tree__Node_62);
    }
#line 148 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_62)) == (MR_mktag((MR_Integer) 1))))
#line 147 "declarative_tree.m"
      {
#line 147 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_63_63 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 0));
#line 147 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 147 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 147 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 3)));
#line 147 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_67_67;
#line 147 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_68_68;
#line 147 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_69_69;

#line 147 "declarative_tree.m"
        mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 147 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 147 "declarative_tree.m"
        mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 147 "declarative_tree.m"
        mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 7)));
#line 147 "declarative_tree.m"
      }
#line 148 "declarative_tree.m"
    else
#line 148 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_62)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 151 "declarative_tree.m"
      {
#line 151 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_75_75 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 151 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 151 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_77_77 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 3));
#line 151 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 151 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_79_79;
#line 151 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_80_80;

#line 151 "declarative_tree.m"
        mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 151 "declarative_tree.m"
        mdb__declarative_tree__V_79_79 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 151 "declarative_tree.m"
        mdb__declarative_tree__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 7)));
#line 151 "declarative_tree.m"
      }
#line 148 "declarative_tree.m"
    else
#line 149 "declarative_tree.m"
      {
#line 149 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_70_70 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 149 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_71_71 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 149 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 3));
#line 149 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_73_73;
#line 149 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_74_74;

#line 149 "declarative_tree.m"
        mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 149 "declarative_tree.m"
        mdb__declarative_tree__V_73_73 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 149 "declarative_tree.m"
        mdb__declarative_tree__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 149 "declarative_tree.m"
      }
#line 216 "declarative_tree.m"
    {
#line 216 "declarative_tree.m"
      MR_Word base;
#line 216 "declarative_tree.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 216 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__4_4 = base;
#line 216 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__BugAtom_9));
#line 216 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 1) = NULL;
#line 216 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__InadmissibleAtom_10));
#line 216 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_tree__Event_11));
#line 216 "declarative_tree.m"
    }
#line 216 "declarative_tree.m"
  }
#line 84 "declarative_tree.m"
}

#line 83 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 83 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 83 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3)
#line 83 "declarative_tree.m"
{
#line 194 "declarative_tree.m"
  {
#line 194 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 194 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 194 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 194 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 195 "declarative_tree.m"
    {
#line 195 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 202 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 197 "declarative_tree.m"
      {
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_48;
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_40_84;
#line 197 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 197 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Event_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__InitDeclAtom_17;
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__FinalDeclAtom_18;
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Contour_19;
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_45;
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_46;
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ExitAtom_52;
#line 197 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_53;
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Call_54;
#line 197 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CallIoSeq_55;
#line 197 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__ExitIoSeq_56;
#line 197 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 197 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 197 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 197 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 197 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 197 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_60_60;
#line 107 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_61_61;
#line 107 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_62_62;
#line 107 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_63_63;
#line 107 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_64_64;
#line 107 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_65_65;
#line 107 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_66_66;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_67_67;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_68_68;
#line 109 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_69_69;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_70_70;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_71_71;
#line 109 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_72_72;
#line 109 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_73_73;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_74_74;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_75_75;
#line 110 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_76_76;
#line 110 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_77_77;
#line 110 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_78_78;
#line 110 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_79_79;
#line 110 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_80_80;
#line 110 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_81_81;
#line 110 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_82_82;

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__CallNode_45);
        }
#line 8788 "mdb.declarative_tree.c"
        {
#line 8790 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_48);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_48, mdb__declarative_tree__CallNode_45);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__InitDeclAtom_17 = (MR_Word) mdb__declarative_tree__CallAtom_46;
#line 8800 "mdb.declarative_tree.c"
        {
#line 8802 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_84);
        }
#line 106 "declarative_tree.m"
        {
#line 106 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_52 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_84, mdb__declarative_tree__Node_8);
        }
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__CallId_53 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_64_64 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 108 "declarative_tree.m"
        {
#line 108 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_53, &mdb__declarative_tree__Call_54);
        }
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 0));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_68_68 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 1));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 2)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 3)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 4)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 5)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 6)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_74_74 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 7)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__CallIoSeq_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 8)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 9)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_77_77 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_78_78 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__ExitIoSeq_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 111 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_55 == mdb__declarative_tree__ExitIoSeq_56);
#line 113 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 112 "declarative_tree.m"
          {
#line 112 "declarative_tree.m"
            {
#line 112 "declarative_tree.m"
              mdb__declarative_tree__FinalDeclAtom_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_52));
#line 112 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "declarative_tree.m"
            }
#line 112 "declarative_tree.m"
          }
#line 113 "declarative_tree.m"
        else
#line 114 "declarative_tree.m"
          {
#line 114 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_58_58;
#line 114 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_59_59;

#line 115 "declarative_tree.m"
            {
#line 115 "declarative_tree.m"
              mdb__declarative_tree__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_59_59, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_55));
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_59_59, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_56));
#line 115 "declarative_tree.m"
            }
#line 115 "declarative_tree.m"
            {
#line 115 "declarative_tree.m"
              mdb__declarative_tree__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_58_58, 0) = ((MR_Box) (mdb__declarative_tree__V_59_59));
#line 115 "declarative_tree.m"
            }
#line 114 "declarative_tree.m"
            {
#line 114 "declarative_tree.m"
              mdb__declarative_tree__FinalDeclAtom_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_52));
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 1) = ((MR_Box) (mdb__declarative_tree__V_58_58));
#line 114 "declarative_tree.m"
            }
#line 114 "declarative_tree.m"
          }
#line 200 "declarative_tree.m"
        {
#line 200 "declarative_tree.m"
          mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_8, &mdb__declarative_tree__Contour_19);
        }
#line 201 "declarative_tree.m"
        {
#line 201 "declarative_tree.m"
          MR_Word base;
#line 201 "declarative_tree.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__3_3 = base;
#line 201 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__InitDeclAtom_17));
#line 201 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__FinalDeclAtom_18));
#line 201 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__Contour_19));
#line 201 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_tree__Event_13));
#line 201 "declarative_tree.m"
        }
#line 197 "declarative_tree.m"
      }
#line 202 "declarative_tree.m"
    else
#line 202 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 207 "declarative_tree.m"
      {
#line 207 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_41;
#line 207 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Exception_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 207 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 207 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Event_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 207 "declarative_tree.m"
        MR_Word mdb__declarative_tree__DeclAtom_34;
#line 207 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_38;
#line 207 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_39;
#line 207 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 207 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 207 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 207 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_32, &mdb__declarative_tree__CallNode_38);
        }
#line 8983 "mdb.declarative_tree.c"
        {
#line 8985 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_41);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_39 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_41, mdb__declarative_tree__CallNode_38);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__DeclAtom_34 = (MR_Word) mdb__declarative_tree__CallAtom_39;
#line 209 "declarative_tree.m"
        {
#line 209 "declarative_tree.m"
          MR_Word base;
#line 209 "declarative_tree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 209 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__3_3 = base;
#line 209 "declarative_tree.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_34));
#line 209 "declarative_tree.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__Exception_27));
#line 209 "declarative_tree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_tree__Event_33));
#line 209 "declarative_tree.m"
        }
#line 207 "declarative_tree.m"
      }
#line 202 "declarative_tree.m"
    else
#line 203 "declarative_tree.m"
      {
#line 203 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_91;
#line 203 "declarative_tree.m"
        MR_Word mdb__declarative_tree__DeclAtom_24;
#line 203 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 203 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Event_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 203 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_88;
#line 203 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_89;
#line 203 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 203 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 203 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 203 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_30, &mdb__declarative_tree__CallNode_88);
        }
#line 9043 "mdb.declarative_tree.c"
        {
#line 9045 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_91);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_89 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_91, mdb__declarative_tree__CallNode_88);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__DeclAtom_24 = (MR_Word) mdb__declarative_tree__CallAtom_89;
#line 205 "declarative_tree.m"
        {
#line 205 "declarative_tree.m"
          MR_Word base;
#line 205 "declarative_tree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__3_3 = base;
#line 205 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_24));
#line 205 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__Event_31));
#line 205 "declarative_tree.m"
        }
#line 203 "declarative_tree.m"
      }
#line 194 "declarative_tree.m"
  }
#line 83 "declarative_tree.m"
}

#line 82 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(
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
#line 159 "declarative_tree.m"
  {
#line 159 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 159 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 159 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 159 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 160 "declarative_tree.m"
    {
#line 160 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 166 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 1))))
#line 167 "declarative_tree.m"
      {
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_52;
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_40_88;
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__InitDeclAtom_24;
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__FinalDeclAtom_25;
#line 167 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_49;
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_50;
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ExitAtom_56;
#line 167 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_57;
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Call_58;
#line 167 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CallIoSeq_59;
#line 167 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__ExitIoSeq_60;
#line 167 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 167 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 167 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 167 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 167 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 167 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 167 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_64_64;
#line 107 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_65_65;
#line 107 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_66_66;
#line 107 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_67_67;
#line 107 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_68_68;
#line 107 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_69_69;
#line 107 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_70_70;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_71_71;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_72_72;
#line 109 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_73_73;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_74_74;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_75_75;
#line 109 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_76_76;
#line 109 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_77_77;
#line 109 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_78_78;
#line 109 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_79_79;
#line 110 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_80_80;
#line 110 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_81_81;
#line 110 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_82_82;
#line 110 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_83_83;
#line 110 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_84_84;
#line 110 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_85_85;
#line 110 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_86_86;

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_49);
        }
#line 9199 "mdb.declarative_tree.c"
        {
#line 9201 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_52);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_50 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_52, mdb__declarative_tree__CallNode_49);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__InitDeclAtom_24 = (MR_Word) mdb__declarative_tree__CallAtom_50;
#line 9211 "mdb.declarative_tree.c"
        {
#line 9213 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_88);
        }
#line 106 "declarative_tree.m"
        {
#line 106 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_56 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_88, mdb__declarative_tree__Node_8);
        }
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__CallId_57 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_68_68 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 108 "declarative_tree.m"
        {
#line 108 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_57, &mdb__declarative_tree__Call_58);
        }
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_71_71 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 0));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 1));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 2)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 3)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 4)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 5)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 6)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 7)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__CallIoSeq_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 8)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 9)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_80_80 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_81_81 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_82_82 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_85_85 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__ExitIoSeq_60 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 111 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_59 == mdb__declarative_tree__ExitIoSeq_60);
#line 113 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 112 "declarative_tree.m"
          {
#line 112 "declarative_tree.m"
            {
#line 112 "declarative_tree.m"
              mdb__declarative_tree__FinalDeclAtom_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_56));
#line 112 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "declarative_tree.m"
            }
#line 112 "declarative_tree.m"
          }
#line 113 "declarative_tree.m"
        else
#line 114 "declarative_tree.m"
          {
#line 114 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_62_62;
#line 114 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_63_63;

#line 115 "declarative_tree.m"
            {
#line 115 "declarative_tree.m"
              mdb__declarative_tree__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_63_63, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_59));
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_63_63, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_60));
#line 115 "declarative_tree.m"
            }
#line 115 "declarative_tree.m"
            {
#line 115 "declarative_tree.m"
              mdb__declarative_tree__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_62_62, 0) = ((MR_Box) (mdb__declarative_tree__V_63_63));
#line 115 "declarative_tree.m"
            }
#line 114 "declarative_tree.m"
            {
#line 114 "declarative_tree.m"
              mdb__declarative_tree__FinalDeclAtom_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_56));
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 1) = ((MR_Box) (mdb__declarative_tree__V_62_62));
#line 114 "declarative_tree.m"
            }
#line 114 "declarative_tree.m"
          }
#line 170 "declarative_tree.m"
        {
#line 170 "declarative_tree.m"
          MR_Word base;
#line 170 "declarative_tree.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 170 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__3_3 = base;
#line 170 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 170 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__InitDeclAtom_24));
#line 170 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__FinalDeclAtom_25));
#line 170 "declarative_tree.m"
        }
#line 167 "declarative_tree.m"
      }
#line 166 "declarative_tree.m"
    else
#line 166 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 172 "declarative_tree.m"
      {
#line 172 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_45;
#line 172 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Exception_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 172 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 172 "declarative_tree.m"
        MR_Word mdb__declarative_tree__DeclAtom_38;
#line 172 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_42;
#line 172 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_43;
#line 172 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 172 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 172 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 172 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 172 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_37, &mdb__declarative_tree__CallNode_42);
        }
#line 9387 "mdb.declarative_tree.c"
        {
#line 9389 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_45);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_43 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_45, mdb__declarative_tree__CallNode_42);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__DeclAtom_38 = (MR_Word) mdb__declarative_tree__CallAtom_43;
#line 174 "declarative_tree.m"
        {
#line 174 "declarative_tree.m"
          MR_Word base;
#line 174 "declarative_tree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 174 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__3_3 = base;
#line 174 "declarative_tree.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 174 "declarative_tree.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtom_38));
#line 174 "declarative_tree.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_tree__Exception_28));
#line 174 "declarative_tree.m"
        }
#line 172 "declarative_tree.m"
      }
#line 166 "declarative_tree.m"
    else
#line 162 "declarative_tree.m"
      {
#line 162 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_95;
#line 162 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 162 "declarative_tree.m"
        MR_Box mdb__declarative_tree__RedoId_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 162 "declarative_tree.m"
        MR_Word mdb__declarative_tree__DeclAtom_15;
#line 162 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Answers_16;
#line 162 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_92;
#line 162 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_93;
#line 162 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 162 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 162 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 162 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__CallNode_92);
        }
#line 9449 "mdb.declarative_tree.c"
        {
#line 9451 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_95);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_93 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_95, mdb__declarative_tree__CallNode_92);
        }
#line 123 "declarative_tree.m"
        mdb__declarative_tree__DeclAtom_15 = (MR_Word) mdb__declarative_tree__CallAtom_93;
#line 164 "declarative_tree.m"
        {
#line 164 "declarative_tree.m"
          mdb__declarative_tree__get_answers_4_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__RedoId_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Answers_16);
        }
#line 165 "declarative_tree.m"
        {
#line 165 "declarative_tree.m"
          MR_Word base;
#line 165 "declarative_tree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 165 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__3_3 = base;
#line 165 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 165 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtom_15));
#line 165 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__Answers_16));
#line 165 "declarative_tree.m"
        }
#line 162 "declarative_tree.m"
      }
#line 159 "declarative_tree.m"
  }
#line 82 "declarative_tree.m"
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
#line 9515 "mdb.declarative_tree.c"
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

#line 9575 "mdb.declarative_tree.c"
        {
#line 9577 "mdb.declarative_tree.c"
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

#line 779 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_15,
#line 779 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 779 "declarative_tree.m"
{
#line 779 "declarative_tree.m"
  {
#line 779 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 779 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_13 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 779 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_14 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 779 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_13 == mdb__declarative_tree__CastY_14);
#line 779 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9615 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 779 "declarative_tree.m"
    else
#line 779 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 779 "declarative_tree.m"
      else
#line 9627 "mdb.declarative_tree.c"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 1;
#line 779 "declarative_tree.m"
    else
#line 779 "declarative_tree.m"
      {
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 779 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));

#line 779 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9640 "mdb.declarative_tree.c"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 2;
#line 779 "declarative_tree.m"
        else
#line 779 "declarative_tree.m"
          {
#line 779 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0));
#line 779 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 779 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_12_12;

#line 779 "declarative_tree.m"
            {
#line 779 "declarative_tree.m"
              mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_15, &mdb__declarative_tree__V_12_12, mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_10_10);
            }
#line 9658 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_12_12 == (MR_Integer) 0);
#line 779 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 779 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_12_12;
#line 779 "declarative_tree.m"
            else
#line 779 "declarative_tree.m"
              {
#line 779 "declarative_tree.m"
                mdb__declarative_execution____Compare____trace_node_1_0(mdb__declarative_tree__TypeInfo_for_R_15, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_18_18, mdb__declarative_tree__V_11_11);
#line 779 "declarative_tree.m"
                return;
              }
#line 779 "declarative_tree.m"
          }
#line 779 "declarative_tree.m"
      }
#line 779 "declarative_tree.m"
  }
#line 779 "declarative_tree.m"
}

#line 779 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 779 "declarative_tree.m"
{
#line 779 "declarative_tree.m"
  {
#line 779 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 779 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 779 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 779 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 779 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 779 "declarative_tree.m"
    else
#line 779 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "declarative_tree.m"
      {
#line 779 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastX_3 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 779 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastY_4 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 779 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastY_4 == mdb__declarative_tree__CastX_3);
#line 779 "declarative_tree.m"
      }
#line 779 "declarative_tree.m"
    else
#line 779 "declarative_tree.m"
      {
#line 779 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 779 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_7_7;
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8;

#line 779 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 779 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
          {
#line 779 "declarative_tree.m"
            mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 779 "declarative_tree.m"
            mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 9748 "mdb.declarative_tree.c"
            {
#line 9750 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_11, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_7_7);
            }
#line 779 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 9755 "mdb.declarative_tree.c"
              {
#line 9757 "mdb.declarative_tree.c"
                return mdb__declarative_tree__succeeded = mdb__declarative_execution____Unify____trace_node_1_0(mdb__declarative_tree__TypeInfo_for_R_11, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_8_8);
              }
#line 779 "declarative_tree.m"
          }
#line 779 "declarative_tree.m"
      }
#line 779 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 779 "declarative_tree.m"
  }
#line 779 "declarative_tree.m"
}

#line 1121 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_14,
#line 1121 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 1121 "declarative_tree.m"
{
#line 1121 "declarative_tree.m"
  {
#line 1121 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1121 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_12 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 1121 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_13 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 1121 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_12 == mdb__declarative_tree__CastY_13);
#line 1121 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9797 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 1121 "declarative_tree.m"
    else
#line 1121 "declarative_tree.m"
      {
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1121 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 1121 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_16_16;

#line 9820 "mdb.declarative_tree.c"
        {
#line 9822 "mdb.declarative_tree.c"
          mdb__declarative_tree__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9824 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_16_16, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
#line 9826 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_16_16, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_for_R_14));
#line 9828 "mdb.declarative_tree.c"
        }
#line 1121 "declarative_tree.m"
        {
#line 1121 "declarative_tree.m"
          mercury__list____Compare____list_1_0(mdb__declarative_tree__TypeInfo_16_16, &mdb__declarative_tree__V_10_10, (MR_Word) mdb__declarative_tree__V_4_4, (MR_Word) mdb__declarative_tree__V_7_7);
        }
#line 9835 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_10_10 == (MR_Integer) 0);
#line 1121 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1121 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1121 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_10_10;
#line 1121 "declarative_tree.m"
        else
#line 1121 "declarative_tree.m"
          {
#line 1121 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_11_11;

#line 1121 "declarative_tree.m"
            {
#line 1121 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_11_11, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_8_8);
            }
#line 9855 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_11_11 == (MR_Integer) 0);
#line 1121 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1121 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1121 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_11_11;
#line 1121 "declarative_tree.m"
            else
#line 1121 "declarative_tree.m"
              {
#line 1121 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_21_21 = (MR_Integer) mdb__declarative_tree__V_6_6;
#line 1121 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_22_22 = (MR_Integer) mdb__declarative_tree__V_9_9;

#line 1121 "declarative_tree.m"
                {
#line 1121 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_21_21, mdb__declarative_tree__V_22_22);
#line 1121 "declarative_tree.m"
                  return;
                }
#line 1121 "declarative_tree.m"
              }
#line 1121 "declarative_tree.m"
          }
#line 1121 "declarative_tree.m"
      }
#line 1121 "declarative_tree.m"
  }
#line 1121 "declarative_tree.m"
}

#line 1121 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1121 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 1121 "declarative_tree.m"
{
#line 1121 "declarative_tree.m"
  {
#line 1121 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1121 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 1121 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 1121 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 1121 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1121 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 1121 "declarative_tree.m"
    else
#line 1121 "declarative_tree.m"
      {
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_13_13;
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1121 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1121 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1121 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));

#line 9935 "mdb.declarative_tree.c"
        {
#line 9937 "mdb.declarative_tree.c"
          mdb__declarative_tree__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9939 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_13_13, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
#line 9941 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_13_13, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_for_R_11));
#line 9943 "mdb.declarative_tree.c"
        }
#line 9945 "mdb.declarative_tree.c"
        {
#line 9947 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_tree__TypeInfo_13_13, (MR_Word) mdb__declarative_tree__V_3_3, (MR_Word) mdb__declarative_tree__V_6_6);
        }
#line 1121 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1121 "declarative_tree.m"
          {
#line 9954 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_7_7);
#line 1121 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 9958 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_5_5 == mdb__declarative_tree__V_8_8);
#line 1121 "declarative_tree.m"
          }
#line 1121 "declarative_tree.m"
      }
#line 1121 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1121 "declarative_tree.m"
  }
#line 1121 "declarative_tree.m"
}

#line 1752 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
#line 1752 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1752 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1752 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 1752 "declarative_tree.m"
{
#line 1752 "declarative_tree.m"
  {
#line 1752 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1752 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 1752 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 1752 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_15 == mdb__declarative_tree__CastY_16);
#line 1752 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9995 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 1752 "declarative_tree.m"
    else
#line 1752 "declarative_tree.m"
      {
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1752 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 1752 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3)));
#line 1752 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12;

#line 1752 "declarative_tree.m"
        {
#line 1752 "declarative_tree.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_12_12, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_8_8);
        }
#line 10025 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_12_12 == (MR_Integer) 0);
#line 1752 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1752 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1752 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_12_12;
#line 1752 "declarative_tree.m"
        else
#line 1752 "declarative_tree.m"
          {
#line 1752 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_13_13;

#line 1752 "declarative_tree.m"
            {
#line 1752 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_13_13, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_9_9);
            }
#line 10045 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_13_13 == (MR_Integer) 0);
#line 1752 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1752 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1752 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_13_13;
#line 1752 "declarative_tree.m"
            else
#line 1752 "declarative_tree.m"
              {
#line 1752 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_14_14;

#line 1752 "declarative_tree.m"
                {
#line 1752 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_14_14, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_10_10);
                }
#line 10065 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_14_14 == (MR_Integer) 0);
#line 1752 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1752 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1752 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_14_14;
#line 1752 "declarative_tree.m"
                else
#line 1752 "declarative_tree.m"
                  {
#line 1752 "declarative_tree.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_11_11);
#line 1752 "declarative_tree.m"
                    return;
                  }
#line 1752 "declarative_tree.m"
              }
#line 1752 "declarative_tree.m"
          }
#line 1752 "declarative_tree.m"
      }
#line 1752 "declarative_tree.m"
  }
#line 1752 "declarative_tree.m"
}

#line 1752 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
#line 1752 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1752 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 1752 "declarative_tree.m"
{
#line 1752 "declarative_tree.m"
  {
#line 1752 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1752 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_11 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 1752 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_12 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 1752 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_11 == mdb__declarative_tree__CastY_12);
#line 1752 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1752 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 1752 "declarative_tree.m"
    else
#line 1752 "declarative_tree.m"
      {
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1752 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1752 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1752 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));

#line 10138 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_7_7) == 0);
#line 1752 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1752 "declarative_tree.m"
          {
#line 10144 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_8_8);
#line 1752 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1752 "declarative_tree.m"
              {
#line 10150 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_9_9) == 0);
#line 1752 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 10154 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_10_10) == 0);
#line 1752 "declarative_tree.m"
              }
#line 1752 "declarative_tree.m"
          }
#line 1752 "declarative_tree.m"
      }
#line 1752 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1752 "declarative_tree.m"
  }
#line 1752 "declarative_tree.m"
}

#line 786 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
#line 786 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 786 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 786 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 786 "declarative_tree.m"
{
#line 786 "declarative_tree.m"
  {
#line 786 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 786 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar1_4 = mdb__declarative_tree__HeadVar__2_2;
#line 786 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar2_5 = mdb__declarative_tree__HeadVar__3_3;

#line 786 "declarative_tree.m"
    {
#line 786 "declarative_tree.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[7], mdb__declarative_tree__HeadVar__1_1, ((MR_Box) (mdb__declarative_tree__Cast_HeadVar1_4)), ((MR_Box) (mdb__declarative_tree__Cast_HeadVar2_5)));
#line 786 "declarative_tree.m"
      return;
    }
#line 786 "declarative_tree.m"
  }
#line 786 "declarative_tree.m"
}

#line 786 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
#line 786 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 786 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 786 "declarative_tree.m"
{
#line 786 "declarative_tree.m"
  {
#line 786 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 786 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar1_3 = mdb__declarative_tree__HeadVar__1_1;
#line 786 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar2_4 = mdb__declarative_tree__HeadVar__2_2;

#line 786 "declarative_tree.m"
    {
#line 786 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[7], ((MR_Box) (mdb__declarative_tree__Cast_HeadVar1_3)), ((MR_Box) (mdb__declarative_tree__Cast_HeadVar2_4)));
    }
#line 786 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 786 "declarative_tree.m"
  }
#line 786 "declarative_tree.m"
}

#line 783 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
#line 783 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 783 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 783 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 783 "declarative_tree.m"
{
#line 783 "declarative_tree.m"
  {
#line 783 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 783 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 783 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 783 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 783 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10255 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 783 "declarative_tree.m"
    else
#line 783 "declarative_tree.m"
      {
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8;

#line 783 "declarative_tree.m"
        {
#line 783 "declarative_tree.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], &mdb__declarative_tree__V_8_8, ((MR_Box) (mdb__declarative_tree__V_4_4)), ((MR_Box) (mdb__declarative_tree__V_6_6)));
        }
#line 10277 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_8_8 == (MR_Integer) 0);
#line 783 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 783 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 783 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_8_8;
#line 783 "declarative_tree.m"
        else
#line 783 "declarative_tree.m"
          {
#line 783 "declarative_tree.m"
            mdbcomp__goal_path____Compare____reverse_goal_path_0_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_7_7);
#line 783 "declarative_tree.m"
            return;
          }
#line 783 "declarative_tree.m"
      }
#line 783 "declarative_tree.m"
  }
#line 783 "declarative_tree.m"
}

#line 783 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
#line 783 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 783 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 783 "declarative_tree.m"
{
#line 783 "declarative_tree.m"
  {
#line 783 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 783 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_7 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 783 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_8 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 783 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_7 == mdb__declarative_tree__CastY_8);
#line 783 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 783 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 783 "declarative_tree.m"
    else
#line 783 "declarative_tree.m"
      {
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 783 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));

#line 10338 "mdb.declarative_tree.c"
        {
#line 10340 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], ((MR_Box) (mdb__declarative_tree__V_3_3)), ((MR_Box) (mdb__declarative_tree__V_5_5)));
        }
#line 783 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 10345 "mdb.declarative_tree.c"
          {
#line 10347 "mdb.declarative_tree.c"
            return mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_6_6);
          }
#line 783 "declarative_tree.m"
      }
#line 783 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 783 "declarative_tree.m"
  }
#line 783 "declarative_tree.m"
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
#line 10385 "mdb.declarative_tree.c"
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

#line 10445 "mdb.declarative_tree.c"
        {
#line 10447 "mdb.declarative_tree.c"
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

#line 749 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_35,
#line 749 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 749 "declarative_tree.m"
{
#line 749 "declarative_tree.m"
  {
#line 749 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 749 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_33 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 749 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_34 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 749 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_33 == mdb__declarative_tree__CastY_34);
#line 749 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10485 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 749 "declarative_tree.m"
    else
#line 749 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 749 "declarative_tree.m"
      else
#line 10497 "mdb.declarative_tree.c"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 2;
#line 749 "declarative_tree.m"
    else
#line 749 "declarative_tree.m"
      {
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 749 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3));
#line 749 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 749 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));

#line 749 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10518 "mdb.declarative_tree.c"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 1;
#line 749 "declarative_tree.m"
        else
#line 749 "declarative_tree.m"
          {
#line 749 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 749 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 749 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 749 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3));
#line 749 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 4)));
#line 749 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 5)));
#line 749 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_16_16;

#line 749 "declarative_tree.m"
            {
#line 749 "declarative_tree.m"
              mdb__declarative_tree____Compare____start_loc_1_0(mdb__declarative_tree__TypeInfo_for_R_35, &mdb__declarative_tree__V_16_16, mdb__declarative_tree__V_47_47, mdb__declarative_tree__V_10_10);
            }
#line 10544 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == (MR_Integer) 0);
#line 749 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 749 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_16_16;
#line 749 "declarative_tree.m"
            else
#line 749 "declarative_tree.m"
              {
#line 749 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_17_17;

#line 749 "declarative_tree.m"
                {
#line 749 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_17_17, mdb__declarative_tree__V_46_46, mdb__declarative_tree__V_11_11);
                }
#line 10564 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_17_17 == (MR_Integer) 0);
#line 749 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 749 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_17_17;
#line 749 "declarative_tree.m"
                else
#line 749 "declarative_tree.m"
                  {
#line 749 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_18_18;

#line 749 "declarative_tree.m"
                    {
#line 749 "declarative_tree.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_18_18, mdb__declarative_tree__V_45_45, mdb__declarative_tree__V_12_12);
                    }
#line 10584 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_18_18 == (MR_Integer) 0);
#line 749 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 749 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_18_18;
#line 749 "declarative_tree.m"
                    else
#line 749 "declarative_tree.m"
                      {
#line 749 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_19_19;

#line 749 "declarative_tree.m"
                        {
#line 749 "declarative_tree.m"
                          mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_35, &mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_44_44, mdb__declarative_tree__V_13_13);
                        }
#line 10604 "mdb.declarative_tree.c"
                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_19_19 == (MR_Integer) 0);
#line 749 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 749 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
                          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_19_19;
#line 749 "declarative_tree.m"
                        else
#line 749 "declarative_tree.m"
                          {
#line 749 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__V_20_20;

#line 749 "declarative_tree.m"
                            {
#line 749 "declarative_tree.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[0], &mdb__declarative_tree__V_20_20, ((MR_Box) (mdb__declarative_tree__V_43_43)), ((MR_Box) (mdb__declarative_tree__V_14_14)));
                            }
#line 10624 "mdb.declarative_tree.c"
                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_20_20 == (MR_Integer) 0);
#line 749 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 749 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
                              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_20_20;
#line 749 "declarative_tree.m"
                            else
#line 749 "declarative_tree.m"
                              {
#line 749 "declarative_tree.m"
                                {
#line 749 "declarative_tree.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[6], mdb__declarative_tree__HeadVar__1_1, ((MR_Box) (mdb__declarative_tree__V_42_42)), ((MR_Box) (mdb__declarative_tree__V_15_15)));
#line 749 "declarative_tree.m"
                                  return;
                                }
#line 749 "declarative_tree.m"
                              }
#line 749 "declarative_tree.m"
                          }
#line 749 "declarative_tree.m"
                      }
#line 749 "declarative_tree.m"
                  }
#line 749 "declarative_tree.m"
              }
#line 749 "declarative_tree.m"
          }
#line 749 "declarative_tree.m"
      }
#line 749 "declarative_tree.m"
  }
#line 749 "declarative_tree.m"
}

#line 749 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_19,
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 749 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 749 "declarative_tree.m"
{
#line 749 "declarative_tree.m"
  {
#line 749 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 749 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_17 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 749 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_18 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 749 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_17 == mdb__declarative_tree__CastY_18);
#line 749 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 749 "declarative_tree.m"
    else
#line 749 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "declarative_tree.m"
      {
#line 749 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 749 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 749 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastY_16 == mdb__declarative_tree__CastX_15);
#line 749 "declarative_tree.m"
      }
#line 749 "declarative_tree.m"
    else
#line 749 "declarative_tree.m"
      {
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_20_20;
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_21_21;
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 749 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_6_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3));
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)));
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)));
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9;
#line 749 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_10_10;
#line 749 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 749 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 749 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;

#line 749 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 749 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
          {
#line 749 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 749 "declarative_tree.m"
            mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 749 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 749 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3));
#line 749 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 749 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 10754 "mdb.declarative_tree.c"
            {
#line 10756 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____start_loc_1_0(mdb__declarative_tree__TypeInfo_for_R_19, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_9_9);
            }
#line 749 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
              {
#line 10763 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_10_10);
#line 749 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
                  {
#line 10769 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_5_5 == mdb__declarative_tree__V_11_11);
#line 749 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
                      {
#line 10775 "mdb.declarative_tree.c"
                        {
#line 10777 "mdb.declarative_tree.c"
                          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_19, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_12_12);
                        }
#line 749 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
                          {
#line 10784 "mdb.declarative_tree.c"
                            mdb__declarative_tree__TypeInfo_20_20 = (MR_Word) &mdb__declarative_tree_scalar_common_1[0];
#line 10786 "mdb.declarative_tree.c"
                            {
#line 10788 "mdb.declarative_tree.c"
                              mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_20_20, ((MR_Box) (mdb__declarative_tree__V_7_7)), ((MR_Box) (mdb__declarative_tree__V_13_13)));
                            }
#line 749 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 749 "declarative_tree.m"
                              {
#line 10795 "mdb.declarative_tree.c"
                                mdb__declarative_tree__TypeInfo_21_21 = (MR_Word) &mdb__declarative_tree_scalar_common_1[6];
#line 10797 "mdb.declarative_tree.c"
                                {
#line 10799 "mdb.declarative_tree.c"
                                  return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_21_21, ((MR_Box) (mdb__declarative_tree__V_8_8)), ((MR_Box) (mdb__declarative_tree__V_14_14)));
                                }
#line 749 "declarative_tree.m"
                              }
#line 749 "declarative_tree.m"
                          }
#line 749 "declarative_tree.m"
                      }
#line 749 "declarative_tree.m"
                  }
#line 749 "declarative_tree.m"
              }
#line 749 "declarative_tree.m"
          }
#line 749 "declarative_tree.m"
      }
#line 749 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 749 "declarative_tree.m"
  }
#line 749 "declarative_tree.m"
}

#line 495 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
#line 495 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 495 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 495 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 495 "declarative_tree.m"
{
#line 495 "declarative_tree.m"
  {
#line 495 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 495 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 495 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 495 "declarative_tree.m"
    {
#line 495 "declarative_tree.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__Cast_HeadVar1_4, mdb__declarative_tree__Cast_HeadVar2_5);
#line 495 "declarative_tree.m"
      return;
    }
#line 495 "declarative_tree.m"
  }
#line 495 "declarative_tree.m"
}

#line 495 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
#line 495 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_1,
#line 495 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 495 "declarative_tree.m"
{
#line 10864 "mdb.declarative_tree.c"
  {
#line 10866 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__HeadVar__2_1 == mdb__declarative_tree__HeadVar__2_2);

#line 10869 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 10871 "mdb.declarative_tree.c"
  }
#line 495 "declarative_tree.m"
}

#line 788 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_23,
#line 788 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 788 "declarative_tree.m"
{
#line 788 "declarative_tree.m"
  {
#line 788 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 788 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_21 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 788 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_22 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 788 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_21 == mdb__declarative_tree__CastY_22);
#line 788 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10902 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 788 "declarative_tree.m"
    else
#line 788 "declarative_tree.m"
      {
#line 788 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 788 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 788 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 788 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 4)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 5)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16;

#line 788 "declarative_tree.m"
        {
#line 788 "declarative_tree.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_16_16, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_10_10);
        }
#line 10940 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == (MR_Integer) 0);
#line 788 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 788 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_16_16;
#line 788 "declarative_tree.m"
        else
#line 788 "declarative_tree.m"
          {
#line 788 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_17_17;

#line 788 "declarative_tree.m"
            {
#line 788 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_17_17, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_11_11);
            }
#line 10960 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_17_17 == (MR_Integer) 0);
#line 788 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 788 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_17_17;
#line 788 "declarative_tree.m"
            else
#line 788 "declarative_tree.m"
              {
#line 788 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_18_18;

#line 788 "declarative_tree.m"
                {
#line 788 "declarative_tree.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[4], &mdb__declarative_tree__V_18_18, ((MR_Box) (mdb__declarative_tree__V_6_6)), ((MR_Box) (mdb__declarative_tree__V_12_12)));
                }
#line 10980 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_18_18 == (MR_Integer) 0);
#line 788 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 788 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_18_18;
#line 788 "declarative_tree.m"
                else
#line 788 "declarative_tree.m"
                  {
#line 788 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_19_19;

#line 788 "declarative_tree.m"
                    {
#line 788 "declarative_tree.m"
                      mdbcomp__program_representation____Compare____atomic_goal_rep_0_0(&mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_13_13);
                    }
#line 11000 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_19_19 == (MR_Integer) 0);
#line 788 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 788 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_19_19;
#line 788 "declarative_tree.m"
                    else
#line 788 "declarative_tree.m"
                      {
#line 788 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_20_20;

#line 788 "declarative_tree.m"
                        {
#line 788 "declarative_tree.m"
                          mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdb__declarative_tree__V_20_20, mdb__declarative_tree__V_8_8, mdb__declarative_tree__V_14_14);
                        }
#line 11020 "mdb.declarative_tree.c"
                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_20_20 == (MR_Integer) 0);
#line 788 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 788 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
                          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_20_20;
#line 788 "declarative_tree.m"
                        else
#line 788 "declarative_tree.m"
                          {
#line 788 "declarative_tree.m"
                            mercury__maybe____Compare____maybe_1_0(mdb__declarative_tree__TypeInfo_for_R_23, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_15_15);
#line 788 "declarative_tree.m"
                            return;
                          }
#line 788 "declarative_tree.m"
                      }
#line 788 "declarative_tree.m"
                  }
#line 788 "declarative_tree.m"
              }
#line 788 "declarative_tree.m"
          }
#line 788 "declarative_tree.m"
      }
#line 788 "declarative_tree.m"
  }
#line 788 "declarative_tree.m"
}

#line 788 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_17,
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 788 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 788 "declarative_tree.m"
{
#line 788 "declarative_tree.m"
  {
#line 788 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 788 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 788 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 788 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_15 == mdb__declarative_tree__CastY_16);
#line 788 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 788 "declarative_tree.m"
    else
#line 788 "declarative_tree.m"
      {
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_18_18;
#line 788 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 788 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)));
#line 788 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 788 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 788 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));

#line 11109 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_9_9) == 0);
#line 788 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
          {
#line 11115 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_10_10);
#line 788 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
              {
#line 11121 "mdb.declarative_tree.c"
                mdb__declarative_tree__TypeInfo_18_18 = (MR_Word) &mdb__declarative_tree_scalar_common_1[4];
#line 11123 "mdb.declarative_tree.c"
                {
#line 11125 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_18_18, ((MR_Box) (mdb__declarative_tree__V_5_5)), ((MR_Box) (mdb__declarative_tree__V_11_11)));
                }
#line 788 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
                  {
#line 11132 "mdb.declarative_tree.c"
                    {
#line 11134 "mdb.declarative_tree.c"
                      mdb__declarative_tree__succeeded = mdbcomp__program_representation____Unify____atomic_goal_rep_0_0(mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_12_12);
                    }
#line 788 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 788 "declarative_tree.m"
                      {
#line 11141 "mdb.declarative_tree.c"
                        {
#line 11143 "mdb.declarative_tree.c"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_13_13);
                        }
#line 788 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 11148 "mdb.declarative_tree.c"
                          {
#line 11150 "mdb.declarative_tree.c"
                            return mdb__declarative_tree__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_tree__TypeInfo_for_R_17, mdb__declarative_tree__V_8_8, mdb__declarative_tree__V_14_14);
                          }
#line 788 "declarative_tree.m"
                      }
#line 788 "declarative_tree.m"
                  }
#line 788 "declarative_tree.m"
              }
#line 788 "declarative_tree.m"
          }
#line 788 "declarative_tree.m"
      }
#line 788 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 788 "declarative_tree.m"
  }
#line 788 "declarative_tree.m"
}

#line 1915 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
#line 1915 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1915 "declarative_tree.m"
{
#line 1915 "declarative_tree.m"
  {
#line 1915 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1915 "declarative_tree.m"
    MR_builtin_longjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0, 1);
#line 1915 "declarative_tree.m"
  }
#line 1915 "declarative_tree.m"
}

#line 1916 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
#line 1916 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1916 "declarative_tree.m"
{
#line 1916 "declarative_tree.m"
  {
#line 1916 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1916 "declarative_tree.m"
    (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7 = ((MR_Word) (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7);
#line 1916 "declarative_tree.m"
    {
#line 1916 "declarative_tree.m"
      mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(mdb__declarative_tree__env_ptr);
#line 1916 "declarative_tree.m"
      return;
    }
#line 1916 "declarative_tree.m"
  }
#line 1916 "declarative_tree.m"
}

#line 1915 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
#line 1915 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1915 "declarative_tree.m"
{
#line 1915 "declarative_tree.m"
  {
#line 1915 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1915 "declarative_tree.m"
    {
#line 1918 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 2)));
#line 1918 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 0)));
#line 1918 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 1)));
#line 1918 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_10_10;

#line 1918 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1918 "declarative_tree.m"
      if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
#line 1918 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_11_11, (MR_Integer) 0)));
#line 1917 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
#line 1917 "declarative_tree.m"
      if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
#line 1917 "declarative_tree.m"
        {
#line 1917 "declarative_tree.m"
          mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(mdb__declarative_tree__env_ptr);
#line 1917 "declarative_tree.m"
          return;
        }
#line 1915 "declarative_tree.m"
    }
#line 1915 "declarative_tree.m"
  }
#line 1915 "declarative_tree.m"
}

#line 1915 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
#line 1915 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1915 "declarative_tree.m"
{
#line 1915 "declarative_tree.m"
  {
#line 1915 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1915 "declarative_tree.m"
    if (MR_builtin_setjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0) == 0)
#line 1915 "declarative_tree.m"
      {
#line 1915 "declarative_tree.m"
        {
#line 1916 "declarative_tree.m"
          {
#line 1916 "declarative_tree.m"
            mercury__list__member_2_p_1((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, &(mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6, mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3, mdb__declarative_tree__env_ptr);
          }
#line 1915 "declarative_tree.m"
        }
#line 1915 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_FALSE;
#line 1915 "declarative_tree.m"
      }
#line 1915 "declarative_tree.m"
    else
#line 1915 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_TRUE;
#line 1915 "declarative_tree.m"
  }
#line 1915 "declarative_tree.m"
}

#line 1907 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
#line 1907 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21,
#line 1907 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 1907 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_4)
#line 1907 "declarative_tree.m"
{
#line 1907 "declarative_tree.m"
  {
#line 1907 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s mdb__declarative_tree__env;

#line 1910 "declarative_tree.m"
    {
#line 1910 "declarative_tree.m"
      MR_Word mdb__declarative_tree__Call_5;
#line 1912 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_12_12;
#line 1912 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_13_13;
#line 1912 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_14_14;
#line 1912 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_15_15;
#line 1912 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_16_16;
#line 1912 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_17_17;
#line 1912 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_18_18;
#line 1912 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_19_19;
#line 1912 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_20_20;

#line 1911 "declarative_tree.m"
      {
#line 1911 "declarative_tree.m"
        mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21, mdb__declarative_tree__Store_3, mdb__declarative_tree__CallId_4, &mdb__declarative_tree__Call_5);
      }
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 0));
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 1));
#line 1912 "declarative_tree.m"
      (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 2)));
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 3)));
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 4)));
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 5)));
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 6)));
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 7)));
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 8)));
#line 1912 "declarative_tree.m"
      mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 9)));
#line 1915 "declarative_tree.m"
      {
#line 1915 "declarative_tree.m"
        mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(&mdb__declarative_tree__env);
      }
#line 1915 "declarative_tree.m"
      (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
#line 1910 "declarative_tree.m"
      return (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
#line 1910 "declarative_tree.m"
    }
#line 1907 "declarative_tree.m"
  }
#line 1907 "declarative_tree.m"
}

#line 1853 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
#line 1853 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32,
#line 1853 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1853 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 1853 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Node_6)
#line 1853 "declarative_tree.m"
{
#line 1868 "declarative_tree.m"
  {
#line 1868 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1868 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_7;
#line 11399 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11401 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_7;

#line 11404 "mdb.declarative_tree.c"
    {
#line 11406 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_7);
    }
#line 11409 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 11411 "mdb.declarative_tree.c"
      {
#line 11413 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_7 = ((MR_Word) mdb__declarative_tree__conv1_Node0_7);
#line 11415 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 11417 "mdb.declarative_tree.c"
      }
#line 1858 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1861 "declarative_tree.m"
      {
#line 1861 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node0_7)) == (MR_mktag((MR_Integer) 1))))
#line 1860 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 1861 "declarative_tree.m"
        else
#line 1861 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1864 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 1861 "declarative_tree.m"
        else
#line 1861 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1862 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 1861 "declarative_tree.m"
        else
#line 1861 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1861 "declarative_tree.m"
      }
#line 1868 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1867 "declarative_tree.m"
      *mdb__declarative_tree__Node_6 = mdb__declarative_tree__Node0_7;
#line 1868 "declarative_tree.m"
    else
#line 1869 "declarative_tree.m"
      {
#line 1869 "declarative_tree.m"
        {
#line 1869 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[26])));
#line 1869 "declarative_tree.m"
          return;
        }
#line 1869 "declarative_tree.m"
      }
#line 1868 "declarative_tree.m"
  }
#line 1853 "declarative_tree.m"
}

#line 1820 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
#line 1820 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1820 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_2,
#line 1820 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Pos_3,
#line 1820 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ArgPos_4)
#line 1820 "declarative_tree.m"
{
#line 1823 "declarative_tree.m"
  while (MR_TRUE)
#line 1823 "declarative_tree.m"
    {
#line 1823 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1823 "declarative_tree.m"
      {
#line 1823 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1823 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1823 "declarative_tree.m"
          {
#line 1824 "declarative_tree.m"
            {
#line 1824 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[25])));
#line 1824 "declarative_tree.m"
              return;
            }
#line 1823 "declarative_tree.m"
          }
#line 1823 "declarative_tree.m"
        else
#line 1825 "declarative_tree.m"
          {
#line 1825 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__HeadVar_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1825 "declarative_tree.m"
            MR_Word mdb__declarative_tree__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));

#line 1826 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__HeadVar_11 == mdb__declarative_tree__Var_2);
#line 1828 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1827 "declarative_tree.m"
              {
#line 1827 "declarative_tree.m"
                MR_Word base;
#line 1827 "declarative_tree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "declarative_tree.m"
                *mdb__declarative_tree__ArgPos_4 = base;
#line 1827 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__Pos_3));
#line 1827 "declarative_tree.m"
              }
#line 1828 "declarative_tree.m"
            else
#line 1829 "declarative_tree.m"
              {
#line 1829 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_16_16 = (mdb__declarative_tree__Pos_3 - (MR_Integer) 1);

#line 1829 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1829 "declarative_tree.m"
                {
#line 1829 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__HeadVars_12;
#line 1829 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__Pos__tmp_copy_3 = mdb__declarative_tree__V_16_16;

#line 1829 "declarative_tree.m"
                  mdb__declarative_tree__Pos_3 = mdb__declarative_tree__Pos__tmp_copy_3;
#line 1829 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1829 "declarative_tree.m"
                }
#line 1829 "declarative_tree.m"
                continue;
#line 1829 "declarative_tree.m"
              }
#line 1825 "declarative_tree.m"
          }
#line 1823 "declarative_tree.m"
      }
#line 1823 "declarative_tree.m"
      break;
#line 1823 "declarative_tree.m"
    }
#line 1820 "declarative_tree.m"
}

#line 1815 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
#line 1815 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_4,
#line 1815 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_5)
#line 1815 "declarative_tree.m"
{
#line 1817 "declarative_tree.m"
  {
#line 1817 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1817 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ArgPos_6;
#line 1817 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_7_7;

#line 1818 "declarative_tree.m"
    {
#line 1818 "declarative_tree.m"
      mdb__declarative_tree__V_7_7 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__HeadVars_4);
    }
#line 1818 "declarative_tree.m"
    {
#line 1818 "declarative_tree.m"
      mdb__declarative_tree__find_arg_pos_from_back_4_p_0(mdb__declarative_tree__HeadVars_4, mdb__declarative_tree__Var_5, mdb__declarative_tree__V_7_7, &mdb__declarative_tree__ArgPos_6);
    }
#line 1817 "declarative_tree.m"
    return mdb__declarative_tree__ArgPos_6;
#line 1817 "declarative_tree.m"
  }
#line 1815 "declarative_tree.m"
}

#line 1793 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
#line 1793 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__TracingOn_1)
#line 1793 "declarative_tree.m"
{
#line 1795 "declarative_tree.m"
  {
#line 1795 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1798 "declarative_tree.m"
{
#define MR_PROC_LABEL mdb__declarative_tree__is_traced_grade_1_p_0

	MR_Word TracingOn;

		{
#line 1798 "declarative_tree.m"

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif

#line 11628 "mdb.declarative_tree.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_tree__TracingOn_1  = TracingOn;
#line 1798 "declarative_tree.m"
}
#line 1795 "declarative_tree.m"
  }
#line 1793 "declarative_tree.m"
}

#line 1782 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
#line 1782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1782 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ParentPath_2,
#line 1782 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__N_3,
#line 1782 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 1782 "declarative_tree.m"
{
#line 1785 "declarative_tree.m"
  {
#line 1785 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1785 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1785 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1785 "declarative_tree.m"
    else
#line 1787 "declarative_tree.m"
      {
#line 1787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Path_11;
#line 1787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__GoalAndPaths_12;
#line 1787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1787 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;
#line 1787 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15;

#line 1788 "declarative_tree.m"
        {
#line 1788 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1788 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_14_14, 0) = ((MR_Box) (mdb__declarative_tree__N_3));
#line 1788 "declarative_tree.m"
        }
#line 1788 "declarative_tree.m"
        {
#line 1788 "declarative_tree.m"
          mdb__declarative_tree__Path_11 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__ParentPath_2, mdb__declarative_tree__V_14_14);
        }
#line 1787 "declarative_tree.m"
        {
#line 1787 "declarative_tree.m"
          mdb__declarative_tree__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1787 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_13_13, 0) = ((MR_Box) (mdb__declarative_tree__Goal_7));
#line 1787 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_13_13, 1) = ((MR_Box) (mdb__declarative_tree__Path_11));
#line 1787 "declarative_tree.m"
        }
#line 1789 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = (mdb__declarative_tree__N_3 + (MR_Integer) 1);
#line 1789 "declarative_tree.m"
        {
#line 1789 "declarative_tree.m"
          mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(mdb__declarative_tree__Goals_8, mdb__declarative_tree__ParentPath_2, mdb__declarative_tree__V_15_15, &mdb__declarative_tree__GoalAndPaths_12);
        }
#line 1787 "declarative_tree.m"
        {
#line 1787 "declarative_tree.m"
          MR_Word base;
#line 1787 "declarative_tree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1787 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__4_4 = base;
#line 1787 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_13_13));
#line 1787 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__GoalAndPaths_12));
#line 1787 "declarative_tree.m"
        }
#line 1787 "declarative_tree.m"
      }
#line 1785 "declarative_tree.m"
  }
#line 1782 "declarative_tree.m"
}

#line 1740 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
#line 1740 "declarative_tree.m"
  MR_String mdb__declarative_tree__Module_5,
#line 1740 "declarative_tree.m"
  MR_String mdb__declarative_tree__Name_6,
#line 1740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_7,
#line 1740 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__NewVar_8)
#line 1740 "declarative_tree.m"
{
#line 1743 "declarative_tree.m"
  {
#line 1743 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Module_5, (MR_String) "builtin") == 0);
#line 1743 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeCtorInfo_11_11;
#line 1743 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_9_9;
#line 1743 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 1743 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1750 "declarative_tree.m"
    MR_Box mdb__declarative_tree__conv0_NewVar_8;

#line 1743 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1743 "declarative_tree.m"
      {
#line 1748 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Name_6, (MR_String) "cc_multi_equal") == 0);
#line 1743 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1743 "declarative_tree.m"
          {
#line 1749 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = (MR_Integer) 3;
#line 11772 "mdb.declarative_tree.c"
            mdb__declarative_tree__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1749 "declarative_tree.m"
            {
#line 1749 "declarative_tree.m"
              mercury__list__length_2_p_0(mdb__declarative_tree__TypeCtorInfo_11_11, mdb__declarative_tree__Args_7, &mdb__declarative_tree__V_12_12);
            }
#line 1749 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_9_9 == mdb__declarative_tree__V_12_12);
#line 1743 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1743 "declarative_tree.m"
              {
#line 1750 "declarative_tree.m"
                mdb__declarative_tree__V_10_10 = (MR_Integer) 2;
#line 1750 "declarative_tree.m"
                {
#line 1750 "declarative_tree.m"
                  mdb__declarative_tree__conv0_NewVar_8 = mercury__list__det_index1_2_f_0(mdb__declarative_tree__TypeCtorInfo_11_11, mdb__declarative_tree__Args_7, mdb__declarative_tree__V_10_10);
                }
#line 1750 "declarative_tree.m"
                *mdb__declarative_tree__NewVar_8 = ((MR_Integer) mdb__declarative_tree__conv0_NewVar_8);
#line 1750 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1743 "declarative_tree.m"
              }
#line 1743 "declarative_tree.m"
          }
#line 1743 "declarative_tree.m"
      }
#line 1743 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1743 "declarative_tree.m"
  }
#line 1740 "declarative_tree.m"
}

#line 1555 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
#line 1555 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_5,
#line 1555 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_6,
#line 1555 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_7,
#line 1555 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Var_8)
#line 1555 "declarative_tree.m"
{
#line 1563 "declarative_tree.m"
  {
#line 1563 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1563 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__FoundVar_9;
#line 1561 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1561 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_10_10;
#line 1561 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 1561 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1561 "declarative_tree.m"
    MR_Box mdb__declarative_tree__conv0_FoundVar_9;

#line 1561 "declarative_tree.m"
    {
#line 1561 "declarative_tree.m"
      mdb__declarative_tree__V_10_10 = mercury__list__reverse_1_f_0(mdb__declarative_tree__TypeCtorInfo_17_17, mdb__declarative_tree__Args_5);
    }
#line 1561 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = (mdb__declarative_tree__TotalArgs_7 - mdb__declarative_tree__ArgNum_6);
#line 1561 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = (mdb__declarative_tree__V_12_12 + (MR_Integer) 1);
#line 1561 "declarative_tree.m"
    {
#line 1561 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list__index1_3_p_0(mdb__declarative_tree__TypeCtorInfo_17_17, mdb__declarative_tree__V_10_10, mdb__declarative_tree__V_11_11, &mdb__declarative_tree__conv0_FoundVar_9);
    }
#line 1561 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1561 "declarative_tree.m"
      {
#line 1561 "declarative_tree.m"
        mdb__declarative_tree__FoundVar_9 = ((MR_Integer) mdb__declarative_tree__conv0_FoundVar_9);
#line 1561 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1561 "declarative_tree.m"
      }
#line 1563 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1562 "declarative_tree.m"
      *mdb__declarative_tree__Var_8 = mdb__declarative_tree__FoundVar_9;
#line 1563 "declarative_tree.m"
    else
#line 1564 "declarative_tree.m"
      {
#line 1564 "declarative_tree.m"
        {
#line 1564 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[24])));
#line 1564 "declarative_tree.m"
          return;
        }
#line 1564 "declarative_tree.m"
      }
#line 1563 "declarative_tree.m"
  }
#line 1555 "declarative_tree.m"
}

#line 1543 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
#line 1543 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalId_3,
#line 1543 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_4)
#line 1543 "declarative_tree.m"
{
#line 1546 "declarative_tree.m"
  {
#line 1546 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1546 "declarative_tree.m"
    MR_String mdb__declarative_tree__GoalModule_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 0)));
#line 1546 "declarative_tree.m"
    MR_String mdb__declarative_tree__GoalName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 1)));
#line 1546 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__GoalArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 2)));
#line 1546 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ProcLabel_8;
#line 1546 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EventModule_9;
#line 1546 "declarative_tree.m"
    MR_String mdb__declarative_tree__EventName_10;
#line 1546 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__EventArity_13;
#line 1546 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 0)));
#line 1546 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15;
#line 1546 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_19_19;
#line 1548 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 1)));
#line 1549 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 1549 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 1550 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_17_17;

#line 1548 "declarative_tree.m"
    {
#line 1548 "declarative_tree.m"
      mdb__declarative_tree__ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__V_14_14);
    }
#line 1549 "declarative_tree.m"
    {
#line 1549 "declarative_tree.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_tree__ProcLabel_8, &mdb__declarative_tree__EventModule_9, &mdb__declarative_tree__EventName_10, &mdb__declarative_tree__V_11_11, &mdb__declarative_tree__V_12_12);
    }
#line 1550 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 0)));
#line 1550 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 1)));
#line 1550 "declarative_tree.m"
    {
#line 1550 "declarative_tree.m"
      mdb__declarative_tree__EventArity_13 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_15_15);
    }
#line 1551 "declarative_tree.m"
    {
#line 1551 "declarative_tree.m"
      mdb__declarative_tree__V_19_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_tree__EventModule_9);
    }
#line 1551 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__GoalModule_5, mdb__declarative_tree__V_19_19) == 0);
#line 1546 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1546 "declarative_tree.m"
      {
#line 1552 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__EventName_10, mdb__declarative_tree__GoalName_6) == 0);
#line 1546 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1553 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__EventArity_13 == mdb__declarative_tree__GoalArity_7);
#line 1546 "declarative_tree.m"
      }
#line 1546 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1546 "declarative_tree.m"
  }
#line 1543 "declarative_tree.m"
}

#line 1401 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145,
#line 1401 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_17,
#line 1401 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_18,
#line 1401 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_19,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_20,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoal_21,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalArgs_22,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_23,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_24,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_25,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_26,
#line 1401 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_27,
#line 1401 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_28,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_29,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_30,
#line 1401 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_31)
#line 1401 "declarative_tree.m"
{
#line 1481 "declarative_tree.m"
  {
#line 1481 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_25)) == (MR_mktag((MR_Integer) 1)));
#line 1481 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_32;
#line 1481 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ContourHeadNode_34;
#line 1481 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EndPath_35;
#line 1411 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_89_89;
#line 1411 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_90_90;
#line 1411 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_33_33;

#line 1411 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1411 "declarative_tree.m"
      {
#line 1411 "declarative_tree.m"
        mdb__declarative_tree__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 0)));
#line 1411 "declarative_tree.m"
        mdb__declarative_tree__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 1)));
#line 1411 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1411 "declarative_tree.m"
          {
#line 1411 "declarative_tree.m"
            mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_89_89, (MR_Integer) 0));
#line 1411 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_89_89, (MR_Integer) 1)));
#line 1412 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeEnd_26)) == (MR_mktag((MR_Integer) 1)));
#line 1412 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1412 "declarative_tree.m"
              mdb__declarative_tree__EndPath_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeEnd_26, (MR_Integer) 0)));
#line 1411 "declarative_tree.m"
          }
#line 1411 "declarative_tree.m"
      }
#line 1481 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1478 "declarative_tree.m"
      {
#line 1478 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_46;
#line 1416 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_147_147;
#line 1416 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeReturnLabel_42;
#line 1416 "declarative_tree.m"
        MR_String mdb__declarative_tree__CallPathStr_47;
#line 1416 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallPath_48;
#line 1416 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__PolyConst2_146;
#line 1415 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_36_36;
#line 1415 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_37_37;
#line 1415 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_38_38;
#line 1415 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_39_39;
#line 1415 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_40_40;
#line 1415 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_41_41;
#line 1415 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43;
#line 1415 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_44_44;
#line 1415 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_45_45;

#line 1415 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_34)) == (MR_mktag((MR_Integer) 0)));
#line 1415 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1415 "declarative_tree.m"
          {
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 0));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 1));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 2)));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 3)));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 4)));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 5)));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__MaybeReturnLabel_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 6)));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 7)));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 8)));
#line 1415 "declarative_tree.m"
            mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 9)));
#line 12115 "mdb.declarative_tree.c"
            mdb__declarative_tree__PolyConst2_146 = (MR_Integer) 2;
#line 12117 "mdb.declarative_tree.c"
            {
#line 12119 "mdb.declarative_tree.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__PolyConst2_146, &mdb__declarative_tree__TypeInfo_147_147);
            }
#line 1417 "declarative_tree.m"
            {
#line 1417 "declarative_tree.m"
              mdb__declarative_tree__Atom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_147_147, mdb__declarative_tree__ContourHeadNode_34);
            }
#line 1418 "declarative_tree.m"
            {
#line 1418 "declarative_tree.m"
              mdb__declarative_tree__CallPathStr_47 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__MaybeReturnLabel_42);
            }
#line 1419 "declarative_tree.m"
            {
#line 1419 "declarative_tree.m"
              mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_47, &mdb__declarative_tree__CallPath_48);
            }
#line 1420 "declarative_tree.m"
            {
#line 1420 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CallPath_48, mdb__declarative_tree__EndPath_35);
            }
#line 1415 "declarative_tree.m"
          }
#line 1478 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1464 "declarative_tree.m"
          {
#line 1425 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoalId_49;
#line 1423 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_91_91;

#line 1423 "declarative_tree.m"
            {
#line 1423 "declarative_tree.m"
              mdb__declarative_tree__V_91_91 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(mdb__declarative_tree__AtomicGoal_21);
            }
#line 1423 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_91_91)) == (MR_mktag((MR_Integer) 1)));
#line 1423 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1423 "declarative_tree.m"
              {
#line 1423 "declarative_tree.m"
                mdb__declarative_tree__AtomicGoalId_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_91_91, (MR_Integer) 0)));
#line 1424 "declarative_tree.m"
                {
#line 1424 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(mdb__declarative_tree__AtomicGoalId_49, mdb__declarative_tree__Atom_46);
                }
#line 1423 "declarative_tree.m"
              }
#line 1423 "declarative_tree.m"
            else
#line 1426 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 1);
#line 1464 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1438 "declarative_tree.m"
              {
#line 1432 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_92_92;
#line 1432 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_93_93;

#line 1432 "declarative_tree.m"
                {
#line 1432 "declarative_tree.m"
                  mdb__declarative_tree__V_93_93 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__AtomicGoalArgs_22);
                }
#line 1432 "declarative_tree.m"
                mdb__declarative_tree__V_92_92 = (mdb__declarative_tree__TotalArgs_28 - mdb__declarative_tree__V_93_93);
#line 1432 "declarative_tree.m"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__ArgNum_27 > mdb__declarative_tree__V_92_92);
#line 1438 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1435 "declarative_tree.m"
                  {
#line 1435 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_50;
#line 1435 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_94_94;

#line 1434 "declarative_tree.m"
                    {
#line 1434 "declarative_tree.m"
                      mdb__declarative_tree__find_variable_in_args_4_p_0(mdb__declarative_tree__AtomicGoalArgs_22, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, &mdb__declarative_tree__Var_50);
                    }
#line 1437 "declarative_tree.m"
                    {
#line 1437 "declarative_tree.m"
                      mdb__declarative_tree__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1437 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 1) = ((MR_Box) (mdb__declarative_tree__Var_50));
#line 1437 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1437 "declarative_tree.m"
                    }
#line 1436 "declarative_tree.m"
                    {
#line 1436 "declarative_tree.m"
                      mdb__declarative_tree__MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_32, 0) = ((MR_Box) (mdb__declarative_tree__V_94_94));
#line 1436 "declarative_tree.m"
                    }
#line 1435 "declarative_tree.m"
                  }
#line 1438 "declarative_tree.m"
                else
#line 1446 "declarative_tree.m"
                if (((((MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1442 "declarative_tree.m"
                  {
#line 1442 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_99_99;
#line 1442 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 1)));
#line 1442 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 2)));

#line 1445 "declarative_tree.m"
                    {
#line 1445 "declarative_tree.m"
                      mdb__declarative_tree__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1445 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 1) = ((MR_Box) (mdb__declarative_tree__Var_123));
#line 1445 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1445 "declarative_tree.m"
                    }
#line 1444 "declarative_tree.m"
                    {
#line 1444 "declarative_tree.m"
                      mdb__declarative_tree__MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_32, 0) = ((MR_Box) (mdb__declarative_tree__V_99_99));
#line 1444 "declarative_tree.m"
                    }
#line 1442 "declarative_tree.m"
                  }
#line 1446 "declarative_tree.m"
                else
#line 1459 "declarative_tree.m"
                  {
#line 1460 "declarative_tree.m"
                    {
#line 1460 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                    }
#line 1459 "declarative_tree.m"
                  }
#line 1438 "declarative_tree.m"
              }
#line 1464 "declarative_tree.m"
            else
#line 1468 "declarative_tree.m"
            if ((mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0))
#line 1469 "declarative_tree.m"
              {
#line 1469 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Primitive_83;
#line 1469 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Primitives1_84;

#line 1470 "declarative_tree.m"
                {
#line 1470 "declarative_tree.m"
                  mdb__declarative_tree__Primitive_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1470 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1470 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1470 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1470 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1470 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1470 "declarative_tree.m"
                }
#line 1472 "declarative_tree.m"
                {
#line 1472 "declarative_tree.m"
                  mdb__declarative_tree__Primitives1_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_84, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_83));
#line 1472 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_84, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1472 "declarative_tree.m"
                }
#line 1473 "declarative_tree.m"
                {
#line 1473 "declarative_tree.m"
                  return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, mdb__declarative_tree__Contour_25, mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_84);
                }
#line 1469 "declarative_tree.m"
              }
#line 1468 "declarative_tree.m"
            else
#line 1466 "declarative_tree.m"
              {
#line 1467 "declarative_tree.m"
                {
#line 1467 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[19])));
                }
#line 1466 "declarative_tree.m"
              }
#line 1464 "declarative_tree.m"
          }
#line 1478 "declarative_tree.m"
        else
#line 1479 "declarative_tree.m"
          {
#line 1479 "declarative_tree.m"
            {
#line 1479 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
            }
#line 1479 "declarative_tree.m"
          }
#line 1478 "declarative_tree.m"
      }
#line 1481 "declarative_tree.m"
    else
#line 1525 "declarative_tree.m"
    if ((mdb__declarative_tree__Contour_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1537 "declarative_tree.m"
      {
#line 1528 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__MaybeEnd_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1528 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1529 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0);
#line 1537 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1532 "declarative_tree.m"
          {
#line 1532 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Primitive_134;
#line 1532 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Primitives1_135;

#line 1531 "declarative_tree.m"
            {
#line 1531 "declarative_tree.m"
              mdb__declarative_tree__Primitive_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1531 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1531 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1531 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1531 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1531 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1531 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1531 "declarative_tree.m"
            }
#line 1533 "declarative_tree.m"
            {
#line 1533 "declarative_tree.m"
              mdb__declarative_tree__Primitives1_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_135, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_134));
#line 1533 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_135, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1533 "declarative_tree.m"
            }
#line 1534 "declarative_tree.m"
            {
#line 1534 "declarative_tree.m"
              return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_135);
            }
#line 1532 "declarative_tree.m"
          }
#line 1537 "declarative_tree.m"
        else
#line 1538 "declarative_tree.m"
          {
#line 1538 "declarative_tree.m"
            {
#line 1538 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[21])));
            }
#line 1538 "declarative_tree.m"
          }
#line 1537 "declarative_tree.m"
      }
#line 1525 "declarative_tree.m"
    else
#line 1483 "declarative_tree.m"
      {
#line 1483 "declarative_tree.m"
        MR_Box mdb__declarative_tree__ContourHeadId_85;
#line 1483 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourTail_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 1)));
#line 1483 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallInfo_87;
#line 1483 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NewContour_88;
#line 1483 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 0)));
#line 1483 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourHeadNode_129;
#line 1483 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Primitive_132;
#line 1483 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Primitives1_133;
#line 1508 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_127;
#line 1484 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_153_153;

#line 1483 "declarative_tree.m"
        mdb__declarative_tree__ContourHeadId_85 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 0));
#line 1483 "declarative_tree.m"
        mdb__declarative_tree__ContourHeadNode_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 1)));
#line 12449 "mdb.declarative_tree.c"
        {
#line 12451 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_153_153);
        }
#line 1484 "declarative_tree.m"
        {
#line 1484 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_execution__get_trace_exit_atom_1_f_1(mdb__declarative_tree__TypeInfo_153_153, mdb__declarative_tree__ContourHeadNode_129, &mdb__declarative_tree__Atom_127);
        }
#line 1508 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1497 "declarative_tree.m"
          {
#line 1491 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoalId_125;
#line 1487 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_114_114;

#line 1487 "declarative_tree.m"
            {
#line 1487 "declarative_tree.m"
              mdb__declarative_tree__V_114_114 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(mdb__declarative_tree__AtomicGoal_21);
            }
#line 1488 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 1488 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1488 "declarative_tree.m"
              {
#line 1488 "declarative_tree.m"
                mdb__declarative_tree__AtomicGoalId_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_114_114, (MR_Integer) 0)));
#line 1490 "declarative_tree.m"
                {
#line 1490 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(mdb__declarative_tree__AtomicGoalId_125, mdb__declarative_tree__Atom_127);
                }
#line 1488 "declarative_tree.m"
              }
#line 1488 "declarative_tree.m"
            else
#line 1492 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 1);
#line 1497 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1495 "declarative_tree.m"
              {
#line 1495 "declarative_tree.m"
                {
#line 1495 "declarative_tree.m"
                  mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__CallInfo_87, 0) = mdb__declarative_tree__ContourHeadId_85;
#line 1495 "declarative_tree.m"
                }
#line 1496 "declarative_tree.m"
                mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__ContourTail_86;
#line 1495 "declarative_tree.m"
              }
#line 1497 "declarative_tree.m"
            else
#line 1502 "declarative_tree.m"
            if ((mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0))
#line 1503 "declarative_tree.m"
              {
#line 1504 "declarative_tree.m"
                mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "declarative_tree.m"
                mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__Contour_25;
#line 1503 "declarative_tree.m"
              }
#line 1502 "declarative_tree.m"
            else
#line 1499 "declarative_tree.m"
              {
#line 1500 "declarative_tree.m"
                {
#line 1500 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[22])));
                }
#line 1499 "declarative_tree.m"
              }
#line 1497 "declarative_tree.m"
          }
#line 1508 "declarative_tree.m"
        else
#line 1514 "declarative_tree.m"
        if ((mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0))
#line 1515 "declarative_tree.m"
          {
#line 1516 "declarative_tree.m"
            mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1517 "declarative_tree.m"
            mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__Contour_25;
#line 1515 "declarative_tree.m"
          }
#line 1514 "declarative_tree.m"
        else
#line 1510 "declarative_tree.m"
          {
#line 1511 "declarative_tree.m"
            {
#line 1511 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[23])));
            }
#line 1510 "declarative_tree.m"
          }
#line 1520 "declarative_tree.m"
        {
#line 1520 "declarative_tree.m"
          mdb__declarative_tree__Primitive_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1520 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1520 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1520 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1520 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1520 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1520 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 5) = ((MR_Box) (mdb__declarative_tree__CallInfo_87));
#line 1520 "declarative_tree.m"
        }
#line 1522 "declarative_tree.m"
        {
#line 1522 "declarative_tree.m"
          mdb__declarative_tree__Primitives1_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1522 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_133, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_132));
#line 1522 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_133, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1522 "declarative_tree.m"
        }
#line 1523 "declarative_tree.m"
        {
#line 1523 "declarative_tree.m"
          return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, mdb__declarative_tree__NewContour_88, mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_133);
        }
#line 1483 "declarative_tree.m"
      }
#line 1481 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_32;
#line 1481 "declarative_tree.m"
  }
#line 1401 "declarative_tree.m"
}

#line 1230 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177,
#line 1230 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_13,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Goal_14,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_15,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_16,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_17,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_18,
#line 1230 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_19,
#line 1230 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_20,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_21,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_22,
#line 1230 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_23)
#line 1230 "declarative_tree.m"
{
#line 1236 "declarative_tree.m"
  {
#line 1236 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1236 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_24;
#line 1236 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalExpr_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Goal_14, (MR_Integer) 0)));
#line 1237 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Goal_14, (MR_Integer) 1)));

#line 1244 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 0))))
#line 1239 "declarative_tree.m"
      {
#line 1239 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Conjs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1239 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ConjPaths_29;
#line 1239 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_137_137;

#line 1240 "declarative_tree.m"
        {
#line 1240 "declarative_tree.m"
          mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(mdb__declarative_tree__Conjs_28, mdb__declarative_tree__Path_15, (MR_Integer) 1, &mdb__declarative_tree__ConjPaths_29);
        }
#line 1241 "declarative_tree.m"
        {
#line 1241 "declarative_tree.m"
          mdb__declarative_tree__V_137_137 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0, mdb__declarative_tree__ConjPaths_29, mdb__declarative_tree__GoalPaths_16);
        }
#line 1241 "declarative_tree.m"
        {
#line 1241 "declarative_tree.m"
          return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_137_137, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
        }
#line 1239 "declarative_tree.m"
      }
#line 1244 "declarative_tree.m"
    else
#line 1244 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 1))))
#line 1268 "declarative_tree.m"
      {
#line 1268 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Disjs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1287 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourTail_45;
#line 1287 "declarative_tree.m"
        MR_Word mdb__declarative_tree__DisjPath_51;
#line 1287 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__N_54;
#line 1270 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourHeadNode_44;
#line 1270 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Label_47;
#line 1270 "declarative_tree.m"
        MR_String mdb__declarative_tree__DisjPathStr_50;
#line 1270 "declarative_tree.m"
        MR_Word mdb__declarative_tree__DisjInitialPath_52;
#line 1270 "declarative_tree.m"
        MR_Word mdb__declarative_tree__DisjLastStep_53;
#line 1270 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_128_128;
#line 1270 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43;

#line 1270 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1270 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1270 "declarative_tree.m"
          {
#line 1270 "declarative_tree.m"
            mdb__declarative_tree__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1270 "declarative_tree.m"
            mdb__declarative_tree__ContourTail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1270 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_128_128, (MR_Integer) 0));
#line 1270 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_128_128, (MR_Integer) 1)));
#line 1273 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1272 "declarative_tree.m"
              {
#line 1272 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 1));

#line 1272 "declarative_tree.m"
                mdb__declarative_tree__Label_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 2)));
#line 1272 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1272 "declarative_tree.m"
              }
#line 1273 "declarative_tree.m"
            else
#line 1273 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1274 "declarative_tree.m"
              {
#line 1274 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_48_48 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 1));
#line 1274 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_49_49;

#line 1274 "declarative_tree.m"
                mdb__declarative_tree__Label_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 2)));
#line 1274 "declarative_tree.m"
                mdb__declarative_tree__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 3));
#line 1274 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1274 "declarative_tree.m"
              }
#line 1273 "declarative_tree.m"
            else
#line 1273 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1270 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1270 "declarative_tree.m"
              {
#line 1276 "declarative_tree.m"
                {
#line 1276 "declarative_tree.m"
                  mdb__declarative_tree__DisjPathStr_50 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_47);
                }
#line 1277 "declarative_tree.m"
                {
#line 1277 "declarative_tree.m"
                  mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__DisjPathStr_50, &mdb__declarative_tree__DisjPath_51);
                }
#line 1278 "declarative_tree.m"
                {
#line 1278 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__DisjPath_51, &mdb__declarative_tree__DisjInitialPath_52, &mdb__declarative_tree__DisjLastStep_53);
                }
#line 1270 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1270 "declarative_tree.m"
                  {
#line 1279 "declarative_tree.m"
                    {
#line 1279 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__DisjInitialPath_52, mdb__declarative_tree__Path_15);
                    }
#line 1270 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1270 "declarative_tree.m"
                      {
#line 1280 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__DisjLastStep_53)) == (MR_mktag((MR_Integer) 2)));
#line 1280 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1280 "declarative_tree.m"
                          mdb__declarative_tree__N_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__DisjLastStep_53, (MR_Integer) 0)));
#line 1270 "declarative_tree.m"
                      }
#line 1270 "declarative_tree.m"
                  }
#line 1270 "declarative_tree.m"
              }
#line 1270 "declarative_tree.m"
          }
#line 1287 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1282 "declarative_tree.m"
          {
#line 1282 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Disj_55;
#line 1282 "declarative_tree.m"
            MR_Word mdb__declarative_tree__DisjAndPath_56;
#line 1282 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_129_129;
#line 1282 "declarative_tree.m"
            MR_Box mdb__declarative_tree__conv0_Disj_55;

#line 1282 "declarative_tree.m"
            {
#line 1282 "declarative_tree.m"
              mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], mdb__declarative_tree__Disjs_42, mdb__declarative_tree__N_54, &mdb__declarative_tree__conv0_Disj_55);
            }
#line 1282 "declarative_tree.m"
            mdb__declarative_tree__Disj_55 = ((MR_Word) mdb__declarative_tree__conv0_Disj_55);
#line 1283 "declarative_tree.m"
            {
#line 1283 "declarative_tree.m"
              mdb__declarative_tree__DisjAndPath_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1283 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__DisjAndPath_56, 0) = ((MR_Box) (mdb__declarative_tree__Disj_55));
#line 1283 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__DisjAndPath_56, 1) = ((MR_Box) (mdb__declarative_tree__DisjPath_51));
#line 1283 "declarative_tree.m"
            }
#line 1284 "declarative_tree.m"
            {
#line 1284 "declarative_tree.m"
              mdb__declarative_tree__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_129_129, 0) = ((MR_Box) (mdb__declarative_tree__DisjAndPath_56));
#line 1284 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_129_129, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1284 "declarative_tree.m"
            }
#line 1284 "declarative_tree.m"
            {
#line 1284 "declarative_tree.m"
              return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_129_129, mdb__declarative_tree__ContourTail_45, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
            }
#line 1282 "declarative_tree.m"
          }
#line 1287 "declarative_tree.m"
        else
#line 1288 "declarative_tree.m"
          {
#line 1288 "declarative_tree.m"
            {
#line 1288 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[14])));
            }
#line 1288 "declarative_tree.m"
          }
#line 1268 "declarative_tree.m"
      }
#line 1244 "declarative_tree.m"
    else
#line 1244 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 2))))
#line 1291 "declarative_tree.m"
      {
#line 1291 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1291 "declarative_tree.m"
        MR_Integer mdb__declarative_tree___SwitchVar_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1291 "declarative_tree.m"
        MR_Word mdb__declarative_tree___SwitchCanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1307 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ArmPath_63;
#line 1307 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourTail_141;
#line 1307 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__N_143;
#line 1293 "declarative_tree.m"
        MR_String mdb__declarative_tree__ArmPathStr_62;
#line 1293 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ArmInitialPath_64;
#line 1293 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ArmLastStep_65;
#line 1293 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_123_123;
#line 1293 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourHeadNode_138;
#line 1293 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Label_139;
#line 1293 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_60_60;
#line 1294 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_61_61;
#line 1299 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_66_66;

#line 1293 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1293 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1293 "declarative_tree.m"
          {
#line 1293 "declarative_tree.m"
            mdb__declarative_tree__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1293 "declarative_tree.m"
            mdb__declarative_tree__ContourTail_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1293 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_123_123, (MR_Integer) 0));
#line 1293 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_123_123, (MR_Integer) 1)));
#line 1294 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1294 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1294 "declarative_tree.m"
              {
#line 1294 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 1));
#line 1294 "declarative_tree.m"
                mdb__declarative_tree__Label_139 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 2)));
#line 1295 "declarative_tree.m"
                {
#line 1295 "declarative_tree.m"
                  mdb__declarative_tree__ArmPathStr_62 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_139);
                }
#line 1296 "declarative_tree.m"
                {
#line 1296 "declarative_tree.m"
                  mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__ArmPathStr_62, &mdb__declarative_tree__ArmPath_63);
                }
#line 1297 "declarative_tree.m"
                {
#line 1297 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__ArmPath_63, &mdb__declarative_tree__ArmInitialPath_64, &mdb__declarative_tree__ArmLastStep_65);
                }
#line 1293 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1293 "declarative_tree.m"
                  {
#line 1298 "declarative_tree.m"
                    {
#line 1298 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__ArmInitialPath_64, mdb__declarative_tree__Path_15);
                    }
#line 1293 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1293 "declarative_tree.m"
                      {
#line 1299 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ArmLastStep_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1299 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1299 "declarative_tree.m"
                          {
#line 1299 "declarative_tree.m"
                            mdb__declarative_tree__N_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 1)));
#line 1299 "declarative_tree.m"
                            mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 2)));
#line 1299 "declarative_tree.m"
                          }
#line 1293 "declarative_tree.m"
                      }
#line 1293 "declarative_tree.m"
                  }
#line 1294 "declarative_tree.m"
              }
#line 1293 "declarative_tree.m"
          }
#line 1307 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1301 "declarative_tree.m"
          {
#line 1301 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Case_67;
#line 1301 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Arm_70;
#line 1301 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArmAndPath_71;
#line 1301 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_124_124;
#line 1301 "declarative_tree.m"
            MR_Box mdb__declarative_tree__conv1_Case_67;
#line 1302 "declarative_tree.m"
            MR_Word mdb__declarative_tree___ConsId_68;
#line 1302 "declarative_tree.m"
            MR_Word mdb__declarative_tree___ConsIdArity_69;

#line 1301 "declarative_tree.m"
            {
#line 1301 "declarative_tree.m"
              mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[2], mdb__declarative_tree__Cases_59, mdb__declarative_tree__N_143, &mdb__declarative_tree__conv1_Case_67);
            }
#line 1301 "declarative_tree.m"
            mdb__declarative_tree__Case_67 = ((MR_Word) mdb__declarative_tree__conv1_Case_67);
#line 1302 "declarative_tree.m"
            mdb__declarative_tree___ConsId_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 0)));
#line 1302 "declarative_tree.m"
            mdb__declarative_tree___ConsIdArity_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 1)));
#line 1302 "declarative_tree.m"
            mdb__declarative_tree__Arm_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 2)));
#line 1303 "declarative_tree.m"
            {
#line 1303 "declarative_tree.m"
              mdb__declarative_tree__ArmAndPath_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArmAndPath_71, 0) = ((MR_Box) (mdb__declarative_tree__Arm_70));
#line 1303 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArmAndPath_71, 1) = ((MR_Box) (mdb__declarative_tree__ArmPath_63));
#line 1303 "declarative_tree.m"
            }
#line 1304 "declarative_tree.m"
            {
#line 1304 "declarative_tree.m"
              mdb__declarative_tree__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_124_124, 0) = ((MR_Box) (mdb__declarative_tree__ArmAndPath_71));
#line 1304 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_124_124, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1304 "declarative_tree.m"
            }
#line 1304 "declarative_tree.m"
            {
#line 1304 "declarative_tree.m"
              return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_124_124, mdb__declarative_tree__ContourTail_141, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
            }
#line 1301 "declarative_tree.m"
          }
#line 1307 "declarative_tree.m"
        else
#line 1308 "declarative_tree.m"
          {
#line 1308 "declarative_tree.m"
            {
#line 1308 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[15])));
            }
#line 1308 "declarative_tree.m"
          }
#line 1291 "declarative_tree.m"
      }
#line 1244 "declarative_tree.m"
    else
#line 1244 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1252 "declarative_tree.m"
      {
#line 1252 "declarative_tree.m"
        MR_String mdb__declarative_tree__File_34 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1252 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Line_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1252 "declarative_tree.m"
        MR_Word mdb__declarative_tree__BoundVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 3)));
#line 1252 "declarative_tree.m"
        MR_Word mdb__declarative_tree__AtomicGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 4)));
#line 1252 "declarative_tree.m"
        MR_Word mdb__declarative_tree__GeneratesEvent_38;

#line 1253 "declarative_tree.m"
        {
#line 1253 "declarative_tree.m"
          mdb__declarative_tree__GeneratesEvent_38 = mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_f_0(mdb__declarative_tree__AtomicGoal_37);
        }
#line 1260 "declarative_tree.m"
        if ((mdb__declarative_tree__GeneratesEvent_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1261 "declarative_tree.m"
          {
#line 1261 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Primitive_40;
#line 1261 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Primitives1_41;

#line 1262 "declarative_tree.m"
            {
#line 1262 "declarative_tree.m"
              mdb__declarative_tree__Primitive_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1262 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 0) = ((MR_Box) (mdb__declarative_tree__File_34));
#line 1262 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 1) = ((MR_Box) (mdb__declarative_tree__Line_35));
#line 1262 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_36));
#line 1262 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_37));
#line 1262 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 4) = ((MR_Box) (mdb__declarative_tree__Path_15));
#line 1262 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1262 "declarative_tree.m"
            }
#line 1263 "declarative_tree.m"
            {
#line 1263 "declarative_tree.m"
              mdb__declarative_tree__Primitives1_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_41, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_40));
#line 1263 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_41, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_23));
#line 1263 "declarative_tree.m"
            }
#line 1264 "declarative_tree.m"
            {
#line 1264 "declarative_tree.m"
              return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives1_41);
            }
#line 1261 "declarative_tree.m"
          }
#line 1260 "declarative_tree.m"
        else
#line 1255 "declarative_tree.m"
          {
#line 1255 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoalArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GeneratesEvent_38, (MR_Integer) 0)));

#line 1256 "declarative_tree.m"
            {
#line 1256 "declarative_tree.m"
              return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__File_34, mdb__declarative_tree__Line_35, mdb__declarative_tree__BoundVars_36, mdb__declarative_tree__AtomicGoal_37, mdb__declarative_tree__AtomicGoalArgs_39, mdb__declarative_tree__Path_15, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
            }
#line 1255 "declarative_tree.m"
          }
#line 1252 "declarative_tree.m"
      }
#line 1244 "declarative_tree.m"
    else
#line 1244 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1311 "declarative_tree.m"
      {
#line 1311 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Cond_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1311 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Then_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1311 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Else_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 3)));
#line 1327 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CondPath_79;
#line 1327 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourTail_164;
#line 1313 "declarative_tree.m"
        MR_String mdb__declarative_tree__CondPathStr_78;
#line 1313 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CondInitialPath_80;
#line 1313 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CondLastStep_81;
#line 1313 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_113_113;
#line 1313 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourHeadNode_148;
#line 1313 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Label_149;
#line 1313 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_75_75;
#line 1314 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_76_76;
#line 1314 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_77_77;

#line 1313 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1313 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1313 "declarative_tree.m"
          {
#line 1313 "declarative_tree.m"
            mdb__declarative_tree__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1313 "declarative_tree.m"
            mdb__declarative_tree__ContourTail_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1313 "declarative_tree.m"
            mdb__declarative_tree__V_75_75 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 0));
#line 1313 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 1)));
#line 1314 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1314 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1314 "declarative_tree.m"
              {
#line 1314 "declarative_tree.m"
                mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 1));
#line 1314 "declarative_tree.m"
                mdb__declarative_tree__Label_149 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 2)));
#line 1314 "declarative_tree.m"
                mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 3)));
#line 1315 "declarative_tree.m"
                {
#line 1315 "declarative_tree.m"
                  mdb__declarative_tree__CondPathStr_78 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_149);
                }
#line 1316 "declarative_tree.m"
                {
#line 1316 "declarative_tree.m"
                  mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CondPathStr_78, &mdb__declarative_tree__CondPath_79);
                }
#line 1317 "declarative_tree.m"
                {
#line 1317 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__CondPath_79, &mdb__declarative_tree__CondInitialPath_80, &mdb__declarative_tree__CondLastStep_81);
                }
#line 1313 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1313 "declarative_tree.m"
                  {
#line 1318 "declarative_tree.m"
                    {
#line 1318 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CondInitialPath_80, mdb__declarative_tree__Path_15);
                    }
#line 1313 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1319 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = (mdb__declarative_tree__CondLastStep_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1313 "declarative_tree.m"
                  }
#line 1314 "declarative_tree.m"
              }
#line 1313 "declarative_tree.m"
          }
#line 1327 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1321 "declarative_tree.m"
          {
#line 1321 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ThenPath_82;
#line 1321 "declarative_tree.m"
            MR_Word mdb__declarative_tree__CondAndPath_83;
#line 1321 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ThenAndPath_84;
#line 1321 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_115_115;
#line 1321 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_116_116;

#line 1321 "declarative_tree.m"
            {
#line 1321 "declarative_tree.m"
              mdb__declarative_tree__ThenPath_82 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
            }
#line 1322 "declarative_tree.m"
            {
#line 1322 "declarative_tree.m"
              mdb__declarative_tree__CondAndPath_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__CondAndPath_83, 0) = ((MR_Box) (mdb__declarative_tree__Cond_72));
#line 1322 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__CondAndPath_83, 1) = ((MR_Box) (mdb__declarative_tree__CondPath_79));
#line 1322 "declarative_tree.m"
            }
#line 1323 "declarative_tree.m"
            {
#line 1323 "declarative_tree.m"
              mdb__declarative_tree__ThenAndPath_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__ThenAndPath_84, 0) = ((MR_Box) (mdb__declarative_tree__Then_73));
#line 1323 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__ThenAndPath_84, 1) = ((MR_Box) (mdb__declarative_tree__ThenPath_82));
#line 1323 "declarative_tree.m"
            }
#line 1325 "declarative_tree.m"
            {
#line 1325 "declarative_tree.m"
              mdb__declarative_tree__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_116_116, 0) = ((MR_Box) (mdb__declarative_tree__ThenAndPath_84));
#line 1325 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_116_116, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1325 "declarative_tree.m"
            }
#line 1325 "declarative_tree.m"
            {
#line 1325 "declarative_tree.m"
              mdb__declarative_tree__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_115_115, 0) = ((MR_Box) (mdb__declarative_tree__CondAndPath_83));
#line 1325 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_115_115, 1) = ((MR_Box) (mdb__declarative_tree__V_116_116));
#line 1325 "declarative_tree.m"
            }
#line 1324 "declarative_tree.m"
            {
#line 1324 "declarative_tree.m"
              return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_115_115, mdb__declarative_tree__ContourTail_164, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
            }
#line 1321 "declarative_tree.m"
          }
#line 1327 "declarative_tree.m"
        else
#line 1343 "declarative_tree.m"
          {
#line 1343 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourTail_157;
#line 1328 "declarative_tree.m"
            MR_Box mdb__declarative_tree__ElseCondId_87;
#line 1328 "declarative_tree.m"
            MR_Word mdb__declarative_tree__CondNode_89;
#line 1328 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_117_117;
#line 1328 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourHeadNode_150;
#line 1328 "declarative_tree.m"
            MR_Box mdb__declarative_tree__Label_151;
#line 1328 "declarative_tree.m"
            MR_String mdb__declarative_tree__CondPathStr_152;
#line 1328 "declarative_tree.m"
            MR_Word mdb__declarative_tree__CondPath_153;
#line 1328 "declarative_tree.m"
            MR_Word mdb__declarative_tree__CondInitialPath_154;
#line 1328 "declarative_tree.m"
            MR_Word mdb__declarative_tree__CondLastStep_155;
#line 1328 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_85_85;
#line 1329 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_86_86;
#line 1329 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_88_88;
#line 1331 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_90_90;
#line 1331 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_91_91;

#line 1328 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1328 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1328 "declarative_tree.m"
              {
#line 1328 "declarative_tree.m"
                mdb__declarative_tree__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1328 "declarative_tree.m"
                mdb__declarative_tree__ContourTail_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1328 "declarative_tree.m"
                mdb__declarative_tree__V_85_85 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_117_117, (MR_Integer) 0));
#line 1328 "declarative_tree.m"
                mdb__declarative_tree__ContourHeadNode_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_117_117, (MR_Integer) 1)));
#line 1329 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_150)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1329 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1329 "declarative_tree.m"
                  {
#line 1329 "declarative_tree.m"
                    mdb__declarative_tree__V_86_86 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 1));
#line 1329 "declarative_tree.m"
                    mdb__declarative_tree__ElseCondId_87 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 2));
#line 1329 "declarative_tree.m"
                    mdb__declarative_tree__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 3)));
#line 1330 "declarative_tree.m"
                    {
#line 1330 "declarative_tree.m"
                      mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__ElseCondId_87, &mdb__declarative_tree__CondNode_89);
                    }
#line 1331 "declarative_tree.m"
                    mdb__declarative_tree__V_90_90 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 1));
#line 1331 "declarative_tree.m"
                    mdb__declarative_tree__Label_151 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 2)));
#line 1331 "declarative_tree.m"
                    mdb__declarative_tree__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 3)));
#line 1332 "declarative_tree.m"
                    {
#line 1332 "declarative_tree.m"
                      mdb__declarative_tree__CondPathStr_152 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_151);
                    }
#line 1333 "declarative_tree.m"
                    {
#line 1333 "declarative_tree.m"
                      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CondPathStr_152, &mdb__declarative_tree__CondPath_153);
                    }
#line 1334 "declarative_tree.m"
                    {
#line 1334 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__CondPath_153, &mdb__declarative_tree__CondInitialPath_154, &mdb__declarative_tree__CondLastStep_155);
                    }
#line 1328 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1328 "declarative_tree.m"
                      {
#line 1335 "declarative_tree.m"
                        {
#line 1335 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CondInitialPath_154, mdb__declarative_tree__Path_15);
                        }
#line 1328 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1336 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = (mdb__declarative_tree__CondLastStep_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "declarative_tree.m"
                      }
#line 1329 "declarative_tree.m"
                  }
#line 1328 "declarative_tree.m"
              }
#line 1343 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1338 "declarative_tree.m"
              {
#line 1338 "declarative_tree.m"
                MR_Word mdb__declarative_tree__ElsePath_92;
#line 1338 "declarative_tree.m"
                MR_Word mdb__declarative_tree__ElseAndPath_93;
#line 1338 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_119_119;

#line 1338 "declarative_tree.m"
                {
#line 1338 "declarative_tree.m"
                  mdb__declarative_tree__ElsePath_92 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                }
#line 1339 "declarative_tree.m"
                {
#line 1339 "declarative_tree.m"
                  mdb__declarative_tree__ElseAndPath_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1339 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__ElseAndPath_93, 0) = ((MR_Box) (mdb__declarative_tree__Else_74));
#line 1339 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__ElseAndPath_93, 1) = ((MR_Box) (mdb__declarative_tree__ElsePath_92));
#line 1339 "declarative_tree.m"
                }
#line 1340 "declarative_tree.m"
                {
#line 1340 "declarative_tree.m"
                  mdb__declarative_tree__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_119_119, 0) = ((MR_Box) (mdb__declarative_tree__ElseAndPath_93));
#line 1340 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_119_119, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1340 "declarative_tree.m"
                }
#line 1340 "declarative_tree.m"
                {
#line 1340 "declarative_tree.m"
                  return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_119_119, mdb__declarative_tree__ContourTail_157, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                }
#line 1338 "declarative_tree.m"
              }
#line 1343 "declarative_tree.m"
            else
#line 1344 "declarative_tree.m"
              {
#line 1344 "declarative_tree.m"
                {
#line 1344 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[16])));
                }
#line 1344 "declarative_tree.m"
              }
#line 1343 "declarative_tree.m"
          }
#line 1311 "declarative_tree.m"
      }
#line 1244 "declarative_tree.m"
    else
#line 1244 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1347 "declarative_tree.m"
      {
#line 1347 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NegGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1355 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourTail_174;
#line 1349 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_105_105;
#line 1349 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourHeadNode_169;
#line 1349 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_95_95;
#line 1350 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_96_96;
#line 1350 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_97_97;
#line 1350 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_98_98;

#line 1349 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1349 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1349 "declarative_tree.m"
          {
#line 1349 "declarative_tree.m"
            mdb__declarative_tree__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1349 "declarative_tree.m"
            mdb__declarative_tree__ContourTail_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1349 "declarative_tree.m"
            mdb__declarative_tree__V_95_95 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_105_105, (MR_Integer) 0));
#line 1349 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_105_105, (MR_Integer) 1)));
#line 1350 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_169)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1350 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1350 "declarative_tree.m"
              {
#line 1350 "declarative_tree.m"
                mdb__declarative_tree__V_96_96 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 1));
#line 1350 "declarative_tree.m"
                mdb__declarative_tree__V_97_97 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 2));
#line 1350 "declarative_tree.m"
                mdb__declarative_tree__V_98_98 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 3)));
#line 1350 "declarative_tree.m"
              }
#line 1349 "declarative_tree.m"
          }
#line 1355 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1353 "declarative_tree.m"
          {
#line 1353 "declarative_tree.m"
            return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__ContourTail_174, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
          }
#line 1355 "declarative_tree.m"
        else
#line 1365 "declarative_tree.m"
          {
#line 1365 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourTail_172;
#line 1356 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_106_106;
#line 1356 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourHeadNode_170;
#line 1356 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_99_99;
#line 1357 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_100_100;
#line 1357 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_101_101;
#line 1357 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_102_102;

#line 1356 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1356 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1356 "declarative_tree.m"
              {
#line 1356 "declarative_tree.m"
                mdb__declarative_tree__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1356 "declarative_tree.m"
                mdb__declarative_tree__ContourTail_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1356 "declarative_tree.m"
                mdb__declarative_tree__V_99_99 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_106_106, (MR_Integer) 0));
#line 1356 "declarative_tree.m"
                mdb__declarative_tree__ContourHeadNode_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_106_106, (MR_Integer) 1)));
#line 1357 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1357 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1357 "declarative_tree.m"
                  {
#line 1357 "declarative_tree.m"
                    mdb__declarative_tree__V_100_100 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 1));
#line 1357 "declarative_tree.m"
                    mdb__declarative_tree__V_101_101 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 2)));
#line 1357 "declarative_tree.m"
                    mdb__declarative_tree__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 3)));
#line 1357 "declarative_tree.m"
                  }
#line 1356 "declarative_tree.m"
              }
#line 1365 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1361 "declarative_tree.m"
              {
#line 1361 "declarative_tree.m"
                MR_Word mdb__declarative_tree__NegPath_103;
#line 1361 "declarative_tree.m"
                MR_Word mdb__declarative_tree__NegAndPath_104;
#line 1361 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_108_108;

#line 1361 "declarative_tree.m"
                {
#line 1361 "declarative_tree.m"
                  mdb__declarative_tree__NegPath_103 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
                }
#line 1362 "declarative_tree.m"
                {
#line 1362 "declarative_tree.m"
                  mdb__declarative_tree__NegAndPath_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__NegAndPath_104, 0) = ((MR_Box) (mdb__declarative_tree__NegGoal_94));
#line 1362 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__NegAndPath_104, 1) = ((MR_Box) (mdb__declarative_tree__NegPath_103));
#line 1362 "declarative_tree.m"
                }
#line 1363 "declarative_tree.m"
                {
#line 1363 "declarative_tree.m"
                  mdb__declarative_tree__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_108_108, 0) = ((MR_Box) (mdb__declarative_tree__NegAndPath_104));
#line 1363 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1363 "declarative_tree.m"
                }
#line 1363 "declarative_tree.m"
                {
#line 1363 "declarative_tree.m"
                  return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_108_108, mdb__declarative_tree__ContourTail_172, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                }
#line 1361 "declarative_tree.m"
              }
#line 1365 "declarative_tree.m"
            else
#line 1366 "declarative_tree.m"
              {
#line 1366 "declarative_tree.m"
                {
#line 1366 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[17])));
                }
#line 1366 "declarative_tree.m"
              }
#line 1365 "declarative_tree.m"
          }
#line 1347 "declarative_tree.m"
      }
#line 1244 "declarative_tree.m"
    else
#line 1245 "declarative_tree.m"
      {
#line 1245 "declarative_tree.m"
        MR_Word mdb__declarative_tree__InnerGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1245 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeCut_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1245 "declarative_tree.m"
        MR_Word mdb__declarative_tree__InnerPath_32;
#line 1245 "declarative_tree.m"
        MR_Word mdb__declarative_tree__InnerAndPath_33;
#line 1245 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_134_134;
#line 1245 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_135_135;

#line 1246 "declarative_tree.m"
        {
#line 1246 "declarative_tree.m"
          mdb__declarative_tree__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "declarative_tree.m"
          MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1246 "declarative_tree.m"
          MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_134_134, 1) = ((MR_Box) (mdb__declarative_tree__MaybeCut_31));
#line 1246 "declarative_tree.m"
        }
#line 1246 "declarative_tree.m"
        {
#line 1246 "declarative_tree.m"
          mdb__declarative_tree__InnerPath_32 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, mdb__declarative_tree__V_134_134);
        }
#line 1247 "declarative_tree.m"
        {
#line 1247 "declarative_tree.m"
          mdb__declarative_tree__InnerAndPath_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1247 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__InnerAndPath_33, 0) = ((MR_Box) (mdb__declarative_tree__InnerGoal_30));
#line 1247 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__InnerAndPath_33, 1) = ((MR_Box) (mdb__declarative_tree__InnerPath_32));
#line 1247 "declarative_tree.m"
        }
#line 1248 "declarative_tree.m"
        {
#line 1248 "declarative_tree.m"
          mdb__declarative_tree__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_135_135, 0) = ((MR_Box) (mdb__declarative_tree__InnerAndPath_33));
#line 1248 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_135_135, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1248 "declarative_tree.m"
        }
#line 1248 "declarative_tree.m"
        {
#line 1248 "declarative_tree.m"
          return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_135_135, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
        }
#line 1245 "declarative_tree.m"
      }
#line 1236 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_24;
#line 1236 "declarative_tree.m"
  }
#line 1230 "declarative_tree.m"
}

#line 1151 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1151 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_11,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_12,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_13,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_14,
#line 1151 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_15,
#line 1151 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_16,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_17,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_18,
#line 1151 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_19)
#line 1151 "declarative_tree.m"
{
#line 1157 "declarative_tree.m"
  {
#line 1157 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_18 == (MR_Integer) 0);
#line 1157 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_20;
#line 1157 "declarative_tree.m"
    MR_Word mdb__declarative_tree__AdjustedContour_21;
#line 1175 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__PolyConst2_40;
#line 1175 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_58;
#line 1175 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EndPath_59;
#line 1175 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybeReturnLabel_66;
#line 1175 "declarative_tree.m"
    MR_String mdb__declarative_tree__CallPathStr_70;
#line 1175 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallPath_71;
#line 1175 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_72_72;
#line 1175 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_73_73;
#line 13722 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__TypeInfo_41_41;
#line 1208 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_57_57;
#line 1209 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_60_60;
#line 1209 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_61_61;
#line 1209 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_62_62;
#line 1209 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_63_63;
#line 1209 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_64_64;
#line 1209 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_65_65;
#line 1209 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_67_67;
#line 1209 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_68_68;
#line 1209 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_69_69;

#line 1159 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1159 "declarative_tree.m"
      {
#line 1216 "declarative_tree.m"
        {
#line 1216 "declarative_tree.m"
          MR_Word mdb__declarative_tree__NextGoal_52;
#line 1216 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_55_55;
#line 1216 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_56_56;
#line 1216 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_54_54;
#line 1216 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_53_53;

#line 1216 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__GoalPaths_12)) == (MR_mktag((MR_Integer) 1)));
#line 1216 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1216 "declarative_tree.m"
            {
#line 1216 "declarative_tree.m"
              mdb__declarative_tree__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));
#line 1216 "declarative_tree.m"
              mdb__declarative_tree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1216 "declarative_tree.m"
              mdb__declarative_tree__NextGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_55_55, (MR_Integer) 0)));
#line 1216 "declarative_tree.m"
              mdb__declarative_tree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_55_55, (MR_Integer) 1)));
#line 1217 "declarative_tree.m"
              {
#line 1217 "declarative_tree.m"
                mdb__declarative_tree__V_56_56 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(mdb__declarative_tree__NextGoal_52);
              }
#line 1217 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_56_56 == (MR_Integer) 1);
#line 1216 "declarative_tree.m"
            }
#line 1216 "declarative_tree.m"
        }
#line 1162 "declarative_tree.m"
        if (!(mdb__declarative_tree__succeeded))
#line 1163 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "declarative_tree.m"
      }
#line 1171 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1170 "declarative_tree.m"
      {
#line 13797 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_39_39;

#line 13800 "mdb.declarative_tree.c"
        {
#line 13802 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_39_39);
        }
#line 1170 "declarative_tree.m"
        {
#line 1170 "declarative_tree.m"
          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_tree__Contour_13, &mdb__declarative_tree__AdjustedContour_21);
        }
#line 1170 "declarative_tree.m"
      }
#line 1171 "declarative_tree.m"
    else
#line 1172 "declarative_tree.m"
      mdb__declarative_tree__AdjustedContour_21 = mdb__declarative_tree__Contour_13;
#line 1175 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_18 == (MR_Integer) 0);
#line 1175 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1175 "declarative_tree.m"
      {
#line 13822 "mdb.declarative_tree.c"
        mdb__declarative_tree__PolyConst2_40 = (MR_Integer) 2;
#line 13824 "mdb.declarative_tree.c"
        {
#line 13826 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__PolyConst2_40, &mdb__declarative_tree__TypeInfo_41_41);
        }
#line 1208 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__AdjustedContour_21)) == (MR_mktag((MR_Integer) 1)));
#line 1208 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1208 "declarative_tree.m"
          {
#line 1208 "declarative_tree.m"
            mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedContour_21, (MR_Integer) 0)));
#line 1208 "declarative_tree.m"
            mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedContour_21, (MR_Integer) 1)));
#line 1208 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1175 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1175 "declarative_tree.m"
              {
#line 1208 "declarative_tree.m"
                mdb__declarative_tree__V_57_57 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_72_72, (MR_Integer) 0));
#line 1208 "declarative_tree.m"
                mdb__declarative_tree__Node_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_72_72, (MR_Integer) 1)));
#line 1208 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeEnd_14)) == (MR_mktag((MR_Integer) 1)));
#line 1208 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1208 "declarative_tree.m"
                  {
#line 1208 "declarative_tree.m"
                    mdb__declarative_tree__EndPath_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeEnd_14, (MR_Integer) 0)));
#line 1209 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_58)) == (MR_mktag((MR_Integer) 0)));
#line 1209 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1209 "declarative_tree.m"
                      {
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 0));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 1));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 2)));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 3)));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 4)));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 5)));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__MaybeReturnLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 6)));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 7)));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 8)));
#line 1209 "declarative_tree.m"
                        mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 9)));
#line 1210 "declarative_tree.m"
                        {
#line 1210 "declarative_tree.m"
                          mdb__declarative_tree__CallPathStr_70 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__MaybeReturnLabel_66);
                        }
#line 1211 "declarative_tree.m"
                        {
#line 1211 "declarative_tree.m"
                          mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_70, &mdb__declarative_tree__CallPath_71);
                        }
#line 1212 "declarative_tree.m"
                        {
#line 1212 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CallPath_71, mdb__declarative_tree__EndPath_59);
                        }
#line 1175 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1175 "declarative_tree.m"
                          {
#line 1216 "declarative_tree.m"
                            {
#line 1216 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__NextGoal_75;
#line 1216 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_78_78;
#line 1216 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_79_79;
#line 1216 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_77_77;
#line 1216 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_76_76;

#line 1216 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__GoalPaths_12)) == (MR_mktag((MR_Integer) 1)));
#line 1216 "declarative_tree.m"
                              if (mdb__declarative_tree__succeeded)
#line 1216 "declarative_tree.m"
                                {
#line 1216 "declarative_tree.m"
                                  mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));
#line 1216 "declarative_tree.m"
                                  mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1216 "declarative_tree.m"
                                  mdb__declarative_tree__NextGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_78_78, (MR_Integer) 0)));
#line 1216 "declarative_tree.m"
                                  mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_78_78, (MR_Integer) 1)));
#line 1217 "declarative_tree.m"
                                  {
#line 1217 "declarative_tree.m"
                                    mdb__declarative_tree__V_79_79 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(mdb__declarative_tree__NextGoal_75);
                                  }
#line 1217 "declarative_tree.m"
                                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_79_79 == (MR_Integer) 1);
#line 1216 "declarative_tree.m"
                                }
#line 1216 "declarative_tree.m"
                            }
#line 1179 "declarative_tree.m"
                            if (!(mdb__declarative_tree__succeeded))
#line 1180 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = (mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1175 "declarative_tree.m"
                          }
#line 1209 "declarative_tree.m"
                      }
#line 1208 "declarative_tree.m"
                  }
#line 1175 "declarative_tree.m"
              }
#line 1208 "declarative_tree.m"
          }
#line 1175 "declarative_tree.m"
      }
#line 1188 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1187 "declarative_tree.m"
      mdb__declarative_tree__MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "declarative_tree.m"
    else
#line 1194 "declarative_tree.m"
    if ((mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "declarative_tree.m"
      {
#line 1195 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Var_25;
#line 1195 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_34_34;

#line 1927 "declarative_tree.m"
        {
#line 1927 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1196__1_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__AdjustedContour_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1929 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1928 "declarative_tree.m"
          {
#line 1928 "declarative_tree.m"
          }
#line 1929 "declarative_tree.m"
        else
#line 1930 "declarative_tree.m"
          {
#line 1930 "declarative_tree.m"
            {
#line 1930 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
            }
#line 1930 "declarative_tree.m"
          }
#line 1198 "declarative_tree.m"
        {
#line 1198 "declarative_tree.m"
          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__MaybeEnd_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "make_primitive_list", (MR_String) "found end when looking for call");
        }
#line 1200 "declarative_tree.m"
        {
#line 1200 "declarative_tree.m"
          mdb__declarative_tree__find_variable_in_args_4_p_0(mdb__declarative_tree__HeadVars_17, mdb__declarative_tree__ArgNum_15, mdb__declarative_tree__TotalArgs_16, &mdb__declarative_tree__Var_25);
        }
#line 1201 "declarative_tree.m"
        {
#line 1201 "declarative_tree.m"
          mdb__declarative_tree__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1201 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_19));
#line 1201 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 1) = ((MR_Box) (mdb__declarative_tree__Var_25));
#line 1201 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1201 "declarative_tree.m"
        }
#line 1201 "declarative_tree.m"
        {
#line 1201 "declarative_tree.m"
          mdb__declarative_tree__MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_20, 0) = ((MR_Box) (mdb__declarative_tree__V_34_34));
#line 1201 "declarative_tree.m"
        }
#line 1195 "declarative_tree.m"
      }
#line 1194 "declarative_tree.m"
    else
#line 1190 "declarative_tree.m"
      {
#line 1190 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goal_22;
#line 1190 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Path_23;
#line 1190 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Tail_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1190 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));

#line 1190 "declarative_tree.m"
        mdb__declarative_tree__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_36_36, (MR_Integer) 0)));
#line 1190 "declarative_tree.m"
        mdb__declarative_tree__Path_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_36_36, (MR_Integer) 1)));
#line 1191 "declarative_tree.m"
        {
#line 1191 "declarative_tree.m"
          return mdb__declarative_tree__MaybePrims_20 = mdb__declarative_tree__match_goal_to_contour_event_11_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__Store_11, mdb__declarative_tree__Goal_22, mdb__declarative_tree__Path_23, mdb__declarative_tree__Tail_24, mdb__declarative_tree__AdjustedContour_21, mdb__declarative_tree__MaybeEnd_14, mdb__declarative_tree__ArgNum_15, mdb__declarative_tree__TotalArgs_16, mdb__declarative_tree__HeadVars_17, mdb__declarative_tree__AllTraced_18, mdb__declarative_tree__Primitives0_19);
        }
#line 1190 "declarative_tree.m"
      }
#line 1157 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_20;
#line 1157 "declarative_tree.m"
  }
#line 1151 "declarative_tree.m"
}

#line 1114 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
#line 1114 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 1114 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1114 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1114 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__FinalAtom_7)
#line 1114 "declarative_tree.m"
{
#line 1117 "declarative_tree.m"
  {
#line 1117 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1117 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_40_52;
#line 1117 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Exit_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1117 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitAtom_20;
#line 1117 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_21;
#line 1117 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_22;
#line 1117 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CallIoSeq_23;
#line 1117 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ExitIoSeq_24;
#line 1117 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__PolyConst2_51;
#line 1117 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 1118 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_8_8;
#line 1118 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_9_9;
#line 1118 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_10_10;
#line 1118 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_11_11;
#line 1118 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1118 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13;
#line 1118 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 1118 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15;
#line 107 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_28_28;
#line 107 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_29_29;
#line 107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_30_30;
#line 107 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_31_31;
#line 107 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 107 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 107 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;
#line 109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_35_35;
#line 109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_36_36;
#line 109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_38_38;
#line 109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_40_40;
#line 109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_41_41;
#line 109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_42_42;
#line 109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_43_43;
#line 110 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_44_44;
#line 110 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_45_45;
#line 110 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_46_46;
#line 110 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_47_47;
#line 110 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_48_48;
#line 110 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_49_49;
#line 110 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_50_50;

#line 1118 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Exit_6)) == (MR_mktag((MR_Integer) 1)));
#line 1118 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1118 "declarative_tree.m"
      {
#line 1118 "declarative_tree.m"
        mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 1118 "declarative_tree.m"
        mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 1118 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 1118 "declarative_tree.m"
        mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 1118 "declarative_tree.m"
        mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 1118 "declarative_tree.m"
        mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 1118 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 1118 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 14176 "mdb.declarative_tree.c"
        mdb__declarative_tree__PolyConst2_51 = (MR_Integer) 2;
#line 14178 "mdb.declarative_tree.c"
        {
#line 14180 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__PolyConst2_51, &mdb__declarative_tree__TypeInfo_40_52);
        }
#line 106 "declarative_tree.m"
        {
#line 106 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_52, mdb__declarative_tree__Exit_6);
        }
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 108 "declarative_tree.m"
        {
#line 108 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_21, &mdb__declarative_tree__Call_22);
        }
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 0));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 1));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 2)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 3)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 4)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 5)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 6)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 7)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__CallIoSeq_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 8)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 9)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__ExitIoSeq_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 110 "declarative_tree.m"
        mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 111 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_23 == mdb__declarative_tree__ExitIoSeq_24);
#line 113 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 112 "declarative_tree.m"
          {
#line 112 "declarative_tree.m"
            {
#line 112 "declarative_tree.m"
              MR_Word base;
#line 112 "declarative_tree.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "declarative_tree.m"
              *mdb__declarative_tree__FinalAtom_7 = base;
#line 112 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_20));
#line 112 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "declarative_tree.m"
            }
#line 112 "declarative_tree.m"
          }
#line 113 "declarative_tree.m"
        else
#line 114 "declarative_tree.m"
          {
#line 114 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_26_26;
#line 114 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_27_27;

#line 115 "declarative_tree.m"
            {
#line 115 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_27_27, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_23));
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_27_27, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_24));
#line 115 "declarative_tree.m"
            }
#line 115 "declarative_tree.m"
            {
#line 115 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 115 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_26_26, 0) = ((MR_Box) (mdb__declarative_tree__V_27_27));
#line 115 "declarative_tree.m"
            }
#line 114 "declarative_tree.m"
            {
#line 114 "declarative_tree.m"
              MR_Word base;
#line 114 "declarative_tree.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "declarative_tree.m"
              *mdb__declarative_tree__FinalAtom_7 = base;
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_20));
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__V_26_26));
#line 114 "declarative_tree.m"
            }
#line 114 "declarative_tree.m"
          }
#line 113 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1118 "declarative_tree.m"
      }
#line 1117 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1117 "declarative_tree.m"
  }
#line 1114 "declarative_tree.m"
}

#line 1112 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
#line 1112 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1112 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 1112 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__wrapper_arg_2)
#line 1112 "declarative_tree.m"
{
#line 1112 "declarative_tree.m"
  {
#line 1112 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1112 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 1112 "declarative_tree.m"
    MR_Word mdb__declarative_tree__conv0_FinalAtom_7;

#line 1112 "declarative_tree.m"
    {
#line 1112 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__get_exit_atom_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 4)), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_FinalAtom_7);
    }
#line 1112 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1112 "declarative_tree.m"
      {
#line 1112 "declarative_tree.m"
        *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_FinalAtom_7));
#line 1112 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1112 "declarative_tree.m"
      }
#line 1112 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1112 "declarative_tree.m"
  }
#line 1112 "declarative_tree.m"
}

#line 1104 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
#line 1104 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 1104 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1104 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_5,
#line 1104 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ExitAtoms_6)
#line 1104 "declarative_tree.m"
{
#line 1108 "declarative_tree.m"
  {
#line 1108 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_23_23;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_24_24;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_26_26;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_28_28;
#line 1108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__ExitPrecId_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 0));
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitPrec_8;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Contour_9;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_11_11;
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 1));
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 2));
#line 1109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 3)));
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 4)));
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 5)));
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 6)));
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 7)));

#line 1110 "declarative_tree.m"
    {
#line 1110 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__ExitPrecId_7, &mdb__declarative_tree__ExitPrec_8);
    }
#line 1111 "declarative_tree.m"
    {
#line 1111 "declarative_tree.m"
      mdb__declarative_tree__materialize_contour_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__ExitPrecId_7, mdb__declarative_tree__ExitPrec_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Contour_9);
    }
#line 1112 "declarative_tree.m"
    {
#line 1112 "declarative_tree.m"
      mdb__declarative_tree__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_6[0]));
#line 1112 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 1) = ((MR_Box) (mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1));
#line 1112 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1112 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 3) = ((MR_Box) (mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19));
#line 1112 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 4) = mdb__declarative_tree__Store_4;
#line 1112 "declarative_tree.m"
    }
#line 14437 "mdb.declarative_tree.c"
    {
#line 14439 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_23_23);
    }
#line 14442 "mdb.declarative_tree.c"
    {
#line 14444 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_24_24);
    }
#line 14447 "mdb.declarative_tree.c"
    {
#line 14449 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14451 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_26_26, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 14453 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_26_26, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_24_24));
#line 14455 "mdb.declarative_tree.c"
    }
#line 14457 "mdb.declarative_tree.c"
    {
#line 14459 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14461 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 14463 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_23_23));
#line 14465 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_26_26));
#line 14467 "mdb.declarative_tree.c"
    }
#line 1112 "declarative_tree.m"
    {
#line 1112 "declarative_tree.m"
      mercury__list__filter_map_3_p_0(mdb__declarative_tree__TypeInfo_28_28, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_tree__V_11_11, mdb__declarative_tree__Contour_9, mdb__declarative_tree__ExitAtoms_6);
#line 1112 "declarative_tree.m"
      return;
    }
#line 1108 "declarative_tree.m"
  }
#line 1104 "declarative_tree.m"
}

#line 1074 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
#line 1074 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34,
#line 1074 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1074 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 1074 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Node_8,
#line 1074 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Nodes0_9,
#line 1074 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Nodes_10)
#line 1074 "declarative_tree.m"
{
#line 1081 "declarative_tree.m"
  while (MR_TRUE)
#line 1081 "declarative_tree.m"
    {
#line 1081 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1081 "declarative_tree.m"
      {
#line 1081 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 0)));
#line 1079 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11;
#line 1079 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 1079 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1079 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14;
#line 1079 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15;
#line 1079 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16;
#line 1079 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17;
#line 1079 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18;
#line 1079 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19;
#line 1079 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20;

#line 1079 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1079 "declarative_tree.m"
          {
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 8)));
#line 1079 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 9)));
#line 1080 "declarative_tree.m"
            *mdb__declarative_tree__Nodes_10 = mdb__declarative_tree__Nodes0_9;
#line 1079 "declarative_tree.m"
          }
#line 1079 "declarative_tree.m"
        else
#line 1091 "declarative_tree.m"
          {
#line 1091 "declarative_tree.m"
            MR_Box mdb__declarative_tree__PrevNodeId_24;
#line 1091 "declarative_tree.m"
            MR_Word mdb__declarative_tree__PrevNode_28;
#line 1091 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Nodes1_32;
#line 1087 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NegPrec_21;
#line 1085 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_22_22;
#line 1085 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_23_23;
#line 1093 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29;
#line 1093 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_30_30;
#line 1093 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_31_31;

#line 1085 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1085 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1085 "declarative_tree.m"
              {
#line 1085 "declarative_tree.m"
                mdb__declarative_tree__NegPrec_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1085 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1085 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1086 "declarative_tree.m"
                mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_tree__NegPrec_21;
#line 1085 "declarative_tree.m"
              }
#line 1085 "declarative_tree.m"
            else
#line 1089 "declarative_tree.m"
              {
#line 1089 "declarative_tree.m"
                MR_Box mdb__declarative_tree__CondPrec_25;
#line 1087 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_26_26;
#line 1087 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_27_27;

#line 1087 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1087 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1087 "declarative_tree.m"
                  {
#line 1087 "declarative_tree.m"
                    mdb__declarative_tree__CondPrec_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1087 "declarative_tree.m"
                    mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1087 "declarative_tree.m"
                    mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1088 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_tree__CondPrec_25;
#line 1087 "declarative_tree.m"
                  }
#line 1087 "declarative_tree.m"
                else
#line 1090 "declarative_tree.m"
                  {
#line 1090 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_8);
                  }
#line 1089 "declarative_tree.m"
              }
#line 1092 "declarative_tree.m"
            {
#line 1092 "declarative_tree.m"
              mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrevNodeId_24, &mdb__declarative_tree__PrevNode_28);
            }
#line 1093 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1093 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1093 "declarative_tree.m"
              {
#line 1093 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1093 "declarative_tree.m"
                mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 1093 "declarative_tree.m"
                mdb__declarative_tree__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1097 "declarative_tree.m"
                mdb__declarative_tree__Nodes1_32 = mdb__declarative_tree__Nodes0_9;
#line 1093 "declarative_tree.m"
              }
#line 1093 "declarative_tree.m"
            else
#line 1099 "declarative_tree.m"
              {
#line 1099 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_33_33;

#line 1099 "declarative_tree.m"
                {
#line 1099 "declarative_tree.m"
                  mdb__declarative_tree__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_33_33, 0) = mdb__declarative_tree__NodeId_7;
#line 1099 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_33_33, 1) = ((MR_Box) (mdb__declarative_tree__Node_8));
#line 1099 "declarative_tree.m"
                }
#line 1099 "declarative_tree.m"
                {
#line 1099 "declarative_tree.m"
                  mdb__declarative_tree__Nodes1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Nodes1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_33_33));
#line 1099 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Nodes1_32, 1) = ((MR_Box) (mdb__declarative_tree__Nodes0_9));
#line 1099 "declarative_tree.m"
                }
#line 1099 "declarative_tree.m"
              }
#line 1101 "declarative_tree.m"
            /* direct tailcall eliminated */
#line 1101 "declarative_tree.m"
            {
#line 1101 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NodeId__tmp_copy_7 = mdb__declarative_tree__PrevNodeId_24;
#line 1101 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Node__tmp_copy_8 = mdb__declarative_tree__PrevNode_28;
#line 1101 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Nodes0__tmp_copy_9 = mdb__declarative_tree__Nodes1_32;

#line 1101 "declarative_tree.m"
              mdb__declarative_tree__Nodes0_9 = mdb__declarative_tree__Nodes0__tmp_copy_9;
#line 1101 "declarative_tree.m"
              mdb__declarative_tree__Node_8 = mdb__declarative_tree__Node__tmp_copy_8;
#line 1101 "declarative_tree.m"
              mdb__declarative_tree__NodeId_7 = mdb__declarative_tree__NodeId__tmp_copy_7;
#line 1101 "declarative_tree.m"
            }
#line 1101 "declarative_tree.m"
            continue;
#line 1091 "declarative_tree.m"
          }
#line 1081 "declarative_tree.m"
      }
#line 1081 "declarative_tree.m"
      break;
#line 1081 "declarative_tree.m"
    }
#line 1074 "declarative_tree.m"
}

#line 1051 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
#line 1051 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25,
#line 1051 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1051 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_5,
#line 1051 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ParentCallNode_6)
#line 1051 "declarative_tree.m"
{
#line 1054 "declarative_tree.m"
  while (MR_TRUE)
#line 1054 "declarative_tree.m"
    {
#line 1054 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1054 "declarative_tree.m"
      {
#line 1054 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 1054 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Node_7;
#line 14739 "mdb.declarative_tree.c"
        MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14741 "mdb.declarative_tree.c"
        MR_Box mdb__declarative_tree__conv1_Node_7;
#line 1056 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_8_8;
#line 1056 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9;
#line 1056 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 1056 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 1056 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12;
#line 1056 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1056 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;
#line 1056 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15;
#line 1056 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16;
#line 1056 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17;

#line 14764 "mdb.declarative_tree.c"
        {
#line 14766 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25), mdb__declarative_tree__Store_4, mdb__declarative_tree__NodeId_5, &mdb__declarative_tree__conv1_Node_7);
        }
#line 14769 "mdb.declarative_tree.c"
        if (mdb__declarative_tree__succeeded)
#line 14771 "mdb.declarative_tree.c"
          {
#line 14773 "mdb.declarative_tree.c"
            mdb__declarative_tree__Node_7 = ((MR_Word) mdb__declarative_tree__conv1_Node_7);
#line 14775 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 14777 "mdb.declarative_tree.c"
          }
#line 1054 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1054 "declarative_tree.m"
          {
#line 1056 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 0)));
#line 1056 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1056 "declarative_tree.m"
              {
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 0));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 7)));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 8)));
#line 1056 "declarative_tree.m"
                mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 9)));
#line 1057 "declarative_tree.m"
                *mdb__declarative_tree__ParentCallNode_6 = mdb__declarative_tree__Node_7;
#line 1057 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1056 "declarative_tree.m"
              }
#line 1056 "declarative_tree.m"
            else
#line 1070 "declarative_tree.m"
              {
#line 1070 "declarative_tree.m"
                MR_Box mdb__declarative_tree__PrevNodeId_21;
#line 1066 "declarative_tree.m"
                MR_Box mdb__declarative_tree__NegPrec_18;
#line 1064 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_19_19;
#line 1064 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_20_20;

#line 1064 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1064 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1064 "declarative_tree.m"
                  {
#line 1064 "declarative_tree.m"
                    mdb__declarative_tree__NegPrec_18 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1064 "declarative_tree.m"
                    mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1064 "declarative_tree.m"
                    mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1065 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_tree__NegPrec_18;
#line 1064 "declarative_tree.m"
                  }
#line 1064 "declarative_tree.m"
                else
#line 1068 "declarative_tree.m"
                  {
#line 1068 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CondPrec_22;
#line 1066 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_23_23;
#line 1066 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_24_24;

#line 1066 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1066 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1066 "declarative_tree.m"
                      {
#line 1066 "declarative_tree.m"
                        mdb__declarative_tree__CondPrec_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1066 "declarative_tree.m"
                        mdb__declarative_tree__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1066 "declarative_tree.m"
                        mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1067 "declarative_tree.m"
                        mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_tree__CondPrec_22;
#line 1066 "declarative_tree.m"
                      }
#line 1066 "declarative_tree.m"
                    else
#line 1069 "declarative_tree.m"
                      {
#line 1069 "declarative_tree.m"
                        mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25, mdb__declarative_tree__Store_4, mdb__declarative_tree__Node_7);
                      }
#line 1068 "declarative_tree.m"
                  }
#line 1071 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1071 "declarative_tree.m"
                {
#line 1071 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__NodeId__tmp_copy_5 = mdb__declarative_tree__PrevNodeId_21;

#line 1071 "declarative_tree.m"
                  mdb__declarative_tree__NodeId_5 = mdb__declarative_tree__NodeId__tmp_copy_5;
#line 1071 "declarative_tree.m"
                }
#line 1071 "declarative_tree.m"
                continue;
#line 1070 "declarative_tree.m"
              }
#line 1054 "declarative_tree.m"
          }
#line 1054 "declarative_tree.m"
        return mdb__declarative_tree__succeeded;
#line 1054 "declarative_tree.m"
      }
#line 1054 "declarative_tree.m"
      break;
#line 1054 "declarative_tree.m"
    }
#line 1051 "declarative_tree.m"
}

#line 1020 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
#line 1020 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_25,
#line 1020 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_5,
#line 1020 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_6,
#line 1020 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_7,
#line 1020 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_8)
#line 1020 "declarative_tree.m"
{
#line 1024 "declarative_tree.m"
  {
#line 1024 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1024 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitAtom_10;
#line 1024 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ArgNum_11;
#line 1024 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__TotalArgs_12;
#line 1024 "declarative_tree.m"
    MR_Box mdb__declarative_tree__StartId_13;
#line 1024 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartRep_15;
#line 1024 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_16_16;
#line 1028 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_17_17;
#line 1029 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_18_18;
#line 1029 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_19_19;
#line 1029 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_20_20;
#line 1029 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_21_21;
#line 1029 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_22_22;
#line 1029 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_23_23;
#line 1029 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_24_24;

#line 1026 "declarative_tree.m"
    {
#line 1026 "declarative_tree.m"
      mdb__declarative_tree__ExitAtom_10 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_for_R_25, mdb__declarative_tree__ExitNode_6);
    }
#line 1027 "declarative_tree.m"
    {
#line 1027 "declarative_tree.m"
      mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_tree__ArgPos_7, mdb__declarative_tree__ExitAtom_10, &mdb__declarative_tree__ArgNum_11);
    }
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_10, (MR_Integer) 0)));
#line 1028 "declarative_tree.m"
    mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_10, (MR_Integer) 1)));
#line 1028 "declarative_tree.m"
    {
#line 1028 "declarative_tree.m"
      mdb__declarative_tree__TotalArgs_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_16_16);
    }
#line 1029 "declarative_tree.m"
    mdb__declarative_tree__StartId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 0));
#line 1029 "declarative_tree.m"
    mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 1));
#line 1029 "declarative_tree.m"
    mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 2));
#line 1029 "declarative_tree.m"
    mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 3)));
#line 1029 "declarative_tree.m"
    mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 4)));
#line 1029 "declarative_tree.m"
    mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 5)));
#line 1029 "declarative_tree.m"
    mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 6)));
#line 1029 "declarative_tree.m"
    mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 7)));
#line 1031 "declarative_tree.m"
    {
#line 1031 "declarative_tree.m"
      mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(mdb__declarative_tree__TypeInfo_for_R_25, mdb__declarative_tree__CallNode_5, &mdb__declarative_tree__StartRep_15);
    }
#line 1032 "declarative_tree.m"
    {
#line 1032 "declarative_tree.m"
      MR_Word base;
#line 1032 "declarative_tree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "declarative_tree.m"
      *mdb__declarative_tree__ChainStart_8 = base;
#line 1032 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1032 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__ArgNum_11));
#line 1032 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TotalArgs_12));
#line 1032 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 3) = mdb__declarative_tree__StartId_13;
#line 1032 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1032 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (mdb__declarative_tree__StartRep_15));
#line 1032 "declarative_tree.m"
    }
#line 1024 "declarative_tree.m"
  }
#line 1020 "declarative_tree.m"
}

#line 1002 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
#line 1002 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42,
#line 1002 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1002 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_7,
#line 1002 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_8,
#line 1002 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_9,
#line 1002 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10)
#line 1002 "declarative_tree.m"
{
#line 1006 "declarative_tree.m"
  {
#line 1006 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_44_44;
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallAtom_12;
#line 1006 "declarative_tree.m"
    MR_String mdb__declarative_tree__CallPathStr_13;
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallPath_14;
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartLoc_15;
#line 1006 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ArgNum_16;
#line 1006 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__TotalArgs_17;
#line 1006 "declarative_tree.m"
    MR_Box mdb__declarative_tree__StartId_18 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartPath_19;
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartRep_20;
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_21_21;
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_22_22;
#line 1006 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_49;
#line 1006 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallPrecId_50;
#line 1007 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 1007 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 1007 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 1007 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 1007 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 1007 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 1007 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 1007 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 1007 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 1009 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 1009 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_33_33;
#line 1009 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_34_34;
#line 1009 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_35_35;
#line 1009 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_36_36;
#line 1009 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 1009 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_38_38;
#line 1009 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 1009 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_40_40;
#line 1013 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_41_41;
#line 1040 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_52_52;
#line 1040 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_53_53;
#line 1040 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_54_54;
#line 1040 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_55_55;
#line 1040 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_56_56;
#line 1040 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_57_57;
#line 1040 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_58_58;
#line 1040 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_59_59;
#line 1040 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_60_60;
#line 1043 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ParentCallNode_51;

#line 15131 "mdb.declarative_tree.c"
    {
#line 15133 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_44_44);
    }
#line 1008 "declarative_tree.m"
    {
#line 1008 "declarative_tree.m"
      mdb__declarative_tree__CallAtom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_44_44, mdb__declarative_tree__CallNode_8);
    }
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 1009 "declarative_tree.m"
    mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 1009 "declarative_tree.m"
    {
#line 1009 "declarative_tree.m"
      mdb__declarative_tree__CallPathStr_13 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__V_21_21);
    }
#line 1010 "declarative_tree.m"
    {
#line 1010 "declarative_tree.m"
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_13, &mdb__declarative_tree__CallPath_14);
    }
#line 1011 "declarative_tree.m"
    {
#line 1011 "declarative_tree.m"
      mdb__declarative_tree__StartLoc_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, 0) = mdb__declarative_tree__CallId_7;
#line 1011 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, 1) = ((MR_Box) (mdb__declarative_tree__CallNode_8));
#line 1011 "declarative_tree.m"
    }
#line 1012 "declarative_tree.m"
    {
#line 1012 "declarative_tree.m"
      mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_tree__ArgPos_9, mdb__declarative_tree__CallAtom_12, &mdb__declarative_tree__ArgNum_16);
    }
#line 1013 "declarative_tree.m"
    mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_12, (MR_Integer) 0)));
#line 1013 "declarative_tree.m"
    mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_12, (MR_Integer) 1)));
#line 1013 "declarative_tree.m"
    {
#line 1013 "declarative_tree.m"
      mdb__declarative_tree__TotalArgs_17 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_22_22);
    }
#line 1015 "declarative_tree.m"
    {
#line 1015 "declarative_tree.m"
      mdb__declarative_tree__StartPath_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartPath_19, 0) = ((MR_Box) (mdb__declarative_tree__CallPath_14));
#line 1015 "declarative_tree.m"
    }
#line 1039 "declarative_tree.m"
    {
#line 1039 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_7, &mdb__declarative_tree__Call_49);
    }
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__CallPrecId_50 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 0));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_52_52 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 1));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 2)));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 3)));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 4)));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 5)));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 6)));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_58_58 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 7)));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 8)));
#line 1040 "declarative_tree.m"
    mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 9)));
#line 1041 "declarative_tree.m"
    {
#line 1041 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallPrecId_50, &mdb__declarative_tree__ParentCallNode_51);
    }
#line 1043 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1042 "declarative_tree.m"
      {
#line 1042 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_21_62;

#line 15240 "mdb.declarative_tree.c"
        {
#line 15242 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_21_62);
        }
#line 1042 "declarative_tree.m"
        {
#line 1042 "declarative_tree.m"
          mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(mdb__declarative_tree__TypeInfo_21_62, mdb__declarative_tree__ParentCallNode_51, &mdb__declarative_tree__StartRep_20);
        }
#line 1042 "declarative_tree.m"
      }
#line 1043 "declarative_tree.m"
    else
#line 1044 "declarative_tree.m"
      mdb__declarative_tree__StartRep_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1017 "declarative_tree.m"
    {
#line 1017 "declarative_tree.m"
      MR_Word base;
#line 1017 "declarative_tree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "declarative_tree.m"
      *mdb__declarative_tree__ChainStart_10 = base;
#line 1017 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__StartLoc_15));
#line 1017 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__ArgNum_16));
#line 1017 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TotalArgs_17));
#line 1017 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 3) = mdb__declarative_tree__StartId_18;
#line 1017 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_tree__StartPath_19));
#line 1017 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (mdb__declarative_tree__StartRep_20));
#line 1017 "declarative_tree.m"
    }
#line 1006 "declarative_tree.m"
  }
#line 1002 "declarative_tree.m"
}

#line 949 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
#line 949 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 949 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 949 "declarative_tree.m"
{
#line 949 "declarative_tree.m"
  {
#line 949 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 949 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 949 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 949 "declarative_tree.m"
    {
#line 949 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 949 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 949 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 949 "declarative_tree.m"
  }
#line 949 "declarative_tree.m"
}

#line 850 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
#line 850 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43,
#line 850 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_9,
#line 850 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_10,
#line 850 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_11,
#line 850 "declarative_tree.m"
  MR_Word mdb__declarative_tree__StartLoc_12,
#line 850 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_13,
#line 850 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_14,
#line 850 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_15,
#line 850 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_16)
#line 850 "declarative_tree.m"
{
#line 855 "declarative_tree.m"
  {
#line 855 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalRep_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 1)));
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__HeadVars_50;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalExprRep_51;
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__A_52;
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__B_53;
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__C_54;
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__D_55;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_59_59;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_60_60;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_61_61;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_62_62;
#line 855 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_63_63;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_64_64;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_65_65;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_66_66;
#line 855 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_67_67;
#line 855 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_68_68;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_69_69;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_70_70;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_71_71;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_72_72;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_73_73;
#line 855 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 0)));
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_88_88;
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_89_89;
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_90_90;
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_91_91;
#line 855 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_92_92;
#line 948 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 2)));
#line 948 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 3)));
#line 948 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 4)));
#line 950 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_82_82;
#line 952 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_56_56;

#line 949 "declarative_tree.m"
    {
#line 949 "declarative_tree.m"
      mdb__declarative_tree__HeadVars_50 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[0], mdb__declarative_tree__V_74_74);
    }
#line 950 "declarative_tree.m"
    mdb__declarative_tree__GoalExprRep_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalRep_49, (MR_Integer) 0)));
#line 950 "declarative_tree.m"
    mdb__declarative_tree__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalRep_49, (MR_Integer) 1)));
#line 951 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVars_50)) == (MR_mktag((MR_Integer) 1)));
#line 951 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 951 "declarative_tree.m"
      {
#line 951 "declarative_tree.m"
        mdb__declarative_tree__A_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVars_50, (MR_Integer) 0)));
#line 951 "declarative_tree.m"
        mdb__declarative_tree__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVars_50, (MR_Integer) 1)));
#line 951 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 951 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 951 "declarative_tree.m"
          {
#line 951 "declarative_tree.m"
            mdb__declarative_tree__B_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_59_59, (MR_Integer) 0)));
#line 951 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_59_59, (MR_Integer) 1)));
#line 951 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 951 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 951 "declarative_tree.m"
              {
#line 951 "declarative_tree.m"
                mdb__declarative_tree__C_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_60_60, (MR_Integer) 0)));
#line 951 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_60_60, (MR_Integer) 1)));
#line 951 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 951 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 951 "declarative_tree.m"
                  {
#line 951 "declarative_tree.m"
                    mdb__declarative_tree__D_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_61_61, (MR_Integer) 0)));
#line 951 "declarative_tree.m"
                    mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_61_61, (MR_Integer) 1)));
#line 951 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                      {
#line 952 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__GoalExprRep_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 952 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 952 "declarative_tree.m"
                          {
#line 952 "declarative_tree.m"
                            mdb__declarative_tree__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 1)));
#line 952 "declarative_tree.m"
                            mdb__declarative_tree__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 2)));
#line 952 "declarative_tree.m"
                            mdb__declarative_tree__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 3)));
#line 952 "declarative_tree.m"
                            mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 4)));
#line 952 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_63_63, (MR_String) "exception.m") == 0);
#line 855 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                              {
#line 952 "declarative_tree.m"
                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                if (mdb__declarative_tree__succeeded)
#line 952 "declarative_tree.m"
                                  {
#line 952 "declarative_tree.m"
                                    mdb__declarative_tree__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_64_64, (MR_Integer) 0)));
#line 952 "declarative_tree.m"
                                    mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_64_64, (MR_Integer) 1)));
#line 952 "declarative_tree.m"
                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__D_55 == mdb__declarative_tree__V_88_88);
#line 855 "declarative_tree.m"
                                    if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                                      {
#line 952 "declarative_tree.m"
                                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "declarative_tree.m"
                                        if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                                          {
#line 953 "declarative_tree.m"
                                            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 953 "declarative_tree.m"
                                            if (mdb__declarative_tree__succeeded)
#line 953 "declarative_tree.m"
                                              {
#line 953 "declarative_tree.m"
                                                mdb__declarative_tree__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                mdb__declarative_tree__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 2)));
#line 953 "declarative_tree.m"
                                                mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 3)));
#line 953 "declarative_tree.m"
                                                mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_67_67, (MR_String) "exception") == 0);
#line 855 "declarative_tree.m"
                                                if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                                                  {
#line 953 "declarative_tree.m"
                                                    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_68_68, (MR_String) "builtin_catch") == 0);
#line 855 "declarative_tree.m"
                                                    if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                                                      {
#line 953 "declarative_tree.m"
                                                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                        if (mdb__declarative_tree__succeeded)
#line 953 "declarative_tree.m"
                                                          {
#line 953 "declarative_tree.m"
                                                            mdb__declarative_tree__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_69_69, (MR_Integer) 0)));
#line 953 "declarative_tree.m"
                                                            mdb__declarative_tree__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_69_69, (MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__A_52 == mdb__declarative_tree__V_89_89);
#line 855 "declarative_tree.m"
                                                            if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                                                              {
#line 953 "declarative_tree.m"
                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                                if (mdb__declarative_tree__succeeded)
#line 953 "declarative_tree.m"
                                                                  {
#line 953 "declarative_tree.m"
                                                                    mdb__declarative_tree__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_70_70, (MR_Integer) 0)));
#line 953 "declarative_tree.m"
                                                                    mdb__declarative_tree__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_70_70, (MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__B_53 == mdb__declarative_tree__V_90_90);
#line 855 "declarative_tree.m"
                                                                    if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                                                                      {
#line 953 "declarative_tree.m"
                                                                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                                        if (mdb__declarative_tree__succeeded)
#line 953 "declarative_tree.m"
                                                                          {
#line 953 "declarative_tree.m"
                                                                            mdb__declarative_tree__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_71_71, (MR_Integer) 0)));
#line 953 "declarative_tree.m"
                                                                            mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_71_71, (MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__C_54 == mdb__declarative_tree__V_91_91);
#line 855 "declarative_tree.m"
                                                                            if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                                                                              {
#line 953 "declarative_tree.m"
                                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                                                if (mdb__declarative_tree__succeeded)
#line 953 "declarative_tree.m"
                                                                                  {
#line 953 "declarative_tree.m"
                                                                                    mdb__declarative_tree__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_72_72, (MR_Integer) 0)));
#line 953 "declarative_tree.m"
                                                                                    mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_72_72, (MR_Integer) 1)));
#line 953 "declarative_tree.m"
                                                                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__D_55 == mdb__declarative_tree__V_92_92);
#line 855 "declarative_tree.m"
                                                                                    if (mdb__declarative_tree__succeeded)
#line 855 "declarative_tree.m"
                                                                                      {
#line 953 "declarative_tree.m"
                                                                                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "declarative_tree.m"
                                                                                        if (mdb__declarative_tree__succeeded)
#line 867 "declarative_tree.m"
                                                                                          {
#line 867 "declarative_tree.m"
                                                                                            if ((mdb__declarative_tree__StartLoc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "declarative_tree.m"
                                                                                              {
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TypeInfo_45_45;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TypeInfo_47_47;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__ExitNode_19;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__ExitAtom_20;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__Args_22;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultArgInfo_23;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultRep_26;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultUniv_27;
#line 868 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__TryResult_28;
#line 868 "declarative_tree.m"
                                                                                                MR_String mdb__declarative_tree__Functor_29;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_32_32;
#line 868 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_33_33;
#line 879 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__V_21_21;
#line 880 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__conv1_TryResultArgInfo_23;
#line 881 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_24_24;
#line 881 "declarative_tree.m"
                                                                                                MR_Integer mdb__declarative_tree__V_25_25;
#line 884 "declarative_tree.m"
                                                                                                MR_Integer mdb__declarative_tree__V_30_30;
#line 884 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_31_31;

#line 877 "declarative_tree.m"
                                                                                                {
#line 877 "declarative_tree.m"
                                                                                                  mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43, mdb__declarative_tree__Store_9, mdb__declarative_tree__Ref_11, &mdb__declarative_tree__ExitNode_19);
                                                                                                }
#line 15646 "mdb.declarative_tree.c"
                                                                                                {
#line 15648 "mdb.declarative_tree.c"
                                                                                                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_45_45);
                                                                                                }
#line 878 "declarative_tree.m"
                                                                                                {
#line 878 "declarative_tree.m"
                                                                                                  mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_45_45, mdb__declarative_tree__ExitNode_19);
                                                                                                }
#line 879 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 0)));
#line 879 "declarative_tree.m"
                                                                                                mdb__declarative_tree__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 1)));
#line 880 "declarative_tree.m"
                                                                                                {
#line 880 "declarative_tree.m"
                                                                                                  mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__Args_22, mdb__declarative_tree__ArgNum_13, &mdb__declarative_tree__conv1_TryResultArgInfo_23);
                                                                                                }
#line 880 "declarative_tree.m"
                                                                                                mdb__declarative_tree__TryResultArgInfo_23 = ((MR_Word) mdb__declarative_tree__conv1_TryResultArgInfo_23);
#line 881 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 0)));
#line 881 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 1)));
#line 881 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 2)));
#line 881 "declarative_tree.m"
                                                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 881 "declarative_tree.m"
                                                                                                if (mdb__declarative_tree__succeeded)
#line 881 "declarative_tree.m"
                                                                                                  {
#line 881 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__TryResultRep_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_32_32, (MR_Integer) 0)));
#line 882 "declarative_tree.m"
                                                                                                    {
#line 882 "declarative_tree.m"
                                                                                                      mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_tree__TryResultRep_26, &mdb__declarative_tree__TryResultUniv_27);
                                                                                                    }
#line 883 "declarative_tree.m"
                                                                                                    {
#line 883 "declarative_tree.m"
                                                                                                      mdb__declarative_tree__TryResult_28 = mercury__univ__univ_value_1_f_0(&mdb__declarative_tree__TypeInfo_47_47, mdb__declarative_tree__TryResultUniv_27);
                                                                                                    }
#line 884 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__V_33_33 = (MR_Integer) 1;
#line 884 "declarative_tree.m"
                                                                                                    {
#line 884 "declarative_tree.m"
                                                                                                      mercury__deconstruct__deconstruct_5_p_1(mdb__declarative_tree__TypeInfo_47_47, mdb__declarative_tree__TryResult_28, mdb__declarative_tree__V_33_33, &mdb__declarative_tree__Functor_29, &mdb__declarative_tree__V_30_30, &mdb__declarative_tree__V_31_31);
                                                                                                    }
#line 885 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Functor_29, (MR_String) "succeeded") == 0);
#line 888 "declarative_tree.m"
                                                                                                    if (mdb__declarative_tree__succeeded)
#line 886 "declarative_tree.m"
                                                                                                      {
#line 886 "declarative_tree.m"
                                                                                                        MR_Word mdb__declarative_tree__V_34_34 = ((MR_Word) mdb__declarative_tree__NodeId_15);

#line 886 "declarative_tree.m"
                                                                                                        {
#line 886 "declarative_tree.m"
                                                                                                          MR_Word base;
#line 886 "declarative_tree.m"
                                                                                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 886 "declarative_tree.m"
                                                                                                          *mdb__declarative_tree__Origin_16 = base;
#line 886 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_34_34));
#line 886 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &mdb__declarative_tree_scalar_common_2[2])));
#line 886 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TermPath_14));
#line 886 "declarative_tree.m"
                                                                                                        }
#line 886 "declarative_tree.m"
                                                                                                      }
#line 888 "declarative_tree.m"
                                                                                                    else
#line 889 "declarative_tree.m"
                                                                                                      {
#line 889 "declarative_tree.m"
                                                                                                        *mdb__declarative_tree__Origin_16 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_tree_scalar_common_4[1]);
#line 889 "declarative_tree.m"
                                                                                                      }
#line 888 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 881 "declarative_tree.m"
                                                                                                  }
#line 868 "declarative_tree.m"
                                                                                              }
#line 867 "declarative_tree.m"
                                                                                            else
#line 861 "declarative_tree.m"
                                                                                              {
#line 861 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_42_42;

#line 866 "declarative_tree.m"
                                                                                                {
#line 866 "declarative_tree.m"
                                                                                                  mdb__declarative_tree__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_42_42, 0) = ((MR_Box) (mdb__declarative_tree__ArgNum_13));
#line 866 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_42_42, 1) = ((MR_Box) (mdb__declarative_tree__TermPath_14));
#line 866 "declarative_tree.m"
                                                                                                }
#line 866 "declarative_tree.m"
                                                                                                {
#line 866 "declarative_tree.m"
                                                                                                  MR_Word base;
#line 866 "declarative_tree.m"
                                                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "declarative_tree.m"
                                                                                                  *mdb__declarative_tree__Origin_16 = base;
#line 866 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_2[2]));
#line 866 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__V_42_42));
#line 866 "declarative_tree.m"
                                                                                                }
#line 861 "declarative_tree.m"
                                                                                                mdb__declarative_tree__succeeded = MR_TRUE;
#line 861 "declarative_tree.m"
                                                                                              }
#line 867 "declarative_tree.m"
                                                                                          }
#line 855 "declarative_tree.m"
                                                                                      }
#line 953 "declarative_tree.m"
                                                                                  }
#line 855 "declarative_tree.m"
                                                                              }
#line 953 "declarative_tree.m"
                                                                          }
#line 855 "declarative_tree.m"
                                                                      }
#line 953 "declarative_tree.m"
                                                                  }
#line 855 "declarative_tree.m"
                                                              }
#line 953 "declarative_tree.m"
                                                          }
#line 855 "declarative_tree.m"
                                                      }
#line 855 "declarative_tree.m"
                                                  }
#line 953 "declarative_tree.m"
                                              }
#line 855 "declarative_tree.m"
                                          }
#line 855 "declarative_tree.m"
                                      }
#line 952 "declarative_tree.m"
                                  }
#line 855 "declarative_tree.m"
                              }
#line 952 "declarative_tree.m"
                          }
#line 855 "declarative_tree.m"
                      }
#line 951 "declarative_tree.m"
                  }
#line 951 "declarative_tree.m"
              }
#line 951 "declarative_tree.m"
          }
#line 951 "declarative_tree.m"
      }
#line 855 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 855 "declarative_tree.m"
  }
#line 850 "declarative_tree.m"
}

#line 645 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
#line 645 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84,
#line 645 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 645 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 645 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 645 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 645 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10)
#line 645 "declarative_tree.m"
{
#line 648 "declarative_tree.m"
  {
#line 648 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 648 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;
#line 648 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Ns1_38;
#line 648 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Next_72;

#line 649 "declarative_tree.m"
    {
#line 649 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__NodeId_7, &mdb__declarative_tree__Node_11);
    }
#line 655 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 0))))
#line 653 "declarative_tree.m"
      {
#line 654 "declarative_tree.m"
        {
#line 654 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 654 "declarative_tree.m"
          return;
        }
#line 653 "declarative_tree.m"
      }
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 1))))
#line 670 "declarative_tree.m"
      {
#line 670 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 670 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 670 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 670 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 670 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 670 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_48_48 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 670 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 670 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));

#line 678 "declarative_tree.m"
        {
#line 678 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_44);
        }
#line 680 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 679 "declarative_tree.m"
          mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 680 "declarative_tree.m"
        else
#line 681 "declarative_tree.m"
          {
#line 681 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_76_76 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 681 "declarative_tree.m"
            {
#line 681 "declarative_tree.m"
              mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_76_76));
#line 681 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 681 "declarative_tree.m"
            }
#line 681 "declarative_tree.m"
          }
#line 670 "declarative_tree.m"
      }
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 2))))
#line 693 "declarative_tree.m"
      mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 695 "declarative_tree.m"
      {
#line 695 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CondStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 695 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 695 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2)));

#line 701 "declarative_tree.m"
        if ((mdb__declarative_tree__CondStatus_71 == (MR_Integer) 1))
#line 702 "declarative_tree.m"
          {
#line 703 "declarative_tree.m"
            {
#line 703 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 703 "declarative_tree.m"
              return;
            }
#line 702 "declarative_tree.m"
          }
#line 701 "declarative_tree.m"
        else
#line 700 "declarative_tree.m"
          mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 695 "declarative_tree.m"
      }
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 666 "declarative_tree.m"
      {
#line 666 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Prec_82 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 666 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NestedStartId_83 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 666 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));

#line 668 "declarative_tree.m"
        {
#line 668 "declarative_tree.m"
          mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Prec_82, mdb__declarative_tree__NestedStartId_83, mdb__declarative_tree__Ns0_9, &mdb__declarative_tree__Ns1_38);
        }
#line 666 "declarative_tree.m"
      }
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 658 "declarative_tree.m"
      {
#line 658 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_78_78 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 660 "declarative_tree.m"
        {
#line 660 "declarative_tree.m"
          mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_78_78));
#line 660 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 660 "declarative_tree.m"
        }
#line 658 "declarative_tree.m"
      }
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 658 "declarative_tree.m"
      {
#line 658 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_87_87 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 660 "declarative_tree.m"
        {
#line 660 "declarative_tree.m"
          mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_87_87));
#line 660 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 660 "declarative_tree.m"
        }
#line 658 "declarative_tree.m"
      }
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 693 "declarative_tree.m"
      mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 693 "declarative_tree.m"
      mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 653 "declarative_tree.m"
      {
#line 654 "declarative_tree.m"
        {
#line 654 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 654 "declarative_tree.m"
          return;
        }
#line 653 "declarative_tree.m"
      }
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 662 "declarative_tree.m"
      {
#line 662 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Prec_39 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 662 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NestedStartId_40 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 662 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));

#line 664 "declarative_tree.m"
        {
#line 664 "declarative_tree.m"
          mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, (MR_Integer) 0, mdb__declarative_tree__Store_6, mdb__declarative_tree__Prec_39, mdb__declarative_tree__NestedStartId_40, mdb__declarative_tree__Ns0_9, &mdb__declarative_tree__Ns1_38);
        }
#line 662 "declarative_tree.m"
      }
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 693 "declarative_tree.m"
      mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 655 "declarative_tree.m"
    else
#line 655 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 693 "declarative_tree.m"
      mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 655 "declarative_tree.m"
    else
#line 693 "declarative_tree.m"
      mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 706 "declarative_tree.m"
    {
#line 706 "declarative_tree.m"
      mdb__declarative_tree__Next_72 = mdb__declarative_execution__step_in_stratum_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_11);
    }
#line 707 "declarative_tree.m"
    {
#line 707 "declarative_tree.m"
      mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Next_72, mdb__declarative_tree__StartId_8, mdb__declarative_tree__Ns1_38, mdb__declarative_tree__Ns_10);
#line 707 "declarative_tree.m"
      return;
    }
#line 648 "declarative_tree.m"
  }
#line 645 "declarative_tree.m"
}

#line 635 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
#line 635 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11,
#line 635 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 635 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 635 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 635 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 635 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10)
#line 635 "declarative_tree.m"
{
#line 641 "declarative_tree.m"
  {
#line 641 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 639 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_13_13;

#line 16128 "mdb.declarative_tree.c"
    {
#line 16130 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_13_13);
    }
#line 639 "declarative_tree.m"
    {
#line 639 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_13, mdb__declarative_tree__NodeId_7, mdb__declarative_tree__StartId_8);
    }
#line 641 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 640 "declarative_tree.m"
      *mdb__declarative_tree__Ns_10 = mdb__declarative_tree__Ns0_9;
#line 641 "declarative_tree.m"
    else
#line 642 "declarative_tree.m"
      {
#line 642 "declarative_tree.m"
        mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11, mdb__declarative_tree__Store_6, mdb__declarative_tree__NodeId_7, mdb__declarative_tree__StartId_8, mdb__declarative_tree__Ns0_9, mdb__declarative_tree__Ns_10);
#line 642 "declarative_tree.m"
        return;
      }
#line 641 "declarative_tree.m"
  }
#line 635 "declarative_tree.m"
}

#line 513 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
#line 513 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115,
#line 513 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 513 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 513 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 513 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 513 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 513 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12)
#line 513 "declarative_tree.m"
{
#line 517 "declarative_tree.m"
  {
#line 517 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 517 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_13;
#line 517 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Ns1_32;
#line 517 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Next_72;

#line 518 "declarative_tree.m"
    {
#line 518 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, &mdb__declarative_tree__Node_13);
    }
#line 522 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 0))))
#line 520 "declarative_tree.m"
      {
#line 521 "declarative_tree.m"
        {
#line 521 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 521 "declarative_tree.m"
          return;
        }
#line 520 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 1))))
#line 523 "declarative_tree.m"
      {
#line 523 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_83_83 = ((MR_Word) mdb__declarative_tree__NodeId_9);

#line 525 "declarative_tree.m"
        {
#line 525 "declarative_tree.m"
          mdb__declarative_tree__Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_83_83));
#line 525 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_11));
#line 525 "declarative_tree.m"
        }
#line 523 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 2))))
#line 599 "declarative_tree.m"
      mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 601 "declarative_tree.m"
      {
#line 601 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CondStatus_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));
#line 601 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_66_66 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 601 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2)));

#line 605 "declarative_tree.m"
        if ((mdb__declarative_tree__CondStatus_68 == (MR_Integer) 1))
#line 603 "declarative_tree.m"
          {
#line 604 "declarative_tree.m"
            {
#line 604 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 604 "declarative_tree.m"
              return;
            }
#line 603 "declarative_tree.m"
          }
#line 605 "declarative_tree.m"
        else
#line 609 "declarative_tree.m"
          mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 601 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 556 "declarative_tree.m"
      {
#line 556 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NestedStartId_88 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 556 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Prec_89 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 554 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 558 "declarative_tree.m"
        {
#line 558 "declarative_tree.m"
          mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_89, mdb__declarative_tree__NestedStartId_88, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
        }
#line 556 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 560 "declarative_tree.m"
      {
#line 560 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_94 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 560 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 560 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3));
#line 560 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 4)));
#line 560 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 5)));
#line 560 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 6)));
#line 560 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 7)));

#line 575 "declarative_tree.m"
        if ((mdb__declarative_tree__ContourType_7 == (MR_Integer) 1))
#line 573 "declarative_tree.m"
          {
#line 573 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_82_82 = ((MR_Word) mdb__declarative_tree__NodeId_9);

#line 574 "declarative_tree.m"
            {
#line 574 "declarative_tree.m"
              mdb__declarative_tree__Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_82_82));
#line 574 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_11));
#line 574 "declarative_tree.m"
            }
#line 573 "declarative_tree.m"
          }
#line 575 "declarative_tree.m"
        else
#line 576 "declarative_tree.m"
          {
#line 576 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Call_90;
#line 576 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NestedStartId_91;
#line 578 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_106_106;
#line 578 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_107_107;
#line 578 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_108_108;
#line 578 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_109_109;
#line 578 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_110_110;
#line 578 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_111_111;
#line 578 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_112_112;
#line 578 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_113_113;
#line 578 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_114_114;

#line 577 "declarative_tree.m"
            {
#line 577 "declarative_tree.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_94, &mdb__declarative_tree__Call_90);
            }
#line 578 "declarative_tree.m"
            mdb__declarative_tree__NestedStartId_91 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 0));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_106_106 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 1));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 2)));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 3)));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 4)));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 5)));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 6)));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_112_112 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 7)));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 8)));
#line 578 "declarative_tree.m"
            mdb__declarative_tree__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 9)));
#line 579 "declarative_tree.m"
            {
#line 579 "declarative_tree.m"
              mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__NestedStartId_91, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
            }
#line 576 "declarative_tree.m"
          }
#line 560 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 527 "declarative_tree.m"
      {
#line 527 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_34 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 527 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Call_39;
#line 527 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NestedStartId_40;
#line 527 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 527 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3));
#line 527 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 4)));
#line 527 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 5)));
#line 527 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 6)));
#line 542 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_97_97;
#line 542 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_98_98;
#line 542 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_99_99;
#line 542 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_100_100;
#line 542 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_101_101;
#line 542 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_102_102;
#line 542 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_103_103;
#line 542 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_104_104;
#line 542 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_105_105;

#line 541 "declarative_tree.m"
        {
#line 541 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_34, &mdb__declarative_tree__Call_39);
        }
#line 542 "declarative_tree.m"
        mdb__declarative_tree__NestedStartId_40 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 0));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_97_97 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 1));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 2)));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 3)));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 4)));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 5)));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 6)));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_103_103 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 7)));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 8)));
#line 542 "declarative_tree.m"
        mdb__declarative_tree__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 9)));
#line 543 "declarative_tree.m"
        {
#line 543 "declarative_tree.m"
          mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__NestedStartId_40, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
        }
#line 527 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 599 "declarative_tree.m"
      mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 599 "declarative_tree.m"
      mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 612 "declarative_tree.m"
      {
#line 612 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NegStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));
#line 612 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 612 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2)));

#line 616 "declarative_tree.m"
        if ((mdb__declarative_tree__ContourType_7 == (MR_Integer) 1))
#line 621 "declarative_tree.m"
          if ((mdb__declarative_tree__NegStatus_71 == (MR_Integer) 1))
#line 619 "declarative_tree.m"
            {
#line 620 "declarative_tree.m"
              {
#line 620 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 620 "declarative_tree.m"
                return;
              }
#line 619 "declarative_tree.m"
            }
#line 621 "declarative_tree.m"
          else
#line 628 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 616 "declarative_tree.m"
        else
#line 614 "declarative_tree.m"
          {
#line 615 "declarative_tree.m"
            {
#line 615 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 615 "declarative_tree.m"
              return;
            }
#line 614 "declarative_tree.m"
          }
#line 612 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 545 "declarative_tree.m"
      {
#line 545 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Prec_41 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 545 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NestedStartId_87 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 545 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 552 "declarative_tree.m"
        {
#line 552 "declarative_tree.m"
          mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_41, mdb__declarative_tree__NestedStartId_87, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
        }
#line 545 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 556 "declarative_tree.m"
      {
#line 556 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NestedStartId_120 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 556 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Prec_121 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 555 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_44_44 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 558 "declarative_tree.m"
        {
#line 558 "declarative_tree.m"
          mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_121, mdb__declarative_tree__NestedStartId_120, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
        }
#line 556 "declarative_tree.m"
      }
#line 522 "declarative_tree.m"
    else
#line 522 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 599 "declarative_tree.m"
      mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 522 "declarative_tree.m"
    else
#line 599 "declarative_tree.m"
      mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 632 "declarative_tree.m"
    {
#line 632 "declarative_tree.m"
      mdb__declarative_tree__Next_72 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Node_13);
    }
#line 633 "declarative_tree.m"
    {
#line 633 "declarative_tree.m"
      mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__Next_72, mdb__declarative_tree__StartId_10, mdb__declarative_tree__Ns1_32, mdb__declarative_tree__Ns_12);
#line 633 "declarative_tree.m"
      return;
    }
#line 517 "declarative_tree.m"
  }
#line 513 "declarative_tree.m"
}

#line 502 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
#line 502 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13,
#line 502 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 502 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 502 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 502 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 502 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 502 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12)
#line 502 "declarative_tree.m"
{
#line 509 "declarative_tree.m"
  {
#line 509 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 507 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_15_15;

#line 16609 "mdb.declarative_tree.c"
    {
#line 16611 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_15_15);
    }
#line 507 "declarative_tree.m"
    {
#line 507 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_15, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__StartId_10);
    }
#line 509 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 508 "declarative_tree.m"
      *mdb__declarative_tree__Ns_12 = mdb__declarative_tree__Ns0_11;
#line 509 "declarative_tree.m"
    else
#line 510 "declarative_tree.m"
      {
#line 510 "declarative_tree.m"
        mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__StartId_10, mdb__declarative_tree__Ns0_11, mdb__declarative_tree__Ns_12);
#line 510 "declarative_tree.m"
        return;
      }
#line 509 "declarative_tree.m"
  }
#line 502 "declarative_tree.m"
}

#line 474 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
#line 474 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 474 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 474 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_4)
#line 474 "declarative_tree.m"
{
#line 476 "declarative_tree.m"
  {
#line 476 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 476 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_5;
#line 476 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_6_6;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_7_7;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_8_8;
#line 478 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 478 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 478 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 478 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13;
#line 478 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 478 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15;

#line 477 "declarative_tree.m"
    {
#line 477 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__Store_3, mdb__declarative_tree__Ref_4, &mdb__declarative_tree__CallNode_5);
    }
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 0));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 1));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 2)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 3)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 4)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 5)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 6)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 7)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 8)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 9)));
#line 478 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 476 "declarative_tree.m"
  }
#line 474 "declarative_tree.m"
}

#line 455 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
#line 455 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 455 "declarative_tree.m"
{
#line 455 "declarative_tree.m"
  {
#line 455 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 455 "declarative_tree.m"
    MR_builtin_longjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0, 1);
#line 455 "declarative_tree.m"
  }
#line 455 "declarative_tree.m"
}

#line 455 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
#line 455 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 455 "declarative_tree.m"
{
#line 455 "declarative_tree.m"
  {
#line 455 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 465 "declarative_tree.m"
    {
#line 465 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19);
    }
#line 465 "declarative_tree.m"
    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 465 "declarative_tree.m"
      {
#line 465 "declarative_tree.m"
        mdb__declarative_tree__missing_answer_special_case_1_p_0_1(mdb__declarative_tree__env_ptr);
#line 465 "declarative_tree.m"
        return;
      }
#line 455 "declarative_tree.m"
  }
#line 455 "declarative_tree.m"
}

#line 455 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
#line 455 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 455 "declarative_tree.m"
{
#line 455 "declarative_tree.m"
  {
#line 455 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 464 "declarative_tree.m"
    {
#line 464 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18);
    }
#line 455 "declarative_tree.m"
    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 455 "declarative_tree.m"
      {
#line 465 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_16_16 = (MR_String) "solutions";
#line 470 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19 = (MR_Word) &mdb__declarative_tree_scalar_common_2[0];
#line 470 "declarative_tree.m"
        {
#line 470 "declarative_tree.m"
          mdb__declarative_tree__missing_answer_special_case_1_p_0_3(mdb__declarative_tree__env_ptr);
        }
#line 471 "declarative_tree.m"
        {
#line 471 "declarative_tree.m"
          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[10]);
#line 471 "declarative_tree.m"
          {
#line 471 "declarative_tree.m"
            mdb__declarative_tree__missing_answer_special_case_1_p_0_3(mdb__declarative_tree__env_ptr);
          }
#line 471 "declarative_tree.m"
        }
#line 455 "declarative_tree.m"
      }
#line 455 "declarative_tree.m"
  }
#line 455 "declarative_tree.m"
}

#line 455 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
#line 455 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 455 "declarative_tree.m"
{
#line 455 "declarative_tree.m"
  {
#line 455 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 455 "declarative_tree.m"
    if (MR_builtin_setjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0) == 0)
#line 455 "declarative_tree.m"
      {
#line 455 "declarative_tree.m"
        {
#line 455 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ProcLabel_3;
#line 455 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 0)));
#line 455 "declarative_tree.m"
          MR_String mdb__declarative_tree__V_15_15;
#line 455 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21;
#line 455 "declarative_tree.m"
          MR_String mdb__declarative_tree__V_22_22;
#line 455 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_23_23;
#line 455 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_24_24;
#line 455 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_25_25;
#line 456 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 1)));
#line 458 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20;

#line 456 "declarative_tree.m"
          {
#line 456 "declarative_tree.m"
            mdb__declarative_tree__ProcLabel_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__V_8_8);
          }
#line 458 "declarative_tree.m"
          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__ProcLabel_3)) == (MR_mktag((MR_Integer) 0)));
#line 458 "declarative_tree.m"
          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 458 "declarative_tree.m"
            {
#line 458 "declarative_tree.m"
              {
#line 458 "declarative_tree.m"
                mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 0)));
#line 458 "declarative_tree.m"
                mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 1)));
#line 458 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 2)));
#line 458 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 3)));
#line 458 "declarative_tree.m"
                mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 4)));
#line 458 "declarative_tree.m"
                mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 5)));
#line 458 "declarative_tree.m"
              }
#line 455 "declarative_tree.m"
              {
#line 458 "declarative_tree.m"
                (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (mdb__declarative_tree__V_24_24 == (MR_Integer) 0);
#line 455 "declarative_tree.m"
                if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 455 "declarative_tree.m"
                  {
#line 460 "declarative_tree.m"
                    if ((mdb__declarative_tree__V_21_21 == (MR_Integer) 4))
#line 458 "declarative_tree.m"
                      {
#line 459 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(mdb__declarative_tree__V_22_22, (MR_String) "builtin_aggregate") == 0);
#line 458 "declarative_tree.m"
                        if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 458 "declarative_tree.m"
                          {
#line 458 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = mdb__declarative_tree__V_25_25;
#line 458 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = mdb__declarative_tree__V_23_23;
#line 458 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 458 "declarative_tree.m"
                          }
#line 458 "declarative_tree.m"
                      }
#line 460 "declarative_tree.m"
                    else
#line 460 "declarative_tree.m"
                    if ((mdb__declarative_tree__V_21_21 == (MR_Integer) 6))
#line 461 "declarative_tree.m"
                      {
#line 462 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(mdb__declarative_tree__V_22_22, (MR_String) "builtin_aggregate2") == 0);
#line 461 "declarative_tree.m"
                        if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 461 "declarative_tree.m"
                          {
#line 461 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = mdb__declarative_tree__V_25_25;
#line 461 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = mdb__declarative_tree__V_23_23;
#line 461 "declarative_tree.m"
                            (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 461 "declarative_tree.m"
                          }
#line 461 "declarative_tree.m"
                      }
#line 460 "declarative_tree.m"
                    else
#line 460 "declarative_tree.m"
                      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
#line 455 "declarative_tree.m"
                    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 455 "declarative_tree.m"
                      {
#line 464 "declarative_tree.m"
                        mdb__declarative_tree__V_15_15 = (MR_String) "solutions";
#line 470 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18 = (MR_Word) &mdb__declarative_tree_scalar_common_2[0];
#line 470 "declarative_tree.m"
                        {
#line 470 "declarative_tree.m"
                          mdb__declarative_tree__missing_answer_special_case_1_p_0_2(mdb__declarative_tree__env_ptr);
                        }
#line 471 "declarative_tree.m"
                        {
#line 471 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[10]);
#line 471 "declarative_tree.m"
                          {
#line 471 "declarative_tree.m"
                            mdb__declarative_tree__missing_answer_special_case_1_p_0_2(mdb__declarative_tree__env_ptr);
                          }
#line 471 "declarative_tree.m"
                        }
#line 455 "declarative_tree.m"
                      }
#line 455 "declarative_tree.m"
                  }
#line 455 "declarative_tree.m"
              }
#line 458 "declarative_tree.m"
            }
#line 455 "declarative_tree.m"
        }
#line 455 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
#line 455 "declarative_tree.m"
      }
#line 455 "declarative_tree.m"
    else
#line 455 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 455 "declarative_tree.m"
  }
#line 455 "declarative_tree.m"
}

#line 453 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
#line 453 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_2)
#line 453 "declarative_tree.m"
{
#line 453 "declarative_tree.m"
  {
#line 453 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s mdb__declarative_tree__env;

#line 453 "declarative_tree.m"
    (mdb__declarative_tree__env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2 = mdb__declarative_tree__Atom_2;
#line 455 "declarative_tree.m"
    {
#line 455 "declarative_tree.m"
      mdb__declarative_tree__missing_answer_special_case_1_p_0_4(&mdb__declarative_tree__env);
    }
#line 455 "declarative_tree.m"
    return (mdb__declarative_tree__env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
#line 453 "declarative_tree.m"
  }
#line 453 "declarative_tree.m"
}

#line 346 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90,
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Weighting_10,
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 346 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevWeight_13,
#line 346 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Weight_14,
#line 346 "declarative_tree.m"
  MR_Word mdb__declarative_tree__RecordDups_15,
#line 346 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__DupFactor_16,
#line 346 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevDupWeight_17,
#line 346 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Excess_18)
#line 346 "declarative_tree.m"
{
#line 351 "declarative_tree.m"
  while (MR_TRUE)
#line 351 "declarative_tree.m"
    {
#line 351 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 351 "declarative_tree.m"
      {
#line 351 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 351 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Store_11 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 351 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Ref_12 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 351 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Final_19;
#line 424 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_21;
#line 424 "declarative_tree.m"
        MR_Box mdb__declarative_tree__RedoId_22;
#line 424 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__FinalEvent_24;
#line 424 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__FinalSuspicion_27;
#line 424 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NewRecordDups_28;

#line 352 "declarative_tree.m"
        {
#line 352 "declarative_tree.m"
          mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__Ref_12, &mdb__declarative_tree__Final_19);
        }
#line 358 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Final_19)) == (MR_mktag((MR_Integer) 1))))
#line 356 "declarative_tree.m"
          {
#line 355 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 0));
#line 355 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_23_23;
#line 355 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_25_25;
#line 355 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_26_26;

#line 355 "declarative_tree.m"
            mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 355 "declarative_tree.m"
            mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 355 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 3)));
#line 355 "declarative_tree.m"
            mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 355 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 355 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 355 "declarative_tree.m"
            mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 7)));
#line 357 "declarative_tree.m"
            mdb__declarative_tree__NewRecordDups_28 = mdb__declarative_tree__RecordDups_15;
#line 356 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 356 "declarative_tree.m"
          }
#line 358 "declarative_tree.m"
        else
#line 358 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Final_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 364 "declarative_tree.m"
          {
#line 363 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 363 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_32_32;
#line 363 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_33_33;

#line 363 "declarative_tree.m"
            mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 363 "declarative_tree.m"
            mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 3));
#line 363 "declarative_tree.m"
            mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 363 "declarative_tree.m"
            mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 363 "declarative_tree.m"
            mdb__declarative_tree__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 363 "declarative_tree.m"
            mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 7)));
#line 365 "declarative_tree.m"
            mdb__declarative_tree__NewRecordDups_28 = (MR_Integer) 1;
#line 364 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 364 "declarative_tree.m"
          }
#line 358 "declarative_tree.m"
        else
#line 358 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Final_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 360 "declarative_tree.m"
          {
#line 359 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 359 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_30_30;

#line 359 "declarative_tree.m"
            mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 359 "declarative_tree.m"
            mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 3));
#line 359 "declarative_tree.m"
            mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 359 "declarative_tree.m"
            mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 359 "declarative_tree.m"
            mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 361 "declarative_tree.m"
            mdb__declarative_tree__NewRecordDups_28 = (MR_Integer) 1;
#line 360 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 360 "declarative_tree.m"
          }
#line 358 "declarative_tree.m"
        else
#line 358 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 424 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 397 "declarative_tree.m"
          {
#line 397 "declarative_tree.m"
            MR_Box mdb__declarative_tree__ExitId_36;
#line 397 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__RedoEvent_37;
#line 397 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__RedoSuspicion_39;
#line 369 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Redo_34;
#line 370 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_35_35;
#line 370 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_38_38;

#line 369 "declarative_tree.m"
            {
#line 369 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__RedoId_22, &mdb__declarative_tree__Redo_34);
            }
#line 369 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 369 "declarative_tree.m"
              {
#line 370 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 0));
#line 370 "declarative_tree.m"
                mdb__declarative_tree__ExitId_36 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 1));
#line 370 "declarative_tree.m"
                mdb__declarative_tree__RedoEvent_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 2)));
#line 370 "declarative_tree.m"
                mdb__declarative_tree__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 3)));
#line 370 "declarative_tree.m"
                mdb__declarative_tree__RedoSuspicion_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 4)));
#line 370 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 369 "declarative_tree.m"
              }
#line 397 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 386 "declarative_tree.m"
              {
#line 386 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewPrevDupWeight_40;
#line 386 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewPrevWeight_41;
#line 386 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_56_56;
#line 386 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_57_57;

#line 17205 "mdb.declarative_tree.c"
                if ((mdb__declarative_tree__NewRecordDups_28 == (MR_Integer) 0))
#line 17207 "mdb.declarative_tree.c"
                  {
#line 385 "declarative_tree.m"
                    mdb__declarative_tree__NewPrevDupWeight_40 = (MR_Integer) 0;
#line 390 "declarative_tree.m"
                    if ((mdb__declarative_tree__Weighting_10 == (MR_Integer) 0))
#line 388 "declarative_tree.m"
                      {
#line 388 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__V_52_52;
#line 388 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__V_53_53 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);

#line 389 "declarative_tree.m"
                        mdb__declarative_tree__V_52_52 = (mdb__declarative_tree__V_53_53 - mdb__declarative_tree__RedoEvent_37);
#line 389 "declarative_tree.m"
                        mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_52_52 + (MR_Integer) 1);
#line 388 "declarative_tree.m"
                      }
#line 390 "declarative_tree.m"
                    else
#line 391 "declarative_tree.m"
                      {
#line 391 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__V_51_51 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);

#line 392 "declarative_tree.m"
                        mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_51_51 - mdb__declarative_tree__RedoSuspicion_39);
#line 391 "declarative_tree.m"
                      }
#line 17237 "mdb.declarative_tree.c"
                  }
#line 17239 "mdb.declarative_tree.c"
                else
#line 17241 "mdb.declarative_tree.c"
                if ((mdb__declarative_tree__Weighting_10 == (MR_Integer) 0))
#line 17243 "mdb.declarative_tree.c"
                  {
#line 17245 "mdb.declarative_tree.c"
                    MR_Integer mdb__declarative_tree__V_47_47;
#line 17247 "mdb.declarative_tree.c"
                    MR_Integer mdb__declarative_tree__V_48_48;
#line 17249 "mdb.declarative_tree.c"
                    MR_Integer mdb__declarative_tree__V_49_49 = (mdb__declarative_tree__FinalEvent_24 - mdb__declarative_tree__RedoEvent_37);
#line 17251 "mdb.declarative_tree.c"
                    MR_Integer mdb__declarative_tree__V_92_92;
#line 17253 "mdb.declarative_tree.c"
                    MR_Integer mdb__declarative_tree__V_93_93;

#line 377 "declarative_tree.m"
                    mdb__declarative_tree__V_48_48 = (mdb__declarative_tree__V_49_49 + (MR_Integer) 1);
#line 377 "declarative_tree.m"
                    mdb__declarative_tree__V_47_47 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_48_48);
#line 376 "declarative_tree.m"
                    mdb__declarative_tree__NewPrevDupWeight_40 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_47_47);
#line 389 "declarative_tree.m"
                    mdb__declarative_tree__V_93_93 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);
#line 389 "declarative_tree.m"
                    mdb__declarative_tree__V_92_92 = (mdb__declarative_tree__V_93_93 - mdb__declarative_tree__RedoEvent_37);
#line 389 "declarative_tree.m"
                    mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_92_92 + (MR_Integer) 1);
#line 17268 "mdb.declarative_tree.c"
                  }
#line 17270 "mdb.declarative_tree.c"
                else
#line 17272 "mdb.declarative_tree.c"
                  {
#line 17274 "mdb.declarative_tree.c"
                    MR_Integer mdb__declarative_tree__V_45_45;
#line 17276 "mdb.declarative_tree.c"
                    MR_Integer mdb__declarative_tree__V_46_46 = (mdb__declarative_tree__FinalSuspicion_27 - mdb__declarative_tree__RedoSuspicion_39);
#line 17278 "mdb.declarative_tree.c"
                    MR_Integer mdb__declarative_tree__V_95_95;

#line 381 "declarative_tree.m"
                    mdb__declarative_tree__V_45_45 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_46_46);
#line 380 "declarative_tree.m"
                    mdb__declarative_tree__NewPrevDupWeight_40 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_45_45);
#line 392 "declarative_tree.m"
                    mdb__declarative_tree__V_95_95 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);
#line 392 "declarative_tree.m"
                    mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_95_95 - mdb__declarative_tree__RedoSuspicion_39);
#line 17289 "mdb.declarative_tree.c"
                  }
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_56_56 = ((MR_Word) mdb__declarative_tree__ExitId_36);
#line 396 "declarative_tree.m"
                mdb__declarative_tree__V_57_57 = (mdb__declarative_tree__DupFactor_16 + (MR_Integer) 1);
#line 394 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 394 "declarative_tree.m"
                {
#line 394 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__3__tmp_copy_3 = mdb__declarative_tree__V_56_56;
#line 394 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__PrevWeight__tmp_copy_13 = mdb__declarative_tree__NewPrevWeight_41;
#line 394 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__RecordDups__tmp_copy_15 = mdb__declarative_tree__NewRecordDups_28;
#line 394 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__DupFactor__tmp_copy_16 = mdb__declarative_tree__V_57_57;
#line 394 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__PrevDupWeight__tmp_copy_17 = mdb__declarative_tree__NewPrevDupWeight_40;

#line 394 "declarative_tree.m"
                  mdb__declarative_tree__PrevDupWeight_17 = mdb__declarative_tree__PrevDupWeight__tmp_copy_17;
#line 394 "declarative_tree.m"
                  mdb__declarative_tree__DupFactor_16 = mdb__declarative_tree__DupFactor__tmp_copy_16;
#line 394 "declarative_tree.m"
                  mdb__declarative_tree__RecordDups_15 = mdb__declarative_tree__RecordDups__tmp_copy_15;
#line 394 "declarative_tree.m"
                  mdb__declarative_tree__PrevWeight_13 = mdb__declarative_tree__PrevWeight__tmp_copy_13;
#line 394 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__HeadVar__3__tmp_copy_3;
#line 394 "declarative_tree.m"
                }
#line 394 "declarative_tree.m"
                continue;
#line 386 "declarative_tree.m"
              }
#line 397 "declarative_tree.m"
            else
#line 398 "declarative_tree.m"
              {
#line 398 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Call_42;
#line 398 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CallEvent_43;
#line 398 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CallSuspicion_44;
#line 399 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_72_72;
#line 399 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_73_73;
#line 399 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_74_74;
#line 399 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_75_75;
#line 399 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_76_76;
#line 399 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_77_77;
#line 399 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_78_78;
#line 399 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_79_79;

#line 398 "declarative_tree.m"
                {
#line 398 "declarative_tree.m"
                  mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__CallId_21, &mdb__declarative_tree__Call_42);
                }
#line 399 "declarative_tree.m"
                mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 0));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__V_73_73 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 1));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 2)));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 3)));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__CallEvent_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 4)));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 5)));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 6)));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 7)));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 8)));
#line 399 "declarative_tree.m"
                mdb__declarative_tree__CallSuspicion_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 9)));
#line 404 "declarative_tree.m"
                if ((mdb__declarative_tree__Weighting_10 == (MR_Integer) 0))
#line 402 "declarative_tree.m"
                  {
#line 402 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_60_60;
#line 402 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_61_61 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);

#line 403 "declarative_tree.m"
                    mdb__declarative_tree__V_60_60 = (mdb__declarative_tree__V_61_61 - mdb__declarative_tree__CallEvent_43);
#line 403 "declarative_tree.m"
                    *mdb__declarative_tree__Weight_14 = (mdb__declarative_tree__V_60_60 + (MR_Integer) 1);
#line 402 "declarative_tree.m"
                  }
#line 404 "declarative_tree.m"
                else
#line 405 "declarative_tree.m"
                  {
#line 405 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_59_59 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);

#line 406 "declarative_tree.m"
                    *mdb__declarative_tree__Weight_14 = (mdb__declarative_tree__V_59_59 - mdb__declarative_tree__CallSuspicion_44);
#line 405 "declarative_tree.m"
                  }
#line 419 "declarative_tree.m"
                if ((mdb__declarative_tree__NewRecordDups_28 == (MR_Integer) 0))
#line 421 "declarative_tree.m"
                  *mdb__declarative_tree__Excess_18 = (MR_Integer) 0;
#line 419 "declarative_tree.m"
                else
#line 414 "declarative_tree.m"
                if ((mdb__declarative_tree__Weighting_10 == (MR_Integer) 0))
#line 411 "declarative_tree.m"
                  {
#line 411 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_65_65;
#line 411 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_66_66;
#line 411 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_67_67 = (mdb__declarative_tree__FinalEvent_24 - mdb__declarative_tree__CallEvent_43);

#line 413 "declarative_tree.m"
                    mdb__declarative_tree__V_66_66 = (mdb__declarative_tree__V_67_67 + (MR_Integer) 1);
#line 412 "declarative_tree.m"
                    mdb__declarative_tree__V_65_65 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_66_66);
#line 412 "declarative_tree.m"
                    *mdb__declarative_tree__Excess_18 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_65_65);
#line 411 "declarative_tree.m"
                  }
#line 414 "declarative_tree.m"
                else
#line 415 "declarative_tree.m"
                  {
#line 415 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_63_63;
#line 415 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_64_64 = (mdb__declarative_tree__FinalSuspicion_27 - mdb__declarative_tree__CallSuspicion_44);

#line 416 "declarative_tree.m"
                    mdb__declarative_tree__V_63_63 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_64_64);
#line 416 "declarative_tree.m"
                    *mdb__declarative_tree__Excess_18 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_63_63);
#line 415 "declarative_tree.m"
                  }
#line 398 "declarative_tree.m"
              }
#line 397 "declarative_tree.m"
          }
#line 424 "declarative_tree.m"
        else
#line 425 "declarative_tree.m"
          {
#line 425 "declarative_tree.m"
            {
#line 425 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[9])));
#line 425 "declarative_tree.m"
              return;
            }
#line 425 "declarative_tree.m"
          }
#line 351 "declarative_tree.m"
      }
#line 351 "declarative_tree.m"
      break;
#line 351 "declarative_tree.m"
    }
#line 346 "declarative_tree.m"
}

#line 177 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_answers_4_p_0(
#line 177 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26,
#line 177 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_5,
#line 177 "declarative_tree.m"
  MR_Box mdb__declarative_tree__RedoId_6,
#line 177 "declarative_tree.m"
  MR_Word mdb__declarative_tree__DeclAtoms0_7,
#line 177 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__DeclAtoms_8)
#line 177 "declarative_tree.m"
{
#line 187 "declarative_tree.m"
  while (MR_TRUE)
#line 187 "declarative_tree.m"
    {
#line 187 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 187 "declarative_tree.m"
      {
#line 187 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 187 "declarative_tree.m"
        MR_Box mdb__declarative_tree__ExitId_10;
#line 182 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17;
#line 182 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9;
#line 182 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 182 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 182 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_13_13;

#line 182 "declarative_tree.m"
        {
#line 182 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, mdb__declarative_tree__Store_5, mdb__declarative_tree__RedoId_6, &mdb__declarative_tree__V_17_17);
        }
#line 182 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 182 "declarative_tree.m"
          {
#line 182 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 0));
#line 182 "declarative_tree.m"
            mdb__declarative_tree__ExitId_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 1));
#line 182 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 2)));
#line 182 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 3)));
#line 182 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__V_17_17, (MR_Integer) 4)));
#line 182 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 182 "declarative_tree.m"
          }
#line 187 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 183 "declarative_tree.m"
          {
#line 183 "declarative_tree.m"
            MR_Word mdb__declarative_tree__TypeInfo_40_62;
#line 183 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ExitNode_14;
#line 183 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NextId_15;
#line 183 "declarative_tree.m"
            MR_Word mdb__declarative_tree__DeclAtom_16;
#line 183 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_18_18;
#line 183 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ExitAtom_30;
#line 183 "declarative_tree.m"
            MR_Box mdb__declarative_tree__CallId_31;
#line 183 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Call_32;
#line 183 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__CallIoSeq_33;
#line 183 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__ExitIoSeq_34;
#line 184 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_19_19;
#line 184 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_20_20;
#line 184 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_21_21;
#line 184 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_22_22;
#line 184 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_23_23;
#line 184 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_24_24;
#line 184 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_25_25;
#line 107 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_38_38;
#line 107 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_39_39;
#line 107 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_40_40;
#line 107 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_41_41;
#line 107 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_42_42;
#line 107 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_43_43;
#line 107 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_44_44;
#line 109 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_45_45;
#line 109 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_46_46;
#line 109 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_47_47;
#line 109 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_48_48;
#line 109 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_49_49;
#line 109 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_50_50;
#line 109 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_51_51;
#line 109 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_52_52;
#line 109 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_53_53;
#line 110 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_54_54;
#line 110 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_55_55;
#line 110 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_56_56;
#line 110 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_57_57;
#line 110 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_58_58;
#line 110 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_59_59;
#line 110 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_60_60;

#line 183 "declarative_tree.m"
            {
#line 183 "declarative_tree.m"
              mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, mdb__declarative_tree__Store_5, mdb__declarative_tree__ExitId_10, &mdb__declarative_tree__ExitNode_14);
            }
#line 184 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 184 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 184 "declarative_tree.m"
            mdb__declarative_tree__NextId_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 184 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 184 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 184 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 184 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 184 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 17637 "mdb.declarative_tree.c"
            {
#line 17639 "mdb.declarative_tree.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_62);
            }
#line 106 "declarative_tree.m"
            {
#line 106 "declarative_tree.m"
              mdb__declarative_tree__ExitAtom_30 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_62, mdb__declarative_tree__ExitNode_14);
            }
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__CallId_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_39_39 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 108 "declarative_tree.m"
            {
#line 108 "declarative_tree.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallId_31, &mdb__declarative_tree__Call_32);
            }
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 0));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 1));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 2)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 3)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 4)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 5)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 6)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 7)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__CallIoSeq_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 8)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 9)));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__V_54_54 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__V_55_55 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__V_56_56 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__V_59_59 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__ExitIoSeq_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 110 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 111 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_33 == mdb__declarative_tree__ExitIoSeq_34);
#line 113 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 112 "declarative_tree.m"
              {
#line 112 "declarative_tree.m"
                {
#line 112 "declarative_tree.m"
                  mdb__declarative_tree__DeclAtom_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_30));
#line 112 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "declarative_tree.m"
                }
#line 112 "declarative_tree.m"
              }
#line 113 "declarative_tree.m"
            else
#line 114 "declarative_tree.m"
              {
#line 114 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_36_36;
#line 114 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_37_37;

#line 115 "declarative_tree.m"
                {
#line 115 "declarative_tree.m"
                  mdb__declarative_tree__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_37_37, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_33));
#line 115 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_37_37, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_34));
#line 115 "declarative_tree.m"
                }
#line 115 "declarative_tree.m"
                {
#line 115 "declarative_tree.m"
                  mdb__declarative_tree__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 115 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_36_36, 0) = ((MR_Box) (mdb__declarative_tree__V_37_37));
#line 115 "declarative_tree.m"
                }
#line 114 "declarative_tree.m"
                {
#line 114 "declarative_tree.m"
                  mdb__declarative_tree__DeclAtom_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_30));
#line 114 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 1) = ((MR_Box) (mdb__declarative_tree__V_36_36));
#line 114 "declarative_tree.m"
                }
#line 114 "declarative_tree.m"
              }
#line 186 "declarative_tree.m"
            {
#line 186 "declarative_tree.m"
              mdb__declarative_tree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_18_18, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_16));
#line 186 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_18_18, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtoms0_7));
#line 186 "declarative_tree.m"
            }
#line 186 "declarative_tree.m"
            /* direct tailcall eliminated */
#line 186 "declarative_tree.m"
            {
#line 186 "declarative_tree.m"
              MR_Box mdb__declarative_tree__RedoId__tmp_copy_6 = mdb__declarative_tree__NextId_15;
#line 186 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DeclAtoms0__tmp_copy_7 = mdb__declarative_tree__V_18_18;

#line 186 "declarative_tree.m"
              mdb__declarative_tree__DeclAtoms0_7 = mdb__declarative_tree__DeclAtoms0__tmp_copy_7;
#line 186 "declarative_tree.m"
              mdb__declarative_tree__RedoId_6 = mdb__declarative_tree__RedoId__tmp_copy_6;
#line 186 "declarative_tree.m"
            }
#line 186 "declarative_tree.m"
            continue;
#line 183 "declarative_tree.m"
          }
#line 187 "declarative_tree.m"
        else
#line 188 "declarative_tree.m"
          *mdb__declarative_tree__DeclAtoms_8 = mdb__declarative_tree__DeclAtoms0_7;
#line 187 "declarative_tree.m"
      }
#line 187 "declarative_tree.m"
      break;
#line 187 "declarative_tree.m"
    }
#line 177 "declarative_tree.m"
}

#line 125 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(
#line 125 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29,
#line 125 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 125 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 125 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Atom_6)
#line 125 "declarative_tree.m"
{
#line 128 "declarative_tree.m"
  {
#line 128 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 128 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_7;

#line 129 "declarative_tree.m"
    {
#line 129 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__Node_7);
    }
#line 133 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 1))))
#line 131 "declarative_tree.m"
      {
#line 131 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_43;
#line 131 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 131 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_40;
#line 131 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_41;
#line 131 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 0));
#line 131 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 131 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 131 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 131 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 131 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 131 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 7)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_9, &mdb__declarative_tree__CallNode_40);
        }
#line 17860 "mdb.declarative_tree.c"
        {
#line 17862 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_43);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_41 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_43, mdb__declarative_tree__CallNode_40);
        }
#line 123 "declarative_tree.m"
        *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_41;
#line 131 "declarative_tree.m"
      }
#line 133 "declarative_tree.m"
    else
#line 133 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 137 "declarative_tree.m"
      {
#line 137 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_36;
#line 137 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 137 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_33;
#line 137 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_34;
#line 137 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 137 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3));
#line 137 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 137 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 137 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 137 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 7)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_28, &mdb__declarative_tree__CallNode_33);
        }
#line 17906 "mdb.declarative_tree.c"
        {
#line 17908 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_36);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_34 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_36, mdb__declarative_tree__CallNode_33);
        }
#line 123 "declarative_tree.m"
        *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_34;
#line 137 "declarative_tree.m"
      }
#line 133 "declarative_tree.m"
    else
#line 134 "declarative_tree.m"
      {
#line 134 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_11_50;
#line 134 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 134 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallNode_47;
#line 134 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallAtom_48;
#line 134 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 134 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3));
#line 134 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 134 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 134 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 6)));

#line 121 "declarative_tree.m"
        {
#line 121 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_27, &mdb__declarative_tree__CallNode_47);
        }
#line 17948 "mdb.declarative_tree.c"
        {
#line 17950 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_50);
        }
#line 122 "declarative_tree.m"
        {
#line 122 "declarative_tree.m"
          mdb__declarative_tree__CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_50, mdb__declarative_tree__CallNode_47);
        }
#line 123 "declarative_tree.m"
        *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_48;
#line 134 "declarative_tree.m"
      }
#line 128 "declarative_tree.m"
  }
#line 125 "declarative_tree.m"
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
#line 312 "declarative_tree.m"
  {
#line 312 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 312 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 312 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 312 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_7;
#line 312 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_8;
#line 312 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 1887 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_25;
#line 1877 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_23;
#line 17998 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18000 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_23;
#line 315 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_10_10;
#line 315 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_11_11;
#line 315 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 315 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_13_13;
#line 315 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 315 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15;
#line 315 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_16_16;
#line 315 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17;
#line 315 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_18_18;

#line 18021 "mdb.declarative_tree.c"
    {
#line 18023 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_23);
    }
#line 18026 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 18028 "mdb.declarative_tree.c"
      {
#line 18030 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_23 = ((MR_Word) mdb__declarative_tree__conv1_Node0_23);
#line 18032 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 18034 "mdb.declarative_tree.c"
      }
#line 1877 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1880 "declarative_tree.m"
      {
#line 1880 "declarative_tree.m"
        if (((MR_tag((MR_Word) mdb__declarative_tree__Node0_23)) == (MR_mktag((MR_Integer) 1))))
#line 1879 "declarative_tree.m"
          {
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 0));
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_26_26;
#line 1879 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_27_27;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_28_28;
#line 1879 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_30_30;
#line 1879 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_31_31;

#line 1879 "declarative_tree.m"
            mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 3)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 7)));
#line 1879 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1879 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1883 "declarative_tree.m"
          {
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_38_38;
#line 1883 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_39_39;
#line 1883 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_40_40;
#line 1883 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_41_41;
#line 1883 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_42_42;

#line 1883 "declarative_tree.m"
            mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 3));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 7)));
#line 1883 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1883 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
        if (((((MR_tag((MR_Word) mdb__declarative_tree__Node0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1881 "declarative_tree.m"
          {
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_33_33;
#line 1881 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_34_34;
#line 1881 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_35_35;
#line 1881 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_36_36;

#line 1881 "declarative_tree.m"
            mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 3));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1881 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1881 "declarative_tree.m"
          }
#line 1880 "declarative_tree.m"
        else
#line 1880 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1880 "declarative_tree.m"
      }
#line 1887 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1886 "declarative_tree.m"
      mdb__declarative_tree__CallId_7 = mdb__declarative_tree__CallId0_25;
#line 1887 "declarative_tree.m"
    else
#line 1888 "declarative_tree.m"
      {
#line 1888 "declarative_tree.m"
        {
#line 1888 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1888 "declarative_tree.m"
      }
#line 314 "declarative_tree.m"
    {
#line 314 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_7, &mdb__declarative_tree__CallNode_8);
    }
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 315 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 315 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 315 "declarative_tree.m"
      *mdb__declarative_tree__ImplicitTreeInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_9_9, (MR_Integer) 0)));
#line 312 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 312 "declarative_tree.m"
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
#line 1893 "declarative_tree.m"
  {
#line 1893 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1893 "declarative_tree.m"
    {
#line 1893 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_97_116_111_109_95_115_117_98_116_101_114_109_95_105_115_95_103_114_111_117_110_100_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__ArgPos_6);
    }
#line 1893 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1893 "declarative_tree.m"
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
#line 1834 "declarative_tree.m"
  {
#line 1834 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1834 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 1834 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;
#line 1834 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Call_13;
#line 1834 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_28;
#line 1844 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_30_30;
#line 1844 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_31_31;
#line 1844 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_32_32;
#line 1844 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_33_33;
#line 1844 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_34_34;
#line 1844 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_35_35;
#line 1844 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_36_36;
#line 1844 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_37_37;

#line 1835 "declarative_tree.m"
    {
#line 1835 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_11);
    }
#line 1838 "declarative_tree.m"
    if (((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 1))))
#line 1837 "declarative_tree.m"
      {
#line 1837 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 1837 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_14_14;
#line 1837 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15;
#line 1837 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16;
#line 1837 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17;
#line 1837 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_18_18;

#line 1837 "declarative_tree.m"
        mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1837 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1837 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 1837 "declarative_tree.m"
        *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1837 "declarative_tree.m"
        mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1837 "declarative_tree.m"
        mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1837 "declarative_tree.m"
        mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1837 "declarative_tree.m"
      }
#line 1838 "declarative_tree.m"
    else
#line 1838 "declarative_tree.m"
    if (((((MR_tag((MR_Word) mdb__declarative_tree__Node_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1841 "declarative_tree.m"
      {
#line 1841 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1841 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_24_24;
#line 1841 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_25_25;
#line 1841 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_26_26;
#line 1841 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_27_27;

#line 1841 "declarative_tree.m"
        mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1841 "declarative_tree.m"
        mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 1841 "declarative_tree.m"
        mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1841 "declarative_tree.m"
        *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1841 "declarative_tree.m"
        mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1841 "declarative_tree.m"
        mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1841 "declarative_tree.m"
      }
#line 1838 "declarative_tree.m"
    else
#line 1839 "declarative_tree.m"
      {
#line 1839 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1839 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_20_20;
#line 1839 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_21_21;
#line 1839 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_22_22;

#line 1839 "declarative_tree.m"
        mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1839 "declarative_tree.m"
        mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 1839 "declarative_tree.m"
        *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1839 "declarative_tree.m"
        mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1839 "declarative_tree.m"
        mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1839 "declarative_tree.m"
      }
#line 1843 "declarative_tree.m"
    {
#line 1843 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47, mdb__declarative_tree__Store_6, mdb__declarative_tree__Call_13, &mdb__declarative_tree__CallNode_28);
    }
#line 1844 "declarative_tree.m"
    *mdb__declarative_tree__CallPreceding_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 0));
#line 1844 "declarative_tree.m"
    mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 1));
#line 1844 "declarative_tree.m"
    mdb__declarative_tree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 2)));
#line 1844 "declarative_tree.m"
    *mdb__declarative_tree__SeqNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 3)));
#line 1844 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 4)));
#line 1844 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 5)));
#line 1844 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 6)));
#line 1844 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 7)));
#line 1844 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 8)));
#line 1844 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 9)));
#line 1834 "declarative_tree.m"
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
