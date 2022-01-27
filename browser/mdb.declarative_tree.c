/*
** Automatically generated from `declarative_tree.m'
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


/* :- module mdb.declarative_tree. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_tree__init
ENDINIT
*/

#include "mdb.declarative_tree.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
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



#line 1884 "declarative_tree.m"
struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s {
#line 1887 "declarative_tree.m"
  MR_bool mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
#line 1887 "declarative_tree.m"
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6;
#line 1892 "declarative_tree.m"
  jmp_buf mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0;
#line 1892 "declarative_tree.m"
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7;
#line 1893 "declarative_tree.m"
  MR_Box mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7;
#line 1884 "declarative_tree.m"
};

#line 448 "declarative_tree.m"
struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s {
#line 448 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2;
#line 450 "declarative_tree.m"
  MR_bool mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
#line 450 "declarative_tree.m"
  jmp_buf mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0;
#line 450 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4;
#line 450 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5;
#line 450 "declarative_tree.m"
  MR_String mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_16_16;
#line 450 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18;
#line 450 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19;
#line 448 "declarative_tree.m"
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

#line 1900 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
#line 1900 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_9_9,
#line 1900 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_10_10,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 1900 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 1900 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1900 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 1900 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1900 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1900 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1900 "declarative_tree.m"
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

#line 1746 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_12,
#line 1746 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_13,
#line 1746 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_14,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_15,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeNodeId_16,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Prims_17,
#line 1746 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_18,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_19,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_21,
#line 1746 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_22);

#line 1558 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
#line 1558 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1558 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 1553 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
#line 1553 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1553 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1553 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath0_3,
#line 1553 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_5,
#line 1553 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_6);

#line 1356 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
#line 1356 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1356 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__2_2);

#line 947 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
#line 947 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49,
#line 947 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 947 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_7,
#line 947 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_8,
#line 947 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10);

#line 1650 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1650__1_2_p_0(
#line 1650 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1650 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_43);

#line 1662 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1662__1_2_p_0(
#line 1662 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1662 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_114);

#line 1184 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1184__1_3_p_0(
#line 1184 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1184 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AdjustedContour_21,
#line 1184 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_29);

#line 273 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
#line 273 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_127,
#line 273 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 273 "declarative_tree.m"
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

#line 901 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
#line 901 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 901 "declarative_tree.m"
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

#line 771 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_15,
#line 771 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 771 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1113 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_14,
#line 1113 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 1113 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1738 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
#line 1738 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1738 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1738 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 1738 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
#line 1738 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1738 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 778 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
#line 778 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 778 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 778 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 775 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
#line 775 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 775 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 775 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 775 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
#line 775 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 775 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 741 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_35,
#line 741 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 741 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_19,
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 487 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
#line 487 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 487 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 487 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 487 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
#line 487 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_1,
#line 487 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 780 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_23,
#line 780 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 780 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_17,
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1892 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
#line 1892 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1893 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
#line 1893 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1892 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
#line 1892 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1892 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
#line 1892 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1884 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
#line 1884 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21,
#line 1884 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 1884 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_4);

#line 1836 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
#line 1836 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32,
#line 1836 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1836 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 1836 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Node_6);

#line 1806 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
#line 1806 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1806 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_2,
#line 1806 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Pos_3,
#line 1806 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ArgPos_4);

#line 1801 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
#line 1801 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_4,
#line 1801 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_5);

#line 1779 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
#line 1779 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__TracingOn_1);

#line 1768 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
#line 1768 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1768 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ParentPath_2,
#line 1768 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__N_3,
#line 1768 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 1726 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
#line 1726 "declarative_tree.m"
  MR_String mdb__declarative_tree__Module_5,
#line 1726 "declarative_tree.m"
  MR_String mdb__declarative_tree__Name_6,
#line 1726 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_7,
#line 1726 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__NewVar_8);

#line 1541 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
#line 1541 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_5,
#line 1541 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_6,
#line 1541 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_7,
#line 1541 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Var_8);

#line 1529 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
#line 1529 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalId_3,
#line 1529 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_4);

#line 1385 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145,
#line 1385 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_17,
#line 1385 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_18,
#line 1385 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_19,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_20,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoal_21,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalArgs_22,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_23,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_24,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_25,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_26,
#line 1385 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_27,
#line 1385 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_28,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_29,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_30,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_31);

#line 1218 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177,
#line 1218 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_13,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Goal_14,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_15,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_16,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_17,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_18,
#line 1218 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_19,
#line 1218 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_20,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_21,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_22,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_23);

#line 1140 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1140 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_11,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_12,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_13,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_14,
#line 1140 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_15,
#line 1140 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_16,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_17,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_18,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_19);

#line 1106 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
#line 1106 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 1106 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1106 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1106 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__FinalAtom_7);

#line 1104 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
#line 1104 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1104 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 1104 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__wrapper_arg_2);

#line 1096 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
#line 1096 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 1096 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1096 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_5,
#line 1096 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ExitAtoms_6);

#line 1066 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
#line 1066 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34,
#line 1066 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1066 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 1066 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Node_8,
#line 1066 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Nodes0_9,
#line 1066 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Nodes_10);

#line 1043 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
#line 1043 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25,
#line 1043 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1043 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_5,
#line 1043 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ParentCallNode_6);

#line 1012 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
#line 1012 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_25,
#line 1012 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_5,
#line 1012 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_6,
#line 1012 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_7,
#line 1012 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_8);

#line 994 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
#line 994 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42,
#line 994 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 994 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_7,
#line 994 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_8,
#line 994 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_9,
#line 994 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10);

#line 941 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
#line 941 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 941 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 842 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
#line 842 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43,
#line 842 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_9,
#line 842 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_10,
#line 842 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_11,
#line 842 "declarative_tree.m"
  MR_Word mdb__declarative_tree__StartLoc_12,
#line 842 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_13,
#line 842 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_14,
#line 842 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_15,
#line 842 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_16);

#line 637 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
#line 637 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84,
#line 637 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 637 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 637 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 637 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 637 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10);

#line 627 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
#line 627 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11,
#line 627 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 627 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 627 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 627 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 627 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10);

#line 505 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
#line 505 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115,
#line 505 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 505 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 505 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 505 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 505 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 505 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12);

#line 494 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 494 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 494 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 494 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 494 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12);

#line 469 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
#line 469 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 469 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 469 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_4);

#line 450 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
#line 450 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 450 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
#line 450 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 450 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
#line 450 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 450 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
#line 450 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 448 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
#line 448 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_2);

#line 341 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90,
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Weighting_10,
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 341 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevWeight_13,
#line 341 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Weight_14,
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__RecordDups_15,
#line 341 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__DupFactor_16,
#line 341 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevDupWeight_17,
#line 341 "declarative_tree.m"
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
    ((MR_Box) ((MR_String) "mismatch on if-then-else"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on negation"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "function \140mdb.declarative_tree.match_goal_to_contour_event\'/11")),
    ((MR_Box) ((MR_String) "mismatch on switch"))
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
    ((MR_Box) ((MR_String) "unbound exception term"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_chain_start\'/5")),
    ((MR_Box) ((MR_String) "unbound wrong answer term"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.find_chain_start\'/5")),
    ((MR_Box) ((MR_String) "unbound missing answer term"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "bad event"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "input argument not found"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6")),
    ((MR_Box) ((MR_String) "bad deconstruct"))
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



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.declarative_tree.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1990 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1998 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_tree__pair__pti_pair_2__pseudo_2__pseudo_mdb__declarative_execution__pti_trace_node_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_2
  }
};

#line 2007 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2015 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2023 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_annotated_primitive_1_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_atomic_goal_rep_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__pti_maybe_1__pseudo_1
};

#line 2033 "mdb.declarative_tree.c"
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

#line 2048 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0
};

#line 2053 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_annotated_primitive_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_annotated_primitive_1_0
  }
};

#line 2062 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_annotated_primitive_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_annotated_primitive_1_0
};

#line 2067 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_annotated_primitive_1[1] = {
  (MR_Integer) 0
};

#line 2072 "mdb.declarative_tree.c"
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

#line 2089 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0 = {
  (MR_String) "normal",
  (MR_Integer) 0
};

#line 2095 "mdb.declarative_tree.c"
static const MR_EnumFunctorDesc mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1 = {
  (MR_String) "exception",
  (MR_Integer) 1
};

#line 2101 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_value_ordered_contour_type_0[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0,
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1
};

#line 2107 "mdb.declarative_tree.c"
static const MR_EnumFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__enum_name_ordered_contour_type_0[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_1,
  &mdb__declarative_tree__mdb__declarative_tree__enum_functor_desc_contour_type_0_0
};

#line 2113 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_contour_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2119 "mdb.declarative_tree.c"
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

#line 2136 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_start_loc_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2144 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 2152 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_defn_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2160 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_tree__mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0
  }
};

#line 2168 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_dependency_chain_start_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_tree__pti_start_loc_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__maybe__ti_maybe_1mdbcomp__program_representation__ti_proc_defn_rep_1unit__type_ctor_info_unit_0
};

#line 2178 "mdb.declarative_tree.c"
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

#line 2193 "mdb.declarative_tree.c"
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

#line 2208 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1
};

#line 2213 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_dependency_chain_start_1_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0
};

#line 2218 "mdb.declarative_tree.c"
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

#line 2232 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_dependency_chain_start_1[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_0,
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_dependency_chain_start_1_1
};

#line 2238 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_dependency_chain_start_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2244 "mdb.declarative_tree.c"
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

#line 2261 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_edt_node_1[1] = {
  (MR_Integer) 0
};

#line 2266 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_edt_node_1 = {
  (MR_String) "dynamic",
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  NULL
};

#line 2273 "mdb.declarative_tree.c"
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

#line 2290 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2298 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_goal_and_path_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdbcomp__program_representation__ti_goal_rep_1unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 2304 "mdb.declarative_tree.c"
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

#line 2319 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0
};

#line 2324 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_goal_and_path_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_goal_and_path_0_0
  }
};

#line 2333 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_goal_and_path_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_goal_and_path_0_0
};

#line 2338 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_goal_and_path_0[1] = {
  (MR_Integer) 0
};

#line 2343 "mdb.declarative_tree.c"
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

#line 2360 "mdb.declarative_tree.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_tree__list__ti_list_1mdb__declarative_tree__type_ctor_info_goal_and_path_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0
  }
};

#line 2368 "mdb.declarative_tree.c"
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

#line 2385 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_plain_call_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2393 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_plain_call_info_0_0[4] = {
  (MR_String) "file_name",
  (MR_String) "line_number",
  (MR_String) "flat_module_name",
  (MR_String) "pred_name"
};

#line 2401 "mdb.declarative_tree.c"
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

#line 2416 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0
};

#line 2421 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_plain_call_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_plain_call_info_0_0
  }
};

#line 2430 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_plain_call_info_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_plain_call_info_0_0
};

#line 2435 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_plain_call_info_0[1] = {
  (MR_Integer) 0
};

#line 2440 "mdb.declarative_tree.c"
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

#line 2457 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2465 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1
  }
};

#line 2473 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_primitive_list_and_var_1_0[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_tree__list__pti_list_1__pseudo_mdb__declarative_tree__pti_annotated_primitive_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2480 "mdb.declarative_tree.c"
static const MR_ConstString mdb__declarative_tree__mdb__declarative_tree__field_names_primitive_list_and_var_1_0[3] = {
  (MR_String) "primitives",
  (MR_String) "var",
  (MR_String) "closure"
};

#line 2487 "mdb.declarative_tree.c"
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

#line 2502 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0
};

#line 2507 "mdb.declarative_tree.c"
static const MR_DuPtagLayout mdb__declarative_tree__mdb__declarative_tree__du_ptag_ordered_primitive_list_and_var_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_primitive_list_and_var_1_0
  }
};

#line 2516 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_primitive_list_and_var_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_primitive_list_and_var_1_0
};

#line 2521 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_primitive_list_and_var_1[1] = {
  (MR_Integer) 0
};

#line 2526 "mdb.declarative_tree.c"
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

#line 2543 "mdb.declarative_tree.c"
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

#line 2558 "mdb.declarative_tree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2566 "mdb.declarative_tree.c"
static const MR_PseudoTypeInfo mdb__declarative_tree__mdb__declarative_tree__field_types_start_loc_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_tree__mdb__declarative_execution__pti_trace_node_1__pseudo_1
};

#line 2572 "mdb.declarative_tree.c"
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

#line 2587 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_0[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0
};

#line 2592 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_stag_ordered_start_loc_1_1[1] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1
};

#line 2597 "mdb.declarative_tree.c"
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

#line 2611 "mdb.declarative_tree.c"
static const MR_DuFunctorDescPtr mdb__declarative_tree__mdb__declarative_tree__du_name_ordered_start_loc_1[2] = {
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_0,
  &mdb__declarative_tree__mdb__declarative_tree__du_functor_desc_start_loc_1_1
};

#line 2617 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_start_loc_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2623 "mdb.declarative_tree.c"
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

#line 2640 "mdb.declarative_tree.c"
static const MR_Integer mdb__declarative_tree__mdb__declarative_tree__functor_number_map_wrap_1[1] = {
  (MR_Integer) 0
};

#line 2645 "mdb.declarative_tree.c"
static const MR_NotagFunctorDesc mdb__declarative_tree__mdb__declarative_tree__notag_functor_desc_wrap_1 = {
  (MR_String) "wrap",
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  NULL
};

#line 2652 "mdb.declarative_tree.c"
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

#line 2669 "mdb.declarative_tree.c"
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

#line 2693 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0_10001(
#line 2696 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2698 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2700 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2702 "mdb.declarative_tree.c"
{
#line 2704 "mdb.declarative_tree.c"
  {
#line 2706 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2709 "mdb.declarative_tree.c"
    {
#line 2711 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____annotated_primitive_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2714 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2716 "mdb.declarative_tree.c"
  }
#line 2718 "mdb.declarative_tree.c"
}

#line 2721 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0_10001(
#line 2724 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2726 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2728 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2730 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2732 "mdb.declarative_tree.c"
{
#line 2734 "mdb.declarative_tree.c"
  {
#line 2736 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2739 "mdb.declarative_tree.c"
    {
#line 2741 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____annotated_primitive_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2744 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2746 "mdb.declarative_tree.c"
  }
#line 2748 "mdb.declarative_tree.c"
}

#line 2751 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0_10001(
#line 2754 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2756 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 2758 "mdb.declarative_tree.c"
{
#line 2760 "mdb.declarative_tree.c"
  {
#line 2762 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2765 "mdb.declarative_tree.c"
    {
#line 2767 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____contour_type_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 2770 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2772 "mdb.declarative_tree.c"
  }
#line 2774 "mdb.declarative_tree.c"
}

#line 2777 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0_10001(
#line 2780 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 2782 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2784 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2786 "mdb.declarative_tree.c"
{
#line 2788 "mdb.declarative_tree.c"
  {
#line 2790 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2793 "mdb.declarative_tree.c"
    {
#line 2795 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____contour_type_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2798 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2800 "mdb.declarative_tree.c"
  }
#line 2802 "mdb.declarative_tree.c"
}

#line 2805 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0_10001(
#line 2808 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2810 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2812 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2814 "mdb.declarative_tree.c"
{
#line 2816 "mdb.declarative_tree.c"
  {
#line 2818 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2821 "mdb.declarative_tree.c"
    {
#line 2823 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____dependency_chain_start_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2826 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2828 "mdb.declarative_tree.c"
  }
#line 2830 "mdb.declarative_tree.c"
}

#line 2833 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0_10001(
#line 2836 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2838 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2840 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2842 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2844 "mdb.declarative_tree.c"
{
#line 2846 "mdb.declarative_tree.c"
  {
#line 2848 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2851 "mdb.declarative_tree.c"
    {
#line 2853 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____dependency_chain_start_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2856 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2858 "mdb.declarative_tree.c"
  }
#line 2860 "mdb.declarative_tree.c"
}

#line 2863 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0_10001(
#line 2866 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2868 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2870 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2872 "mdb.declarative_tree.c"
{
#line 2874 "mdb.declarative_tree.c"
  {
#line 2876 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2879 "mdb.declarative_tree.c"
    {
#line 2881 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____edt_node_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2884 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2886 "mdb.declarative_tree.c"
  }
#line 2888 "mdb.declarative_tree.c"
}

#line 2891 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0_10001(
#line 2894 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2896 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 2898 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 2900 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 2902 "mdb.declarative_tree.c"
{
#line 2904 "mdb.declarative_tree.c"
  {
#line 2906 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2909 "mdb.declarative_tree.c"
    {
#line 2911 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____edt_node_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 2914 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2916 "mdb.declarative_tree.c"
  }
#line 2918 "mdb.declarative_tree.c"
}

#line 2921 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0_10001(
#line 2924 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2926 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 2928 "mdb.declarative_tree.c"
{
#line 2930 "mdb.declarative_tree.c"
  {
#line 2932 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2935 "mdb.declarative_tree.c"
    {
#line 2937 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____goal_and_path_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 2940 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2942 "mdb.declarative_tree.c"
  }
#line 2944 "mdb.declarative_tree.c"
}

#line 2947 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0_10001(
#line 2950 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 2952 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 2954 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 2956 "mdb.declarative_tree.c"
{
#line 2958 "mdb.declarative_tree.c"
  {
#line 2960 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 2963 "mdb.declarative_tree.c"
    {
#line 2965 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____goal_and_path_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 2968 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 2970 "mdb.declarative_tree.c"
  }
#line 2972 "mdb.declarative_tree.c"
}

#line 2975 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0_10001(
#line 2978 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 2980 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 2982 "mdb.declarative_tree.c"
{
#line 2984 "mdb.declarative_tree.c"
  {
#line 2986 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 2989 "mdb.declarative_tree.c"
    {
#line 2991 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____goal_and_path_list_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 2994 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 2996 "mdb.declarative_tree.c"
  }
#line 2998 "mdb.declarative_tree.c"
}

#line 3001 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0_10001(
#line 3004 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 3006 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3008 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3010 "mdb.declarative_tree.c"
{
#line 3012 "mdb.declarative_tree.c"
  {
#line 3014 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3017 "mdb.declarative_tree.c"
    {
#line 3019 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____goal_and_path_list_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3022 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3024 "mdb.declarative_tree.c"
  }
#line 3026 "mdb.declarative_tree.c"
}

#line 3029 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0_10001(
#line 3032 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3034 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3036 "mdb.declarative_tree.c"
{
#line 3038 "mdb.declarative_tree.c"
  {
#line 3040 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3043 "mdb.declarative_tree.c"
    {
#line 3045 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____plain_call_info_0_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3048 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3050 "mdb.declarative_tree.c"
  }
#line 3052 "mdb.declarative_tree.c"
}

#line 3055 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0_10001(
#line 3058 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_1,
#line 3060 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3062 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3064 "mdb.declarative_tree.c"
{
#line 3066 "mdb.declarative_tree.c"
  {
#line 3068 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3071 "mdb.declarative_tree.c"
    {
#line 3073 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____plain_call_info_0_0(&mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3076 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_1 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3078 "mdb.declarative_tree.c"
  }
#line 3080 "mdb.declarative_tree.c"
}

#line 3083 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0_10001(
#line 3086 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3088 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3090 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3092 "mdb.declarative_tree.c"
{
#line 3094 "mdb.declarative_tree.c"
  {
#line 3096 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3099 "mdb.declarative_tree.c"
    {
#line 3101 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____primitive_list_and_var_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3104 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3106 "mdb.declarative_tree.c"
  }
#line 3108 "mdb.declarative_tree.c"
}

#line 3111 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0_10001(
#line 3114 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3116 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3118 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3120 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3122 "mdb.declarative_tree.c"
{
#line 3124 "mdb.declarative_tree.c"
  {
#line 3126 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3129 "mdb.declarative_tree.c"
    {
#line 3131 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____primitive_list_and_var_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3134 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3136 "mdb.declarative_tree.c"
  }
#line 3138 "mdb.declarative_tree.c"
}

#line 3141 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0_10001(
#line 3144 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3146 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3148 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3150 "mdb.declarative_tree.c"
{
#line 3152 "mdb.declarative_tree.c"
  {
#line 3154 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3157 "mdb.declarative_tree.c"
    {
#line 3159 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____start_loc_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3162 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3164 "mdb.declarative_tree.c"
  }
#line 3166 "mdb.declarative_tree.c"
}

#line 3169 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0_10001(
#line 3172 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3174 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3176 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3178 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3180 "mdb.declarative_tree.c"
{
#line 3182 "mdb.declarative_tree.c"
  {
#line 3184 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3187 "mdb.declarative_tree.c"
    {
#line 3189 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____start_loc_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3192 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3194 "mdb.declarative_tree.c"
  }
#line 3196 "mdb.declarative_tree.c"
}

#line 3199 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0_10001(
#line 3202 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3204 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3206 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3208 "mdb.declarative_tree.c"
{
#line 3210 "mdb.declarative_tree.c"
  {
#line 3212 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;

#line 3215 "mdb.declarative_tree.c"
    {
#line 3217 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____wrap_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3220 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3222 "mdb.declarative_tree.c"
  }
#line 3224 "mdb.declarative_tree.c"
}

#line 3227 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0_10001(
#line 3230 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3232 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_2,
#line 3234 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3236 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4)
#line 3238 "mdb.declarative_tree.c"
{
#line 3240 "mdb.declarative_tree.c"
  {
#line 3242 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__1_1;

#line 3245 "mdb.declarative_tree.c"
    {
#line 3247 "mdb.declarative_tree.c"
      mdb__declarative_tree____Compare____wrap_1_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4));
    }
#line 3250 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__1_1));
#line 3252 "mdb.declarative_tree.c"
  }
#line 3254 "mdb.declarative_tree.c"
}

#line 3257 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0_10001(
#line 3260 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3262 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3264 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3266 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3268 "mdb.declarative_tree.c"
{
#line 3270 "mdb.declarative_tree.c"
  {
#line 3272 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3274 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3277 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3279 "mdb.declarative_tree.c"
    {
#line 3281 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3284 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3286 "mdb.declarative_tree.c"
  }
#line 3288 "mdb.declarative_tree.c"
}

#line 3291 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0_10001(
#line 3294 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3296 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3298 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3300 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3302 "mdb.declarative_tree.c"
{
#line 3304 "mdb.declarative_tree.c"
  {
#line 3306 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3308 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3311 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3313 "mdb.declarative_tree.c"
    {
#line 3315 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3318 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3320 "mdb.declarative_tree.c"
  }
#line 3322 "mdb.declarative_tree.c"
}

#line 3325 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0_10001(
#line 3328 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3330 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3332 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3334 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3336 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3338 "mdb.declarative_tree.c"
{
#line 3340 "mdb.declarative_tree.c"
  {
#line 3342 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3344 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3347 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3349 "mdb.declarative_tree.c"
    {
#line 3351 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3354 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3356 "mdb.declarative_tree.c"
  }
#line 3358 "mdb.declarative_tree.c"
}

#line 3361 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0_10001(
#line 3364 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3366 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3368 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3370 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3372 "mdb.declarative_tree.c"
{
#line 3374 "mdb.declarative_tree.c"
  {
#line 3376 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3378 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3380 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3383 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3385 "mdb.declarative_tree.c"
    {
#line 3387 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3390 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3392 "mdb.declarative_tree.c"
      {
#line 3394 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3396 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3398 "mdb.declarative_tree.c"
      }
#line 3400 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3402 "mdb.declarative_tree.c"
  }
#line 3404 "mdb.declarative_tree.c"
}

#line 3407 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0_10001(
#line 3410 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3412 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3414 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3416 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3)
#line 3418 "mdb.declarative_tree.c"
{
#line 3420 "mdb.declarative_tree.c"
  {
#line 3422 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3424 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3426 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3429 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3431 "mdb.declarative_tree.c"
    {
#line 3433 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv0_HeadVar__3_3);
    }
#line 3436 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3438 "mdb.declarative_tree.c"
      {
#line 3440 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3442 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3444 "mdb.declarative_tree.c"
      }
#line 3446 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3448 "mdb.declarative_tree.c"
  }
#line 3450 "mdb.declarative_tree.c"
}

#line 3453 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_10001(
#line 3456 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3458 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3460 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3462 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3464 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 3466 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5,
#line 3468 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_6)
#line 3470 "mdb.declarative_tree.c"
{
#line 3472 "mdb.declarative_tree.c"
  {
#line 3474 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3476 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv1_HeadVar__5_5;
#line 3478 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__6_6;

#line 3481 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3483 "mdb.declarative_tree.c"
    {
#line 3485 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4), &mdb__declarative_tree__conv1_HeadVar__5_5, &mdb__declarative_tree__conv0_HeadVar__6_6);
    }
#line 3488 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_5 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__5_5));
#line 3490 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_6 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__6_6));
#line 3492 "mdb.declarative_tree.c"
  }
#line 3494 "mdb.declarative_tree.c"
}

#line 3497 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0_10001(
#line 3500 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3502 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3504 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3506 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3,
#line 3508 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_4,
#line 3510 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_5)
#line 3512 "mdb.declarative_tree.c"
{
#line 3514 "mdb.declarative_tree.c"
  {
#line 3516 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3518 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__5_5;

#line 3521 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3523 "mdb.declarative_tree.c"
    {
#line 3525 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3), ((MR_Word) mdb__declarative_tree__wrapper_arg_4), &mdb__declarative_tree__conv0_HeadVar__5_5);
    }
#line 3528 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_5 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__5_5));
#line 3530 "mdb.declarative_tree.c"
  }
#line 3532 "mdb.declarative_tree.c"
}

#line 3535 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0_10001(
#line 3538 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3540 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3542 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3544 "mdb.declarative_tree.c"
{
#line 3546 "mdb.declarative_tree.c"
  {
#line 3548 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3550 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3553 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3555 "mdb.declarative_tree.c"
    {
#line 3557 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3560 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3562 "mdb.declarative_tree.c"
  }
#line 3564 "mdb.declarative_tree.c"
}

#line 3567 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0_10001(
#line 3570 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3572 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3574 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3576 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3578 "mdb.declarative_tree.c"
{
#line 3580 "mdb.declarative_tree.c"
  {
#line 3582 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3584 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3587 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3589 "mdb.declarative_tree.c"
    {
#line 3591 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3594 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3596 "mdb.declarative_tree.c"
  }
#line 3598 "mdb.declarative_tree.c"
}

#line 3601 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0_10001(
#line 3604 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3606 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3608 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3610 "mdb.declarative_tree.c"
{
#line 3612 "mdb.declarative_tree.c"
  {
#line 3614 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3616 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;

#line 3619 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3621 "mdb.declarative_tree.c"
    {
#line 3623 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3626 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3628 "mdb.declarative_tree.c"
  }
#line 3630 "mdb.declarative_tree.c"
}

#line 3633 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0_10001(
#line 3636 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3638 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3640 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3642 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3644 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3646 "mdb.declarative_tree.c"
{
#line 3648 "mdb.declarative_tree.c"
  {
#line 3650 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3652 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3654 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3657 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3659 "mdb.declarative_tree.c"
    {
#line 3661 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3664 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3666 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3668 "mdb.declarative_tree.c"
  }
#line 3670 "mdb.declarative_tree.c"
}

#line 3673 "mdb.declarative_tree.c"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0_10001(
#line 3676 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3678 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3680 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3682 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3684 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3686 "mdb.declarative_tree.c"
{
#line 3688 "mdb.declarative_tree.c"
  {
#line 3690 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3692 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3694 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3697 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3699 "mdb.declarative_tree.c"
    {
#line 3701 "mdb.declarative_tree.c"
      mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3704 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3706 "mdb.declarative_tree.c"
    *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3708 "mdb.declarative_tree.c"
  }
#line 3710 "mdb.declarative_tree.c"
}

#line 3713 "mdb.declarative_tree.c"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0_10001(
#line 3716 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3718 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3720 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3722 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_3,
#line 3724 "mdb.declarative_tree.c"
  MR_Box * mdb__declarative_tree__wrapper_arg_4)
#line 3726 "mdb.declarative_tree.c"
{
#line 3728 "mdb.declarative_tree.c"
  {
#line 3730 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded;
#line 3732 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3734 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv1_HeadVar__3_3;
#line 3736 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3739 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3741 "mdb.declarative_tree.c"
    {
#line 3743 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), &mdb__declarative_tree__conv1_HeadVar__3_3, &mdb__declarative_tree__conv0_HeadVar__4_4);
    }
#line 3746 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 3748 "mdb.declarative_tree.c"
      {
#line 3750 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv1_HeadVar__3_3));
#line 3752 "mdb.declarative_tree.c"
        *mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3754 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 3756 "mdb.declarative_tree.c"
      }
#line 3758 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 3760 "mdb.declarative_tree.c"
  }
#line 3762 "mdb.declarative_tree.c"
}

#line 3765 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0_10001(
#line 3768 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3770 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3772 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2)
#line 3774 "mdb.declarative_tree.c"
{
#line 3776 "mdb.declarative_tree.c"
  {
#line 3778 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__wrapper_arg_3;
#line 3780 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3782 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__conv0_HeadVar__3_3;

#line 3785 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3787 "mdb.declarative_tree.c"
    {
#line 3789 "mdb.declarative_tree.c"
      mdb__declarative_tree__conv0_HeadVar__3_3 = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2));
    }
#line 3792 "mdb.declarative_tree.c"
    mdb__declarative_tree__wrapper_arg_3 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__3_3));
#line 3794 "mdb.declarative_tree.c"
    return mdb__declarative_tree__wrapper_arg_3;
#line 3796 "mdb.declarative_tree.c"
  }
#line 3798 "mdb.declarative_tree.c"
}

#line 3801 "mdb.declarative_tree.c"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0_10001(
#line 3804 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__closure_arg,
#line 3806 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 3808 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_2,
#line 3810 "mdb.declarative_tree.c"
  MR_Box mdb__declarative_tree__wrapper_arg_3)
#line 3812 "mdb.declarative_tree.c"
{
#line 3814 "mdb.declarative_tree.c"
  {
#line 3816 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__wrapper_arg_4;
#line 3818 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__closure;
#line 3820 "mdb.declarative_tree.c"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__4_4;

#line 3823 "mdb.declarative_tree.c"
    mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 3825 "mdb.declarative_tree.c"
    {
#line 3827 "mdb.declarative_tree.c"
      mdb__declarative_tree__conv0_HeadVar__4_4 = mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 1))), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), ((MR_Word) mdb__declarative_tree__wrapper_arg_2), ((MR_Word) mdb__declarative_tree__wrapper_arg_3));
    }
#line 3830 "mdb.declarative_tree.c"
    mdb__declarative_tree__wrapper_arg_4 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__4_4));
#line 3832 "mdb.declarative_tree.c"
    return mdb__declarative_tree__wrapper_arg_4;
#line 3834 "mdb.declarative_tree.c"
  }
#line 3836 "mdb.declarative_tree.c"
}

#line 1900 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
#line 1900 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_9_9,
#line 1900 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_10_10,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1900 "declarative_tree.m"
{
#line 1904 "declarative_tree.m"
  {
#line 1904 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1186 "declarative_tree.m"
    {
#line 1186 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[0], ((MR_Box) (mdb__declarative_tree__V_9_9)), ((MR_Box) (mdb__declarative_tree__V_10_10)));
    }
#line 1904 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1905 "declarative_tree.m"
      {
#line 1905 "declarative_tree.m"
      }
#line 1904 "declarative_tree.m"
    else
#line 1907 "declarative_tree.m"
      {
#line 1907 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1907 "declarative_tree.m"
        {
#line 1907 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1907 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1907 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1907 "declarative_tree.m"
        }
#line 1907 "declarative_tree.m"
        {
#line 1907 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1907 "declarative_tree.m"
          return;
        }
#line 1907 "declarative_tree.m"
      }
#line 1904 "declarative_tree.m"
  }
#line 1900 "declarative_tree.m"
}

#line 1900 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 1900 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1900 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1900 "declarative_tree.m"
{
#line 1904 "declarative_tree.m"
  {
#line 1904 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1904 "declarative_tree.m"
    {
#line 1904 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1662__1_2_p_0(mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_10_10);
    }
#line 1904 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1905 "declarative_tree.m"
      {
#line 1905 "declarative_tree.m"
      }
#line 1904 "declarative_tree.m"
    else
#line 1907 "declarative_tree.m"
      {
#line 1907 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1907 "declarative_tree.m"
        {
#line 1907 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1907 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1907 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1907 "declarative_tree.m"
        }
#line 1907 "declarative_tree.m"
        {
#line 1907 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1907 "declarative_tree.m"
          return;
        }
#line 1907 "declarative_tree.m"
      }
#line 1904 "declarative_tree.m"
  }
#line 1900 "declarative_tree.m"
}

#line 1900 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1900 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1900 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1900 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1900 "declarative_tree.m"
{
#line 1904 "declarative_tree.m"
  {
#line 1904 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1904 "declarative_tree.m"
    {
#line 1904 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1650__1_2_p_0(mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_10_10);
    }
#line 1904 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1905 "declarative_tree.m"
      {
#line 1905 "declarative_tree.m"
      }
#line 1904 "declarative_tree.m"
    else
#line 1907 "declarative_tree.m"
      {
#line 1907 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1907 "declarative_tree.m"
        {
#line 1907 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1907 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1907 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1907 "declarative_tree.m"
        }
#line 1907 "declarative_tree.m"
        {
#line 1907 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1907 "declarative_tree.m"
          return;
        }
#line 1907 "declarative_tree.m"
      }
#line 1904 "declarative_tree.m"
  }
#line 1900 "declarative_tree.m"
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
#line 794 "declarative_tree.m"
  {
#line 794 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 794 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_10 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 794 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_11 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 794 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ChainStart_12;

#line 795 "declarative_tree.m"
    {
#line 795 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, mdb__declarative_tree__Store_10, mdb__declarative_tree__Ref_11, mdb__declarative_tree__HeadVar__3_3, &mdb__declarative_tree__ChainStart_12);
    }
#line 799 "declarative_tree.m"
    if ((mdb__declarative_tree__ChainStart_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 799 "declarative_tree.m"
    else
#line 797 "declarative_tree.m"
      {
#line 797 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartLoc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 0)));
#line 797 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 1)));
#line 797 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 2)));
#line 797 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 3));
#line 797 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 4)));
#line 797 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 5)));
#line 798 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_20_20;

#line 798 "declarative_tree.m"
        {
#line 798 "declarative_tree.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_20_20);
        }
#line 1796 "declarative_tree.m"
        if ((mdb__declarative_tree__StartLoc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1796 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 1796 "declarative_tree.m"
        else
#line 1797 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 0;
#line 797 "declarative_tree.m"
      }
#line 794 "declarative_tree.m"
  }
#line 87 "declarative_tree.m"
}

#line 1746 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_12,
#line 1746 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_13,
#line 1746 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_14,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_15,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeNodeId_16,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Prims_17,
#line 1746 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_18,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_19,
#line 1746 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_21,
#line 1746 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_22)
#line 1746 "declarative_tree.m"
{
#line 1753 "declarative_tree.m"
  {
#line 1753 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1753 "declarative_tree.m"
    {
#line 1753 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var_18)), mdb__declarative_tree__BoundVars_12);
    }
#line 1753 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1754 "declarative_tree.m"
      {
#line 1754 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Pos_23;
#line 1754 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_32_32;

#line 1804 "declarative_tree.m"
        {
#line 1804 "declarative_tree.m"
          mdb__declarative_tree__V_32_32 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__Args_15);
        }
#line 1804 "declarative_tree.m"
        {
#line 1804 "declarative_tree.m"
          mdb__declarative_tree__find_arg_pos_from_back_4_p_0(mdb__declarative_tree__Args_15, mdb__declarative_tree__Var_18, mdb__declarative_tree__V_32_32, &mdb__declarative_tree__Pos_23);
        }
#line 1758 "declarative_tree.m"
        if ((mdb__declarative_tree__MaybeNodeId_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1759 "declarative_tree.m"
          {
#line 1760 "declarative_tree.m"
            {
#line 1760 "declarative_tree.m"
              MR_Word base;
#line 1760 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1760 "declarative_tree.m"
              *mdb__declarative_tree__Origin_22 = base;
#line 1760 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_13));
#line 1760 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_14));
#line 1760 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 2));
#line 1760 "declarative_tree.m"
            }
#line 1759 "declarative_tree.m"
          }
#line 1758 "declarative_tree.m"
        else
#line 1756 "declarative_tree.m"
          {
#line 1756 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NodeId_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeNodeId_16, (MR_Integer) 0));
#line 1756 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_26_26 = ((MR_Word) mdb__declarative_tree__NodeId_24);

#line 1757 "declarative_tree.m"
            {
#line 1757 "declarative_tree.m"
              MR_Word base;
#line 1757 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1757 "declarative_tree.m"
              *mdb__declarative_tree__Origin_22 = base;
#line 1757 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_26_26));
#line 1757 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__Pos_23));
#line 1757 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TermPath_19));
#line 1757 "declarative_tree.m"
            }
#line 1756 "declarative_tree.m"
          }
#line 1754 "declarative_tree.m"
      }
#line 1753 "declarative_tree.m"
    else
#line 1763 "declarative_tree.m"
      {
#line 1763 "declarative_tree.m"
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var_18, mdb__declarative_tree__TermPath_19, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__Origin_22);
      }
#line 1753 "declarative_tree.m"
  }
#line 1746 "declarative_tree.m"
}

#line 1558 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
#line 1558 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1558 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 1558 "declarative_tree.m"
{
#line 1558 "declarative_tree.m"
  {
#line 1558 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 1558 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 1558 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 1558 "declarative_tree.m"
    {
#line 1558 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 1558 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 1558 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 1558 "declarative_tree.m"
  }
#line 1558 "declarative_tree.m"
}

#line 1553 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
#line 1553 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1553 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1553 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath0_3,
#line 1553 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_5,
#line 1553 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_6)
#line 1553 "declarative_tree.m"
{
#line 1557 "declarative_tree.m"
  while (MR_TRUE)
#line 1557 "declarative_tree.m"
    {
#line 1557 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1557 "declarative_tree.m"
      {
#line 1557 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1557 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1557 "declarative_tree.m"
          {
#line 1557 "declarative_tree.m"
            MR_Word mdb__declarative_tree__HeadVars_12;
#line 1557 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArgPos_13;
#line 1557 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 0)));
#line 1558 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 1)));
#line 1558 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 2)));
#line 1558 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 3)));
#line 1558 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 4)));

#line 1558 "declarative_tree.m"
            {
#line 1558 "declarative_tree.m"
              mdb__declarative_tree__HeadVars_12 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[3], mdb__declarative_tree__V_15_15);
            }
#line 1559 "declarative_tree.m"
            {
#line 1559 "declarative_tree.m"
              mdb__declarative_tree__ArgPos_13 = mdb__declarative_tree__find_arg_pos_2_f_0(mdb__declarative_tree__HeadVars_12, mdb__declarative_tree__Var0_2);
            }
#line 1560 "declarative_tree.m"
            {
#line 1560 "declarative_tree.m"
              MR_Word base;
#line 1560 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "declarative_tree.m"
              *mdb__declarative_tree__Origin_6 = base;
#line 1560 "declarative_tree.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__ArgPos_13));
#line 1560 "declarative_tree.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__TermPath0_3));
#line 1560 "declarative_tree.m"
            }
#line 1557 "declarative_tree.m"
          }
#line 1557 "declarative_tree.m"
        else
#line 1562 "declarative_tree.m"
          {
#line 1562 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Prim_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1562 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Prims_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1562 "declarative_tree.m"
            MR_String mdb__declarative_tree__File_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 0)));
#line 1562 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__Line_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 1)));
#line 1562 "declarative_tree.m"
            MR_Word mdb__declarative_tree__BoundVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 2)));
#line 1562 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 3)));
#line 1562 "declarative_tree.m"
            MR_Word mdb__declarative_tree__MaybeNodeId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 5)));
#line 1563 "declarative_tree.m"
            MR_Word mdb__declarative_tree___GoalPath_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 4)));

#line 1581 "declarative_tree.m"
#line 1581 "declarative_tree.m"
            switch (MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) {
#line 1581 "declarative_tree.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1581 "declarative_tree.m"
              case (MR_Integer) 0:
#line 1566 "declarative_tree.m"
                {
#line 1566 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__FieldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1566 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree___CellVar_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1566 "declarative_tree.m"
                  MR_String mdb__declarative_tree___Cons_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1567 "declarative_tree.m"
                  {
#line 1567 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                  }
#line 1567 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1571 "declarative_tree.m"
                    if ((mdb__declarative_tree__TermPath0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1569 "declarative_tree.m"
                      {
#line 1570 "declarative_tree.m"
                        {
#line 1570 "declarative_tree.m"
                          MR_Word base;
#line 1570 "declarative_tree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1570 "declarative_tree.m"
                          *mdb__declarative_tree__Origin_6 = base;
#line 1570 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1570 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1570 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1570 "declarative_tree.m"
                        }
#line 1569 "declarative_tree.m"
                      }
#line 1571 "declarative_tree.m"
                    else
#line 1572 "declarative_tree.m"
                      {
#line 1572 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__TermPathStep0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1572 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__TermPath_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1572 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__Var_34;
#line 1573 "declarative_tree.m"
                        MR_Box mdb__declarative_tree__conv3_Var_34;

#line 1573 "declarative_tree.m"
                        {
#line 1573 "declarative_tree.m"
                          mercury__list__det_index1_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__FieldVars_31, mdb__declarative_tree__TermPathStep0_32, &mdb__declarative_tree__conv3_Var_34);
                        }
#line 1573 "declarative_tree.m"
                        mdb__declarative_tree__Var_34 = ((MR_Integer) mdb__declarative_tree__conv3_Var_34);
#line 1574 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1574 "declarative_tree.m"
                        {
#line 1574 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1574 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_34;
#line 1574 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_33;

#line 1574 "declarative_tree.m"
                          mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1574 "declarative_tree.m"
                          mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1574 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1574 "declarative_tree.m"
                        }
#line 1574 "declarative_tree.m"
                        continue;
#line 1572 "declarative_tree.m"
                      }
#line 1567 "declarative_tree.m"
                  else
#line 1578 "declarative_tree.m"
                    {
#line 1578 "declarative_tree.m"
                      /* direct tailcall eliminated */
#line 1578 "declarative_tree.m"
                      {
#line 1578 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1578 "declarative_tree.m"
                        mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1578 "declarative_tree.m"
                      }
#line 1578 "declarative_tree.m"
                      continue;
#line 1578 "declarative_tree.m"
                    }
#line 1566 "declarative_tree.m"
                }
#line 1581 "declarative_tree.m"
                break;
#line 1581 "declarative_tree.m"
              case (MR_Integer) 1:
#line 1582 "declarative_tree.m"
                {
#line 1582 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__CellVar_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1582 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__FieldVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1582 "declarative_tree.m"
                  MR_String mdb__declarative_tree___Cons_83 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1583 "declarative_tree.m"
                  {
#line 1583 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                  }
#line 1583 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1584 "declarative_tree.m"
                    {
#line 1584 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__Pos_36;

#line 1584 "declarative_tree.m"
                      {
#line 1584 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__FieldVars_85, ((MR_Box) (mdb__declarative_tree__Var0_2)), &mdb__declarative_tree__Pos_36);
                      }
#line 1584 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1585 "declarative_tree.m"
                        {
#line 1585 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__V_78_78;

#line 1585 "declarative_tree.m"
                          {
#line 1585 "declarative_tree.m"
                            mdb__declarative_tree__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "declarative_tree.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_78_78, 0) = ((MR_Box) (mdb__declarative_tree__Pos_36));
#line 1585 "declarative_tree.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_78_78, 1) = ((MR_Box) (mdb__declarative_tree__TermPath0_3));
#line 1585 "declarative_tree.m"
                          }
#line 1585 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1585 "declarative_tree.m"
                          {
#line 1585 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1585 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__CellVar_35;
#line 1585 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__V_78_78;

#line 1585 "declarative_tree.m"
                            mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1585 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1585 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1585 "declarative_tree.m"
                          }
#line 1585 "declarative_tree.m"
                          continue;
#line 1585 "declarative_tree.m"
                        }
#line 1584 "declarative_tree.m"
                      else
#line 1588 "declarative_tree.m"
                        {
#line 1588 "declarative_tree.m"
                          {
#line 1588 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[32])));
#line 1588 "declarative_tree.m"
                            return;
                          }
#line 1588 "declarative_tree.m"
                        }
#line 1584 "declarative_tree.m"
                    }
#line 1583 "declarative_tree.m"
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
#line 1582 "declarative_tree.m"
                }
#line 1581 "declarative_tree.m"
                break;
#line 1581 "declarative_tree.m"
              case (MR_Integer) 2:
#line 1595 "declarative_tree.m"
                {
#line 1595 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__MaybeFieldVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1595 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1595 "declarative_tree.m"
                  MR_String mdb__declarative_tree__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1596 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__TermPathStep0_89;
#line 1596 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__TermPath_90;

#line 1597 "declarative_tree.m"
                  {
#line 1597 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                  }
#line 1597 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1597 "declarative_tree.m"
                    {
#line 1598 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__TermPath0_3)) == (MR_mktag((MR_Integer) 1)));
#line 1598 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1598 "declarative_tree.m"
                        {
#line 1598 "declarative_tree.m"
                          mdb__declarative_tree__TermPathStep0_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1598 "declarative_tree.m"
                          mdb__declarative_tree__TermPath_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1598 "declarative_tree.m"
                        }
#line 1597 "declarative_tree.m"
                    }
#line 1596 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1600 "declarative_tree.m"
                    {
#line 1600 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__MaybeVar_40;
#line 1600 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__conv2_MaybeVar_40;

#line 1600 "declarative_tree.m"
                      {
#line 1600 "declarative_tree.m"
                        mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[3], mdb__declarative_tree__MaybeFieldVars_39, mdb__declarative_tree__TermPathStep0_89, &mdb__declarative_tree__conv2_MaybeVar_40);
                      }
#line 1600 "declarative_tree.m"
                      mdb__declarative_tree__MaybeVar_40 = ((MR_Word) mdb__declarative_tree__conv2_MaybeVar_40);
#line 1607 "declarative_tree.m"
                      if ((mdb__declarative_tree__MaybeVar_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1611 "declarative_tree.m"
                        {
#line 1611 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1611 "declarative_tree.m"
                          {
#line 1611 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1611 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1611 "declarative_tree.m"
                          }
#line 1611 "declarative_tree.m"
                          continue;
#line 1611 "declarative_tree.m"
                        }
#line 1607 "declarative_tree.m"
                      else
#line 1602 "declarative_tree.m"
                        {
#line 1602 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeVar_40, (MR_Integer) 0)));

#line 1605 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1605 "declarative_tree.m"
                          {
#line 1605 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1605 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_86;
#line 1605 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_90;

#line 1605 "declarative_tree.m"
                            mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1605 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1605 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1605 "declarative_tree.m"
                          }
#line 1605 "declarative_tree.m"
                          continue;
#line 1602 "declarative_tree.m"
                        }
#line 1600 "declarative_tree.m"
                    }
#line 1596 "declarative_tree.m"
                  else
#line 1615 "declarative_tree.m"
                    {
#line 1615 "declarative_tree.m"
                      /* direct tailcall eliminated */
#line 1615 "declarative_tree.m"
                      {
#line 1615 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1615 "declarative_tree.m"
                        mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1615 "declarative_tree.m"
                      }
#line 1615 "declarative_tree.m"
                      continue;
#line 1615 "declarative_tree.m"
                    }
#line 1595 "declarative_tree.m"
                }
#line 1581 "declarative_tree.m"
                break;
#line 1581 "declarative_tree.m"
              case (MR_Integer) 3:
#line 1581 "declarative_tree.m"
#line 1581 "declarative_tree.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) {
#line 1581 "declarative_tree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 0:
#line 1619 "declarative_tree.m"
                    {
#line 1619 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__MaybeFieldVars_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1619 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1619 "declarative_tree.m"
                      MR_String mdb__declarative_tree__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1620 "declarative_tree.m"
                      {
#line 1620 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1620 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1624 "declarative_tree.m"
                        if ((mdb__declarative_tree__TermPath0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1622 "declarative_tree.m"
                          {
#line 1623 "declarative_tree.m"
                            {
#line 1623 "declarative_tree.m"
                              MR_Word base;
#line 1623 "declarative_tree.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1623 "declarative_tree.m"
                              *mdb__declarative_tree__Origin_6 = base;
#line 1623 "declarative_tree.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1623 "declarative_tree.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1623 "declarative_tree.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1623 "declarative_tree.m"
                            }
#line 1622 "declarative_tree.m"
                          }
#line 1624 "declarative_tree.m"
                        else
#line 1625 "declarative_tree.m"
                          {
#line 1625 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__TermPathStep0_97 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1625 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__TermPath_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1625 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__MaybeVar_100;
#line 1626 "declarative_tree.m"
                            MR_Box mdb__declarative_tree__conv1_MaybeVar_100;

#line 1626 "declarative_tree.m"
                            {
#line 1626 "declarative_tree.m"
                              mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[3], mdb__declarative_tree__MaybeFieldVars_112, mdb__declarative_tree__TermPathStep0_97, &mdb__declarative_tree__conv1_MaybeVar_100);
                            }
#line 1626 "declarative_tree.m"
                            mdb__declarative_tree__MaybeVar_100 = ((MR_Word) mdb__declarative_tree__conv1_MaybeVar_100);
#line 1633 "declarative_tree.m"
                            if ((mdb__declarative_tree__MaybeVar_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1634 "declarative_tree.m"
                              {
#line 1639 "declarative_tree.m"
                                {
#line 1639 "declarative_tree.m"
                                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[31])));
#line 1639 "declarative_tree.m"
                                  return;
                                }
#line 1634 "declarative_tree.m"
                              }
#line 1633 "declarative_tree.m"
                            else
#line 1628 "declarative_tree.m"
                              {
#line 1628 "declarative_tree.m"
                                MR_Integer mdb__declarative_tree__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeVar_100, (MR_Integer) 0)));

#line 1631 "declarative_tree.m"
                                /* direct tailcall eliminated */
#line 1631 "declarative_tree.m"
                                {
#line 1631 "declarative_tree.m"
                                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1631 "declarative_tree.m"
                                  MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_95;
#line 1631 "declarative_tree.m"
                                  MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_98;

#line 1631 "declarative_tree.m"
                                  mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1631 "declarative_tree.m"
                                  mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1631 "declarative_tree.m"
                                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1631 "declarative_tree.m"
                                }
#line 1631 "declarative_tree.m"
                                continue;
#line 1628 "declarative_tree.m"
                              }
#line 1625 "declarative_tree.m"
                          }
#line 1620 "declarative_tree.m"
                      else
#line 1643 "declarative_tree.m"
                        {
#line 1643 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1643 "declarative_tree.m"
                          {
#line 1643 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1643 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1643 "declarative_tree.m"
                          }
#line 1643 "declarative_tree.m"
                          continue;
#line 1643 "declarative_tree.m"
                        }
#line 1619 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 1:
#line 1647 "declarative_tree.m"
                    {
#line 1647 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__ToVar_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1647 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__FromVar_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1649 "declarative_tree.m"
                      {
#line 1649 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1649 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1651 "declarative_tree.m"
                        {
#line 1650 "declarative_tree.m"
                          {
#line 1650 "declarative_tree.m"
                            mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__Var0_2, mdb__declarative_tree__ToVar_43, (MR_String) "traverse_primitives", (MR_String) "bad assign");
                          }
#line 1652 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1652 "declarative_tree.m"
                          {
#line 1652 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1652 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__FromVar_44;

#line 1652 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1652 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1652 "declarative_tree.m"
                          }
#line 1652 "declarative_tree.m"
                          continue;
#line 1651 "declarative_tree.m"
                        }
#line 1649 "declarative_tree.m"
                      else
#line 1655 "declarative_tree.m"
                        {
#line 1655 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1655 "declarative_tree.m"
                          {
#line 1655 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1655 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1655 "declarative_tree.m"
                          }
#line 1655 "declarative_tree.m"
                          continue;
#line 1655 "declarative_tree.m"
                        }
#line 1647 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 2:
#line 1659 "declarative_tree.m"
                    {
#line 1659 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__ToVar_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1659 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__FromVar_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1661 "declarative_tree.m"
                      {
#line 1661 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1661 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1662 "declarative_tree.m"
                        {
#line 1662 "declarative_tree.m"
                          {
#line 1662 "declarative_tree.m"
                            mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__Var0_2, mdb__declarative_tree__ToVar_114, (MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6", (MR_String) "bad unsafe_cast");
                          }
#line 1663 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1663 "declarative_tree.m"
                          {
#line 1663 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1663 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__FromVar_115;

#line 1663 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1663 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1663 "declarative_tree.m"
                          }
#line 1663 "declarative_tree.m"
                          continue;
#line 1662 "declarative_tree.m"
                        }
#line 1661 "declarative_tree.m"
                      else
#line 1666 "declarative_tree.m"
                        {
#line 1666 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1666 "declarative_tree.m"
                          {
#line 1666 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1666 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1666 "declarative_tree.m"
                          }
#line 1666 "declarative_tree.m"
                          continue;
#line 1666 "declarative_tree.m"
                        }
#line 1659 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 3:
#line 1679 "declarative_tree.m"
                    {
#line 1679 "declarative_tree.m"
                      {
#line 1679 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1679 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1680 "declarative_tree.m"
                        {
#line 1680 "declarative_tree.m"
                          {
#line 1680 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[33])));
#line 1680 "declarative_tree.m"
                            return;
                          }
#line 1680 "declarative_tree.m"
                        }
#line 1679 "declarative_tree.m"
                      else
#line 1682 "declarative_tree.m"
                        {
#line 1682 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1682 "declarative_tree.m"
                          {
#line 1682 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1682 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1682 "declarative_tree.m"
                          }
#line 1682 "declarative_tree.m"
                          continue;
#line 1682 "declarative_tree.m"
                        }
#line 1679 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 4:
#line 1671 "declarative_tree.m"
                    {
#line 1671 "declarative_tree.m"
                      {
#line 1671 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1671 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1672 "declarative_tree.m"
                        {
#line 1672 "declarative_tree.m"
                          {
#line 1672 "declarative_tree.m"
                            MR_Word base;
#line 1672 "declarative_tree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1672 "declarative_tree.m"
                            *mdb__declarative_tree__Origin_6 = base;
#line 1672 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1672 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1672 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1672 "declarative_tree.m"
                          }
#line 1672 "declarative_tree.m"
                        }
#line 1671 "declarative_tree.m"
                      else
#line 1674 "declarative_tree.m"
                        {
#line 1674 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1674 "declarative_tree.m"
                          {
#line 1674 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1674 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1674 "declarative_tree.m"
                          }
#line 1674 "declarative_tree.m"
                          continue;
#line 1674 "declarative_tree.m"
                        }
#line 1671 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 5:
#line 1686 "declarative_tree.m"
                    {
#line 1686 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__Args_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1686 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1687 "declarative_tree.m"
                      {
#line 1687 "declarative_tree.m"
                        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_49, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
                      }
#line 1686 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 6:
#line 1690 "declarative_tree.m"
                    {
#line 1690 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__Args_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1690 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1690 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1691 "declarative_tree.m"
                      {
#line 1691 "declarative_tree.m"
                        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_116, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
                      }
#line 1690 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 7:
#line 1694 "declarative_tree.m"
                    {
#line 1694 "declarative_tree.m"
                      MR_String mdb__declarative_tree__Module_52 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1694 "declarative_tree.m"
                      MR_String mdb__declarative_tree__Name_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1694 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__Args_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1695 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__NewVar_54;

#line 1696 "declarative_tree.m"
                      {
#line 1696 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1696 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1697 "declarative_tree.m"
                        {
#line 1697 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdb__declarative_tree__plain_call_is_special_case_4_p_0(mdb__declarative_tree__Module_52, mdb__declarative_tree__Name_53, mdb__declarative_tree__Args_117, &mdb__declarative_tree__NewVar_54);
                        }
#line 1695 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1699 "declarative_tree.m"
                        {
#line 1699 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1699 "declarative_tree.m"
                          {
#line 1699 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1699 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__NewVar_54;

#line 1699 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1699 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1699 "declarative_tree.m"
                          }
#line 1699 "declarative_tree.m"
                          continue;
#line 1699 "declarative_tree.m"
                        }
#line 1695 "declarative_tree.m"
                      else
#line 1702 "declarative_tree.m"
                        {
#line 1702 "declarative_tree.m"
                          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_117, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
                        }
#line 1694 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 8:
#line 1707 "declarative_tree.m"
                    {
#line 1707 "declarative_tree.m"
                      {
#line 1707 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1707 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1708 "declarative_tree.m"
                        {
#line 1708 "declarative_tree.m"
                          {
#line 1708 "declarative_tree.m"
                            MR_Word base;
#line 1708 "declarative_tree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "declarative_tree.m"
                            *mdb__declarative_tree__Origin_6 = base;
#line 1708 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1708 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1708 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1708 "declarative_tree.m"
                          }
#line 1708 "declarative_tree.m"
                        }
#line 1707 "declarative_tree.m"
                      else
#line 1710 "declarative_tree.m"
                        {
#line 1710 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1710 "declarative_tree.m"
                          {
#line 1710 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1710 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1710 "declarative_tree.m"
                          }
#line 1710 "declarative_tree.m"
                          continue;
#line 1710 "declarative_tree.m"
                        }
#line 1707 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                  case (MR_Integer) 9:
#line 1715 "declarative_tree.m"
                    {
#line 1715 "declarative_tree.m"
                      {
#line 1715 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1715 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1716 "declarative_tree.m"
                        {
#line 1716 "declarative_tree.m"
                          {
#line 1716 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[30])));
#line 1716 "declarative_tree.m"
                            return;
                          }
#line 1716 "declarative_tree.m"
                        }
#line 1715 "declarative_tree.m"
                      else
#line 1718 "declarative_tree.m"
                        {
#line 1718 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1718 "declarative_tree.m"
                          {
#line 1718 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1718 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1718 "declarative_tree.m"
                          }
#line 1718 "declarative_tree.m"
                          continue;
#line 1718 "declarative_tree.m"
                        }
#line 1715 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                    break;
#line 1581 "declarative_tree.m"
                }
#line 1581 "declarative_tree.m"
                break;
#line 1581 "declarative_tree.m"
            }
#line 1562 "declarative_tree.m"
          }
#line 1557 "declarative_tree.m"
      }
#line 1557 "declarative_tree.m"
      break;
#line 1557 "declarative_tree.m"
    }
#line 1553 "declarative_tree.m"
}

#line 1356 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
#line 1356 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1356 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__2_2)
#line 1356 "declarative_tree.m"
{
#line 1360 "declarative_tree.m"
  while (MR_TRUE)
#line 1360 "declarative_tree.m"
    {
#line 1360 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1360 "declarative_tree.m"
      {
#line 1360 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1360 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1360 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1360 "declarative_tree.m"
        else
#line 1361 "declarative_tree.m"
          {
#line 1361 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourHeadNode_6;
#line 1361 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1361 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1362 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_22_22, (MR_Integer) 0));

#line 1362 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_22_22, (MR_Integer) 1)));
#line 1365 "declarative_tree.m"
            if (((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_6)) == (MR_mktag((MR_Integer) 1))))
#line 1364 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1365 "declarative_tree.m"
            else
#line 1365 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1365 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1365 "declarative_tree.m"
            else
#line 1365 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1363 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1368 "declarative_tree.m"
              {
#line 1368 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1368 "declarative_tree.m"
                {
#line 1368 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__ContourTail_7;

#line 1368 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1368 "declarative_tree.m"
                }
#line 1368 "declarative_tree.m"
                continue;
#line 1368 "declarative_tree.m"
              }
#line 1363 "declarative_tree.m"
            else
#line 1370 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__2_2 = mdb__declarative_tree__HeadVar__1_1;
#line 1361 "declarative_tree.m"
          }
#line 1360 "declarative_tree.m"
      }
#line 1360 "declarative_tree.m"
      break;
#line 1360 "declarative_tree.m"
    }
#line 1356 "declarative_tree.m"
}

#line 947 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
#line 947 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49,
#line 947 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 947 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_7,
#line 947 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_8,
#line 947 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10)
#line 947 "declarative_tree.m"
{
#line 950 "declarative_tree.m"
  {
#line 950 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 950 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;

#line 951 "declarative_tree.m"
    {
#line 951 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_11);
    }
#line 969 "declarative_tree.m"
#line 969 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_11)) {
#line 969 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 969 "declarative_tree.m"
      case (MR_Integer) 1:
#line 953 "declarative_tree.m"
        {
#line 953 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_51_51;
#line 953 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_52_52;
#line 953 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 953 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ExitAtom_20;
#line 953 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_21;
#line 953 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_22;
#line 953 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 953 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 953 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 953 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 953 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 953 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 953 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1870 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Args_73;
#line 1870 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArgInfo_74;
#line 1870 "declarative_tree.m"
          MR_Word mdb__declarative_tree__MaybeArg_77;
#line 1870 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_72_72;
#line 1872 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_75_75;
#line 1872 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_76_76;
#line 1873 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_78_78;

#line 954 "declarative_tree.m"
          {
#line 954 "declarative_tree.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_51_51);
          }
#line 954 "declarative_tree.m"
          {
#line 954 "declarative_tree.m"
            mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_51_51, mdb__declarative_tree__Node_11);
          }
#line 955 "declarative_tree.m"
          {
#line 955 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13, &mdb__declarative_tree__CallNode_21);
          }
#line 956 "declarative_tree.m"
          {
#line 956 "declarative_tree.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_52_52);
          }
#line 956 "declarative_tree.m"
          {
#line 956 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_22 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_52_52, mdb__declarative_tree__CallNode_21);
          }
#line 1870 "declarative_tree.m"
          mdb__declarative_tree__V_72_72 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_22, (MR_Integer) 0)));
#line 1870 "declarative_tree.m"
          mdb__declarative_tree__Args_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_22, (MR_Integer) 1)));
#line 1871 "declarative_tree.m"
          {
#line 1871 "declarative_tree.m"
            mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_73, &mdb__declarative_tree__ArgInfo_74);
          }
#line 1872 "declarative_tree.m"
          mdb__declarative_tree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 0)));
#line 1872 "declarative_tree.m"
          mdb__declarative_tree__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 1)));
#line 1872 "declarative_tree.m"
          mdb__declarative_tree__MaybeArg_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 2)));
#line 1873 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_77)) == (MR_mktag((MR_Integer) 1)));
#line 1873 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1873 "declarative_tree.m"
            {
#line 1873 "declarative_tree.m"
              mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_77, (MR_Integer) 0)));
#line 958 "declarative_tree.m"
              {
#line 958 "declarative_tree.m"
                mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13, mdb__declarative_tree__CallNode_21, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
              }
#line 1873 "declarative_tree.m"
            }
#line 1873 "declarative_tree.m"
          else
#line 960 "declarative_tree.m"
            {
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 1)));
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ArgInfo_83;
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__MaybeArg_86;
#line 1870 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 0)));
#line 1872 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_84_84;
#line 1872 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_85_85;
#line 1873 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_87_87;

#line 1871 "declarative_tree.m"
              {
#line 1871 "declarative_tree.m"
                mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_82, &mdb__declarative_tree__ArgInfo_83);
              }
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 0)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 1)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__MaybeArg_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 2)));
#line 1873 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_86)) == (MR_mktag((MR_Integer) 1)));
#line 1873 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1873 "declarative_tree.m"
                {
#line 1873 "declarative_tree.m"
                  mdb__declarative_tree__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_86, (MR_Integer) 0)));
#line 961 "declarative_tree.m"
                  {
#line 961 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13);
                  }
#line 961 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 962 "declarative_tree.m"
                    {
#line 962 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__TypeInfo_53_53;

#line 962 "declarative_tree.m"
                      {
#line 962 "declarative_tree.m"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_53_53);
                      }
#line 962 "declarative_tree.m"
                      {
#line 962 "declarative_tree.m"
                        mdb__declarative_tree__find_chain_start_outside_4_p_0(mdb__declarative_tree__TypeInfo_53_53, mdb__declarative_tree__CallNode_21, mdb__declarative_tree__Node_11, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
                      }
#line 962 "declarative_tree.m"
                    }
#line 961 "declarative_tree.m"
                  else
#line 964 "declarative_tree.m"
                    *mdb__declarative_tree__ChainStart_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1873 "declarative_tree.m"
                }
#line 1873 "declarative_tree.m"
              else
#line 967 "declarative_tree.m"
                {
#line 967 "declarative_tree.m"
                  {
#line 967 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[28])));
#line 967 "declarative_tree.m"
                    return;
                  }
#line 967 "declarative_tree.m"
                }
#line 960 "declarative_tree.m"
            }
#line 953 "declarative_tree.m"
        }
#line 969 "declarative_tree.m"
        break;
#line 969 "declarative_tree.m"
      case (MR_Integer) 3:
#line 969 "declarative_tree.m"
#line 969 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) {
#line 969 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 969 "declarative_tree.m"
          case (MR_Integer) 0:
#line 970 "declarative_tree.m"
            {
#line 970 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_56_56;
#line 970 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_43 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 970 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_44;
#line 970 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_45;
#line 970 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 970 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 970 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 970 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 970 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Args_91;
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ArgInfo_92;
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__MaybeArg_95;
#line 1870 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_90_90;
#line 1872 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_93_93;
#line 1872 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_94_94;
#line 1873 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_96_96;

#line 971 "declarative_tree.m"
              {
#line 971 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_43, &mdb__declarative_tree__CallNode_44);
              }
#line 972 "declarative_tree.m"
              {
#line 972 "declarative_tree.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_56_56);
              }
#line 972 "declarative_tree.m"
              {
#line 972 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_45 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_56_56, mdb__declarative_tree__CallNode_44);
              }
#line 1870 "declarative_tree.m"
              mdb__declarative_tree__V_90_90 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_45, (MR_Integer) 0)));
#line 1870 "declarative_tree.m"
              mdb__declarative_tree__Args_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_45, (MR_Integer) 1)));
#line 1871 "declarative_tree.m"
              {
#line 1871 "declarative_tree.m"
                mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_91, &mdb__declarative_tree__ArgInfo_92);
              }
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 0)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 1)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__MaybeArg_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 2)));
#line 1873 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_95)) == (MR_mktag((MR_Integer) 1)));
#line 1873 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1873 "declarative_tree.m"
                {
#line 1873 "declarative_tree.m"
                  mdb__declarative_tree__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_95, (MR_Integer) 0)));
#line 974 "declarative_tree.m"
                  {
#line 974 "declarative_tree.m"
                    mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_43, mdb__declarative_tree__CallNode_44, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
                  }
#line 1873 "declarative_tree.m"
                }
#line 1873 "declarative_tree.m"
              else
#line 977 "declarative_tree.m"
                {
#line 977 "declarative_tree.m"
                  {
#line 977 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[29])));
#line 977 "declarative_tree.m"
                    return;
                  }
#line 977 "declarative_tree.m"
                }
#line 970 "declarative_tree.m"
            }
#line 969 "declarative_tree.m"
            break;
#line 969 "declarative_tree.m"
          case (MR_Integer) 1:
#line 980 "declarative_tree.m"
            {
#line 980 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_59_59;
#line 980 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 980 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_47;
#line 980 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_48;
#line 980 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 980 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 980 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 980 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 980 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 980 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Args_64;
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ArgInfo_65;
#line 1870 "declarative_tree.m"
              MR_Word mdb__declarative_tree__MaybeArg_68;
#line 1870 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_63_63;
#line 1872 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_66_66;
#line 1872 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_67_67;
#line 1873 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_69_69;

#line 981 "declarative_tree.m"
              {
#line 981 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_46, &mdb__declarative_tree__CallNode_47);
              }
#line 982 "declarative_tree.m"
              {
#line 982 "declarative_tree.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_59_59);
              }
#line 982 "declarative_tree.m"
              {
#line 982 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_59_59, mdb__declarative_tree__CallNode_47);
              }
#line 1870 "declarative_tree.m"
              mdb__declarative_tree__V_63_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_48, (MR_Integer) 0)));
#line 1870 "declarative_tree.m"
              mdb__declarative_tree__Args_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_48, (MR_Integer) 1)));
#line 1871 "declarative_tree.m"
              {
#line 1871 "declarative_tree.m"
                mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_64, &mdb__declarative_tree__ArgInfo_65);
              }
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 0)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 1)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__MaybeArg_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 2)));
#line 1873 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_68)) == (MR_mktag((MR_Integer) 1)));
#line 1873 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1873 "declarative_tree.m"
                {
#line 1873 "declarative_tree.m"
                  mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_68, (MR_Integer) 0)));
#line 987 "declarative_tree.m"
                  {
#line 987 "declarative_tree.m"
                    mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_46, mdb__declarative_tree__CallNode_47, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
                  }
#line 1873 "declarative_tree.m"
                }
#line 1873 "declarative_tree.m"
              else
#line 990 "declarative_tree.m"
                {
#line 990 "declarative_tree.m"
                  {
#line 990 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[27])));
#line 990 "declarative_tree.m"
                    return;
                  }
#line 990 "declarative_tree.m"
                }
#line 980 "declarative_tree.m"
            }
#line 969 "declarative_tree.m"
            break;
#line 969 "declarative_tree.m"
        }
#line 969 "declarative_tree.m"
        break;
#line 969 "declarative_tree.m"
    }
#line 950 "declarative_tree.m"
  }
#line 947 "declarative_tree.m"
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
#line 1870 "declarative_tree.m"
  {
#line 1870 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1870 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1870 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ArgInfo_8;
#line 1870 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybeArg_11;
#line 1870 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1872 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 1872 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 1873 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;

#line 1871 "declarative_tree.m"
    {
#line 1871 "declarative_tree.m"
      mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_6, mdb__declarative_tree__Args_5, &mdb__declarative_tree__ArgInfo_8);
    }
#line 1872 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 0)));
#line 1872 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 1)));
#line 1872 "declarative_tree.m"
    mdb__declarative_tree__MaybeArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 2)));
#line 1873 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_11)) == (MR_mktag((MR_Integer) 1)));
#line 1873 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1873 "declarative_tree.m"
      mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_11, (MR_Integer) 0)));
#line 1870 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1870 "declarative_tree.m"
  }
#line 46 "declarative_tree.m"
}

#line 1650 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1650__1_2_p_0(
#line 1650 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1650 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_43)
#line 1650 "declarative_tree.m"
{
#line 1650 "declarative_tree.m"
  {
#line 1650 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__Var0_2 == mdb__declarative_tree__ToVar_43);

#line 1650 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1650 "declarative_tree.m"
  }
#line 1650 "declarative_tree.m"
}

#line 1662 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1662__1_2_p_0(
#line 1662 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1662 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_114)
#line 1662 "declarative_tree.m"
{
#line 1662 "declarative_tree.m"
  {
#line 1662 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__Var0_2 == mdb__declarative_tree__ToVar_114);

#line 1662 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1662 "declarative_tree.m"
  }
#line 1662 "declarative_tree.m"
}

#line 1184 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1184__1_3_p_0(
#line 1184 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1184 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AdjustedContour_21,
#line 1184 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_29)
#line 1184 "declarative_tree.m"
{
#line 1184 "declarative_tree.m"
  {
#line 1184 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1184 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_43_43;
#line 1184 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_44_44;
#line 1184 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_46_46;
#line 1184 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_48_48;

#line 1184 "declarative_tree.m"
    {
#line 1184 "declarative_tree.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_43_43);
    }
#line 1184 "declarative_tree.m"
    {
#line 1184 "declarative_tree.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_44_44);
    }
#line 5908 "mdb.declarative_tree.c"
    {
#line 5910 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5912 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 5914 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_46_46, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_44_44));
#line 5916 "mdb.declarative_tree.c"
    }
#line 5918 "mdb.declarative_tree.c"
    {
#line 5920 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5922 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 5924 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_43_43));
#line 5926 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_46_46));
#line 5928 "mdb.declarative_tree.c"
    }
#line 1184 "declarative_tree.m"
    {
#line 1184 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_tree__TypeInfo_48_48, mdb__declarative_tree__AdjustedContour_21, mdb__declarative_tree__HeadVar__3_29);
    }
#line 1184 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1184 "declarative_tree.m"
  }
#line 1184 "declarative_tree.m"
}

#line 273 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
#line 273 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_127,
#line 273 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 273 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 273 "declarative_tree.m"
{
#line 273 "declarative_tree.m"
  {
#line 273 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 273 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 273 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1));
#line 273 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 273 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 273 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 273 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 273 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 6)));
#line 273 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 7)));
#line 273 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 8)));
#line 273 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 9)));
#line 273 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_128_128;

#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)) = mdb__declarative_tree__V_13_13;
#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)) = mdb__declarative_tree__V_14_14;
#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)) = ((MR_Box) (mdb__declarative_tree__V_15_15));
#line 273 "declarative_tree.m"
    mdb__declarative_tree__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (mdb__declarative_tree__V_17_17));
#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)) = ((MR_Box) (mdb__declarative_tree__V_18_18));
#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 6)) = ((MR_Box) (mdb__declarative_tree__V_19_19));
#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 7)) = ((MR_Box) (mdb__declarative_tree__V_20_20));
#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 8)) = ((MR_Box) (mdb__declarative_tree__V_21_21));
#line 273 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 9)) = ((MR_Box) (mdb__declarative_tree__V_22_22));
#line 273 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == mdb__declarative_tree__V_128_128);
#line 273 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 273 "declarative_tree.m"
  }
#line 273 "declarative_tree.m"
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
#line 1878 "declarative_tree.m"
  {
#line 1878 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1878 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__HeadVar__4_4;
#line 1878 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_14_14;
#line 1878 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 1878 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_9 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 1878 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_10;
#line 1878 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_11;
#line 1878 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Atom_12;
#line 1856 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_20;
#line 1857 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_18;
#line 98 "mdb.declarative_execution.int"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 98 "mdb.declarative_execution.int"
    MR_Box mdb__declarative_tree__conv1_Node0_18;

#line 98 "mdb.declarative_execution.int"
    {
#line 98 "mdb.declarative_execution.int"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5), mdb__declarative_tree__Store_8, mdb__declarative_tree__Ref_9, &mdb__declarative_tree__conv1_Node0_18);
    }
#line 98 "mdb.declarative_execution.int"
    if (mdb__declarative_tree__succeeded)
#line 98 "mdb.declarative_execution.int"
      {
#line 98 "mdb.declarative_execution.int"
        mdb__declarative_tree__Node0_18 = ((MR_Word) mdb__declarative_tree__conv1_Node0_18);
#line 98 "mdb.declarative_execution.int"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 98 "mdb.declarative_execution.int"
      }
#line 1857 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1859 "declarative_tree.m"
#line 1859 "declarative_tree.m"
      switch (MR_tag((MR_Word) mdb__declarative_tree__Node0_18)) {
#line 1859 "declarative_tree.m"
        default:
#line 1859 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
        case (MR_Integer) 1:
#line 1858 "declarative_tree.m"
          {
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 0));
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_21_21;
#line 1858 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_22_22;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_23_23;
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_25_25;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_26_26;

#line 1858 "declarative_tree.m"
            mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 3)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 7)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1858 "declarative_tree.m"
          }
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
        case (MR_Integer) 3:
#line 1859 "declarative_tree.m"
#line 1859 "declarative_tree.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 0)))) {
#line 1859 "declarative_tree.m"
            default:
#line 1859 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1859 "declarative_tree.m"
              {
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_28_28;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_29_29;
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_30_30;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_31_31;

#line 1859 "declarative_tree.m"
                mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 3));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1859 "declarative_tree.m"
              }
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1860 "declarative_tree.m"
              {
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_33_33;
#line 1860 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_34_34;
#line 1860 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_35_35;
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_36_36;
#line 1860 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_37_37;

#line 1860 "declarative_tree.m"
                mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 3));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_36_36 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 7)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1860 "declarative_tree.m"
              }
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
          }
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
      }
#line 1856 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1863 "declarative_tree.m"
      mdb__declarative_tree__CallId_10 = mdb__declarative_tree__CallId0_20;
#line 1856 "declarative_tree.m"
    else
#line 1865 "declarative_tree.m"
      {
#line 1865 "declarative_tree.m"
        {
#line 1865 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1865 "declarative_tree.m"
      }
#line 1880 "declarative_tree.m"
    {
#line 1880 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__Call_11);
    }
#line 1881 "declarative_tree.m"
    {
#line 1881 "declarative_tree.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_14_14);
    }
#line 1881 "declarative_tree.m"
    {
#line 1881 "declarative_tree.m"
      mdb__declarative_tree__Atom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_14_14, mdb__declarative_tree__Call_11);
    }
#line 1882 "declarative_tree.m"
    {
#line 1882 "declarative_tree.m"
      mdb__declarative_execution__user_arg_num_3_p_0(mdb__declarative_tree__HeadVar__3_3, mdb__declarative_tree__Atom_12, &mdb__declarative_tree__HeadVar__4_4);
    }
#line 1878 "declarative_tree.m"
    return mdb__declarative_tree__HeadVar__4_4;
#line 1878 "declarative_tree.m"
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
#line 478 "declarative_tree.m"
  {
#line 478 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 478 "declarative_tree.m"
    MR_Word mdb__declarative_tree__HeadVar__3_3;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 478 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Label_13;
#line 478 "declarative_tree.m"
    MR_Box mdb__declarative_tree__ProcLayout_28;

#line 479 "declarative_tree.m"
    {
#line 479 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 481 "declarative_tree.m"
#line 481 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 481 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 481 "declarative_tree.m"
      case (MR_Integer) 1:
#line 481 "declarative_tree.m"
        {
#line 481 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 481 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 481 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 481 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 481 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 481 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20;
#line 481 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21;

#line 481 "declarative_tree.m"
          mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 481 "declarative_tree.m"
          mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 481 "declarative_tree.m"
          mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 481 "declarative_tree.m"
        }
#line 481 "declarative_tree.m"
        break;
#line 481 "declarative_tree.m"
      case (MR_Integer) 3:
#line 481 "declarative_tree.m"
#line 481 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 481 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 481 "declarative_tree.m"
          case (MR_Integer) 0:
#line 480 "declarative_tree.m"
            {
#line 480 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 480 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 480 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 480 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 480 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_14_14;

#line 480 "declarative_tree.m"
              mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 480 "declarative_tree.m"
              mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 480 "declarative_tree.m"
            }
#line 481 "declarative_tree.m"
            break;
#line 481 "declarative_tree.m"
          case (MR_Integer) 1:
#line 482 "declarative_tree.m"
            {
#line 482 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 482 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 482 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 482 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 482 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 482 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;

#line 482 "declarative_tree.m"
              mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 482 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 482 "declarative_tree.m"
            }
#line 481 "declarative_tree.m"
            break;
#line 481 "declarative_tree.m"
        }
#line 481 "declarative_tree.m"
        break;
#line 481 "declarative_tree.m"
    }
#line 484 "declarative_tree.m"
    {
#line 484 "declarative_tree.m"
      mdb__declarative_tree__ProcLayout_28 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_tree__Label_13);
    }
#line 485 "declarative_tree.m"
    {
#line 485 "declarative_tree.m"
      mdb__declarative_tree__HeadVar__3_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__ProcLayout_28);
    }
#line 478 "declarative_tree.m"
    return mdb__declarative_tree__HeadVar__3_3;
#line 478 "declarative_tree.m"
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
#line 427 "declarative_tree.m"
  {
#line 427 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 427 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 427 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 427 "declarative_tree.m"
    MR_String mdb__declarative_tree__FileName_9;
#line 427 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__LineNo_10;
#line 427 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Final_11;
#line 427 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_13;
#line 427 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Label_17;
#line 427 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_29;
#line 427 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_57_57;
#line 439 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_54_54;
#line 439 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_55_55;
#line 439 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_56_56;
#line 439 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_58_58;
#line 439 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_59_59;
#line 439 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_60_60;
#line 439 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_61_61;
#line 439 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_62_62;
#line 439 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_63_63;

#line 428 "declarative_tree.m"
    {
#line 428 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_7, mdb__declarative_tree__Ref_8, &mdb__declarative_tree__Final_11);
    }
#line 431 "declarative_tree.m"
#line 431 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Final_11)) {
#line 431 "declarative_tree.m"
      default:
#line 431 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_FALSE;
#line 431 "declarative_tree.m"
        break;
#line 431 "declarative_tree.m"
      case (MR_Integer) 1:
#line 430 "declarative_tree.m"
        {
#line 430 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 0));
#line 430 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_14_14;
#line 430 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_15_15;
#line 430 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_16_16;
#line 430 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18;
#line 430 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19;

#line 430 "declarative_tree.m"
          mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 430 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 430 "declarative_tree.m"
          mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 3)));
#line 430 "declarative_tree.m"
          mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 430 "declarative_tree.m"
          mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 430 "declarative_tree.m"
          mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 430 "declarative_tree.m"
          mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 7)));
#line 430 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 430 "declarative_tree.m"
        }
#line 431 "declarative_tree.m"
        break;
#line 431 "declarative_tree.m"
      case (MR_Integer) 3:
#line 431 "declarative_tree.m"
#line 431 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 0)))) {
#line 431 "declarative_tree.m"
          default:
#line 431 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_FALSE;
#line 431 "declarative_tree.m"
            break;
#line 431 "declarative_tree.m"
          case (MR_Integer) 0:
#line 432 "declarative_tree.m"
            {
#line 432 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 432 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_21_21;
#line 432 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_22_22;
#line 432 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_23_23;

#line 432 "declarative_tree.m"
              mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 432 "declarative_tree.m"
              mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 3));
#line 432 "declarative_tree.m"
              mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 432 "declarative_tree.m"
              mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 432 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 432 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 432 "declarative_tree.m"
            }
#line 431 "declarative_tree.m"
            break;
#line 431 "declarative_tree.m"
          case (MR_Integer) 1:
#line 434 "declarative_tree.m"
            {
#line 434 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 434 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25;
#line 434 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_26_26;
#line 434 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;
#line 434 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_28_28;

#line 434 "declarative_tree.m"
              mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 434 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 3));
#line 434 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 434 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 434 "declarative_tree.m"
              mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 434 "declarative_tree.m"
              mdb__declarative_tree__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 7)));
#line 434 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 434 "declarative_tree.m"
            }
#line 431 "declarative_tree.m"
            break;
#line 431 "declarative_tree.m"
        }
#line 431 "declarative_tree.m"
        break;
#line 431 "declarative_tree.m"
    }
#line 427 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 427 "declarative_tree.m"
      {
#line 436 "declarative_tree.m"
        {
#line 436 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(mdb__declarative_tree__Label_17, &mdb__declarative_tree__FileName_9, &mdb__declarative_tree__LineNo_10);
        }
#line 427 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 427 "declarative_tree.m"
          {
#line 426 "declarative_tree.m"
            {
#line 426 "declarative_tree.m"
              MR_Word base;
#line 426 "declarative_tree.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__3_3 = base;
#line 426 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__FileName_9));
#line 426 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__LineNo_10));
#line 426 "declarative_tree.m"
            }
#line 437 "declarative_tree.m"
            {
#line 437 "declarative_tree.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_7, mdb__declarative_tree__CallId_13, &mdb__declarative_tree__Call_29);
            }
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_63_63 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 0));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_62_62 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 1));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 2)));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 3)));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 4)));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 5)));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 6)));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_56_56 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 7)));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 8)));
#line 439 "declarative_tree.m"
            mdb__declarative_tree__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 9)));
#line 443 "declarative_tree.m"
            if ((mdb__declarative_tree__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "declarative_tree.m"
              {
#line 445 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 445 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 445 "declarative_tree.m"
              }
#line 443 "declarative_tree.m"
            else
#line 439 "declarative_tree.m"
              {
#line 439 "declarative_tree.m"
                MR_Box mdb__declarative_tree__ReturnLabel_30 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_57_57, (MR_Integer) 0)));
#line 439 "declarative_tree.m"
                MR_String mdb__declarative_tree__ReturnFileName_31;
#line 439 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__ReturnLineNo_32;
#line 439 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_35_35;

#line 440 "declarative_tree.m"
                {
#line 440 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(mdb__declarative_tree__ReturnLabel_30, &mdb__declarative_tree__ReturnFileName_31, &mdb__declarative_tree__ReturnLineNo_32);
                }
#line 439 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 439 "declarative_tree.m"
                  {
#line 442 "declarative_tree.m"
                    {
#line 442 "declarative_tree.m"
                      mdb__declarative_tree__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 0) = ((MR_Box) (mdb__declarative_tree__ReturnFileName_31));
#line 442 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 1) = ((MR_Box) (mdb__declarative_tree__ReturnLineNo_32));
#line 442 "declarative_tree.m"
                    }
#line 442 "declarative_tree.m"
                    {
#line 442 "declarative_tree.m"
                      MR_Word base;
#line 442 "declarative_tree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 442 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__4_4 = base;
#line 442 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_35_35));
#line 442 "declarative_tree.m"
                    }
#line 442 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 439 "declarative_tree.m"
                  }
#line 439 "declarative_tree.m"
              }
#line 427 "declarative_tree.m"
          }
#line 427 "declarative_tree.m"
      }
#line 427 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 427 "declarative_tree.m"
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
#line 321 "declarative_tree.m"
  {
#line 321 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 322 "declarative_tree.m"
    {
#line 322 "declarative_tree.m"
      mdb__declarative_tree__trace_weight_9_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 1, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0, mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__declarative_tree__HeadVar__4_4);
    }
#line 321 "declarative_tree.m"
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
#line 314 "declarative_tree.m"
  {
#line 314 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 315 "declarative_tree.m"
    {
#line 315 "declarative_tree.m"
      mdb__declarative_tree__trace_weight_9_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0, mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__declarative_tree__HeadVar__4_4);
    }
#line 314 "declarative_tree.m"
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
#line 265 "declarative_tree.m"
  {
#line 265 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 265 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_39_39;
#line 265 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 265 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 265 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_6;
#line 265 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_8;
#line 265 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_35_35;
#line 265 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 273 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_26_26;
#line 273 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_27_27;
#line 273 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_28_28;
#line 273 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_29_29;
#line 273 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_30_30;
#line 273 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_31_31;
#line 273 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 273 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 273 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;

#line 266 "declarative_tree.m"
    {
#line 266 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__Node_6);
    }
#line 268 "declarative_tree.m"
#line 268 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_6)) {
#line 268 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 268 "declarative_tree.m"
      case (MR_Integer) 1:
#line 267 "declarative_tree.m"
        {
#line 267 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 0));
#line 267 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_9_9;
#line 267 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_10_10;
#line 267 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_11_11;
#line 267 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12;
#line 267 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_13_13;
#line 267 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_14_14;

#line 267 "declarative_tree.m"
          mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 267 "declarative_tree.m"
          mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 267 "declarative_tree.m"
          mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 3)));
#line 267 "declarative_tree.m"
          mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 267 "declarative_tree.m"
          mdb__declarative_tree__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 267 "declarative_tree.m"
          mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 267 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 7)));
#line 267 "declarative_tree.m"
        }
#line 268 "declarative_tree.m"
        break;
#line 268 "declarative_tree.m"
      case (MR_Integer) 3:
#line 268 "declarative_tree.m"
#line 268 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 0)))) {
#line 268 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 268 "declarative_tree.m"
          case (MR_Integer) 0:
#line 268 "declarative_tree.m"
            {
#line 268 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 268 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_16_16;
#line 268 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_17_17;
#line 268 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_18_18;
#line 268 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_19_19;

#line 268 "declarative_tree.m"
              mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 3));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 268 "declarative_tree.m"
            }
#line 268 "declarative_tree.m"
            break;
#line 268 "declarative_tree.m"
          case (MR_Integer) 1:
#line 269 "declarative_tree.m"
            {
#line 269 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 269 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_21_21;
#line 269 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_22_22;
#line 269 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_23_23;
#line 269 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24;
#line 269 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_25_25;

#line 269 "declarative_tree.m"
              mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 269 "declarative_tree.m"
              mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 3));
#line 269 "declarative_tree.m"
              mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 269 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 269 "declarative_tree.m"
              mdb__declarative_tree__V_24_24 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 269 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 7)));
#line 269 "declarative_tree.m"
            }
#line 268 "declarative_tree.m"
            break;
#line 268 "declarative_tree.m"
        }
#line 268 "declarative_tree.m"
        break;
#line 268 "declarative_tree.m"
    }
#line 273 "declarative_tree.m"
    {
#line 273 "declarative_tree.m"
      mdb__declarative_tree__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 0) = NULL;
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 1) = NULL;
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 2) = NULL;
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 3) = ((MR_Box) ((MR_Integer) 1));
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 4) = NULL;
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 5) = NULL;
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 6) = NULL;
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 7) = NULL;
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 8) = NULL;
#line 273 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 9) = NULL;
#line 273 "declarative_tree.m"
    }
#line 273 "declarative_tree.m"
    {
#line 273 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_8, &mdb__declarative_tree__V_37_37);
    }
#line 6954 "mdb.declarative_tree.c"
    {
#line 6956 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_39_39);
    }
#line 273 "declarative_tree.m"
    {
#line 273 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(mdb__declarative_tree__TypeInfo_39_39, mdb__declarative_tree__V_35_35, mdb__declarative_tree__V_37_37);
    }
#line 265 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 265 "declarative_tree.m"
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
#line 248 "declarative_tree.m"
  {
#line 248 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 248 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 248 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref1_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 248 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref2_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 248 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node1_8;
#line 248 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node2_9;

#line 249 "declarative_tree.m"
    {
#line 249 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref1_6, &mdb__declarative_tree__Node1_8);
    }
#line 250 "declarative_tree.m"
    {
#line 250 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref2_7, &mdb__declarative_tree__Node2_9);
    }
#line 254 "declarative_tree.m"
#line 254 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node1_8)) {
#line 254 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 254 "declarative_tree.m"
      case (MR_Integer) 1:
#line 252 "declarative_tree.m"
        {
#line 252 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__Event_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 252 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_49_49;
#line 252 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 0));
#line 252 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 252 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 252 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 3)));
#line 252 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 252 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 252 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 7)));
#line 253 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_18_18;
#line 253 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_19_19;
#line 253 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_20_20;
#line 253 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_21_21;
#line 253 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_22_22;
#line 253 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_23_23;
#line 253 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_24_24;

#line 253 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 1)));
#line 253 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 253 "declarative_tree.m"
            {
#line 253 "declarative_tree.m"
              mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 0));
#line 253 "declarative_tree.m"
              mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 253 "declarative_tree.m"
              mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 253 "declarative_tree.m"
              mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 3)));
#line 253 "declarative_tree.m"
              mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 253 "declarative_tree.m"
              mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 253 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 253 "declarative_tree.m"
              mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 7)));
#line 253 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_14 == mdb__declarative_tree__V_49_49);
#line 253 "declarative_tree.m"
            }
#line 252 "declarative_tree.m"
        }
#line 254 "declarative_tree.m"
        break;
#line 254 "declarative_tree.m"
      case (MR_Integer) 3:
#line 254 "declarative_tree.m"
#line 254 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 0)))) {
#line 254 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 254 "declarative_tree.m"
          case (MR_Integer) 0:
#line 255 "declarative_tree.m"
            {
#line 255 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Event_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 255 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_50_50;
#line 255 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 255 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 255 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 3));
#line 255 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 255 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 256 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_30_30;
#line 256 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_31_31;
#line 256 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_32_32;
#line 256 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_33_33;
#line 256 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_34_34;

#line 256 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 256 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 256 "declarative_tree.m"
                {
#line 256 "declarative_tree.m"
                  mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 256 "declarative_tree.m"
                  mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 256 "declarative_tree.m"
                  mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 3));
#line 256 "declarative_tree.m"
                  mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 256 "declarative_tree.m"
                  mdb__declarative_tree__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 256 "declarative_tree.m"
                  mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 256 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_47 == mdb__declarative_tree__V_50_50);
#line 256 "declarative_tree.m"
                }
#line 255 "declarative_tree.m"
            }
#line 254 "declarative_tree.m"
            break;
#line 254 "declarative_tree.m"
          case (MR_Integer) 1:
#line 258 "declarative_tree.m"
            {
#line 258 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Event_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 258 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_51_51;
#line 258 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 258 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 258 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 3));
#line 258 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 258 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_39_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 258 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 7)));
#line 259 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_41_41;
#line 259 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_42_42;
#line 259 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_43_43;
#line 259 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_44_44;
#line 259 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_45_45;
#line 259 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_46_46;

#line 259 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 259 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 259 "declarative_tree.m"
                {
#line 259 "declarative_tree.m"
                  mdb__declarative_tree__V_41_41 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 259 "declarative_tree.m"
                  mdb__declarative_tree__V_42_42 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 259 "declarative_tree.m"
                  mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 3));
#line 259 "declarative_tree.m"
                  mdb__declarative_tree__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 259 "declarative_tree.m"
                  mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 259 "declarative_tree.m"
                  mdb__declarative_tree__V_45_45 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 259 "declarative_tree.m"
                  mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 7)));
#line 259 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_48 == mdb__declarative_tree__V_51_51);
#line 259 "declarative_tree.m"
                }
#line 258 "declarative_tree.m"
            }
#line 254 "declarative_tree.m"
            break;
#line 254 "declarative_tree.m"
        }
#line 254 "declarative_tree.m"
        break;
#line 254 "declarative_tree.m"
    }
#line 248 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 248 "declarative_tree.m"
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
#line 302 "declarative_tree.m"
  {
#line 302 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 302 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 302 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 302 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_6;
#line 1856 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_12;
#line 1857 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_10;
#line 98 "mdb.declarative_execution.int"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 98 "mdb.declarative_execution.int"
    MR_Box mdb__declarative_tree__conv1_Node0_10;
#line 471 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_36;
#line 471 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 473 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_38_38;
#line 473 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_39_39;
#line 473 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_40_40;
#line 473 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_41_41;
#line 473 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_42_42;
#line 473 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_43_43;
#line 473 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_44_44;
#line 473 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_45_45;
#line 473 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_46_46;

#line 98 "mdb.declarative_execution.int"
    {
#line 98 "mdb.declarative_execution.int"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_10);
    }
#line 98 "mdb.declarative_execution.int"
    if (mdb__declarative_tree__succeeded)
#line 98 "mdb.declarative_execution.int"
      {
#line 98 "mdb.declarative_execution.int"
        mdb__declarative_tree__Node0_10 = ((MR_Word) mdb__declarative_tree__conv1_Node0_10);
#line 98 "mdb.declarative_execution.int"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 98 "mdb.declarative_execution.int"
      }
#line 1857 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1859 "declarative_tree.m"
#line 1859 "declarative_tree.m"
      switch (MR_tag((MR_Word) mdb__declarative_tree__Node0_10)) {
#line 1859 "declarative_tree.m"
        default:
#line 1859 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
        case (MR_Integer) 1:
#line 1858 "declarative_tree.m"
          {
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 0));
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_13_13;
#line 1858 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_14_14;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_15_15;
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_16_16;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_17_17;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_18_18;

#line 1858 "declarative_tree.m"
            mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 3)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 7)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1858 "declarative_tree.m"
          }
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
        case (MR_Integer) 3:
#line 1859 "declarative_tree.m"
#line 1859 "declarative_tree.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 0)))) {
#line 1859 "declarative_tree.m"
            default:
#line 1859 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1859 "declarative_tree.m"
              {
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_20_20;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_21_21;
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_22_22;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_23_23;

#line 1859 "declarative_tree.m"
                mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 3));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1859 "declarative_tree.m"
              }
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1860 "declarative_tree.m"
              {
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_25_25;
#line 1860 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_26_26;
#line 1860 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_27_27;
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_28_28;
#line 1860 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_29_29;

#line 1860 "declarative_tree.m"
                mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 3));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 7)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1860 "declarative_tree.m"
              }
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
          }
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
      }
#line 1856 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1863 "declarative_tree.m"
      mdb__declarative_tree__CallId_6 = mdb__declarative_tree__CallId0_12;
#line 1856 "declarative_tree.m"
    else
#line 1865 "declarative_tree.m"
      {
#line 1865 "declarative_tree.m"
        {
#line 1865 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1865 "declarative_tree.m"
      }
#line 472 "declarative_tree.m"
    {
#line 472 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_6, &mdb__declarative_tree__CallNode_36);
    }
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 0));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 1));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 2)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 3)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 4)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 5)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 6)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_44_44 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 7)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 8)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 9)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "declarative_tree.m"
    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 302 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 302 "declarative_tree.m"
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
#line 794 "declarative_tree.m"
  {
#line 794 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 794 "declarative_tree.m"
    {
#line 794 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, mdb__declarative_tree__HeadVar__3_3, mdb__declarative_tree__HeadVar__5_5);
    }
#line 794 "declarative_tree.m"
  }
#line 87 "declarative_tree.m"
}

#line 901 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
#line 901 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 901 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 901 "declarative_tree.m"
{
#line 901 "declarative_tree.m"
  {
#line 901 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 901 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 901 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 901 "declarative_tree.m"
    {
#line 901 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 901 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 901 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 901 "declarative_tree.m"
  }
#line 901 "declarative_tree.m"
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
#line 810 "declarative_tree.m"
  {
#line 810 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 810 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_12 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 810 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_13 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 810 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ChainStart_14;

#line 811 "declarative_tree.m"
    {
#line 811 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__Ref_13, mdb__declarative_tree__HeadVar__3_3, &mdb__declarative_tree__ChainStart_14);
    }
#line 831 "declarative_tree.m"
    if ((mdb__declarative_tree__ChainStart_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 832 "declarative_tree.m"
      {
#line 833 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 835 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 832 "declarative_tree.m"
      }
#line 831 "declarative_tree.m"
    else
#line 814 "declarative_tree.m"
      {
#line 814 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartLoc_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 0)));
#line 814 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__ArgNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 1)));
#line 814 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__TotalArgs_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 2)));
#line 814 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NodeId_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 3));
#line 814 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartPath_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 4)));
#line 814 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeProcDefnRep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 5)));
#line 815 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_24_24;

#line 815 "declarative_tree.m"
        {
#line 815 "declarative_tree.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_24_24);
        }
#line 1796 "declarative_tree.m"
        if ((mdb__declarative_tree__StartLoc_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1796 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 1796 "declarative_tree.m"
        else
#line 1797 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 0;
#line 819 "declarative_tree.m"
        if ((mdb__declarative_tree__MaybeProcDefnRep_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 818 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 819 "declarative_tree.m"
        else
#line 820 "declarative_tree.m"
          {
#line 820 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ProcDefnRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeProcDefnRep_20, (MR_Integer) 0)));
#line 821 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Origin0_22;

#line 822 "declarative_tree.m"
            {
#line 822 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_tree__trace_dependency_special_case_8_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__Ref_13, mdb__declarative_tree__StartLoc_15, mdb__declarative_tree__ArgNum_16, mdb__declarative_tree__HeadVar__4_4, mdb__declarative_tree__NodeId_18, &mdb__declarative_tree__Origin0_22);
            }
#line 821 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 825 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__6_6 = mdb__declarative_tree__Origin0_22;
#line 821 "declarative_tree.m"
            else
#line 891 "declarative_tree.m"
              {
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Node_36;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Contour0_37;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Contour_40;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__HeadVars_41;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__GoalRep_42;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__AllTraced_43;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__MaybePrims_44;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_54_54;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_55_55;
#line 891 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_56_56;
#line 901 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_61_61;
#line 901 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_62_62;
#line 901 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_63_63;
#line 901 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_64_64;
#line 902 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_65_65;
#line 902 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_66_66;
#line 902 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_67_67;
#line 902 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_68_68;

#line 892 "declarative_tree.m"
                {
#line 892 "declarative_tree.m"
                  mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__NodeId_18, &mdb__declarative_tree__Node_36);
                }
#line 893 "declarative_tree.m"
                {
#line 893 "declarative_tree.m"
                  mdb__declarative_tree__materialize_contour_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__NodeId_18, mdb__declarative_tree__Node_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Contour0_37);
                }
#line 897 "declarative_tree.m"
                if ((mdb__declarative_tree__StartLoc_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "declarative_tree.m"
                  mdb__declarative_tree__Contour_40 = mdb__declarative_tree__Contour0_37;
#line 897 "declarative_tree.m"
                else
#line 895 "declarative_tree.m"
                  {
#line 895 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_54_70;
#line 895 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_55_71;
#line 895 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_57_73;
#line 895 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_59_75;
#line 895 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CallId_38 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, (MR_Integer) 0));
#line 895 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CallNode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, (MR_Integer) 1)));
#line 895 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_50_50;
#line 895 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_51_51;

#line 896 "declarative_tree.m"
                    {
#line 896 "declarative_tree.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_54_70);
                    }
#line 896 "declarative_tree.m"
                    {
#line 896 "declarative_tree.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_55_71);
                    }
#line 7717 "mdb.declarative_tree.c"
                    {
#line 7719 "mdb.declarative_tree.c"
                      mdb__declarative_tree__TypeInfo_57_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7721 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_57_73, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 7723 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_57_73, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_55_71));
#line 7725 "mdb.declarative_tree.c"
                    }
#line 7727 "mdb.declarative_tree.c"
                    {
#line 7729 "mdb.declarative_tree.c"
                      mdb__declarative_tree__TypeInfo_59_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7731 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7733 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_54_70));
#line 7735 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_57_73));
#line 7737 "mdb.declarative_tree.c"
                    }
#line 896 "declarative_tree.m"
                    {
#line 896 "declarative_tree.m"
                      mdb__declarative_tree__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_51_51, 0) = mdb__declarative_tree__CallId_38;
#line 896 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_51_51, 1) = ((MR_Box) (mdb__declarative_tree__CallNode_39));
#line 896 "declarative_tree.m"
                    }
#line 896 "declarative_tree.m"
                    {
#line 896 "declarative_tree.m"
                      mdb__declarative_tree__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_50_50, 0) = ((MR_Box) (mdb__declarative_tree__V_51_51));
#line 896 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 896 "declarative_tree.m"
                    }
#line 896 "declarative_tree.m"
                    {
#line 896 "declarative_tree.m"
                      mdb__declarative_tree__Contour_40 = mercury__list__append_2_f_0(mdb__declarative_tree__TypeInfo_59_75, mdb__declarative_tree__Contour0_37, mdb__declarative_tree__V_50_50);
                    }
#line 895 "declarative_tree.m"
                  }
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 0)));
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 1)));
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 2)));
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 3)));
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 4)));
#line 901 "declarative_tree.m"
                {
#line 901 "declarative_tree.m"
                  mdb__declarative_tree__HeadVars_41 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[2], mdb__declarative_tree__V_54_54);
                }
#line 902 "declarative_tree.m"
                mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 0)));
#line 902 "declarative_tree.m"
                mdb__declarative_tree__GoalRep_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 1)));
#line 902 "declarative_tree.m"
                mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 2)));
#line 902 "declarative_tree.m"
                mdb__declarative_tree__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 3)));
#line 902 "declarative_tree.m"
                mdb__declarative_tree__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 4)));
#line 1784 "declarative_tree.m"
{
#define MR_PROC_LABEL mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0

	MR_Word TracingOn;

		{
#line 1784 "declarative_tree.m"

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif

#line 7806 "mdb.declarative_tree.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_tree__AllTraced_43  = TracingOn;
#line 1784 "declarative_tree.m"
}
#line 905 "declarative_tree.m"
                {
#line 905 "declarative_tree.m"
                  mdb__declarative_tree__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 905 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_56_56, 0) = ((MR_Box) (mdb__declarative_tree__GoalRep_42));
#line 905 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "declarative_tree.m"
                }
#line 905 "declarative_tree.m"
                {
#line 905 "declarative_tree.m"
                  mdb__declarative_tree__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_55_55, 0) = ((MR_Box) (mdb__declarative_tree__V_56_56));
#line 905 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "declarative_tree.m"
                }
#line 904 "declarative_tree.m"
                {
#line 904 "declarative_tree.m"
                  mdb__declarative_tree__MaybePrims_44 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__V_55_55, mdb__declarative_tree__Contour_40, mdb__declarative_tree__StartPath_19, mdb__declarative_tree__ArgNum_16, mdb__declarative_tree__TotalArgs_17, mdb__declarative_tree__HeadVars_41, mdb__declarative_tree__AllTraced_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 927 "declarative_tree.m"
                if ((mdb__declarative_tree__MaybePrims_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "declarative_tree.m"
                else
#line 909 "declarative_tree.m"
                  {
#line 909 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Primitives_45;
#line 909 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_46;
#line 909 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__MaybeClosure_47;
#line 909 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__AdjustedTermPath_48;
#line 909 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_44, (MR_Integer) 0)));

#line 908 "declarative_tree.m"
                    mdb__declarative_tree__Primitives_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 0)));
#line 908 "declarative_tree.m"
                    mdb__declarative_tree__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 1)));
#line 908 "declarative_tree.m"
                    mdb__declarative_tree__MaybeClosure_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 2)));
#line 921 "declarative_tree.m"
#line 921 "declarative_tree.m"
                    switch (mdb__declarative_tree__MaybeClosure_47) {
#line 921 "declarative_tree.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 921 "declarative_tree.m"
                      case (MR_Integer) 0:
#line 923 "declarative_tree.m"
                        mdb__declarative_tree__AdjustedTermPath_48 = mdb__declarative_tree__HeadVar__4_4;
#line 921 "declarative_tree.m"
                        break;
#line 921 "declarative_tree.m"
                      case (MR_Integer) 1:
#line 920 "declarative_tree.m"
                        {
#line 920 "declarative_tree.m"
                          mdb__declarative_tree__AdjustedTermPath_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "declarative_tree.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedTermPath_48, 0) = ((MR_Box) (mdb__declarative_tree__ArgNum_16));
#line 920 "declarative_tree.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedTermPath_48, 1) = ((MR_Box) (mdb__declarative_tree__HeadVar__4_4));
#line 920 "declarative_tree.m"
                        }
#line 921 "declarative_tree.m"
                        break;
#line 921 "declarative_tree.m"
                    }
#line 925 "declarative_tree.m"
                    {
#line 925 "declarative_tree.m"
                      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(mdb__declarative_tree__Primitives_45, mdb__declarative_tree__Var_46, mdb__declarative_tree__AdjustedTermPath_48, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__HeadVar__6_6);
                    }
#line 909 "declarative_tree.m"
                  }
#line 891 "declarative_tree.m"
              }
#line 820 "declarative_tree.m"
          }
#line 814 "declarative_tree.m"
      }
#line 810 "declarative_tree.m"
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
#line 241 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_31_31;
#line 241 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_32_32;
#line 241 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 241 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;
#line 241 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_35_35;
#line 241 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_36_36;
#line 241 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_37_37;
#line 241 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_38_38;
#line 241 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 243 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_40_40;
#line 243 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_41_41;
#line 243 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_42_42;
#line 243 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_43_43;
#line 243 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_44_44;
#line 243 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_45_45;
#line 243 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_46_46;
#line 243 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_47_47;
#line 243 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_48_48;

#line 235 "declarative_tree.m"
    {
#line 235 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref_6, &mdb__declarative_tree__Node_8);
    }
#line 237 "declarative_tree.m"
#line 237 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 237 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 237 "declarative_tree.m"
      case (MR_Integer) 1:
#line 237 "declarative_tree.m"
        {
#line 237 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 237 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_16_16;
#line 237 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_17_17;
#line 237 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18;
#line 237 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_19_19;
#line 237 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20;
#line 237 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21;

#line 237 "declarative_tree.m"
          mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 237 "declarative_tree.m"
          mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 237 "declarative_tree.m"
          mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 237 "declarative_tree.m"
          mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 237 "declarative_tree.m"
          mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 237 "declarative_tree.m"
          mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 237 "declarative_tree.m"
          mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 237 "declarative_tree.m"
        }
#line 237 "declarative_tree.m"
        break;
#line 237 "declarative_tree.m"
      case (MR_Integer) 3:
#line 237 "declarative_tree.m"
#line 237 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 237 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 237 "declarative_tree.m"
          case (MR_Integer) 0:
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
#line 237 "declarative_tree.m"
            break;
#line 237 "declarative_tree.m"
          case (MR_Integer) 1:
#line 238 "declarative_tree.m"
            {
#line 238 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 238 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_23_23;
#line 238 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_24_24;
#line 238 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_25_25;
#line 238 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26;
#line 238 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;

#line 238 "declarative_tree.m"
              mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 238 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 238 "declarative_tree.m"
              mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 238 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 238 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 238 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 238 "declarative_tree.m"
            }
#line 237 "declarative_tree.m"
            break;
#line 237 "declarative_tree.m"
        }
#line 237 "declarative_tree.m"
        break;
#line 237 "declarative_tree.m"
    }
#line 240 "declarative_tree.m"
    {
#line 240 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__Call_28);
    }
#line 241 "declarative_tree.m"
    mdb__declarative_tree__CallPrecId_29 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 0));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 1));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 2)));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 3)));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 4)));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 5)));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 6)));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 7)));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 8)));
#line 241 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 9)));
#line 242 "declarative_tree.m"
    {
#line 242 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallPrecId_29, &mdb__declarative_tree__ParentCallNode_30);
    }
#line 234 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 234 "declarative_tree.m"
      {
#line 243 "declarative_tree.m"
        mdb__declarative_tree__V_40_40 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 0));
#line 243 "declarative_tree.m"
        mdb__declarative_tree__Parent_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 1));
#line 243 "declarative_tree.m"
        mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 2)));
#line 243 "declarative_tree.m"
        mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 3)));
#line 243 "declarative_tree.m"
        mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 4)));
#line 243 "declarative_tree.m"
        mdb__declarative_tree__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 5)));
#line 243 "declarative_tree.m"
        mdb__declarative_tree__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 6)));
#line 243 "declarative_tree.m"
        mdb__declarative_tree__V_46_46 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 7)));
#line 243 "declarative_tree.m"
        mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 8)));
#line 243 "declarative_tree.m"
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
#line 278 "declarative_tree.m"
  {
#line 278 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 278 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 278 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 278 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 279 "declarative_tree.m"
    {
#line 279 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 284 "declarative_tree.m"
#line 284 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 284 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 284 "declarative_tree.m"
      case (MR_Integer) 1:
#line 285 "declarative_tree.m"
        {
#line 285 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_38_38;
#line 285 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Atom_21;
#line 285 "declarative_tree.m"
          MR_Box mdb__declarative_tree__PrecId_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 285 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_34 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 285 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_62;
#line 285 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_63_63;
#line 285 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 285 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 285 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 285 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 285 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 285 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 473 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_64_64;
#line 473 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_65_65;
#line 473 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_66_66;
#line 473 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_67_67;
#line 473 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_68_68;
#line 473 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_69_69;
#line 473 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_70_70;
#line 473 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_71_71;
#line 473 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_72_72;

#line 286 "declarative_tree.m"
          {
#line 286 "declarative_tree.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_38_38);
          }
#line 286 "declarative_tree.m"
          {
#line 286 "declarative_tree.m"
            mdb__declarative_tree__Atom_21 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_38_38, mdb__declarative_tree__Node_8);
          }
#line 472 "declarative_tree.m"
          {
#line 472 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_34, &mdb__declarative_tree__CallNode_62);
          }
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 0));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 1));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 2)));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 3)));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 4)));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 5)));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 6)));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 7)));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 8)));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 9)));
#line 473 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 285 "declarative_tree.m"
            {
#line 288 "declarative_tree.m"
              {
#line 288 "declarative_tree.m"
                mdb__declarative_tree__succeeded = mdb__declarative_tree__missing_answer_special_case_1_p_0(mdb__declarative_tree__Atom_21);
              }
#line 288 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 289 "declarative_tree.m"
                {
#line 289 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 631 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__TypeInfo_13_79;

#line 631 "declarative_tree.m"
                  {
#line 631 "declarative_tree.m"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_13_79);
                  }
#line 631 "declarative_tree.m"
                  {
#line 631 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_79, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34);
                  }
#line 631 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 632 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_29_29;
#line 631 "declarative_tree.m"
                  else
#line 634 "declarative_tree.m"
                    {
#line 634 "declarative_tree.m"
                      mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34, mdb__declarative_tree__V_29_29, mdb__declarative_tree__HeadVar__3_3);
                    }
#line 289 "declarative_tree.m"
                }
#line 288 "declarative_tree.m"
              else
#line 291 "declarative_tree.m"
                {
#line 291 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 499 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__TypeInfo_15_87;

#line 499 "declarative_tree.m"
                  {
#line 499 "declarative_tree.m"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_15_87);
                  }
#line 499 "declarative_tree.m"
                  {
#line 499 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_87, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34);
                  }
#line 499 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 500 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_31_31;
#line 499 "declarative_tree.m"
                  else
#line 502 "declarative_tree.m"
                    {
#line 502 "declarative_tree.m"
                      mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34, mdb__declarative_tree__V_31_31, mdb__declarative_tree__HeadVar__3_3);
                    }
#line 291 "declarative_tree.m"
                }
#line 288 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 285 "declarative_tree.m"
            }
#line 285 "declarative_tree.m"
        }
#line 284 "declarative_tree.m"
        break;
#line 284 "declarative_tree.m"
      case (MR_Integer) 3:
#line 284 "declarative_tree.m"
#line 284 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 284 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 284 "declarative_tree.m"
          case (MR_Integer) 0:
#line 281 "declarative_tree.m"
            {
#line 281 "declarative_tree.m"
              MR_Box mdb__declarative_tree__PrecId_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 281 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 281 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_32_32;
#line 281 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 281 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 281 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 281 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 631 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_13_94;
#line 631 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__TypeInfoIndex_93;

#line 282 "declarative_tree.m"
              {
#line 282 "declarative_tree.m"
                mdb__declarative_tree__succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10);
              }
#line 281 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 281 "declarative_tree.m"
                {
#line 283 "declarative_tree.m"
                  mdb__declarative_tree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8407 "mdb.declarative_tree.c"
                  mdb__declarative_tree__TypeInfoIndex_93 = (MR_Integer) 2;
#line 631 "declarative_tree.m"
                  {
#line 631 "declarative_tree.m"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__TypeInfoIndex_93, &mdb__declarative_tree__TypeInfo_13_94);
                  }
#line 631 "declarative_tree.m"
                  {
#line 631 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_94, mdb__declarative_tree__PrecId_9, mdb__declarative_tree__CallId_10);
                  }
#line 631 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 632 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_32_32;
#line 631 "declarative_tree.m"
                  else
#line 634 "declarative_tree.m"
                    {
#line 634 "declarative_tree.m"
                      mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_9, mdb__declarative_tree__CallId_10, mdb__declarative_tree__V_32_32, mdb__declarative_tree__HeadVar__3_3);
                    }
#line 631 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 281 "declarative_tree.m"
                }
#line 281 "declarative_tree.m"
            }
#line 284 "declarative_tree.m"
            break;
#line 284 "declarative_tree.m"
          case (MR_Integer) 1:
#line 294 "declarative_tree.m"
            {
#line 294 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_27_27;
#line 294 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_28_28;
#line 294 "declarative_tree.m"
              MR_Box mdb__declarative_tree__PrecId_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 294 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 294 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_41;
#line 294 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_42_42;
#line 294 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 294 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 294 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 294 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 294 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 473 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_43_43;
#line 473 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_44_44;
#line 473 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_45_45;
#line 473 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_46_46;
#line 473 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_47_47;
#line 473 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_48_48;
#line 473 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_49_49;
#line 473 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_50_50;
#line 473 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_51_51;
#line 499 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_15_59;
#line 499 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__TypeInfoIndex_58;

#line 472 "declarative_tree.m"
              {
#line 472 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_41);
              }
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 0));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 1));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 2)));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 3)));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 4)));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 5)));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 6)));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 7)));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 8)));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 9)));
#line 473 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 294 "declarative_tree.m"
                {
#line 296 "declarative_tree.m"
                  mdb__declarative_tree__V_27_27 = (MR_Integer) 1;
#line 296 "declarative_tree.m"
                  mdb__declarative_tree__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8522 "mdb.declarative_tree.c"
                  mdb__declarative_tree__TypeInfoIndex_58 = (MR_Integer) 2;
#line 499 "declarative_tree.m"
                  {
#line 499 "declarative_tree.m"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__TypeInfoIndex_58, &mdb__declarative_tree__TypeInfo_15_59);
                  }
#line 499 "declarative_tree.m"
                  {
#line 499 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_59, mdb__declarative_tree__PrecId_35, mdb__declarative_tree__CallId_36);
                  }
#line 499 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 500 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_28_28;
#line 499 "declarative_tree.m"
                  else
#line 502 "declarative_tree.m"
                    {
#line 502 "declarative_tree.m"
                      mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__V_27_27, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_35, mdb__declarative_tree__CallId_36, mdb__declarative_tree__V_28_28, mdb__declarative_tree__HeadVar__3_3);
                    }
#line 499 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 294 "declarative_tree.m"
                }
#line 294 "declarative_tree.m"
            }
#line 284 "declarative_tree.m"
            break;
#line 284 "declarative_tree.m"
        }
#line 284 "declarative_tree.m"
        break;
#line 284 "declarative_tree.m"
    }
#line 278 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 278 "declarative_tree.m"
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
#line 217 "declarative_tree.m"
  {
#line 217 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 217 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 217 "declarative_tree.m"
    MR_Box mdb__declarative_tree__BugRef_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 217 "declarative_tree.m"
    MR_Box mdb__declarative_tree__InadmissibleRef_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 217 "declarative_tree.m"
    MR_Word mdb__declarative_tree__BugAtom_9;
#line 217 "declarative_tree.m"
    MR_Word mdb__declarative_tree__InadmissibleAtom_10;
#line 217 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Event_11;
#line 217 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_16;
#line 217 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_62;

#line 217 "declarative_tree.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 128 "declarative_tree.m"
    {
#line 128 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__BugRef_7, &mdb__declarative_tree__Node_16);
    }
#line 132 "declarative_tree.m"
#line 132 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_16)) {
#line 132 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 132 "declarative_tree.m"
      case (MR_Integer) 1:
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
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
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
        break;
#line 132 "declarative_tree.m"
      case (MR_Integer) 3:
#line 132 "declarative_tree.m"
#line 132 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 0)))) {
#line 132 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 132 "declarative_tree.m"
          case (MR_Integer) 0:
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
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
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
#line 132 "declarative_tree.m"
            break;
#line 132 "declarative_tree.m"
          case (MR_Integer) 1:
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
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
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
            break;
#line 132 "declarative_tree.m"
        }
#line 132 "declarative_tree.m"
        break;
#line 132 "declarative_tree.m"
    }
#line 219 "declarative_tree.m"
    {
#line 219 "declarative_tree.m"
      mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__InadmissibleRef_8, &mdb__declarative_tree__InadmissibleAtom_10);
    }
#line 144 "declarative_tree.m"
    {
#line 144 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__BugRef_7, &mdb__declarative_tree__Node_62);
    }
#line 147 "declarative_tree.m"
#line 147 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_62)) {
#line 147 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "declarative_tree.m"
      case (MR_Integer) 1:
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
        break;
#line 147 "declarative_tree.m"
      case (MR_Integer) 3:
#line 147 "declarative_tree.m"
#line 147 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 0)))) {
#line 147 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 147 "declarative_tree.m"
          case (MR_Integer) 0:
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
#line 147 "declarative_tree.m"
            break;
#line 147 "declarative_tree.m"
          case (MR_Integer) 1:
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
            break;
#line 147 "declarative_tree.m"
        }
#line 147 "declarative_tree.m"
        break;
#line 147 "declarative_tree.m"
    }
#line 217 "declarative_tree.m"
    {
#line 217 "declarative_tree.m"
      MR_Word base;
#line 217 "declarative_tree.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 217 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__4_4 = base;
#line 217 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__BugAtom_9));
#line 217 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 1) = NULL;
#line 217 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__InadmissibleAtom_10));
#line 217 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_tree__Event_11));
#line 217 "declarative_tree.m"
    }
#line 217 "declarative_tree.m"
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
#line 195 "declarative_tree.m"
  {
#line 195 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 195 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 195 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 195 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 196 "declarative_tree.m"
    {
#line 196 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 203 "declarative_tree.m"
#line 203 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 203 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 203 "declarative_tree.m"
      case (MR_Integer) 1:
#line 198 "declarative_tree.m"
        {
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_48;
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_40_84;
#line 198 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 198 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__Event_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__InitDeclAtom_17;
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__FinalDeclAtom_18;
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Contour_19;
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_45;
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_46;
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ExitAtom_52;
#line 198 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_53;
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Call_54;
#line 198 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__CallIoSeq_55;
#line 198 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__ExitIoSeq_56;
#line 198 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 198 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 198 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 198 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 198 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 198 "declarative_tree.m"
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
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_48);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_48, mdb__declarative_tree__CallNode_45);
          }
#line 122 "declarative_tree.m"
          mdb__declarative_tree__InitDeclAtom_17 = (MR_Word) mdb__declarative_tree__CallAtom_46;
#line 105 "declarative_tree.m"
          {
#line 105 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
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
#line 114 "declarative_tree.m"
              {
#line 114 "declarative_tree.m"
                mdb__declarative_tree__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 114 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_58_58, 0) = ((MR_Box) (mdb__declarative_tree__V_59_59));
#line 114 "declarative_tree.m"
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
#line 201 "declarative_tree.m"
          {
#line 201 "declarative_tree.m"
            mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_8, &mdb__declarative_tree__Contour_19);
          }
#line 202 "declarative_tree.m"
          {
#line 202 "declarative_tree.m"
            MR_Word base;
#line 202 "declarative_tree.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "declarative_tree.m"
            *mdb__declarative_tree__HeadVar__3_3 = base;
#line 202 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__InitDeclAtom_17));
#line 202 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__FinalDeclAtom_18));
#line 202 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__Contour_19));
#line 202 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_tree__Event_13));
#line 202 "declarative_tree.m"
          }
#line 198 "declarative_tree.m"
        }
#line 203 "declarative_tree.m"
        break;
#line 203 "declarative_tree.m"
      case (MR_Integer) 3:
#line 203 "declarative_tree.m"
#line 203 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 203 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 203 "declarative_tree.m"
          case (MR_Integer) 0:
#line 204 "declarative_tree.m"
            {
#line 204 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_11_91;
#line 204 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DeclAtom_24;
#line 204 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 204 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Event_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 204 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_88;
#line 204 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_89;
#line 204 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 204 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 204 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 204 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));

#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_30, &mdb__declarative_tree__CallNode_88);
              }
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_91);
              }
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_89 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_91, mdb__declarative_tree__CallNode_88);
              }
#line 122 "declarative_tree.m"
              mdb__declarative_tree__DeclAtom_24 = (MR_Word) mdb__declarative_tree__CallAtom_89;
#line 206 "declarative_tree.m"
              {
#line 206 "declarative_tree.m"
                MR_Word base;
#line 206 "declarative_tree.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__3_3 = base;
#line 206 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_24));
#line 206 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__Event_31));
#line 206 "declarative_tree.m"
              }
#line 204 "declarative_tree.m"
            }
#line 203 "declarative_tree.m"
            break;
#line 203 "declarative_tree.m"
          case (MR_Integer) 1:
#line 208 "declarative_tree.m"
            {
#line 208 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_11_41;
#line 208 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Exception_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 208 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 208 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Event_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 208 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DeclAtom_34;
#line 208 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_38;
#line 208 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_39;
#line 208 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 208 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 208 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 208 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));

#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_32, &mdb__declarative_tree__CallNode_38);
              }
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_41);
              }
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_39 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_41, mdb__declarative_tree__CallNode_38);
              }
#line 122 "declarative_tree.m"
              mdb__declarative_tree__DeclAtom_34 = (MR_Word) mdb__declarative_tree__CallAtom_39;
#line 210 "declarative_tree.m"
              {
#line 210 "declarative_tree.m"
                MR_Word base;
#line 210 "declarative_tree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 210 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__3_3 = base;
#line 210 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_34));
#line 210 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__Exception_27));
#line 210 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_tree__Event_33));
#line 210 "declarative_tree.m"
              }
#line 208 "declarative_tree.m"
            }
#line 203 "declarative_tree.m"
            break;
#line 203 "declarative_tree.m"
        }
#line 203 "declarative_tree.m"
        break;
#line 203 "declarative_tree.m"
    }
#line 195 "declarative_tree.m"
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
#line 165 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 165 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 165 "declarative_tree.m"
      case (MR_Integer) 1:
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
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_52);
          }
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_50 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_52, mdb__declarative_tree__CallNode_49);
          }
#line 122 "declarative_tree.m"
          mdb__declarative_tree__InitDeclAtom_24 = (MR_Word) mdb__declarative_tree__CallAtom_50;
#line 105 "declarative_tree.m"
          {
#line 105 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
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
#line 114 "declarative_tree.m"
              {
#line 114 "declarative_tree.m"
                mdb__declarative_tree__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 114 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_62_62, 0) = ((MR_Box) (mdb__declarative_tree__V_63_63));
#line 114 "declarative_tree.m"
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
        break;
#line 165 "declarative_tree.m"
      case (MR_Integer) 3:
#line 165 "declarative_tree.m"
#line 165 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 165 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 165 "declarative_tree.m"
          case (MR_Integer) 0:
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
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
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
#line 165 "declarative_tree.m"
            break;
#line 165 "declarative_tree.m"
          case (MR_Integer) 1:
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
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
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
            break;
#line 165 "declarative_tree.m"
        }
#line 165 "declarative_tree.m"
        break;
#line 165 "declarative_tree.m"
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
#line 9795 "mdb.declarative_tree.c"
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

#line 9853 "mdb.declarative_tree.c"
        {
#line 9855 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_S_7, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_4_4);
        }
#line 40 "declarative_tree.m"
      }
#line 40 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 40 "declarative_tree.m"
  }
#line 40 "declarative_tree.m"
}

#line 771 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_15,
#line 771 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 771 "declarative_tree.m"
{
#line 771 "declarative_tree.m"
  {
#line 771 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 771 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_13 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 771 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_14 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 771 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_13 == mdb__declarative_tree__CastY_14);
#line 771 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9893 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 771 "declarative_tree.m"
    else
#line 771 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 771 "declarative_tree.m"
      else
#line 9905 "mdb.declarative_tree.c"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 1;
#line 771 "declarative_tree.m"
    else
#line 771 "declarative_tree.m"
      {
#line 771 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 771 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));

#line 771 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9918 "mdb.declarative_tree.c"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 2;
#line 771 "declarative_tree.m"
        else
#line 771 "declarative_tree.m"
          {
#line 771 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0));
#line 771 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 771 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_12_12;

#line 771 "declarative_tree.m"
            {
#line 771 "declarative_tree.m"
              mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_15, &mdb__declarative_tree__V_12_12, mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_10_10);
            }
#line 9936 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_12_12 == (MR_Integer) 0);
#line 771 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 771 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 771 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_12_12;
#line 771 "declarative_tree.m"
            else
#line 771 "declarative_tree.m"
              {
#line 771 "declarative_tree.m"
                mdb__declarative_execution____Compare____trace_node_1_0(mdb__declarative_tree__TypeInfo_for_R_15, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_18_18, mdb__declarative_tree__V_11_11);
              }
#line 771 "declarative_tree.m"
          }
#line 771 "declarative_tree.m"
      }
#line 771 "declarative_tree.m"
  }
#line 771 "declarative_tree.m"
}

#line 771 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 771 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 771 "declarative_tree.m"
{
#line 771 "declarative_tree.m"
  {
#line 771 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 771 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 771 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 771 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 771 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 771 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 771 "declarative_tree.m"
    else
#line 771 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "declarative_tree.m"
      {
#line 771 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastX_3 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 771 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastY_4 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 771 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastY_4 == mdb__declarative_tree__CastX_3);
#line 771 "declarative_tree.m"
      }
#line 771 "declarative_tree.m"
    else
#line 771 "declarative_tree.m"
      {
#line 771 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0));
#line 771 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 771 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_7_7;
#line 771 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8;

#line 771 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 771 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 771 "declarative_tree.m"
          {
#line 771 "declarative_tree.m"
            mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 771 "declarative_tree.m"
            mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 10024 "mdb.declarative_tree.c"
            {
#line 10026 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_11, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_7_7);
            }
#line 771 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 10031 "mdb.declarative_tree.c"
              {
#line 10033 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = mdb__declarative_execution____Unify____trace_node_1_0(mdb__declarative_tree__TypeInfo_for_R_11, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_8_8);
              }
#line 771 "declarative_tree.m"
          }
#line 771 "declarative_tree.m"
      }
#line 771 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 771 "declarative_tree.m"
  }
#line 771 "declarative_tree.m"
}

#line 1113 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_14,
#line 1113 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 1113 "declarative_tree.m"
{
#line 1113 "declarative_tree.m"
  {
#line 1113 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1113 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_12 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 1113 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_13 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 1113 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_12 == mdb__declarative_tree__CastY_13);
#line 1113 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10073 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 1113 "declarative_tree.m"
    else
#line 1113 "declarative_tree.m"
      {
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1113 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 1113 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_16_16;

#line 10096 "mdb.declarative_tree.c"
        {
#line 10098 "mdb.declarative_tree.c"
          mdb__declarative_tree__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10100 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_16_16, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
#line 10102 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_16_16, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_for_R_14));
#line 10104 "mdb.declarative_tree.c"
        }
#line 1113 "declarative_tree.m"
        {
#line 1113 "declarative_tree.m"
          mercury__list____Compare____list_1_0(mdb__declarative_tree__TypeInfo_16_16, &mdb__declarative_tree__V_10_10, (MR_Word) mdb__declarative_tree__V_4_4, (MR_Word) mdb__declarative_tree__V_7_7);
        }
#line 10111 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_10_10 == (MR_Integer) 0);
#line 1113 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1113 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1113 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_10_10;
#line 1113 "declarative_tree.m"
        else
#line 1113 "declarative_tree.m"
          {
#line 1113 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_11_11;

#line 1113 "declarative_tree.m"
            {
#line 1113 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_11_11, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_8_8);
            }
#line 10131 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_11_11 == (MR_Integer) 0);
#line 1113 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1113 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1113 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_11_11;
#line 1113 "declarative_tree.m"
            else
#line 1113 "declarative_tree.m"
              {
#line 1113 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_21_21 = (MR_Integer) mdb__declarative_tree__V_6_6;
#line 1113 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_22_22 = (MR_Integer) mdb__declarative_tree__V_9_9;

#line 1113 "declarative_tree.m"
                {
#line 1113 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_21_21, mdb__declarative_tree__V_22_22);
                }
#line 1113 "declarative_tree.m"
              }
#line 1113 "declarative_tree.m"
          }
#line 1113 "declarative_tree.m"
      }
#line 1113 "declarative_tree.m"
  }
#line 1113 "declarative_tree.m"
}

#line 1113 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1113 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 1113 "declarative_tree.m"
{
#line 1113 "declarative_tree.m"
  {
#line 1113 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1113 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 1113 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 1113 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 1113 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1113 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 1113 "declarative_tree.m"
    else
#line 1113 "declarative_tree.m"
      {
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_13_13;
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1113 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1113 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1113 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));

#line 10209 "mdb.declarative_tree.c"
        {
#line 10211 "mdb.declarative_tree.c"
          mdb__declarative_tree__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10213 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_13_13, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
#line 10215 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_13_13, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_for_R_11));
#line 10217 "mdb.declarative_tree.c"
        }
#line 10219 "mdb.declarative_tree.c"
        {
#line 10221 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_tree__TypeInfo_13_13, (MR_Word) mdb__declarative_tree__V_3_3, (MR_Word) mdb__declarative_tree__V_6_6);
        }
#line 1113 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1113 "declarative_tree.m"
          {
#line 10228 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_7_7);
#line 1113 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 10232 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_5_5 == mdb__declarative_tree__V_8_8);
#line 1113 "declarative_tree.m"
          }
#line 1113 "declarative_tree.m"
      }
#line 1113 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1113 "declarative_tree.m"
  }
#line 1113 "declarative_tree.m"
}

#line 1738 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
#line 1738 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1738 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1738 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 1738 "declarative_tree.m"
{
#line 1738 "declarative_tree.m"
  {
#line 1738 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1738 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 1738 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 1738 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_15 == mdb__declarative_tree__CastY_16);
#line 1738 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10269 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 1738 "declarative_tree.m"
    else
#line 1738 "declarative_tree.m"
      {
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1738 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 1738 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3)));
#line 1738 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12;

#line 1738 "declarative_tree.m"
        {
#line 1738 "declarative_tree.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_12_12, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_8_8);
        }
#line 10299 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_12_12 == (MR_Integer) 0);
#line 1738 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1738 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1738 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_12_12;
#line 1738 "declarative_tree.m"
        else
#line 1738 "declarative_tree.m"
          {
#line 1738 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_13_13;

#line 1738 "declarative_tree.m"
            {
#line 1738 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_13_13, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_9_9);
            }
#line 10319 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_13_13 == (MR_Integer) 0);
#line 1738 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1738 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1738 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_13_13;
#line 1738 "declarative_tree.m"
            else
#line 1738 "declarative_tree.m"
              {
#line 1738 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_14_14;

#line 1738 "declarative_tree.m"
                {
#line 1738 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_14_14, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_10_10);
                }
#line 10339 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_14_14 == (MR_Integer) 0);
#line 1738 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1738 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1738 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_14_14;
#line 1738 "declarative_tree.m"
                else
#line 1738 "declarative_tree.m"
                  {
#line 1738 "declarative_tree.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_11_11);
                  }
#line 1738 "declarative_tree.m"
              }
#line 1738 "declarative_tree.m"
          }
#line 1738 "declarative_tree.m"
      }
#line 1738 "declarative_tree.m"
  }
#line 1738 "declarative_tree.m"
}

#line 1738 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
#line 1738 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1738 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 1738 "declarative_tree.m"
{
#line 1738 "declarative_tree.m"
  {
#line 1738 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1738 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_11 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 1738 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_12 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 1738 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_11 == mdb__declarative_tree__CastY_12);
#line 1738 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1738 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 1738 "declarative_tree.m"
    else
#line 1738 "declarative_tree.m"
      {
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1738 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1738 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1738 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));

#line 10410 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_7_7) == 0);
#line 1738 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1738 "declarative_tree.m"
          {
#line 10416 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_8_8);
#line 1738 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1738 "declarative_tree.m"
              {
#line 10422 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_9_9) == 0);
#line 1738 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 10426 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_10_10) == 0);
#line 1738 "declarative_tree.m"
              }
#line 1738 "declarative_tree.m"
          }
#line 1738 "declarative_tree.m"
      }
#line 1738 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1738 "declarative_tree.m"
  }
#line 1738 "declarative_tree.m"
}

#line 778 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
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
    MR_Word mdb__declarative_tree__Cast_HeadVar1_4 = mdb__declarative_tree__HeadVar__2_2;
#line 778 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar2_5 = mdb__declarative_tree__HeadVar__3_3;

#line 778 "declarative_tree.m"
    {
#line 778 "declarative_tree.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[7], mdb__declarative_tree__HeadVar__1_1, ((MR_Box) (mdb__declarative_tree__Cast_HeadVar1_4)), ((MR_Box) (mdb__declarative_tree__Cast_HeadVar2_5)));
    }
#line 778 "declarative_tree.m"
  }
#line 778 "declarative_tree.m"
}

#line 778 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
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
    MR_Word mdb__declarative_tree__Cast_HeadVar1_3 = mdb__declarative_tree__HeadVar__1_1;
#line 778 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar2_4 = mdb__declarative_tree__HeadVar__2_2;

#line 778 "declarative_tree.m"
    {
#line 778 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[7], ((MR_Box) (mdb__declarative_tree__Cast_HeadVar1_3)), ((MR_Box) (mdb__declarative_tree__Cast_HeadVar2_4)));
    }
#line 778 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 778 "declarative_tree.m"
  }
#line 778 "declarative_tree.m"
}

#line 775 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
#line 775 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 775 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 775 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 775 "declarative_tree.m"
{
#line 775 "declarative_tree.m"
  {
#line 775 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 775 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 775 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 775 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 775 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10525 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 775 "declarative_tree.m"
    else
#line 775 "declarative_tree.m"
      {
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8;

#line 775 "declarative_tree.m"
        {
#line 775 "declarative_tree.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], &mdb__declarative_tree__V_8_8, ((MR_Box) (mdb__declarative_tree__V_4_4)), ((MR_Box) (mdb__declarative_tree__V_6_6)));
        }
#line 10547 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_8_8 == (MR_Integer) 0);
#line 775 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 775 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 775 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_8_8;
#line 775 "declarative_tree.m"
        else
#line 775 "declarative_tree.m"
          {
#line 775 "declarative_tree.m"
            mdbcomp__goal_path____Compare____reverse_goal_path_0_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_7_7);
          }
#line 775 "declarative_tree.m"
      }
#line 775 "declarative_tree.m"
  }
#line 775 "declarative_tree.m"
}

#line 775 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
#line 775 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 775 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 775 "declarative_tree.m"
{
#line 775 "declarative_tree.m"
  {
#line 775 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 775 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_7 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 775 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_8 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 775 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_7 == mdb__declarative_tree__CastY_8);
#line 775 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 775 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 775 "declarative_tree.m"
    else
#line 775 "declarative_tree.m"
      {
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 775 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));

#line 10606 "mdb.declarative_tree.c"
        {
#line 10608 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], ((MR_Box) (mdb__declarative_tree__V_3_3)), ((MR_Box) (mdb__declarative_tree__V_5_5)));
        }
#line 775 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 10613 "mdb.declarative_tree.c"
          {
#line 10615 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_6_6);
          }
#line 775 "declarative_tree.m"
      }
#line 775 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 775 "declarative_tree.m"
  }
#line 775 "declarative_tree.m"
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
#line 10653 "mdb.declarative_tree.c"
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

#line 10711 "mdb.declarative_tree.c"
        {
#line 10713 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_7, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_4_4);
        }
#line 32 "declarative_tree.m"
      }
#line 32 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 32 "declarative_tree.m"
  }
#line 32 "declarative_tree.m"
}

#line 741 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_35,
#line 741 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 741 "declarative_tree.m"
{
#line 741 "declarative_tree.m"
  {
#line 741 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 741 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_33 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 741 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_34 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 741 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_33 == mdb__declarative_tree__CastY_34);
#line 741 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10751 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 741 "declarative_tree.m"
    else
#line 741 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 741 "declarative_tree.m"
      else
#line 10763 "mdb.declarative_tree.c"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 2;
#line 741 "declarative_tree.m"
    else
#line 741 "declarative_tree.m"
      {
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 741 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3));
#line 741 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 741 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));

#line 741 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10784 "mdb.declarative_tree.c"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 1;
#line 741 "declarative_tree.m"
        else
#line 741 "declarative_tree.m"
          {
#line 741 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 741 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 741 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 741 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3));
#line 741 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 4)));
#line 741 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 5)));
#line 741 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_16_16;

#line 741 "declarative_tree.m"
            {
#line 741 "declarative_tree.m"
              mdb__declarative_tree____Compare____start_loc_1_0(mdb__declarative_tree__TypeInfo_for_R_35, &mdb__declarative_tree__V_16_16, mdb__declarative_tree__V_47_47, mdb__declarative_tree__V_10_10);
            }
#line 10810 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == (MR_Integer) 0);
#line 741 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 741 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_16_16;
#line 741 "declarative_tree.m"
            else
#line 741 "declarative_tree.m"
              {
#line 741 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_17_17;

#line 741 "declarative_tree.m"
                {
#line 741 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_17_17, mdb__declarative_tree__V_46_46, mdb__declarative_tree__V_11_11);
                }
#line 10830 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_17_17 == (MR_Integer) 0);
#line 741 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 741 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_17_17;
#line 741 "declarative_tree.m"
                else
#line 741 "declarative_tree.m"
                  {
#line 741 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_18_18;

#line 741 "declarative_tree.m"
                    {
#line 741 "declarative_tree.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_18_18, mdb__declarative_tree__V_45_45, mdb__declarative_tree__V_12_12);
                    }
#line 10850 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_18_18 == (MR_Integer) 0);
#line 741 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 741 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_18_18;
#line 741 "declarative_tree.m"
                    else
#line 741 "declarative_tree.m"
                      {
#line 741 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_19_19;

#line 741 "declarative_tree.m"
                        {
#line 741 "declarative_tree.m"
                          mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_35, &mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_44_44, mdb__declarative_tree__V_13_13);
                        }
#line 10870 "mdb.declarative_tree.c"
                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_19_19 == (MR_Integer) 0);
#line 741 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 741 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
                          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_19_19;
#line 741 "declarative_tree.m"
                        else
#line 741 "declarative_tree.m"
                          {
#line 741 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__V_20_20;

#line 741 "declarative_tree.m"
                            {
#line 741 "declarative_tree.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[0], &mdb__declarative_tree__V_20_20, ((MR_Box) (mdb__declarative_tree__V_43_43)), ((MR_Box) (mdb__declarative_tree__V_14_14)));
                            }
#line 10890 "mdb.declarative_tree.c"
                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_20_20 == (MR_Integer) 0);
#line 741 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 741 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
                              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_20_20;
#line 741 "declarative_tree.m"
                            else
#line 741 "declarative_tree.m"
                              {
#line 741 "declarative_tree.m"
                                {
#line 741 "declarative_tree.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[6], mdb__declarative_tree__HeadVar__1_1, ((MR_Box) (mdb__declarative_tree__V_42_42)), ((MR_Box) (mdb__declarative_tree__V_15_15)));
                                }
#line 741 "declarative_tree.m"
                              }
#line 741 "declarative_tree.m"
                          }
#line 741 "declarative_tree.m"
                      }
#line 741 "declarative_tree.m"
                  }
#line 741 "declarative_tree.m"
              }
#line 741 "declarative_tree.m"
          }
#line 741 "declarative_tree.m"
      }
#line 741 "declarative_tree.m"
  }
#line 741 "declarative_tree.m"
}

#line 741 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_19,
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 741 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 741 "declarative_tree.m"
{
#line 741 "declarative_tree.m"
  {
#line 741 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 741 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_17 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 741 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_18 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 741 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_17 == mdb__declarative_tree__CastY_18);
#line 741 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 741 "declarative_tree.m"
    else
#line 741 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "declarative_tree.m"
      {
#line 741 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 741 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 741 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastY_16 == mdb__declarative_tree__CastX_15);
#line 741 "declarative_tree.m"
      }
#line 741 "declarative_tree.m"
    else
#line 741 "declarative_tree.m"
      {
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_20_20;
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_21_21;
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 741 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 741 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 741 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_6_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3));
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)));
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)));
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9;
#line 741 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_10_10;
#line 741 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 741 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 741 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;

#line 741 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 741 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
          {
#line 741 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 741 "declarative_tree.m"
            mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 741 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 741 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3));
#line 741 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 741 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 11018 "mdb.declarative_tree.c"
            {
#line 11020 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____start_loc_1_0(mdb__declarative_tree__TypeInfo_for_R_19, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_9_9);
            }
#line 741 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
              {
#line 11027 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_10_10);
#line 741 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
                  {
#line 11033 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_5_5 == mdb__declarative_tree__V_11_11);
#line 741 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
                      {
#line 11039 "mdb.declarative_tree.c"
                        {
#line 11041 "mdb.declarative_tree.c"
                          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_19, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_12_12);
                        }
#line 741 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
                          {
#line 11048 "mdb.declarative_tree.c"
                            mdb__declarative_tree__TypeInfo_20_20 = (MR_Word) &mdb__declarative_tree_scalar_common_1[0];
#line 11050 "mdb.declarative_tree.c"
                            {
#line 11052 "mdb.declarative_tree.c"
                              mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_20_20, ((MR_Box) (mdb__declarative_tree__V_7_7)), ((MR_Box) (mdb__declarative_tree__V_13_13)));
                            }
#line 741 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 741 "declarative_tree.m"
                              {
#line 11059 "mdb.declarative_tree.c"
                                mdb__declarative_tree__TypeInfo_21_21 = (MR_Word) &mdb__declarative_tree_scalar_common_1[6];
#line 11061 "mdb.declarative_tree.c"
                                {
#line 11063 "mdb.declarative_tree.c"
                                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_21_21, ((MR_Box) (mdb__declarative_tree__V_8_8)), ((MR_Box) (mdb__declarative_tree__V_14_14)));
                                }
#line 741 "declarative_tree.m"
                              }
#line 741 "declarative_tree.m"
                          }
#line 741 "declarative_tree.m"
                      }
#line 741 "declarative_tree.m"
                  }
#line 741 "declarative_tree.m"
              }
#line 741 "declarative_tree.m"
          }
#line 741 "declarative_tree.m"
      }
#line 741 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 741 "declarative_tree.m"
  }
#line 741 "declarative_tree.m"
}

#line 487 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
#line 487 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 487 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 487 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 487 "declarative_tree.m"
{
#line 487 "declarative_tree.m"
  {
#line 487 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 487 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 487 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 487 "declarative_tree.m"
    {
#line 487 "declarative_tree.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__Cast_HeadVar1_4, mdb__declarative_tree__Cast_HeadVar2_5);
    }
#line 487 "declarative_tree.m"
  }
#line 487 "declarative_tree.m"
}

#line 487 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
#line 487 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_1,
#line 487 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 487 "declarative_tree.m"
{
#line 11126 "mdb.declarative_tree.c"
  {
#line 11128 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__HeadVar__2_1 == mdb__declarative_tree__HeadVar__2_2);

#line 11131 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 11133 "mdb.declarative_tree.c"
  }
#line 487 "declarative_tree.m"
}

#line 780 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_23,
#line 780 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 780 "declarative_tree.m"
{
#line 780 "declarative_tree.m"
  {
#line 780 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 780 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_21 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 780 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_22 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 780 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_21 == mdb__declarative_tree__CastY_22);
#line 780 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 11164 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 780 "declarative_tree.m"
    else
#line 780 "declarative_tree.m"
      {
#line 780 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 780 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 780 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 780 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 4)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 5)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16;

#line 780 "declarative_tree.m"
        {
#line 780 "declarative_tree.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_16_16, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_10_10);
        }
#line 11202 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == (MR_Integer) 0);
#line 780 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 780 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_16_16;
#line 780 "declarative_tree.m"
        else
#line 780 "declarative_tree.m"
          {
#line 780 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_17_17;

#line 780 "declarative_tree.m"
            {
#line 780 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_17_17, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_11_11);
            }
#line 11222 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_17_17 == (MR_Integer) 0);
#line 780 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 780 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_17_17;
#line 780 "declarative_tree.m"
            else
#line 780 "declarative_tree.m"
              {
#line 780 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_18_18;

#line 780 "declarative_tree.m"
                {
#line 780 "declarative_tree.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[4], &mdb__declarative_tree__V_18_18, ((MR_Box) (mdb__declarative_tree__V_6_6)), ((MR_Box) (mdb__declarative_tree__V_12_12)));
                }
#line 11242 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_18_18 == (MR_Integer) 0);
#line 780 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 780 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_18_18;
#line 780 "declarative_tree.m"
                else
#line 780 "declarative_tree.m"
                  {
#line 780 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_19_19;

#line 780 "declarative_tree.m"
                    {
#line 780 "declarative_tree.m"
                      mdbcomp__program_representation____Compare____atomic_goal_rep_0_0(&mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_13_13);
                    }
#line 11262 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_19_19 == (MR_Integer) 0);
#line 780 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 780 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_19_19;
#line 780 "declarative_tree.m"
                    else
#line 780 "declarative_tree.m"
                      {
#line 780 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_20_20;

#line 780 "declarative_tree.m"
                        {
#line 780 "declarative_tree.m"
                          mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdb__declarative_tree__V_20_20, mdb__declarative_tree__V_8_8, mdb__declarative_tree__V_14_14);
                        }
#line 11282 "mdb.declarative_tree.c"
                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_20_20 == (MR_Integer) 0);
#line 780 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 780 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
                          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_20_20;
#line 780 "declarative_tree.m"
                        else
#line 780 "declarative_tree.m"
                          {
#line 780 "declarative_tree.m"
                            mercury__maybe____Compare____maybe_1_0(mdb__declarative_tree__TypeInfo_for_R_23, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_15_15);
                          }
#line 780 "declarative_tree.m"
                      }
#line 780 "declarative_tree.m"
                  }
#line 780 "declarative_tree.m"
              }
#line 780 "declarative_tree.m"
          }
#line 780 "declarative_tree.m"
      }
#line 780 "declarative_tree.m"
  }
#line 780 "declarative_tree.m"
}

#line 780 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_17,
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 780 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 780 "declarative_tree.m"
{
#line 780 "declarative_tree.m"
  {
#line 780 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 780 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 780 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 780 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_15 == mdb__declarative_tree__CastY_16);
#line 780 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 780 "declarative_tree.m"
    else
#line 780 "declarative_tree.m"
      {
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_18_18;
#line 780 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 780 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)));
#line 780 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 780 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 780 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));

#line 11369 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_9_9) == 0);
#line 780 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
          {
#line 11375 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_10_10);
#line 780 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
              {
#line 11381 "mdb.declarative_tree.c"
                mdb__declarative_tree__TypeInfo_18_18 = (MR_Word) &mdb__declarative_tree_scalar_common_1[4];
#line 11383 "mdb.declarative_tree.c"
                {
#line 11385 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_18_18, ((MR_Box) (mdb__declarative_tree__V_5_5)), ((MR_Box) (mdb__declarative_tree__V_11_11)));
                }
#line 780 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
                  {
#line 11392 "mdb.declarative_tree.c"
                    {
#line 11394 "mdb.declarative_tree.c"
                      mdb__declarative_tree__succeeded = mdbcomp__program_representation____Unify____atomic_goal_rep_0_0(mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_12_12);
                    }
#line 780 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 780 "declarative_tree.m"
                      {
#line 11401 "mdb.declarative_tree.c"
                        {
#line 11403 "mdb.declarative_tree.c"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_13_13);
                        }
#line 780 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 11408 "mdb.declarative_tree.c"
                          {
#line 11410 "mdb.declarative_tree.c"
                            mdb__declarative_tree__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_tree__TypeInfo_for_R_17, mdb__declarative_tree__V_8_8, mdb__declarative_tree__V_14_14);
                          }
#line 780 "declarative_tree.m"
                      }
#line 780 "declarative_tree.m"
                  }
#line 780 "declarative_tree.m"
              }
#line 780 "declarative_tree.m"
          }
#line 780 "declarative_tree.m"
      }
#line 780 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 780 "declarative_tree.m"
  }
#line 780 "declarative_tree.m"
}

#line 1892 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
#line 1892 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1892 "declarative_tree.m"
{
#line 1892 "declarative_tree.m"
  {
#line 1892 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1892 "declarative_tree.m"
    MR_builtin_longjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0, 1);
#line 1892 "declarative_tree.m"
  }
#line 1892 "declarative_tree.m"
}

#line 1893 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
#line 1893 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1893 "declarative_tree.m"
{
#line 1893 "declarative_tree.m"
  {
#line 1893 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1893 "declarative_tree.m"
    (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7 = ((MR_Word) (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7);
#line 1893 "declarative_tree.m"
    {
#line 1893 "declarative_tree.m"
      mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(mdb__declarative_tree__env_ptr);
    }
#line 1893 "declarative_tree.m"
  }
#line 1893 "declarative_tree.m"
}

#line 1892 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
#line 1892 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1892 "declarative_tree.m"
{
#line 1892 "declarative_tree.m"
  {
#line 1892 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1892 "declarative_tree.m"
    {
#line 1895 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 2)));
#line 1895 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 0)));
#line 1895 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 1)));
#line 1895 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_10_10;

#line 1895 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1895 "declarative_tree.m"
      if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
#line 1895 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_11_11, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
#line 1894 "declarative_tree.m"
      if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
#line 1894 "declarative_tree.m"
        {
#line 1894 "declarative_tree.m"
          mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(mdb__declarative_tree__env_ptr);
        }
#line 1892 "declarative_tree.m"
    }
#line 1892 "declarative_tree.m"
  }
#line 1892 "declarative_tree.m"
}

#line 1892 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
#line 1892 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1892 "declarative_tree.m"
{
#line 1892 "declarative_tree.m"
  {
#line 1892 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1892 "declarative_tree.m"
    if (MR_builtin_setjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0) == 0)
#line 1892 "declarative_tree.m"
      {
#line 1892 "declarative_tree.m"
        {
#line 1893 "declarative_tree.m"
          {
#line 1893 "declarative_tree.m"
            mercury__list__member_2_p_1((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, &(mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6, mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3, mdb__declarative_tree__env_ptr);
          }
#line 1892 "declarative_tree.m"
        }
#line 1892 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_FALSE;
#line 1892 "declarative_tree.m"
      }
#line 1892 "declarative_tree.m"
    else
#line 1892 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_TRUE;
#line 1892 "declarative_tree.m"
  }
#line 1892 "declarative_tree.m"
}

#line 1884 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
#line 1884 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21,
#line 1884 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 1884 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_4)
#line 1884 "declarative_tree.m"
{
#line 1884 "declarative_tree.m"
  {
#line 1884 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s mdb__declarative_tree__env;

#line 1887 "declarative_tree.m"
    {
#line 1887 "declarative_tree.m"
      MR_Word mdb__declarative_tree__Call_5;
#line 1889 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_12_12;
#line 1889 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_13_13;
#line 1889 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_14_14;
#line 1889 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_15_15;
#line 1889 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_16_16;
#line 1889 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_17_17;
#line 1889 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_18_18;
#line 1889 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_19_19;
#line 1889 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_20_20;

#line 1888 "declarative_tree.m"
      {
#line 1888 "declarative_tree.m"
        mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21, mdb__declarative_tree__Store_3, mdb__declarative_tree__CallId_4, &mdb__declarative_tree__Call_5);
      }
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 0));
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 1));
#line 1889 "declarative_tree.m"
      (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 2)));
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 3)));
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 4)));
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 5)));
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 6)));
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 7)));
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 8)));
#line 1889 "declarative_tree.m"
      mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 9)));
#line 1892 "declarative_tree.m"
      {
#line 1892 "declarative_tree.m"
        mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(&mdb__declarative_tree__env);
      }
#line 1892 "declarative_tree.m"
      (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
#line 1887 "declarative_tree.m"
      return (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
#line 1887 "declarative_tree.m"
    }
#line 1884 "declarative_tree.m"
  }
#line 1884 "declarative_tree.m"
}

#line 1836 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
#line 1836 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32,
#line 1836 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1836 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 1836 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Node_6)
#line 1836 "declarative_tree.m"
{
#line 1840 "declarative_tree.m"
  {
#line 1840 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1840 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_7;
#line 98 "mdb.declarative_execution.int"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 98 "mdb.declarative_execution.int"
    MR_Box mdb__declarative_tree__conv1_Node0_7;

#line 98 "mdb.declarative_execution.int"
    {
#line 98 "mdb.declarative_execution.int"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_7);
    }
#line 98 "mdb.declarative_execution.int"
    if (mdb__declarative_tree__succeeded)
#line 98 "mdb.declarative_execution.int"
      {
#line 98 "mdb.declarative_execution.int"
        mdb__declarative_tree__Node0_7 = ((MR_Word) mdb__declarative_tree__conv1_Node0_7);
#line 98 "mdb.declarative_execution.int"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 98 "mdb.declarative_execution.int"
      }
#line 1841 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1843 "declarative_tree.m"
#line 1843 "declarative_tree.m"
      switch (MR_tag((MR_Word) mdb__declarative_tree__Node0_7)) {
#line 1843 "declarative_tree.m"
        default:
#line 1843 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1843 "declarative_tree.m"
          break;
#line 1843 "declarative_tree.m"
        case (MR_Integer) 1:
#line 1842 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 1843 "declarative_tree.m"
          break;
#line 1843 "declarative_tree.m"
        case (MR_Integer) 3:
#line 1843 "declarative_tree.m"
#line 1843 "declarative_tree.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_7, (MR_Integer) 0)))) {
#line 1843 "declarative_tree.m"
            default:
#line 1843 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1843 "declarative_tree.m"
              break;
#line 1843 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1843 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1843 "declarative_tree.m"
              break;
#line 1843 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1844 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1843 "declarative_tree.m"
              break;
#line 1843 "declarative_tree.m"
          }
#line 1843 "declarative_tree.m"
          break;
#line 1843 "declarative_tree.m"
      }
#line 1840 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1847 "declarative_tree.m"
      *mdb__declarative_tree__Node_6 = mdb__declarative_tree__Node0_7;
#line 1840 "declarative_tree.m"
    else
#line 1849 "declarative_tree.m"
      {
#line 1849 "declarative_tree.m"
        {
#line 1849 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[26])));
#line 1849 "declarative_tree.m"
          return;
        }
#line 1849 "declarative_tree.m"
      }
#line 1840 "declarative_tree.m"
  }
#line 1836 "declarative_tree.m"
}

#line 1806 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
#line 1806 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1806 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_2,
#line 1806 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Pos_3,
#line 1806 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ArgPos_4)
#line 1806 "declarative_tree.m"
{
#line 1809 "declarative_tree.m"
  while (MR_TRUE)
#line 1809 "declarative_tree.m"
    {
#line 1809 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1809 "declarative_tree.m"
      {
#line 1809 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1809 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1809 "declarative_tree.m"
          {
#line 1810 "declarative_tree.m"
            {
#line 1810 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[25])));
#line 1810 "declarative_tree.m"
              return;
            }
#line 1809 "declarative_tree.m"
          }
#line 1809 "declarative_tree.m"
        else
#line 1811 "declarative_tree.m"
          {
#line 1811 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__HeadVar_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1811 "declarative_tree.m"
            MR_Word mdb__declarative_tree__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));

#line 1812 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__HeadVar_11 == mdb__declarative_tree__Var_2);
#line 1812 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1813 "declarative_tree.m"
              {
#line 1813 "declarative_tree.m"
                MR_Word base;
#line 1813 "declarative_tree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1813 "declarative_tree.m"
                *mdb__declarative_tree__ArgPos_4 = base;
#line 1813 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__Pos_3));
#line 1813 "declarative_tree.m"
              }
#line 1812 "declarative_tree.m"
            else
#line 1815 "declarative_tree.m"
              {
#line 1815 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_16_16 = (mdb__declarative_tree__Pos_3 - (MR_Integer) 1);

#line 1815 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1815 "declarative_tree.m"
                {
#line 1815 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__HeadVars_12;
#line 1815 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__Pos__tmp_copy_3 = mdb__declarative_tree__V_16_16;

#line 1815 "declarative_tree.m"
                  mdb__declarative_tree__Pos_3 = mdb__declarative_tree__Pos__tmp_copy_3;
#line 1815 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1815 "declarative_tree.m"
                }
#line 1815 "declarative_tree.m"
                continue;
#line 1815 "declarative_tree.m"
              }
#line 1811 "declarative_tree.m"
          }
#line 1809 "declarative_tree.m"
      }
#line 1809 "declarative_tree.m"
      break;
#line 1809 "declarative_tree.m"
    }
#line 1806 "declarative_tree.m"
}

#line 1801 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
#line 1801 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_4,
#line 1801 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_5)
#line 1801 "declarative_tree.m"
{
#line 1803 "declarative_tree.m"
  {
#line 1803 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1803 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ArgPos_6;
#line 1803 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_7_7;

#line 1804 "declarative_tree.m"
    {
#line 1804 "declarative_tree.m"
      mdb__declarative_tree__V_7_7 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__HeadVars_4);
    }
#line 1804 "declarative_tree.m"
    {
#line 1804 "declarative_tree.m"
      mdb__declarative_tree__find_arg_pos_from_back_4_p_0(mdb__declarative_tree__HeadVars_4, mdb__declarative_tree__Var_5, mdb__declarative_tree__V_7_7, &mdb__declarative_tree__ArgPos_6);
    }
#line 1803 "declarative_tree.m"
    return mdb__declarative_tree__ArgPos_6;
#line 1803 "declarative_tree.m"
  }
#line 1801 "declarative_tree.m"
}

#line 1779 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
#line 1779 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__TracingOn_1)
#line 1779 "declarative_tree.m"
{
#line 1781 "declarative_tree.m"
  {
#line 1781 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1784 "declarative_tree.m"
{
#define MR_PROC_LABEL mdb__declarative_tree__is_traced_grade_1_p_0

	MR_Word TracingOn;

		{
#line 1784 "declarative_tree.m"

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif

#line 11904 "mdb.declarative_tree.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_tree__TracingOn_1  = TracingOn;
#line 1784 "declarative_tree.m"
}
#line 1781 "declarative_tree.m"
  }
#line 1779 "declarative_tree.m"
}

#line 1768 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
#line 1768 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1768 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ParentPath_2,
#line 1768 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__N_3,
#line 1768 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 1768 "declarative_tree.m"
{
#line 1771 "declarative_tree.m"
  {
#line 1771 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1771 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1771 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1771 "declarative_tree.m"
    else
#line 1773 "declarative_tree.m"
      {
#line 1773 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1773 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1773 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Path_11;
#line 1773 "declarative_tree.m"
        MR_Word mdb__declarative_tree__GoalAndPaths_12;
#line 1773 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1773 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;
#line 1773 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15;

#line 1774 "declarative_tree.m"
        {
#line 1774 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1774 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_14_14, 0) = ((MR_Box) (mdb__declarative_tree__N_3));
#line 1774 "declarative_tree.m"
        }
#line 1774 "declarative_tree.m"
        {
#line 1774 "declarative_tree.m"
          mdb__declarative_tree__Path_11 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__ParentPath_2, mdb__declarative_tree__V_14_14);
        }
#line 1773 "declarative_tree.m"
        {
#line 1773 "declarative_tree.m"
          mdb__declarative_tree__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1773 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_13_13, 0) = ((MR_Box) (mdb__declarative_tree__Goal_7));
#line 1773 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_13_13, 1) = ((MR_Box) (mdb__declarative_tree__Path_11));
#line 1773 "declarative_tree.m"
        }
#line 1775 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = (mdb__declarative_tree__N_3 + (MR_Integer) 1);
#line 1775 "declarative_tree.m"
        {
#line 1775 "declarative_tree.m"
          mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(mdb__declarative_tree__Goals_8, mdb__declarative_tree__ParentPath_2, mdb__declarative_tree__V_15_15, &mdb__declarative_tree__GoalAndPaths_12);
        }
#line 1773 "declarative_tree.m"
        {
#line 1773 "declarative_tree.m"
          MR_Word base;
#line 1773 "declarative_tree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__4_4 = base;
#line 1773 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_13_13));
#line 1773 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__GoalAndPaths_12));
#line 1773 "declarative_tree.m"
        }
#line 1773 "declarative_tree.m"
      }
#line 1771 "declarative_tree.m"
  }
#line 1768 "declarative_tree.m"
}

#line 1726 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
#line 1726 "declarative_tree.m"
  MR_String mdb__declarative_tree__Module_5,
#line 1726 "declarative_tree.m"
  MR_String mdb__declarative_tree__Name_6,
#line 1726 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_7,
#line 1726 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__NewVar_8)
#line 1726 "declarative_tree.m"
{
#line 1729 "declarative_tree.m"
  {
#line 1729 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Module_5, (MR_String) "builtin") == 0);
#line 1729 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeCtorInfo_11_11;
#line 1729 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_9_9;
#line 1729 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 1729 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1736 "declarative_tree.m"
    MR_Box mdb__declarative_tree__conv0_NewVar_8;

#line 1729 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1729 "declarative_tree.m"
      {
#line 1734 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Name_6, (MR_String) "cc_multi_equal") == 0);
#line 1729 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1729 "declarative_tree.m"
          {
#line 1735 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = (MR_Integer) 3;
#line 12048 "mdb.declarative_tree.c"
            mdb__declarative_tree__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1735 "declarative_tree.m"
            {
#line 1735 "declarative_tree.m"
              mercury__list__length_2_p_0(mdb__declarative_tree__TypeCtorInfo_11_11, mdb__declarative_tree__Args_7, &mdb__declarative_tree__V_12_12);
            }
#line 1735 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_9_9 == mdb__declarative_tree__V_12_12);
#line 1729 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1729 "declarative_tree.m"
              {
#line 1736 "declarative_tree.m"
                mdb__declarative_tree__V_10_10 = (MR_Integer) 2;
#line 1736 "declarative_tree.m"
                {
#line 1736 "declarative_tree.m"
                  mdb__declarative_tree__conv0_NewVar_8 = mercury__list__det_index1_2_f_0(mdb__declarative_tree__TypeCtorInfo_11_11, mdb__declarative_tree__Args_7, mdb__declarative_tree__V_10_10);
                }
#line 1736 "declarative_tree.m"
                *mdb__declarative_tree__NewVar_8 = ((MR_Integer) mdb__declarative_tree__conv0_NewVar_8);
#line 1736 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1729 "declarative_tree.m"
              }
#line 1729 "declarative_tree.m"
          }
#line 1729 "declarative_tree.m"
      }
#line 1729 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1729 "declarative_tree.m"
  }
#line 1726 "declarative_tree.m"
}

#line 1541 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
#line 1541 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_5,
#line 1541 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_6,
#line 1541 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_7,
#line 1541 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Var_8)
#line 1541 "declarative_tree.m"
{
#line 1547 "declarative_tree.m"
  {
#line 1547 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1547 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__FoundVar_9;
#line 1547 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1547 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_10_10;
#line 1547 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 1547 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1547 "declarative_tree.m"
    MR_Box mdb__declarative_tree__conv0_FoundVar_9;

#line 1547 "declarative_tree.m"
    {
#line 1547 "declarative_tree.m"
      mdb__declarative_tree__V_10_10 = mercury__list__reverse_1_f_0(mdb__declarative_tree__TypeCtorInfo_17_17, mdb__declarative_tree__Args_5);
    }
#line 1547 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = (mdb__declarative_tree__TotalArgs_7 - mdb__declarative_tree__ArgNum_6);
#line 1547 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = (mdb__declarative_tree__V_12_12 + (MR_Integer) 1);
#line 1547 "declarative_tree.m"
    {
#line 1547 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list__index1_3_p_0(mdb__declarative_tree__TypeCtorInfo_17_17, mdb__declarative_tree__V_10_10, mdb__declarative_tree__V_11_11, &mdb__declarative_tree__conv0_FoundVar_9);
    }
#line 1547 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1547 "declarative_tree.m"
      {
#line 1547 "declarative_tree.m"
        mdb__declarative_tree__FoundVar_9 = ((MR_Integer) mdb__declarative_tree__conv0_FoundVar_9);
#line 1547 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1547 "declarative_tree.m"
      }
#line 1547 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1548 "declarative_tree.m"
      *mdb__declarative_tree__Var_8 = mdb__declarative_tree__FoundVar_9;
#line 1547 "declarative_tree.m"
    else
#line 1550 "declarative_tree.m"
      {
#line 1550 "declarative_tree.m"
        {
#line 1550 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[24])));
#line 1550 "declarative_tree.m"
          return;
        }
#line 1550 "declarative_tree.m"
      }
#line 1547 "declarative_tree.m"
  }
#line 1541 "declarative_tree.m"
}

#line 1529 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
#line 1529 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalId_3,
#line 1529 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_4)
#line 1529 "declarative_tree.m"
{
#line 1532 "declarative_tree.m"
  {
#line 1532 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1532 "declarative_tree.m"
    MR_String mdb__declarative_tree__GoalModule_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 0)));
#line 1532 "declarative_tree.m"
    MR_String mdb__declarative_tree__GoalName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 1)));
#line 1532 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__GoalArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 2)));
#line 1532 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ProcLabel_8;
#line 1532 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EventModule_9;
#line 1532 "declarative_tree.m"
    MR_String mdb__declarative_tree__EventName_10;
#line 1532 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__EventArity_13;
#line 1532 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 0)));
#line 1532 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15;
#line 1532 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_19_19;
#line 1534 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 1)));
#line 1535 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 1535 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 1536 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_17_17;

#line 1534 "declarative_tree.m"
    {
#line 1534 "declarative_tree.m"
      mdb__declarative_tree__ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__V_14_14);
    }
#line 1535 "declarative_tree.m"
    {
#line 1535 "declarative_tree.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_tree__ProcLabel_8, &mdb__declarative_tree__EventModule_9, &mdb__declarative_tree__EventName_10, &mdb__declarative_tree__V_11_11, &mdb__declarative_tree__V_12_12);
    }
#line 1536 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 0)));
#line 1536 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 1)));
#line 1536 "declarative_tree.m"
    {
#line 1536 "declarative_tree.m"
      mdb__declarative_tree__EventArity_13 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_15_15);
    }
#line 1537 "declarative_tree.m"
    {
#line 1537 "declarative_tree.m"
      mdb__declarative_tree__V_19_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_tree__EventModule_9);
    }
#line 1537 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__GoalModule_5, mdb__declarative_tree__V_19_19) == 0);
#line 1532 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1532 "declarative_tree.m"
      {
#line 1538 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__EventName_10, mdb__declarative_tree__GoalName_6) == 0);
#line 1532 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1539 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__EventArity_13 == mdb__declarative_tree__GoalArity_7);
#line 1532 "declarative_tree.m"
      }
#line 1532 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1532 "declarative_tree.m"
  }
#line 1529 "declarative_tree.m"
}

#line 1385 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145,
#line 1385 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_17,
#line 1385 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_18,
#line 1385 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_19,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_20,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoal_21,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalArgs_22,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_23,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_24,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_25,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_26,
#line 1385 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_27,
#line 1385 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_28,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_29,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_30,
#line 1385 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_31)
#line 1385 "declarative_tree.m"
{
#line 1394 "declarative_tree.m"
  {
#line 1394 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_25)) == (MR_mktag((MR_Integer) 1)));
#line 1394 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_32;
#line 1394 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ContourHeadNode_34;
#line 1394 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EndPath_35;
#line 1395 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_89_89;
#line 1395 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_90_90;
#line 1395 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_33_33;

#line 1395 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1395 "declarative_tree.m"
      {
#line 1395 "declarative_tree.m"
        mdb__declarative_tree__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 0)));
#line 1395 "declarative_tree.m"
        mdb__declarative_tree__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 1)));
#line 1395 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1395 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1395 "declarative_tree.m"
          {
#line 1395 "declarative_tree.m"
            mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_89_89, (MR_Integer) 0));
#line 1395 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_89_89, (MR_Integer) 1)));
#line 1396 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeEnd_26)) == (MR_mktag((MR_Integer) 1)));
#line 1396 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1396 "declarative_tree.m"
              mdb__declarative_tree__EndPath_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeEnd_26, (MR_Integer) 0)));
#line 1395 "declarative_tree.m"
          }
#line 1395 "declarative_tree.m"
      }
#line 1394 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1398 "declarative_tree.m"
      {
#line 1398 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_46;
#line 1400 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_147_147;
#line 1400 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeReturnLabel_42;
#line 1400 "declarative_tree.m"
        MR_String mdb__declarative_tree__CallPathStr_47;
#line 1400 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallPath_48;
#line 1400 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__PolyConst2_146;
#line 1399 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_36_36;
#line 1399 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_37_37;
#line 1399 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_38_38;
#line 1399 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_39_39;
#line 1399 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_40_40;
#line 1399 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_41_41;
#line 1399 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43;
#line 1399 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_44_44;
#line 1399 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_45_45;

#line 1399 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_34)) == (MR_mktag((MR_Integer) 0)));
#line 1399 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1399 "declarative_tree.m"
          {
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 0));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 1));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 2)));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 3)));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 4)));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 5)));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__MaybeReturnLabel_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 6)));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 7)));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 8)));
#line 1399 "declarative_tree.m"
            mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 9)));
#line 12391 "mdb.declarative_tree.c"
            mdb__declarative_tree__PolyConst2_146 = (MR_Integer) 2;
#line 1401 "declarative_tree.m"
            {
#line 1401 "declarative_tree.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__PolyConst2_146, &mdb__declarative_tree__TypeInfo_147_147);
            }
#line 1401 "declarative_tree.m"
            {
#line 1401 "declarative_tree.m"
              mdb__declarative_tree__Atom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_147_147, mdb__declarative_tree__ContourHeadNode_34);
            }
#line 1402 "declarative_tree.m"
            {
#line 1402 "declarative_tree.m"
              mdb__declarative_tree__CallPathStr_47 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__MaybeReturnLabel_42);
            }
#line 1403 "declarative_tree.m"
            {
#line 1403 "declarative_tree.m"
              mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_47, &mdb__declarative_tree__CallPath_48);
            }
#line 1404 "declarative_tree.m"
            {
#line 1404 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CallPath_48, mdb__declarative_tree__EndPath_35);
            }
#line 1399 "declarative_tree.m"
          }
#line 1398 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1406 "declarative_tree.m"
          {
#line 1407 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoalId_49;
#line 1408 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_91_91;

#line 1408 "declarative_tree.m"
            {
#line 1408 "declarative_tree.m"
              mdb__declarative_tree__V_91_91 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(mdb__declarative_tree__AtomicGoal_21);
            }
#line 1408 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_91_91)) == (MR_mktag((MR_Integer) 1)));
#line 1408 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1408 "declarative_tree.m"
              {
#line 1408 "declarative_tree.m"
                mdb__declarative_tree__AtomicGoalId_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_91_91, (MR_Integer) 0)));
#line 1410 "declarative_tree.m"
                {
#line 1410 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(mdb__declarative_tree__AtomicGoalId_49, mdb__declarative_tree__Atom_46);
                }
#line 1408 "declarative_tree.m"
              }
#line 1408 "declarative_tree.m"
            else
#line 1412 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 1);
#line 1406 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1415 "declarative_tree.m"
              {
#line 1418 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_92_92;
#line 1418 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_93_93;

#line 1418 "declarative_tree.m"
                {
#line 1418 "declarative_tree.m"
                  mdb__declarative_tree__V_93_93 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__AtomicGoalArgs_22);
                }
#line 1418 "declarative_tree.m"
                mdb__declarative_tree__V_92_92 = (mdb__declarative_tree__TotalArgs_28 - mdb__declarative_tree__V_93_93);
#line 1418 "declarative_tree.m"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__ArgNum_27 > mdb__declarative_tree__V_92_92);
#line 1415 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1421 "declarative_tree.m"
                  {
#line 1421 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_50;
#line 1421 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_94_94;

#line 1420 "declarative_tree.m"
                    {
#line 1420 "declarative_tree.m"
                      mdb__declarative_tree__find_variable_in_args_4_p_0(mdb__declarative_tree__AtomicGoalArgs_22, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, &mdb__declarative_tree__Var_50);
                    }
#line 1423 "declarative_tree.m"
                    {
#line 1423 "declarative_tree.m"
                      mdb__declarative_tree__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1423 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 1) = ((MR_Box) (mdb__declarative_tree__Var_50));
#line 1423 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1423 "declarative_tree.m"
                    }
#line 1422 "declarative_tree.m"
                    {
#line 1422 "declarative_tree.m"
                      mdb__declarative_tree__MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_32, 0) = ((MR_Box) (mdb__declarative_tree__V_94_94));
#line 1422 "declarative_tree.m"
                    }
#line 1421 "declarative_tree.m"
                  }
#line 1415 "declarative_tree.m"
                else
#line 1432 "declarative_tree.m"
#line 1432 "declarative_tree.m"
                  switch (MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_21)) {
#line 1432 "declarative_tree.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1432 "declarative_tree.m"
                    case (MR_Integer) 0:
#line 1432 "declarative_tree.m"
                    case (MR_Integer) 1:
#line 1432 "declarative_tree.m"
                    case (MR_Integer) 2:
#line 1445 "declarative_tree.m"
                      {
#line 1446 "declarative_tree.m"
                        {
#line 1446 "declarative_tree.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                        }
#line 1445 "declarative_tree.m"
                      }
#line 1432 "declarative_tree.m"
                      break;
#line 1432 "declarative_tree.m"
                    case (MR_Integer) 3:
#line 1432 "declarative_tree.m"
#line 1432 "declarative_tree.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 0)))) {
#line 1432 "declarative_tree.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 0:
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 1:
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 2:
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 3:
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 4:
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 6:
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 7:
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 8:
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 9:
#line 1445 "declarative_tree.m"
                          {
#line 1446 "declarative_tree.m"
                            {
#line 1446 "declarative_tree.m"
                              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                            }
#line 1445 "declarative_tree.m"
                          }
#line 1432 "declarative_tree.m"
                          break;
#line 1432 "declarative_tree.m"
                        case (MR_Integer) 5:
#line 1428 "declarative_tree.m"
                          {
#line 1428 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__V_99_99;
#line 1428 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 1)));
#line 1428 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 2)));

#line 1431 "declarative_tree.m"
                            {
#line 1431 "declarative_tree.m"
                              mdb__declarative_tree__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "declarative_tree.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1431 "declarative_tree.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 1) = ((MR_Box) (mdb__declarative_tree__Var_123));
#line 1431 "declarative_tree.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1431 "declarative_tree.m"
                            }
#line 1430 "declarative_tree.m"
                            {
#line 1430 "declarative_tree.m"
                              mdb__declarative_tree__MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "declarative_tree.m"
                              MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_32, 0) = ((MR_Box) (mdb__declarative_tree__V_99_99));
#line 1430 "declarative_tree.m"
                            }
#line 1428 "declarative_tree.m"
                          }
#line 1432 "declarative_tree.m"
                          break;
#line 1432 "declarative_tree.m"
                      }
#line 1432 "declarative_tree.m"
                      break;
#line 1432 "declarative_tree.m"
                  }
#line 1415 "declarative_tree.m"
              }
#line 1406 "declarative_tree.m"
            else
#line 1454 "declarative_tree.m"
#line 1454 "declarative_tree.m"
              switch (mdb__declarative_tree__AllTraced_30) {
#line 1454 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "declarative_tree.m"
                case (MR_Integer) 0:
#line 1455 "declarative_tree.m"
                  {
#line 1455 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Primitive_83;
#line 1455 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Primitives1_84;

#line 1456 "declarative_tree.m"
                    {
#line 1456 "declarative_tree.m"
                      mdb__declarative_tree__Primitive_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1456 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1456 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1456 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1456 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1456 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1456 "declarative_tree.m"
                    }
#line 1458 "declarative_tree.m"
                    {
#line 1458 "declarative_tree.m"
                      mdb__declarative_tree__Primitives1_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_84, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_83));
#line 1458 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_84, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1458 "declarative_tree.m"
                    }
#line 1459 "declarative_tree.m"
                    {
#line 1459 "declarative_tree.m"
                      mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, mdb__declarative_tree__Contour_25, mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_84);
                    }
#line 1455 "declarative_tree.m"
                  }
#line 1454 "declarative_tree.m"
                  break;
#line 1454 "declarative_tree.m"
                case (MR_Integer) 1:
#line 1452 "declarative_tree.m"
                  {
#line 1453 "declarative_tree.m"
                    {
#line 1453 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[19])));
                    }
#line 1452 "declarative_tree.m"
                  }
#line 1454 "declarative_tree.m"
                  break;
#line 1454 "declarative_tree.m"
              }
#line 1406 "declarative_tree.m"
          }
#line 1398 "declarative_tree.m"
        else
#line 1465 "declarative_tree.m"
          {
#line 1465 "declarative_tree.m"
            {
#line 1465 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
            }
#line 1465 "declarative_tree.m"
          }
#line 1398 "declarative_tree.m"
      }
#line 1394 "declarative_tree.m"
    else
#line 1511 "declarative_tree.m"
    if ((mdb__declarative_tree__Contour_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1513 "declarative_tree.m"
      {
#line 1514 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__MaybeEnd_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1514 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1515 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0);
#line 1513 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1518 "declarative_tree.m"
          {
#line 1518 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Primitive_134;
#line 1518 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Primitives1_135;

#line 1517 "declarative_tree.m"
            {
#line 1517 "declarative_tree.m"
              mdb__declarative_tree__Primitive_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1517 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1517 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1517 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1517 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1517 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1517 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1517 "declarative_tree.m"
            }
#line 1519 "declarative_tree.m"
            {
#line 1519 "declarative_tree.m"
              mdb__declarative_tree__Primitives1_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_135, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_134));
#line 1519 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_135, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1519 "declarative_tree.m"
            }
#line 1520 "declarative_tree.m"
            {
#line 1520 "declarative_tree.m"
              mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_135);
            }
#line 1518 "declarative_tree.m"
          }
#line 1513 "declarative_tree.m"
        else
#line 1524 "declarative_tree.m"
          {
#line 1524 "declarative_tree.m"
            {
#line 1524 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[21])));
            }
#line 1524 "declarative_tree.m"
          }
#line 1513 "declarative_tree.m"
      }
#line 1511 "declarative_tree.m"
    else
#line 1469 "declarative_tree.m"
      {
#line 1469 "declarative_tree.m"
        MR_Box mdb__declarative_tree__ContourHeadId_85;
#line 1469 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourTail_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 1)));
#line 1469 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallInfo_87;
#line 1469 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NewContour_88;
#line 1469 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 0)));
#line 1469 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourHeadNode_129;
#line 1469 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Primitive_132;
#line 1469 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Primitives1_133;
#line 1470 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_127;
#line 1470 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_153_153;

#line 1469 "declarative_tree.m"
        mdb__declarative_tree__ContourHeadId_85 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 0));
#line 1469 "declarative_tree.m"
        mdb__declarative_tree__ContourHeadNode_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 1)));
#line 1470 "declarative_tree.m"
        {
#line 1470 "declarative_tree.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_153_153);
        }
#line 1470 "declarative_tree.m"
        {
#line 1470 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_execution__get_trace_exit_atom_1_f_1(mdb__declarative_tree__TypeInfo_153_153, mdb__declarative_tree__ContourHeadNode_129, &mdb__declarative_tree__Atom_127);
        }
#line 1470 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1471 "declarative_tree.m"
          {
#line 1472 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoalId_125;
#line 1473 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_114_114;

#line 1473 "declarative_tree.m"
            {
#line 1473 "declarative_tree.m"
              mdb__declarative_tree__V_114_114 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(mdb__declarative_tree__AtomicGoal_21);
            }
#line 1474 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 1474 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1474 "declarative_tree.m"
              {
#line 1474 "declarative_tree.m"
                mdb__declarative_tree__AtomicGoalId_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_114_114, (MR_Integer) 0)));
#line 1476 "declarative_tree.m"
                {
#line 1476 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(mdb__declarative_tree__AtomicGoalId_125, mdb__declarative_tree__Atom_127);
                }
#line 1474 "declarative_tree.m"
              }
#line 1474 "declarative_tree.m"
            else
#line 1478 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 1);
#line 1471 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1481 "declarative_tree.m"
              {
#line 1481 "declarative_tree.m"
                {
#line 1481 "declarative_tree.m"
                  mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__CallInfo_87, 0) = mdb__declarative_tree__ContourHeadId_85;
#line 1481 "declarative_tree.m"
                }
#line 1482 "declarative_tree.m"
                mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__ContourTail_86;
#line 1481 "declarative_tree.m"
              }
#line 1471 "declarative_tree.m"
            else
#line 1488 "declarative_tree.m"
#line 1488 "declarative_tree.m"
              switch (mdb__declarative_tree__AllTraced_30) {
#line 1488 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1488 "declarative_tree.m"
                case (MR_Integer) 0:
#line 1489 "declarative_tree.m"
                  {
#line 1490 "declarative_tree.m"
                    mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1491 "declarative_tree.m"
                    mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__Contour_25;
#line 1489 "declarative_tree.m"
                  }
#line 1488 "declarative_tree.m"
                  break;
#line 1488 "declarative_tree.m"
                case (MR_Integer) 1:
#line 1485 "declarative_tree.m"
                  {
#line 1486 "declarative_tree.m"
                    {
#line 1486 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[22])));
                    }
#line 1485 "declarative_tree.m"
                  }
#line 1488 "declarative_tree.m"
                  break;
#line 1488 "declarative_tree.m"
              }
#line 1471 "declarative_tree.m"
          }
#line 1470 "declarative_tree.m"
        else
#line 1500 "declarative_tree.m"
#line 1500 "declarative_tree.m"
          switch (mdb__declarative_tree__AllTraced_30) {
#line 1500 "declarative_tree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1500 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1501 "declarative_tree.m"
              {
#line 1502 "declarative_tree.m"
                mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1503 "declarative_tree.m"
                mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__Contour_25;
#line 1501 "declarative_tree.m"
              }
#line 1500 "declarative_tree.m"
              break;
#line 1500 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1496 "declarative_tree.m"
              {
#line 1497 "declarative_tree.m"
                {
#line 1497 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[23])));
                }
#line 1496 "declarative_tree.m"
              }
#line 1500 "declarative_tree.m"
              break;
#line 1500 "declarative_tree.m"
          }
#line 1506 "declarative_tree.m"
        {
#line 1506 "declarative_tree.m"
          mdb__declarative_tree__Primitive_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1506 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1506 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1506 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1506 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1506 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 5) = ((MR_Box) (mdb__declarative_tree__CallInfo_87));
#line 1506 "declarative_tree.m"
        }
#line 1508 "declarative_tree.m"
        {
#line 1508 "declarative_tree.m"
          mdb__declarative_tree__Primitives1_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_133, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_132));
#line 1508 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_133, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1508 "declarative_tree.m"
        }
#line 1509 "declarative_tree.m"
        {
#line 1509 "declarative_tree.m"
          mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, mdb__declarative_tree__NewContour_88, mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_133);
        }
#line 1469 "declarative_tree.m"
      }
#line 1394 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_32;
#line 1394 "declarative_tree.m"
  }
#line 1385 "declarative_tree.m"
}

#line 1218 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177,
#line 1218 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_13,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Goal_14,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_15,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_16,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_17,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_18,
#line 1218 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_19,
#line 1218 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_20,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_21,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_22,
#line 1218 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_23)
#line 1218 "declarative_tree.m"
{
#line 1224 "declarative_tree.m"
  {
#line 1224 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1224 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_24;
#line 1224 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalExpr_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Goal_14, (MR_Integer) 0)));
#line 1225 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Goal_14, (MR_Integer) 1)));

#line 1232 "declarative_tree.m"
#line 1232 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) {
#line 1232 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1232 "declarative_tree.m"
      case (MR_Integer) 0:
#line 1227 "declarative_tree.m"
        {
#line 1227 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Conjs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1227 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ConjPaths_29;
#line 1227 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_137_137;

#line 1228 "declarative_tree.m"
          {
#line 1228 "declarative_tree.m"
            mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(mdb__declarative_tree__Conjs_28, mdb__declarative_tree__Path_15, (MR_Integer) 1, &mdb__declarative_tree__ConjPaths_29);
          }
#line 1229 "declarative_tree.m"
          {
#line 1229 "declarative_tree.m"
            mdb__declarative_tree__V_137_137 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0, mdb__declarative_tree__ConjPaths_29, mdb__declarative_tree__GoalPaths_16);
          }
#line 1229 "declarative_tree.m"
          {
#line 1229 "declarative_tree.m"
            mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_137_137, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
          }
#line 1227 "declarative_tree.m"
        }
#line 1232 "declarative_tree.m"
        break;
#line 1232 "declarative_tree.m"
      case (MR_Integer) 1:
#line 1256 "declarative_tree.m"
        {
#line 1256 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Disjs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1257 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourTail_45;
#line 1257 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjPath_51;
#line 1257 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__N_54;
#line 1258 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourHeadNode_44;
#line 1258 "declarative_tree.m"
          MR_Box mdb__declarative_tree__Label_47;
#line 1258 "declarative_tree.m"
          MR_String mdb__declarative_tree__DisjPathStr_50;
#line 1258 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjInitialPath_52;
#line 1258 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjLastStep_53;
#line 1258 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_128_128;
#line 1258 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_43_43;

#line 1258 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1258 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1258 "declarative_tree.m"
            {
#line 1258 "declarative_tree.m"
              mdb__declarative_tree__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1258 "declarative_tree.m"
              mdb__declarative_tree__ContourTail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1258 "declarative_tree.m"
              mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_128_128, (MR_Integer) 0));
#line 1258 "declarative_tree.m"
              mdb__declarative_tree__ContourHeadNode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_128_128, (MR_Integer) 1)));
#line 1260 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1259 "declarative_tree.m"
                {
#line 1259 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 1));

#line 1259 "declarative_tree.m"
                  mdb__declarative_tree__Label_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 2)));
#line 1259 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 1259 "declarative_tree.m"
                }
#line 1260 "declarative_tree.m"
              else
#line 1260 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1260 "declarative_tree.m"
                {
#line 1260 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_48_48 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 1));
#line 1260 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_49_49;

#line 1260 "declarative_tree.m"
                  mdb__declarative_tree__Label_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 2)));
#line 1260 "declarative_tree.m"
                  mdb__declarative_tree__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 3));
#line 1260 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 1260 "declarative_tree.m"
                }
#line 1260 "declarative_tree.m"
              else
#line 1260 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_FALSE;
#line 1258 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1258 "declarative_tree.m"
                {
#line 1262 "declarative_tree.m"
                  {
#line 1262 "declarative_tree.m"
                    mdb__declarative_tree__DisjPathStr_50 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_47);
                  }
#line 1263 "declarative_tree.m"
                  {
#line 1263 "declarative_tree.m"
                    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__DisjPathStr_50, &mdb__declarative_tree__DisjPath_51);
                  }
#line 1264 "declarative_tree.m"
                  {
#line 1264 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__DisjPath_51, &mdb__declarative_tree__DisjInitialPath_52, &mdb__declarative_tree__DisjLastStep_53);
                  }
#line 1258 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1258 "declarative_tree.m"
                    {
#line 1265 "declarative_tree.m"
                      {
#line 1265 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__DisjInitialPath_52, mdb__declarative_tree__Path_15);
                      }
#line 1258 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1258 "declarative_tree.m"
                        {
#line 1266 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__DisjLastStep_53)) == (MR_mktag((MR_Integer) 2)));
#line 1266 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1266 "declarative_tree.m"
                            mdb__declarative_tree__N_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__DisjLastStep_53, (MR_Integer) 0)));
#line 1258 "declarative_tree.m"
                        }
#line 1258 "declarative_tree.m"
                    }
#line 1258 "declarative_tree.m"
                }
#line 1258 "declarative_tree.m"
            }
#line 1257 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1268 "declarative_tree.m"
            {
#line 1268 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Disj_55;
#line 1268 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DisjAndPath_56;
#line 1268 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_129_129;
#line 1268 "declarative_tree.m"
              MR_Box mdb__declarative_tree__conv0_Disj_55;

#line 1268 "declarative_tree.m"
              {
#line 1268 "declarative_tree.m"
                mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], mdb__declarative_tree__Disjs_42, mdb__declarative_tree__N_54, &mdb__declarative_tree__conv0_Disj_55);
              }
#line 1268 "declarative_tree.m"
              mdb__declarative_tree__Disj_55 = ((MR_Word) mdb__declarative_tree__conv0_Disj_55);
#line 1269 "declarative_tree.m"
              {
#line 1269 "declarative_tree.m"
                mdb__declarative_tree__DisjAndPath_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__DisjAndPath_56, 0) = ((MR_Box) (mdb__declarative_tree__Disj_55));
#line 1269 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__DisjAndPath_56, 1) = ((MR_Box) (mdb__declarative_tree__DisjPath_51));
#line 1269 "declarative_tree.m"
              }
#line 1270 "declarative_tree.m"
              {
#line 1270 "declarative_tree.m"
                mdb__declarative_tree__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_129_129, 0) = ((MR_Box) (mdb__declarative_tree__DisjAndPath_56));
#line 1270 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_129_129, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1270 "declarative_tree.m"
              }
#line 1270 "declarative_tree.m"
              {
#line 1270 "declarative_tree.m"
                mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_129_129, mdb__declarative_tree__ContourTail_45, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
              }
#line 1268 "declarative_tree.m"
            }
#line 1257 "declarative_tree.m"
          else
#line 1274 "declarative_tree.m"
            {
#line 1274 "declarative_tree.m"
              {
#line 1274 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[14])));
              }
#line 1274 "declarative_tree.m"
            }
#line 1256 "declarative_tree.m"
        }
#line 1232 "declarative_tree.m"
        break;
#line 1232 "declarative_tree.m"
      case (MR_Integer) 2:
#line 1277 "declarative_tree.m"
        {
#line 1277 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1277 "declarative_tree.m"
          MR_Integer mdb__declarative_tree___SwitchVar_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1277 "declarative_tree.m"
          MR_Word mdb__declarative_tree___SwitchCanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1278 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArmPath_63;
#line 1278 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourTail_141;
#line 1278 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__N_143;
#line 1279 "declarative_tree.m"
          MR_String mdb__declarative_tree__ArmPathStr_62;
#line 1279 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArmInitialPath_64;
#line 1279 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArmLastStep_65;
#line 1279 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_123_123;
#line 1279 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourHeadNode_138;
#line 1279 "declarative_tree.m"
          MR_Box mdb__declarative_tree__Label_139;
#line 1279 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_60_60;
#line 1280 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_61_61;
#line 1285 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_66_66;

#line 1279 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1279 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1279 "declarative_tree.m"
            {
#line 1279 "declarative_tree.m"
              mdb__declarative_tree__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1279 "declarative_tree.m"
              mdb__declarative_tree__ContourTail_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1279 "declarative_tree.m"
              mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_123_123, (MR_Integer) 0));
#line 1279 "declarative_tree.m"
              mdb__declarative_tree__ContourHeadNode_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_123_123, (MR_Integer) 1)));
#line 1280 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1280 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1280 "declarative_tree.m"
                {
#line 1280 "declarative_tree.m"
                  mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 1));
#line 1280 "declarative_tree.m"
                  mdb__declarative_tree__Label_139 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 2)));
#line 1281 "declarative_tree.m"
                  {
#line 1281 "declarative_tree.m"
                    mdb__declarative_tree__ArmPathStr_62 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_139);
                  }
#line 1282 "declarative_tree.m"
                  {
#line 1282 "declarative_tree.m"
                    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__ArmPathStr_62, &mdb__declarative_tree__ArmPath_63);
                  }
#line 1283 "declarative_tree.m"
                  {
#line 1283 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__ArmPath_63, &mdb__declarative_tree__ArmInitialPath_64, &mdb__declarative_tree__ArmLastStep_65);
                  }
#line 1279 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1279 "declarative_tree.m"
                    {
#line 1284 "declarative_tree.m"
                      {
#line 1284 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__ArmInitialPath_64, mdb__declarative_tree__Path_15);
                      }
#line 1279 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1279 "declarative_tree.m"
                        {
#line 1285 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ArmLastStep_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1285 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1285 "declarative_tree.m"
                            {
#line 1285 "declarative_tree.m"
                              mdb__declarative_tree__N_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 1)));
#line 1285 "declarative_tree.m"
                              mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 2)));
#line 1285 "declarative_tree.m"
                            }
#line 1279 "declarative_tree.m"
                        }
#line 1279 "declarative_tree.m"
                    }
#line 1280 "declarative_tree.m"
                }
#line 1279 "declarative_tree.m"
            }
#line 1278 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1287 "declarative_tree.m"
            {
#line 1287 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Case_67;
#line 1287 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Arm_70;
#line 1287 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ArmAndPath_71;
#line 1287 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_124_124;
#line 1287 "declarative_tree.m"
              MR_Box mdb__declarative_tree__conv1_Case_67;
#line 1288 "declarative_tree.m"
              MR_Word mdb__declarative_tree___ConsId_68;
#line 1288 "declarative_tree.m"
              MR_Word mdb__declarative_tree___ConsIdArity_69;

#line 1287 "declarative_tree.m"
              {
#line 1287 "declarative_tree.m"
                mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[2], mdb__declarative_tree__Cases_59, mdb__declarative_tree__N_143, &mdb__declarative_tree__conv1_Case_67);
              }
#line 1287 "declarative_tree.m"
              mdb__declarative_tree__Case_67 = ((MR_Word) mdb__declarative_tree__conv1_Case_67);
#line 1288 "declarative_tree.m"
              mdb__declarative_tree___ConsId_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 0)));
#line 1288 "declarative_tree.m"
              mdb__declarative_tree___ConsIdArity_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 1)));
#line 1288 "declarative_tree.m"
              mdb__declarative_tree__Arm_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 2)));
#line 1289 "declarative_tree.m"
              {
#line 1289 "declarative_tree.m"
                mdb__declarative_tree__ArmAndPath_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArmAndPath_71, 0) = ((MR_Box) (mdb__declarative_tree__Arm_70));
#line 1289 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArmAndPath_71, 1) = ((MR_Box) (mdb__declarative_tree__ArmPath_63));
#line 1289 "declarative_tree.m"
              }
#line 1290 "declarative_tree.m"
              {
#line 1290 "declarative_tree.m"
                mdb__declarative_tree__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_124_124, 0) = ((MR_Box) (mdb__declarative_tree__ArmAndPath_71));
#line 1290 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_124_124, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1290 "declarative_tree.m"
              }
#line 1290 "declarative_tree.m"
              {
#line 1290 "declarative_tree.m"
                mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_124_124, mdb__declarative_tree__ContourTail_141, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
              }
#line 1287 "declarative_tree.m"
            }
#line 1278 "declarative_tree.m"
          else
#line 1294 "declarative_tree.m"
            {
#line 1294 "declarative_tree.m"
              {
#line 1294 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[17])));
              }
#line 1294 "declarative_tree.m"
            }
#line 1277 "declarative_tree.m"
        }
#line 1232 "declarative_tree.m"
        break;
#line 1232 "declarative_tree.m"
      case (MR_Integer) 3:
#line 1232 "declarative_tree.m"
#line 1232 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)))) {
#line 1232 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1232 "declarative_tree.m"
          case (MR_Integer) 0:
#line 1297 "declarative_tree.m"
            {
#line 1297 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Cond_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1297 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Then_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1297 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Else_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 3)));
#line 1298 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondPath_79;
#line 1298 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ContourTail_164;
#line 1299 "declarative_tree.m"
              MR_String mdb__declarative_tree__CondPathStr_78;
#line 1299 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondInitialPath_80;
#line 1299 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondLastStep_81;
#line 1299 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_113_113;
#line 1299 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ContourHeadNode_148;
#line 1299 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Label_149;
#line 1299 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_75_75;
#line 1300 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_76_76;
#line 1300 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_77_77;

#line 1299 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1299 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1299 "declarative_tree.m"
                {
#line 1299 "declarative_tree.m"
                  mdb__declarative_tree__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1299 "declarative_tree.m"
                  mdb__declarative_tree__ContourTail_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1299 "declarative_tree.m"
                  mdb__declarative_tree__V_75_75 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 0));
#line 1299 "declarative_tree.m"
                  mdb__declarative_tree__ContourHeadNode_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 1)));
#line 1300 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1300 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1300 "declarative_tree.m"
                    {
#line 1300 "declarative_tree.m"
                      mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 1));
#line 1300 "declarative_tree.m"
                      mdb__declarative_tree__Label_149 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 2)));
#line 1300 "declarative_tree.m"
                      mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 3)));
#line 1301 "declarative_tree.m"
                      {
#line 1301 "declarative_tree.m"
                        mdb__declarative_tree__CondPathStr_78 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_149);
                      }
#line 1302 "declarative_tree.m"
                      {
#line 1302 "declarative_tree.m"
                        mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CondPathStr_78, &mdb__declarative_tree__CondPath_79);
                      }
#line 1303 "declarative_tree.m"
                      {
#line 1303 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__CondPath_79, &mdb__declarative_tree__CondInitialPath_80, &mdb__declarative_tree__CondLastStep_81);
                      }
#line 1299 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1299 "declarative_tree.m"
                        {
#line 1304 "declarative_tree.m"
                          {
#line 1304 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CondInitialPath_80, mdb__declarative_tree__Path_15);
                          }
#line 1299 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1305 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__CondLastStep_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1299 "declarative_tree.m"
                        }
#line 1300 "declarative_tree.m"
                    }
#line 1299 "declarative_tree.m"
                }
#line 1298 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1307 "declarative_tree.m"
                {
#line 1307 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ThenPath_82;
#line 1307 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondAndPath_83;
#line 1307 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ThenAndPath_84;
#line 1307 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_115_115;
#line 1307 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_116_116;

#line 1307 "declarative_tree.m"
                  {
#line 1307 "declarative_tree.m"
                    mdb__declarative_tree__ThenPath_82 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
                  }
#line 1308 "declarative_tree.m"
                  {
#line 1308 "declarative_tree.m"
                    mdb__declarative_tree__CondAndPath_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1308 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__CondAndPath_83, 0) = ((MR_Box) (mdb__declarative_tree__Cond_72));
#line 1308 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__CondAndPath_83, 1) = ((MR_Box) (mdb__declarative_tree__CondPath_79));
#line 1308 "declarative_tree.m"
                  }
#line 1309 "declarative_tree.m"
                  {
#line 1309 "declarative_tree.m"
                    mdb__declarative_tree__ThenAndPath_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__ThenAndPath_84, 0) = ((MR_Box) (mdb__declarative_tree__Then_73));
#line 1309 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__ThenAndPath_84, 1) = ((MR_Box) (mdb__declarative_tree__ThenPath_82));
#line 1309 "declarative_tree.m"
                  }
#line 1311 "declarative_tree.m"
                  {
#line 1311 "declarative_tree.m"
                    mdb__declarative_tree__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_116_116, 0) = ((MR_Box) (mdb__declarative_tree__ThenAndPath_84));
#line 1311 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_116_116, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1311 "declarative_tree.m"
                  }
#line 1311 "declarative_tree.m"
                  {
#line 1311 "declarative_tree.m"
                    mdb__declarative_tree__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_115_115, 0) = ((MR_Box) (mdb__declarative_tree__CondAndPath_83));
#line 1311 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_115_115, 1) = ((MR_Box) (mdb__declarative_tree__V_116_116));
#line 1311 "declarative_tree.m"
                  }
#line 1310 "declarative_tree.m"
                  {
#line 1310 "declarative_tree.m"
                    mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_115_115, mdb__declarative_tree__ContourTail_164, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                  }
#line 1307 "declarative_tree.m"
                }
#line 1298 "declarative_tree.m"
              else
#line 1313 "declarative_tree.m"
                {
#line 1313 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourTail_157;
#line 1314 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__ElseCondId_87;
#line 1314 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondNode_89;
#line 1314 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_117_117;
#line 1314 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourHeadNode_150;
#line 1314 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__Label_151;
#line 1314 "declarative_tree.m"
                  MR_String mdb__declarative_tree__CondPathStr_152;
#line 1314 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondPath_153;
#line 1314 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondInitialPath_154;
#line 1314 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondLastStep_155;
#line 1314 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_85_85;
#line 1315 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_86_86;
#line 1315 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_88_88;
#line 1317 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_90_90;
#line 1317 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_91_91;

#line 1314 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1314 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1314 "declarative_tree.m"
                    {
#line 1314 "declarative_tree.m"
                      mdb__declarative_tree__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1314 "declarative_tree.m"
                      mdb__declarative_tree__ContourTail_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1314 "declarative_tree.m"
                      mdb__declarative_tree__V_85_85 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_117_117, (MR_Integer) 0));
#line 1314 "declarative_tree.m"
                      mdb__declarative_tree__ContourHeadNode_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_117_117, (MR_Integer) 1)));
#line 1315 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_150)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1315 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1315 "declarative_tree.m"
                        {
#line 1315 "declarative_tree.m"
                          mdb__declarative_tree__V_86_86 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 1));
#line 1315 "declarative_tree.m"
                          mdb__declarative_tree__ElseCondId_87 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 2));
#line 1315 "declarative_tree.m"
                          mdb__declarative_tree__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 3)));
#line 1316 "declarative_tree.m"
                          {
#line 1316 "declarative_tree.m"
                            mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__ElseCondId_87, &mdb__declarative_tree__CondNode_89);
                          }
#line 1317 "declarative_tree.m"
                          mdb__declarative_tree__V_90_90 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 1));
#line 1317 "declarative_tree.m"
                          mdb__declarative_tree__Label_151 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 2)));
#line 1317 "declarative_tree.m"
                          mdb__declarative_tree__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 3)));
#line 1318 "declarative_tree.m"
                          {
#line 1318 "declarative_tree.m"
                            mdb__declarative_tree__CondPathStr_152 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_151);
                          }
#line 1319 "declarative_tree.m"
                          {
#line 1319 "declarative_tree.m"
                            mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CondPathStr_152, &mdb__declarative_tree__CondPath_153);
                          }
#line 1320 "declarative_tree.m"
                          {
#line 1320 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__CondPath_153, &mdb__declarative_tree__CondInitialPath_154, &mdb__declarative_tree__CondLastStep_155);
                          }
#line 1314 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1314 "declarative_tree.m"
                            {
#line 1321 "declarative_tree.m"
                              {
#line 1321 "declarative_tree.m"
                                mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CondInitialPath_154, mdb__declarative_tree__Path_15);
                              }
#line 1314 "declarative_tree.m"
                              if (mdb__declarative_tree__succeeded)
#line 1322 "declarative_tree.m"
                                mdb__declarative_tree__succeeded = (mdb__declarative_tree__CondLastStep_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1314 "declarative_tree.m"
                            }
#line 1315 "declarative_tree.m"
                        }
#line 1314 "declarative_tree.m"
                    }
#line 1313 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1324 "declarative_tree.m"
                    {
#line 1324 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__ElsePath_92;
#line 1324 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__ElseAndPath_93;
#line 1324 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_119_119;

#line 1324 "declarative_tree.m"
                      {
#line 1324 "declarative_tree.m"
                        mdb__declarative_tree__ElsePath_92 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                      }
#line 1325 "declarative_tree.m"
                      {
#line 1325 "declarative_tree.m"
                        mdb__declarative_tree__ElseAndPath_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1325 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__ElseAndPath_93, 0) = ((MR_Box) (mdb__declarative_tree__Else_74));
#line 1325 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__ElseAndPath_93, 1) = ((MR_Box) (mdb__declarative_tree__ElsePath_92));
#line 1325 "declarative_tree.m"
                      }
#line 1326 "declarative_tree.m"
                      {
#line 1326 "declarative_tree.m"
                        mdb__declarative_tree__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_119_119, 0) = ((MR_Box) (mdb__declarative_tree__ElseAndPath_93));
#line 1326 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_119_119, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1326 "declarative_tree.m"
                      }
#line 1326 "declarative_tree.m"
                      {
#line 1326 "declarative_tree.m"
                        mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_119_119, mdb__declarative_tree__ContourTail_157, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                      }
#line 1324 "declarative_tree.m"
                    }
#line 1313 "declarative_tree.m"
                  else
#line 1330 "declarative_tree.m"
                    {
#line 1330 "declarative_tree.m"
                      {
#line 1330 "declarative_tree.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[15])));
                      }
#line 1330 "declarative_tree.m"
                    }
#line 1313 "declarative_tree.m"
                }
#line 1297 "declarative_tree.m"
            }
#line 1232 "declarative_tree.m"
            break;
#line 1232 "declarative_tree.m"
          case (MR_Integer) 1:
#line 1333 "declarative_tree.m"
            {
#line 1333 "declarative_tree.m"
              MR_Word mdb__declarative_tree__NegGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1334 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ContourTail_174;
#line 1335 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_105_105;
#line 1335 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ContourHeadNode_169;
#line 1335 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_95_95;
#line 1336 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_96_96;
#line 1336 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_97_97;
#line 1336 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_98_98;

#line 1335 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1335 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1335 "declarative_tree.m"
                {
#line 1335 "declarative_tree.m"
                  mdb__declarative_tree__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1335 "declarative_tree.m"
                  mdb__declarative_tree__ContourTail_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1335 "declarative_tree.m"
                  mdb__declarative_tree__V_95_95 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_105_105, (MR_Integer) 0));
#line 1335 "declarative_tree.m"
                  mdb__declarative_tree__ContourHeadNode_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_105_105, (MR_Integer) 1)));
#line 1336 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_169)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1336 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1336 "declarative_tree.m"
                    {
#line 1336 "declarative_tree.m"
                      mdb__declarative_tree__V_96_96 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 1));
#line 1336 "declarative_tree.m"
                      mdb__declarative_tree__V_97_97 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 2));
#line 1336 "declarative_tree.m"
                      mdb__declarative_tree__V_98_98 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 3)));
#line 1336 "declarative_tree.m"
                    }
#line 1335 "declarative_tree.m"
                }
#line 1334 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1339 "declarative_tree.m"
                {
#line 1339 "declarative_tree.m"
                  mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__ContourTail_174, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                }
#line 1334 "declarative_tree.m"
              else
#line 1341 "declarative_tree.m"
                {
#line 1341 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourTail_172;
#line 1342 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_106_106;
#line 1342 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourHeadNode_170;
#line 1342 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_99_99;
#line 1343 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_100_100;
#line 1343 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_101_101;
#line 1343 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_102_102;

#line 1342 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1342 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1342 "declarative_tree.m"
                    {
#line 1342 "declarative_tree.m"
                      mdb__declarative_tree__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1342 "declarative_tree.m"
                      mdb__declarative_tree__ContourTail_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1342 "declarative_tree.m"
                      mdb__declarative_tree__V_99_99 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_106_106, (MR_Integer) 0));
#line 1342 "declarative_tree.m"
                      mdb__declarative_tree__ContourHeadNode_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_106_106, (MR_Integer) 1)));
#line 1343 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1343 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1343 "declarative_tree.m"
                        {
#line 1343 "declarative_tree.m"
                          mdb__declarative_tree__V_100_100 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 1));
#line 1343 "declarative_tree.m"
                          mdb__declarative_tree__V_101_101 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 2)));
#line 1343 "declarative_tree.m"
                          mdb__declarative_tree__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 3)));
#line 1343 "declarative_tree.m"
                        }
#line 1342 "declarative_tree.m"
                    }
#line 1341 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1347 "declarative_tree.m"
                    {
#line 1347 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__NegPath_103;
#line 1347 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__NegAndPath_104;
#line 1347 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_108_108;

#line 1347 "declarative_tree.m"
                      {
#line 1347 "declarative_tree.m"
                        mdb__declarative_tree__NegPath_103 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
                      }
#line 1348 "declarative_tree.m"
                      {
#line 1348 "declarative_tree.m"
                        mdb__declarative_tree__NegAndPath_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__NegAndPath_104, 0) = ((MR_Box) (mdb__declarative_tree__NegGoal_94));
#line 1348 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__NegAndPath_104, 1) = ((MR_Box) (mdb__declarative_tree__NegPath_103));
#line 1348 "declarative_tree.m"
                      }
#line 1349 "declarative_tree.m"
                      {
#line 1349 "declarative_tree.m"
                        mdb__declarative_tree__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_108_108, 0) = ((MR_Box) (mdb__declarative_tree__NegAndPath_104));
#line 1349 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1349 "declarative_tree.m"
                      }
#line 1349 "declarative_tree.m"
                      {
#line 1349 "declarative_tree.m"
                        mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_108_108, mdb__declarative_tree__ContourTail_172, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                      }
#line 1347 "declarative_tree.m"
                    }
#line 1341 "declarative_tree.m"
                  else
#line 1352 "declarative_tree.m"
                    {
#line 1352 "declarative_tree.m"
                      {
#line 1352 "declarative_tree.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[16])));
                      }
#line 1352 "declarative_tree.m"
                    }
#line 1341 "declarative_tree.m"
                }
#line 1333 "declarative_tree.m"
            }
#line 1232 "declarative_tree.m"
            break;
#line 1232 "declarative_tree.m"
          case (MR_Integer) 2:
#line 1233 "declarative_tree.m"
            {
#line 1233 "declarative_tree.m"
              MR_Word mdb__declarative_tree__InnerGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1233 "declarative_tree.m"
              MR_Word mdb__declarative_tree__MaybeCut_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1233 "declarative_tree.m"
              MR_Word mdb__declarative_tree__InnerPath_32;
#line 1233 "declarative_tree.m"
              MR_Word mdb__declarative_tree__InnerAndPath_33;
#line 1233 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_134_134;
#line 1233 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_135_135;

#line 1234 "declarative_tree.m"
              {
#line 1234 "declarative_tree.m"
                mdb__declarative_tree__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "declarative_tree.m"
                MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1234 "declarative_tree.m"
                MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_134_134, 1) = ((MR_Box) (mdb__declarative_tree__MaybeCut_31));
#line 1234 "declarative_tree.m"
              }
#line 1234 "declarative_tree.m"
              {
#line 1234 "declarative_tree.m"
                mdb__declarative_tree__InnerPath_32 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, mdb__declarative_tree__V_134_134);
              }
#line 1235 "declarative_tree.m"
              {
#line 1235 "declarative_tree.m"
                mdb__declarative_tree__InnerAndPath_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__InnerAndPath_33, 0) = ((MR_Box) (mdb__declarative_tree__InnerGoal_30));
#line 1235 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__InnerAndPath_33, 1) = ((MR_Box) (mdb__declarative_tree__InnerPath_32));
#line 1235 "declarative_tree.m"
              }
#line 1236 "declarative_tree.m"
              {
#line 1236 "declarative_tree.m"
                mdb__declarative_tree__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_135_135, 0) = ((MR_Box) (mdb__declarative_tree__InnerAndPath_33));
#line 1236 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_135_135, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1236 "declarative_tree.m"
              }
#line 1236 "declarative_tree.m"
              {
#line 1236 "declarative_tree.m"
                mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_135_135, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
              }
#line 1233 "declarative_tree.m"
            }
#line 1232 "declarative_tree.m"
            break;
#line 1232 "declarative_tree.m"
          case (MR_Integer) 3:
#line 1240 "declarative_tree.m"
            {
#line 1240 "declarative_tree.m"
              MR_String mdb__declarative_tree__File_34 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1240 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Line_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1240 "declarative_tree.m"
              MR_Word mdb__declarative_tree__BoundVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 3)));
#line 1240 "declarative_tree.m"
              MR_Word mdb__declarative_tree__AtomicGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 4)));
#line 1240 "declarative_tree.m"
              MR_Word mdb__declarative_tree__GeneratesEvent_38;

#line 1241 "declarative_tree.m"
              {
#line 1241 "declarative_tree.m"
                mdb__declarative_tree__GeneratesEvent_38 = mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_f_0(mdb__declarative_tree__AtomicGoal_37);
              }
#line 1248 "declarative_tree.m"
              if ((mdb__declarative_tree__GeneratesEvent_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1249 "declarative_tree.m"
                {
#line 1249 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__Primitive_40;
#line 1249 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__Primitives1_41;

#line 1250 "declarative_tree.m"
                  {
#line 1250 "declarative_tree.m"
                    mdb__declarative_tree__Primitive_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 0) = ((MR_Box) (mdb__declarative_tree__File_34));
#line 1250 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 1) = ((MR_Box) (mdb__declarative_tree__Line_35));
#line 1250 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_36));
#line 1250 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_37));
#line 1250 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 4) = ((MR_Box) (mdb__declarative_tree__Path_15));
#line 1250 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1250 "declarative_tree.m"
                  }
#line 1251 "declarative_tree.m"
                  {
#line 1251 "declarative_tree.m"
                    mdb__declarative_tree__Primitives1_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_41, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_40));
#line 1251 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_41, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_23));
#line 1251 "declarative_tree.m"
                  }
#line 1252 "declarative_tree.m"
                  {
#line 1252 "declarative_tree.m"
                    mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives1_41);
                  }
#line 1249 "declarative_tree.m"
                }
#line 1248 "declarative_tree.m"
              else
#line 1243 "declarative_tree.m"
                {
#line 1243 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__AtomicGoalArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GeneratesEvent_38, (MR_Integer) 0)));

#line 1244 "declarative_tree.m"
                  {
#line 1244 "declarative_tree.m"
                    mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__File_34, mdb__declarative_tree__Line_35, mdb__declarative_tree__BoundVars_36, mdb__declarative_tree__AtomicGoal_37, mdb__declarative_tree__AtomicGoalArgs_39, mdb__declarative_tree__Path_15, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                  }
#line 1243 "declarative_tree.m"
                }
#line 1240 "declarative_tree.m"
            }
#line 1232 "declarative_tree.m"
            break;
#line 1232 "declarative_tree.m"
        }
#line 1232 "declarative_tree.m"
        break;
#line 1232 "declarative_tree.m"
    }
#line 1224 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_24;
#line 1224 "declarative_tree.m"
  }
#line 1218 "declarative_tree.m"
}

#line 1140 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1140 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_11,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_12,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_13,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_14,
#line 1140 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_15,
#line 1140 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_16,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_17,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_18,
#line 1140 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_19)
#line 1140 "declarative_tree.m"
{
#line 1146 "declarative_tree.m"
  {
#line 1146 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_18 == (MR_Integer) 0);
#line 1146 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_20;
#line 1146 "declarative_tree.m"
    MR_Word mdb__declarative_tree__AdjustedContour_21;
#line 1163 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__PolyConst2_40;
#line 1163 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_58;
#line 1163 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EndPath_59;
#line 1163 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybeReturnLabel_66;
#line 1163 "declarative_tree.m"
    MR_String mdb__declarative_tree__CallPathStr_70;
#line 1163 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallPath_71;
#line 1163 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_72_72;
#line 1163 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_73_73;
#line 1164 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_41_41;
#line 1196 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_57_57;
#line 1197 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_60_60;
#line 1197 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_61_61;
#line 1197 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_62_62;
#line 1197 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_63_63;
#line 1197 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_64_64;
#line 1197 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_65_65;
#line 1197 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_67_67;
#line 1197 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_68_68;
#line 1197 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_69_69;

#line 1148 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1148 "declarative_tree.m"
      {
#line 1204 "declarative_tree.m"
        {
#line 1204 "declarative_tree.m"
          MR_Word mdb__declarative_tree__NextGoal_52;
#line 1204 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_55_55;
#line 1204 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_56_56;
#line 1204 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_54_54;
#line 1204 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_53_53;

#line 1204 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__GoalPaths_12)) == (MR_mktag((MR_Integer) 1)));
#line 1204 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1204 "declarative_tree.m"
            {
#line 1204 "declarative_tree.m"
              mdb__declarative_tree__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));
#line 1204 "declarative_tree.m"
              mdb__declarative_tree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1204 "declarative_tree.m"
              mdb__declarative_tree__NextGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_55_55, (MR_Integer) 0)));
#line 1204 "declarative_tree.m"
              mdb__declarative_tree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_55_55, (MR_Integer) 1)));
#line 1205 "declarative_tree.m"
              {
#line 1205 "declarative_tree.m"
                mdb__declarative_tree__V_56_56 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(mdb__declarative_tree__NextGoal_52);
              }
#line 1205 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_56_56 == (MR_Integer) 1);
#line 1204 "declarative_tree.m"
            }
#line 1204 "declarative_tree.m"
        }
#line 1151 "declarative_tree.m"
        if (!(mdb__declarative_tree__succeeded))
#line 1152 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "declarative_tree.m"
      }
#line 1147 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1158 "declarative_tree.m"
      {
#line 1158 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_39_39;

#line 1158 "declarative_tree.m"
        {
#line 1158 "declarative_tree.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_39_39);
        }
#line 1158 "declarative_tree.m"
        {
#line 1158 "declarative_tree.m"
          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_tree__Contour_13, &mdb__declarative_tree__AdjustedContour_21);
        }
#line 1158 "declarative_tree.m"
      }
#line 1147 "declarative_tree.m"
    else
#line 1160 "declarative_tree.m"
      mdb__declarative_tree__AdjustedContour_21 = mdb__declarative_tree__Contour_13;
#line 1163 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_18 == (MR_Integer) 0);
#line 1163 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1163 "declarative_tree.m"
      {
#line 14208 "mdb.declarative_tree.c"
        mdb__declarative_tree__PolyConst2_40 = (MR_Integer) 2;
#line 1164 "declarative_tree.m"
        {
#line 1164 "declarative_tree.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__PolyConst2_40, &mdb__declarative_tree__TypeInfo_41_41);
        }
#line 1196 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__AdjustedContour_21)) == (MR_mktag((MR_Integer) 1)));
#line 1196 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1196 "declarative_tree.m"
          {
#line 1196 "declarative_tree.m"
            mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedContour_21, (MR_Integer) 0)));
#line 1196 "declarative_tree.m"
            mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedContour_21, (MR_Integer) 1)));
#line 1196 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1163 "declarative_tree.m"
              {
#line 1196 "declarative_tree.m"
                mdb__declarative_tree__V_57_57 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_72_72, (MR_Integer) 0));
#line 1196 "declarative_tree.m"
                mdb__declarative_tree__Node_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_72_72, (MR_Integer) 1)));
#line 1196 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeEnd_14)) == (MR_mktag((MR_Integer) 1)));
#line 1196 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1196 "declarative_tree.m"
                  {
#line 1196 "declarative_tree.m"
                    mdb__declarative_tree__EndPath_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeEnd_14, (MR_Integer) 0)));
#line 1197 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_58)) == (MR_mktag((MR_Integer) 0)));
#line 1197 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1197 "declarative_tree.m"
                      {
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 0));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 1));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 2)));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 3)));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 4)));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 5)));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__MaybeReturnLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 6)));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 7)));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 8)));
#line 1197 "declarative_tree.m"
                        mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 9)));
#line 1198 "declarative_tree.m"
                        {
#line 1198 "declarative_tree.m"
                          mdb__declarative_tree__CallPathStr_70 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__MaybeReturnLabel_66);
                        }
#line 1199 "declarative_tree.m"
                        {
#line 1199 "declarative_tree.m"
                          mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_70, &mdb__declarative_tree__CallPath_71);
                        }
#line 1200 "declarative_tree.m"
                        {
#line 1200 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CallPath_71, mdb__declarative_tree__EndPath_59);
                        }
#line 1163 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1163 "declarative_tree.m"
                          {
#line 1204 "declarative_tree.m"
                            {
#line 1204 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__NextGoal_75;
#line 1204 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_78_78;
#line 1204 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_79_79;
#line 1204 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_77_77;
#line 1204 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_76_76;

#line 1204 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__GoalPaths_12)) == (MR_mktag((MR_Integer) 1)));
#line 1204 "declarative_tree.m"
                              if (mdb__declarative_tree__succeeded)
#line 1204 "declarative_tree.m"
                                {
#line 1204 "declarative_tree.m"
                                  mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));
#line 1204 "declarative_tree.m"
                                  mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1204 "declarative_tree.m"
                                  mdb__declarative_tree__NextGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_78_78, (MR_Integer) 0)));
#line 1204 "declarative_tree.m"
                                  mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_78_78, (MR_Integer) 1)));
#line 1205 "declarative_tree.m"
                                  {
#line 1205 "declarative_tree.m"
                                    mdb__declarative_tree__V_79_79 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(mdb__declarative_tree__NextGoal_75);
                                  }
#line 1205 "declarative_tree.m"
                                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_79_79 == (MR_Integer) 1);
#line 1204 "declarative_tree.m"
                                }
#line 1204 "declarative_tree.m"
                            }
#line 1167 "declarative_tree.m"
                            if (!(mdb__declarative_tree__succeeded))
#line 1168 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = (mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1163 "declarative_tree.m"
                          }
#line 1197 "declarative_tree.m"
                      }
#line 1196 "declarative_tree.m"
                  }
#line 1163 "declarative_tree.m"
              }
#line 1196 "declarative_tree.m"
          }
#line 1163 "declarative_tree.m"
      }
#line 1162 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1175 "declarative_tree.m"
      mdb__declarative_tree__MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1162 "declarative_tree.m"
    else
#line 1182 "declarative_tree.m"
    if ((mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "declarative_tree.m"
      {
#line 1183 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Var_25;
#line 1183 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_34_34;

#line 1904 "declarative_tree.m"
        {
#line 1904 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1184__1_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__AdjustedContour_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1904 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1905 "declarative_tree.m"
          {
#line 1905 "declarative_tree.m"
          }
#line 1904 "declarative_tree.m"
        else
#line 1907 "declarative_tree.m"
          {
#line 1907 "declarative_tree.m"
            {
#line 1907 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
            }
#line 1907 "declarative_tree.m"
          }
#line 1186 "declarative_tree.m"
        {
#line 1186 "declarative_tree.m"
          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__MaybeEnd_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "make_primitive_list", (MR_String) "found end when looking for call");
        }
#line 1188 "declarative_tree.m"
        {
#line 1188 "declarative_tree.m"
          mdb__declarative_tree__find_variable_in_args_4_p_0(mdb__declarative_tree__HeadVars_17, mdb__declarative_tree__ArgNum_15, mdb__declarative_tree__TotalArgs_16, &mdb__declarative_tree__Var_25);
        }
#line 1189 "declarative_tree.m"
        {
#line 1189 "declarative_tree.m"
          mdb__declarative_tree__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_19));
#line 1189 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 1) = ((MR_Box) (mdb__declarative_tree__Var_25));
#line 1189 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1189 "declarative_tree.m"
        }
#line 1189 "declarative_tree.m"
        {
#line 1189 "declarative_tree.m"
          mdb__declarative_tree__MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_20, 0) = ((MR_Box) (mdb__declarative_tree__V_34_34));
#line 1189 "declarative_tree.m"
        }
#line 1183 "declarative_tree.m"
      }
#line 1182 "declarative_tree.m"
    else
#line 1178 "declarative_tree.m"
      {
#line 1178 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goal_22;
#line 1178 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Path_23;
#line 1178 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Tail_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1178 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));

#line 1178 "declarative_tree.m"
        mdb__declarative_tree__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_36_36, (MR_Integer) 0)));
#line 1178 "declarative_tree.m"
        mdb__declarative_tree__Path_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_36_36, (MR_Integer) 1)));
#line 1179 "declarative_tree.m"
        {
#line 1179 "declarative_tree.m"
          mdb__declarative_tree__MaybePrims_20 = mdb__declarative_tree__match_goal_to_contour_event_11_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__Store_11, mdb__declarative_tree__Goal_22, mdb__declarative_tree__Path_23, mdb__declarative_tree__Tail_24, mdb__declarative_tree__AdjustedContour_21, mdb__declarative_tree__MaybeEnd_14, mdb__declarative_tree__ArgNum_15, mdb__declarative_tree__TotalArgs_16, mdb__declarative_tree__HeadVars_17, mdb__declarative_tree__AllTraced_18, mdb__declarative_tree__Primitives0_19);
        }
#line 1178 "declarative_tree.m"
      }
#line 1146 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_20;
#line 1146 "declarative_tree.m"
  }
#line 1140 "declarative_tree.m"
}

#line 1106 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
#line 1106 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 1106 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1106 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1106 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__FinalAtom_7)
#line 1106 "declarative_tree.m"
{
#line 1109 "declarative_tree.m"
  {
#line 1109 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_40_52;
#line 1109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Exit_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitAtom_20;
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_21;
#line 1109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_22;
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CallIoSeq_23;
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ExitIoSeq_24;
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__PolyConst2_51;
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 1110 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_8_8;
#line 1110 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_9_9;
#line 1110 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_10_10;
#line 1110 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_11_11;
#line 1110 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1110 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13;
#line 1110 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 1110 "declarative_tree.m"
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

#line 1110 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Exit_6)) == (MR_mktag((MR_Integer) 1)));
#line 1110 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1110 "declarative_tree.m"
      {
#line 1110 "declarative_tree.m"
        mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 1110 "declarative_tree.m"
        mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 1110 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 1110 "declarative_tree.m"
        mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 1110 "declarative_tree.m"
        mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 1110 "declarative_tree.m"
        mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 1110 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 1110 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 14562 "mdb.declarative_tree.c"
        mdb__declarative_tree__PolyConst2_51 = (MR_Integer) 2;
#line 105 "declarative_tree.m"
        {
#line 105 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
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
#line 114 "declarative_tree.m"
            {
#line 114 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 114 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_26_26, 0) = ((MR_Box) (mdb__declarative_tree__V_27_27));
#line 114 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1110 "declarative_tree.m"
      }
#line 1109 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1109 "declarative_tree.m"
  }
#line 1106 "declarative_tree.m"
}

#line 1104 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
#line 1104 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1104 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 1104 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__wrapper_arg_2)
#line 1104 "declarative_tree.m"
{
#line 1104 "declarative_tree.m"
  {
#line 1104 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1104 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 1104 "declarative_tree.m"
    MR_Word mdb__declarative_tree__conv0_FinalAtom_7;

#line 1104 "declarative_tree.m"
    {
#line 1104 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__get_exit_atom_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 4)), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_FinalAtom_7);
    }
#line 1104 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1104 "declarative_tree.m"
      {
#line 1104 "declarative_tree.m"
        *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_FinalAtom_7));
#line 1104 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1104 "declarative_tree.m"
      }
#line 1104 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1104 "declarative_tree.m"
  }
#line 1104 "declarative_tree.m"
}

#line 1096 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
#line 1096 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 1096 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1096 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_5,
#line 1096 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ExitAtoms_6)
#line 1096 "declarative_tree.m"
{
#line 1100 "declarative_tree.m"
  {
#line 1100 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1100 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_23_23;
#line 1100 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_24_24;
#line 1100 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_26_26;
#line 1100 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_28_28;
#line 1100 "declarative_tree.m"
    MR_Box mdb__declarative_tree__ExitPrecId_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 0));
#line 1100 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitPrec_8;
#line 1100 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Contour_9;
#line 1100 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_11_11;
#line 1101 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 1));
#line 1101 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 2));
#line 1101 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 3)));
#line 1101 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 4)));
#line 1101 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 5)));
#line 1101 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 6)));
#line 1101 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 7)));

#line 1102 "declarative_tree.m"
    {
#line 1102 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__ExitPrecId_7, &mdb__declarative_tree__ExitPrec_8);
    }
#line 1103 "declarative_tree.m"
    {
#line 1103 "declarative_tree.m"
      mdb__declarative_tree__materialize_contour_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__ExitPrecId_7, mdb__declarative_tree__ExitPrec_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Contour_9);
    }
#line 1104 "declarative_tree.m"
    {
#line 1104 "declarative_tree.m"
      mdb__declarative_tree__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_6[0]));
#line 1104 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 1) = ((MR_Box) (mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1));
#line 1104 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1104 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 3) = ((MR_Box) (mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19));
#line 1104 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 4) = mdb__declarative_tree__Store_4;
#line 1104 "declarative_tree.m"
    }
#line 1104 "declarative_tree.m"
    {
#line 1104 "declarative_tree.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_23_23);
    }
#line 1104 "declarative_tree.m"
    {
#line 1104 "declarative_tree.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_24_24);
    }
#line 14833 "mdb.declarative_tree.c"
    {
#line 14835 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14837 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_26_26, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 14839 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_26_26, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_24_24));
#line 14841 "mdb.declarative_tree.c"
    }
#line 14843 "mdb.declarative_tree.c"
    {
#line 14845 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14847 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 14849 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_23_23));
#line 14851 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_26_26));
#line 14853 "mdb.declarative_tree.c"
    }
#line 1104 "declarative_tree.m"
    {
#line 1104 "declarative_tree.m"
      mercury__list__filter_map_3_p_0(mdb__declarative_tree__TypeInfo_28_28, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_tree__V_11_11, mdb__declarative_tree__Contour_9, mdb__declarative_tree__ExitAtoms_6);
    }
#line 1100 "declarative_tree.m"
  }
#line 1096 "declarative_tree.m"
}

#line 1066 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
#line 1066 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34,
#line 1066 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1066 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 1066 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Node_8,
#line 1066 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Nodes0_9,
#line 1066 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Nodes_10)
#line 1066 "declarative_tree.m"
{
#line 1071 "declarative_tree.m"
  while (MR_TRUE)
#line 1071 "declarative_tree.m"
    {
#line 1071 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1071 "declarative_tree.m"
      {
#line 1071 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 0)));
#line 1071 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11;
#line 1071 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 1071 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1071 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14;
#line 1071 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15;
#line 1071 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16;
#line 1071 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17;
#line 1071 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18;
#line 1071 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19;
#line 1071 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20;

#line 1071 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1071 "declarative_tree.m"
          {
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 8)));
#line 1071 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 9)));
#line 1072 "declarative_tree.m"
            *mdb__declarative_tree__Nodes_10 = mdb__declarative_tree__Nodes0_9;
#line 1071 "declarative_tree.m"
          }
#line 1071 "declarative_tree.m"
        else
#line 1083 "declarative_tree.m"
          {
#line 1083 "declarative_tree.m"
            MR_Box mdb__declarative_tree__PrevNodeId_24;
#line 1083 "declarative_tree.m"
            MR_Word mdb__declarative_tree__PrevNode_28;
#line 1083 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Nodes1_32;
#line 1077 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NegPrec_21;
#line 1077 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_22_22;
#line 1077 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_23_23;
#line 1085 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29;
#line 1085 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_30_30;
#line 1085 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_31_31;

#line 1077 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1077 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1077 "declarative_tree.m"
              {
#line 1077 "declarative_tree.m"
                mdb__declarative_tree__NegPrec_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1077 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1077 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1078 "declarative_tree.m"
                mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_tree__NegPrec_21;
#line 1077 "declarative_tree.m"
              }
#line 1077 "declarative_tree.m"
            else
#line 1079 "declarative_tree.m"
              {
#line 1079 "declarative_tree.m"
                MR_Box mdb__declarative_tree__CondPrec_25;
#line 1079 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_26_26;
#line 1079 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_27_27;

#line 1079 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1079 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1079 "declarative_tree.m"
                  {
#line 1079 "declarative_tree.m"
                    mdb__declarative_tree__CondPrec_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1079 "declarative_tree.m"
                    mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1079 "declarative_tree.m"
                    mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1080 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_tree__CondPrec_25;
#line 1079 "declarative_tree.m"
                  }
#line 1079 "declarative_tree.m"
                else
#line 1082 "declarative_tree.m"
                  {
#line 1082 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_8);
                  }
#line 1079 "declarative_tree.m"
              }
#line 1084 "declarative_tree.m"
            {
#line 1084 "declarative_tree.m"
              mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrevNodeId_24, &mdb__declarative_tree__PrevNode_28);
            }
#line 1085 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1085 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1085 "declarative_tree.m"
              {
#line 1085 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1085 "declarative_tree.m"
                mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 1085 "declarative_tree.m"
                mdb__declarative_tree__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1089 "declarative_tree.m"
                mdb__declarative_tree__Nodes1_32 = mdb__declarative_tree__Nodes0_9;
#line 1085 "declarative_tree.m"
              }
#line 1085 "declarative_tree.m"
            else
#line 1091 "declarative_tree.m"
              {
#line 1091 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_33_33;

#line 1091 "declarative_tree.m"
                {
#line 1091 "declarative_tree.m"
                  mdb__declarative_tree__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_33_33, 0) = mdb__declarative_tree__NodeId_7;
#line 1091 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_33_33, 1) = ((MR_Box) (mdb__declarative_tree__Node_8));
#line 1091 "declarative_tree.m"
                }
#line 1091 "declarative_tree.m"
                {
#line 1091 "declarative_tree.m"
                  mdb__declarative_tree__Nodes1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Nodes1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_33_33));
#line 1091 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Nodes1_32, 1) = ((MR_Box) (mdb__declarative_tree__Nodes0_9));
#line 1091 "declarative_tree.m"
                }
#line 1091 "declarative_tree.m"
              }
#line 1093 "declarative_tree.m"
            /* direct tailcall eliminated */
#line 1093 "declarative_tree.m"
            {
#line 1093 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NodeId__tmp_copy_7 = mdb__declarative_tree__PrevNodeId_24;
#line 1093 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Node__tmp_copy_8 = mdb__declarative_tree__PrevNode_28;
#line 1093 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Nodes0__tmp_copy_9 = mdb__declarative_tree__Nodes1_32;

#line 1093 "declarative_tree.m"
              mdb__declarative_tree__Nodes0_9 = mdb__declarative_tree__Nodes0__tmp_copy_9;
#line 1093 "declarative_tree.m"
              mdb__declarative_tree__Node_8 = mdb__declarative_tree__Node__tmp_copy_8;
#line 1093 "declarative_tree.m"
              mdb__declarative_tree__NodeId_7 = mdb__declarative_tree__NodeId__tmp_copy_7;
#line 1093 "declarative_tree.m"
            }
#line 1093 "declarative_tree.m"
            continue;
#line 1083 "declarative_tree.m"
          }
#line 1071 "declarative_tree.m"
      }
#line 1071 "declarative_tree.m"
      break;
#line 1071 "declarative_tree.m"
    }
#line 1066 "declarative_tree.m"
}

#line 1043 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
#line 1043 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25,
#line 1043 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1043 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_5,
#line 1043 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ParentCallNode_6)
#line 1043 "declarative_tree.m"
{
#line 1046 "declarative_tree.m"
  while (MR_TRUE)
#line 1046 "declarative_tree.m"
    {
#line 1046 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1046 "declarative_tree.m"
      {
#line 1046 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 1046 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Node_7;
#line 98 "mdb.declarative_execution.int"
        MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 98 "mdb.declarative_execution.int"
        MR_Box mdb__declarative_tree__conv1_Node_7;
#line 1048 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_8_8;
#line 1048 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9;
#line 1048 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 1048 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 1048 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12;
#line 1048 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1048 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;
#line 1048 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15;
#line 1048 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16;
#line 1048 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17;

#line 98 "mdb.declarative_execution.int"
        {
#line 98 "mdb.declarative_execution.int"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25), mdb__declarative_tree__Store_4, mdb__declarative_tree__NodeId_5, &mdb__declarative_tree__conv1_Node_7);
        }
#line 98 "mdb.declarative_execution.int"
        if (mdb__declarative_tree__succeeded)
#line 98 "mdb.declarative_execution.int"
          {
#line 98 "mdb.declarative_execution.int"
            mdb__declarative_tree__Node_7 = ((MR_Word) mdb__declarative_tree__conv1_Node_7);
#line 98 "mdb.declarative_execution.int"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 98 "mdb.declarative_execution.int"
          }
#line 1046 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1046 "declarative_tree.m"
          {
#line 1048 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 0)));
#line 1048 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1048 "declarative_tree.m"
              {
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 0));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 7)));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 8)));
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 9)));
#line 1049 "declarative_tree.m"
                *mdb__declarative_tree__ParentCallNode_6 = mdb__declarative_tree__Node_7;
#line 1049 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1048 "declarative_tree.m"
              }
#line 1048 "declarative_tree.m"
            else
#line 1062 "declarative_tree.m"
              {
#line 1062 "declarative_tree.m"
                MR_Box mdb__declarative_tree__PrevNodeId_21;
#line 1056 "declarative_tree.m"
                MR_Box mdb__declarative_tree__NegPrec_18;
#line 1056 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_19_19;
#line 1056 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_20_20;

#line 1056 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1056 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1056 "declarative_tree.m"
                  {
#line 1056 "declarative_tree.m"
                    mdb__declarative_tree__NegPrec_18 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1056 "declarative_tree.m"
                    mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1056 "declarative_tree.m"
                    mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1057 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_tree__NegPrec_18;
#line 1056 "declarative_tree.m"
                  }
#line 1056 "declarative_tree.m"
                else
#line 1058 "declarative_tree.m"
                  {
#line 1058 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CondPrec_22;
#line 1058 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_23_23;
#line 1058 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_24_24;

#line 1058 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1058 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1058 "declarative_tree.m"
                      {
#line 1058 "declarative_tree.m"
                        mdb__declarative_tree__CondPrec_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1058 "declarative_tree.m"
                        mdb__declarative_tree__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1058 "declarative_tree.m"
                        mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1059 "declarative_tree.m"
                        mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_tree__CondPrec_22;
#line 1058 "declarative_tree.m"
                      }
#line 1058 "declarative_tree.m"
                    else
#line 1061 "declarative_tree.m"
                      {
#line 1061 "declarative_tree.m"
                        mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25, mdb__declarative_tree__Store_4, mdb__declarative_tree__Node_7);
                      }
#line 1058 "declarative_tree.m"
                  }
#line 1063 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1063 "declarative_tree.m"
                {
#line 1063 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__NodeId__tmp_copy_5 = mdb__declarative_tree__PrevNodeId_21;

#line 1063 "declarative_tree.m"
                  mdb__declarative_tree__NodeId_5 = mdb__declarative_tree__NodeId__tmp_copy_5;
#line 1063 "declarative_tree.m"
                }
#line 1063 "declarative_tree.m"
                continue;
#line 1062 "declarative_tree.m"
              }
#line 1046 "declarative_tree.m"
          }
#line 1046 "declarative_tree.m"
        return mdb__declarative_tree__succeeded;
#line 1046 "declarative_tree.m"
      }
#line 1046 "declarative_tree.m"
      break;
#line 1046 "declarative_tree.m"
    }
#line 1043 "declarative_tree.m"
}

#line 1012 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
#line 1012 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_25,
#line 1012 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_5,
#line 1012 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_6,
#line 1012 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_7,
#line 1012 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_8)
#line 1012 "declarative_tree.m"
{
#line 1016 "declarative_tree.m"
  {
#line 1016 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1016 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitAtom_10;
#line 1016 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ArgNum_11;
#line 1016 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__TotalArgs_12;
#line 1016 "declarative_tree.m"
    MR_Box mdb__declarative_tree__StartId_13;
#line 1016 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartRep_15;
#line 1016 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_16_16;
#line 1020 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_17_17;
#line 1021 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_18_18;
#line 1021 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_19_19;
#line 1021 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_20_20;
#line 1021 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_21_21;
#line 1021 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_22_22;
#line 1021 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_23_23;
#line 1021 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_24_24;

#line 1018 "declarative_tree.m"
    {
#line 1018 "declarative_tree.m"
      mdb__declarative_tree__ExitAtom_10 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_for_R_25, mdb__declarative_tree__ExitNode_6);
    }
#line 1019 "declarative_tree.m"
    {
#line 1019 "declarative_tree.m"
      mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_tree__ArgPos_7, mdb__declarative_tree__ExitAtom_10, &mdb__declarative_tree__ArgNum_11);
    }
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_10, (MR_Integer) 0)));
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_10, (MR_Integer) 1)));
#line 1020 "declarative_tree.m"
    {
#line 1020 "declarative_tree.m"
      mdb__declarative_tree__TotalArgs_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_16_16);
    }
#line 1021 "declarative_tree.m"
    mdb__declarative_tree__StartId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 0));
#line 1021 "declarative_tree.m"
    mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 1));
#line 1021 "declarative_tree.m"
    mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 2));
#line 1021 "declarative_tree.m"
    mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 3)));
#line 1021 "declarative_tree.m"
    mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 4)));
#line 1021 "declarative_tree.m"
    mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 5)));
#line 1021 "declarative_tree.m"
    mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 6)));
#line 1021 "declarative_tree.m"
    mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 7)));
#line 1023 "declarative_tree.m"
    {
#line 1023 "declarative_tree.m"
      mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(mdb__declarative_tree__TypeInfo_for_R_25, mdb__declarative_tree__CallNode_5, &mdb__declarative_tree__StartRep_15);
    }
#line 1024 "declarative_tree.m"
    {
#line 1024 "declarative_tree.m"
      MR_Word base;
#line 1024 "declarative_tree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "declarative_tree.m"
      *mdb__declarative_tree__ChainStart_8 = base;
#line 1024 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__ArgNum_11));
#line 1024 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TotalArgs_12));
#line 1024 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 3) = mdb__declarative_tree__StartId_13;
#line 1024 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (mdb__declarative_tree__StartRep_15));
#line 1024 "declarative_tree.m"
    }
#line 1016 "declarative_tree.m"
  }
#line 1012 "declarative_tree.m"
}

#line 994 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
#line 994 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42,
#line 994 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 994 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_7,
#line 994 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_8,
#line 994 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_9,
#line 994 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10)
#line 994 "declarative_tree.m"
{
#line 998 "declarative_tree.m"
  {
#line 998 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_44_44;
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallAtom_12;
#line 998 "declarative_tree.m"
    MR_String mdb__declarative_tree__CallPathStr_13;
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallPath_14;
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartLoc_15;
#line 998 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ArgNum_16;
#line 998 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__TotalArgs_17;
#line 998 "declarative_tree.m"
    MR_Box mdb__declarative_tree__StartId_18 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartPath_19;
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartRep_20;
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_21_21;
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_22_22;
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_49;
#line 998 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallPrecId_50;
#line 999 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 999 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 999 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 999 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 999 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 999 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 999 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 999 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 999 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 1001 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 1001 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_33_33;
#line 1001 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_34_34;
#line 1001 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_35_35;
#line 1001 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_36_36;
#line 1001 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 1001 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_38_38;
#line 1001 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 1001 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_40_40;
#line 1005 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_41_41;
#line 1032 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_52_52;
#line 1032 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_53_53;
#line 1032 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_54_54;
#line 1032 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_55_55;
#line 1032 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_56_56;
#line 1032 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_57_57;
#line 1032 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_58_58;
#line 1032 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_59_59;
#line 1032 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_60_60;
#line 1033 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ParentCallNode_51;

#line 1000 "declarative_tree.m"
    {
#line 1000 "declarative_tree.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_44_44);
    }
#line 1000 "declarative_tree.m"
    {
#line 1000 "declarative_tree.m"
      mdb__declarative_tree__CallAtom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_44_44, mdb__declarative_tree__CallNode_8);
    }
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 1001 "declarative_tree.m"
    mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 1001 "declarative_tree.m"
    {
#line 1001 "declarative_tree.m"
      mdb__declarative_tree__CallPathStr_13 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__V_21_21);
    }
#line 1002 "declarative_tree.m"
    {
#line 1002 "declarative_tree.m"
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_13, &mdb__declarative_tree__CallPath_14);
    }
#line 1003 "declarative_tree.m"
    {
#line 1003 "declarative_tree.m"
      mdb__declarative_tree__StartLoc_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, 0) = mdb__declarative_tree__CallId_7;
#line 1003 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, 1) = ((MR_Box) (mdb__declarative_tree__CallNode_8));
#line 1003 "declarative_tree.m"
    }
#line 1004 "declarative_tree.m"
    {
#line 1004 "declarative_tree.m"
      mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_tree__ArgPos_9, mdb__declarative_tree__CallAtom_12, &mdb__declarative_tree__ArgNum_16);
    }
#line 1005 "declarative_tree.m"
    mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_12, (MR_Integer) 0)));
#line 1005 "declarative_tree.m"
    mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_12, (MR_Integer) 1)));
#line 1005 "declarative_tree.m"
    {
#line 1005 "declarative_tree.m"
      mdb__declarative_tree__TotalArgs_17 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_22_22);
    }
#line 1007 "declarative_tree.m"
    {
#line 1007 "declarative_tree.m"
      mdb__declarative_tree__StartPath_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartPath_19, 0) = ((MR_Box) (mdb__declarative_tree__CallPath_14));
#line 1007 "declarative_tree.m"
    }
#line 1031 "declarative_tree.m"
    {
#line 1031 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_7, &mdb__declarative_tree__Call_49);
    }
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__CallPrecId_50 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 0));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_52_52 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 1));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 2)));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 3)));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 4)));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 5)));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 6)));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_58_58 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 7)));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 8)));
#line 1032 "declarative_tree.m"
    mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 9)));
#line 1033 "declarative_tree.m"
    {
#line 1033 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallPrecId_50, &mdb__declarative_tree__ParentCallNode_51);
    }
#line 1033 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1034 "declarative_tree.m"
      {
#line 1034 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_21_62;

#line 1034 "declarative_tree.m"
        {
#line 1034 "declarative_tree.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_21_62);
        }
#line 1034 "declarative_tree.m"
        {
#line 1034 "declarative_tree.m"
          mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(mdb__declarative_tree__TypeInfo_21_62, mdb__declarative_tree__ParentCallNode_51, &mdb__declarative_tree__StartRep_20);
        }
#line 1034 "declarative_tree.m"
      }
#line 1033 "declarative_tree.m"
    else
#line 1036 "declarative_tree.m"
      mdb__declarative_tree__StartRep_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1009 "declarative_tree.m"
    {
#line 1009 "declarative_tree.m"
      MR_Word base;
#line 1009 "declarative_tree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "declarative_tree.m"
      *mdb__declarative_tree__ChainStart_10 = base;
#line 1009 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__StartLoc_15));
#line 1009 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__ArgNum_16));
#line 1009 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TotalArgs_17));
#line 1009 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 3) = mdb__declarative_tree__StartId_18;
#line 1009 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_tree__StartPath_19));
#line 1009 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (mdb__declarative_tree__StartRep_20));
#line 1009 "declarative_tree.m"
    }
#line 998 "declarative_tree.m"
  }
#line 994 "declarative_tree.m"
}

#line 941 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
#line 941 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 941 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 941 "declarative_tree.m"
{
#line 941 "declarative_tree.m"
  {
#line 941 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 941 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 941 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 941 "declarative_tree.m"
    {
#line 941 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 941 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 941 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 941 "declarative_tree.m"
  }
#line 941 "declarative_tree.m"
}

#line 842 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
#line 842 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43,
#line 842 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_9,
#line 842 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_10,
#line 842 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_11,
#line 842 "declarative_tree.m"
  MR_Word mdb__declarative_tree__StartLoc_12,
#line 842 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_13,
#line 842 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_14,
#line 842 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_15,
#line 842 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_16)
#line 842 "declarative_tree.m"
{
#line 847 "declarative_tree.m"
  {
#line 847 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalRep_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 1)));
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__HeadVars_50;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalExprRep_51;
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__A_52;
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__B_53;
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__C_54;
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__D_55;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_59_59;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_60_60;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_61_61;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_62_62;
#line 847 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_63_63;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_64_64;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_65_65;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_66_66;
#line 847 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_67_67;
#line 847 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_68_68;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_69_69;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_70_70;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_71_71;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_72_72;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_73_73;
#line 847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 0)));
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_88_88;
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_89_89;
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_90_90;
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_91_91;
#line 847 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_92_92;
#line 940 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 2)));
#line 940 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 3)));
#line 940 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 4)));
#line 942 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_82_82;
#line 944 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_56_56;

#line 941 "declarative_tree.m"
    {
#line 941 "declarative_tree.m"
      mdb__declarative_tree__HeadVars_50 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[0], mdb__declarative_tree__V_74_74);
    }
#line 942 "declarative_tree.m"
    mdb__declarative_tree__GoalExprRep_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalRep_49, (MR_Integer) 0)));
#line 942 "declarative_tree.m"
    mdb__declarative_tree__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalRep_49, (MR_Integer) 1)));
#line 943 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVars_50)) == (MR_mktag((MR_Integer) 1)));
#line 943 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 943 "declarative_tree.m"
      {
#line 943 "declarative_tree.m"
        mdb__declarative_tree__A_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVars_50, (MR_Integer) 0)));
#line 943 "declarative_tree.m"
        mdb__declarative_tree__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVars_50, (MR_Integer) 1)));
#line 943 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 943 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 943 "declarative_tree.m"
          {
#line 943 "declarative_tree.m"
            mdb__declarative_tree__B_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_59_59, (MR_Integer) 0)));
#line 943 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_59_59, (MR_Integer) 1)));
#line 943 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 943 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 943 "declarative_tree.m"
              {
#line 943 "declarative_tree.m"
                mdb__declarative_tree__C_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_60_60, (MR_Integer) 0)));
#line 943 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_60_60, (MR_Integer) 1)));
#line 943 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 943 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 943 "declarative_tree.m"
                  {
#line 943 "declarative_tree.m"
                    mdb__declarative_tree__D_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_61_61, (MR_Integer) 0)));
#line 943 "declarative_tree.m"
                    mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_61_61, (MR_Integer) 1)));
#line 943 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                      {
#line 944 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__GoalExprRep_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 944 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 944 "declarative_tree.m"
                          {
#line 944 "declarative_tree.m"
                            mdb__declarative_tree__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 1)));
#line 944 "declarative_tree.m"
                            mdb__declarative_tree__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 2)));
#line 944 "declarative_tree.m"
                            mdb__declarative_tree__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 3)));
#line 944 "declarative_tree.m"
                            mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 4)));
#line 944 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_63_63, (MR_String) "exception.m") == 0);
#line 847 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                              {
#line 944 "declarative_tree.m"
                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                if (mdb__declarative_tree__succeeded)
#line 944 "declarative_tree.m"
                                  {
#line 944 "declarative_tree.m"
                                    mdb__declarative_tree__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_64_64, (MR_Integer) 0)));
#line 944 "declarative_tree.m"
                                    mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_64_64, (MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__D_55 == mdb__declarative_tree__V_88_88);
#line 847 "declarative_tree.m"
                                    if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                                      {
#line 944 "declarative_tree.m"
                                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "declarative_tree.m"
                                        if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                                          {
#line 945 "declarative_tree.m"
                                            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 945 "declarative_tree.m"
                                            if (mdb__declarative_tree__succeeded)
#line 945 "declarative_tree.m"
                                              {
#line 945 "declarative_tree.m"
                                                mdb__declarative_tree__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                mdb__declarative_tree__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 2)));
#line 945 "declarative_tree.m"
                                                mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 3)));
#line 945 "declarative_tree.m"
                                                mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_67_67, (MR_String) "exception") == 0);
#line 847 "declarative_tree.m"
                                                if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                                                  {
#line 945 "declarative_tree.m"
                                                    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_68_68, (MR_String) "builtin_catch") == 0);
#line 847 "declarative_tree.m"
                                                    if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                                                      {
#line 945 "declarative_tree.m"
                                                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                        if (mdb__declarative_tree__succeeded)
#line 945 "declarative_tree.m"
                                                          {
#line 945 "declarative_tree.m"
                                                            mdb__declarative_tree__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_69_69, (MR_Integer) 0)));
#line 945 "declarative_tree.m"
                                                            mdb__declarative_tree__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_69_69, (MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__A_52 == mdb__declarative_tree__V_89_89);
#line 847 "declarative_tree.m"
                                                            if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                                                              {
#line 945 "declarative_tree.m"
                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                                if (mdb__declarative_tree__succeeded)
#line 945 "declarative_tree.m"
                                                                  {
#line 945 "declarative_tree.m"
                                                                    mdb__declarative_tree__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_70_70, (MR_Integer) 0)));
#line 945 "declarative_tree.m"
                                                                    mdb__declarative_tree__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_70_70, (MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__B_53 == mdb__declarative_tree__V_90_90);
#line 847 "declarative_tree.m"
                                                                    if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                                                                      {
#line 945 "declarative_tree.m"
                                                                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                                        if (mdb__declarative_tree__succeeded)
#line 945 "declarative_tree.m"
                                                                          {
#line 945 "declarative_tree.m"
                                                                            mdb__declarative_tree__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_71_71, (MR_Integer) 0)));
#line 945 "declarative_tree.m"
                                                                            mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_71_71, (MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__C_54 == mdb__declarative_tree__V_91_91);
#line 847 "declarative_tree.m"
                                                                            if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                                                                              {
#line 945 "declarative_tree.m"
                                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                                                if (mdb__declarative_tree__succeeded)
#line 945 "declarative_tree.m"
                                                                                  {
#line 945 "declarative_tree.m"
                                                                                    mdb__declarative_tree__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_72_72, (MR_Integer) 0)));
#line 945 "declarative_tree.m"
                                                                                    mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_72_72, (MR_Integer) 1)));
#line 945 "declarative_tree.m"
                                                                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__D_55 == mdb__declarative_tree__V_92_92);
#line 847 "declarative_tree.m"
                                                                                    if (mdb__declarative_tree__succeeded)
#line 847 "declarative_tree.m"
                                                                                      {
#line 945 "declarative_tree.m"
                                                                                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "declarative_tree.m"
                                                                                        if (mdb__declarative_tree__succeeded)
#line 859 "declarative_tree.m"
                                                                                          {
#line 859 "declarative_tree.m"
                                                                                            if ((mdb__declarative_tree__StartLoc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 860 "declarative_tree.m"
                                                                                              {
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TypeInfo_45_45;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TypeInfo_47_47;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__ExitNode_19;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__ExitAtom_20;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__Args_22;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultArgInfo_23;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultRep_26;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultUniv_27;
#line 860 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__TryResult_28;
#line 860 "declarative_tree.m"
                                                                                                MR_String mdb__declarative_tree__Functor_29;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_32_32;
#line 860 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_33_33;
#line 871 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__V_21_21;
#line 872 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__conv1_TryResultArgInfo_23;
#line 873 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_24_24;
#line 873 "declarative_tree.m"
                                                                                                MR_Integer mdb__declarative_tree__V_25_25;
#line 876 "declarative_tree.m"
                                                                                                MR_Integer mdb__declarative_tree__V_30_30;
#line 876 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_31_31;

#line 869 "declarative_tree.m"
                                                                                                {
#line 869 "declarative_tree.m"
                                                                                                  mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43, mdb__declarative_tree__Store_9, mdb__declarative_tree__Ref_11, &mdb__declarative_tree__ExitNode_19);
                                                                                                }
#line 870 "declarative_tree.m"
                                                                                                {
#line 870 "declarative_tree.m"
                                                                                                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_45_45);
                                                                                                }
#line 870 "declarative_tree.m"
                                                                                                {
#line 870 "declarative_tree.m"
                                                                                                  mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_45_45, mdb__declarative_tree__ExitNode_19);
                                                                                                }
#line 871 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 0)));
#line 871 "declarative_tree.m"
                                                                                                mdb__declarative_tree__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 1)));
#line 872 "declarative_tree.m"
                                                                                                {
#line 872 "declarative_tree.m"
                                                                                                  mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__Args_22, mdb__declarative_tree__ArgNum_13, &mdb__declarative_tree__conv1_TryResultArgInfo_23);
                                                                                                }
#line 872 "declarative_tree.m"
                                                                                                mdb__declarative_tree__TryResultArgInfo_23 = ((MR_Word) mdb__declarative_tree__conv1_TryResultArgInfo_23);
#line 873 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 0)));
#line 873 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 1)));
#line 873 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 2)));
#line 873 "declarative_tree.m"
                                                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 873 "declarative_tree.m"
                                                                                                if (mdb__declarative_tree__succeeded)
#line 873 "declarative_tree.m"
                                                                                                  {
#line 873 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__TryResultRep_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_32_32, (MR_Integer) 0)));
#line 874 "declarative_tree.m"
                                                                                                    {
#line 874 "declarative_tree.m"
                                                                                                      mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_tree__TryResultRep_26, &mdb__declarative_tree__TryResultUniv_27);
                                                                                                    }
#line 875 "declarative_tree.m"
                                                                                                    {
#line 875 "declarative_tree.m"
                                                                                                      mdb__declarative_tree__TryResult_28 = mercury__univ__univ_value_1_f_0(&mdb__declarative_tree__TypeInfo_47_47, mdb__declarative_tree__TryResultUniv_27);
                                                                                                    }
#line 876 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__V_33_33 = (MR_Integer) 1;
#line 876 "declarative_tree.m"
                                                                                                    {
#line 876 "declarative_tree.m"
                                                                                                      mercury__deconstruct__deconstruct_5_p_1(mdb__declarative_tree__TypeInfo_47_47, mdb__declarative_tree__TryResult_28, mdb__declarative_tree__V_33_33, &mdb__declarative_tree__Functor_29, &mdb__declarative_tree__V_30_30, &mdb__declarative_tree__V_31_31);
                                                                                                    }
#line 877 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Functor_29, (MR_String) "succeeded") == 0);
#line 877 "declarative_tree.m"
                                                                                                    if (mdb__declarative_tree__succeeded)
#line 878 "declarative_tree.m"
                                                                                                      {
#line 878 "declarative_tree.m"
                                                                                                        MR_Word mdb__declarative_tree__V_34_34 = ((MR_Word) mdb__declarative_tree__NodeId_15);

#line 878 "declarative_tree.m"
                                                                                                        {
#line 878 "declarative_tree.m"
                                                                                                          MR_Word base;
#line 878 "declarative_tree.m"
                                                                                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 878 "declarative_tree.m"
                                                                                                          *mdb__declarative_tree__Origin_16 = base;
#line 878 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_34_34));
#line 878 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &mdb__declarative_tree_scalar_common_2[2])));
#line 878 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TermPath_14));
#line 878 "declarative_tree.m"
                                                                                                        }
#line 878 "declarative_tree.m"
                                                                                                      }
#line 877 "declarative_tree.m"
                                                                                                    else
#line 881 "declarative_tree.m"
                                                                                                      {
#line 881 "declarative_tree.m"
                                                                                                        *mdb__declarative_tree__Origin_16 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_tree_scalar_common_4[1]);
#line 881 "declarative_tree.m"
                                                                                                      }
#line 877 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 873 "declarative_tree.m"
                                                                                                  }
#line 860 "declarative_tree.m"
                                                                                              }
#line 859 "declarative_tree.m"
                                                                                            else
#line 853 "declarative_tree.m"
                                                                                              {
#line 853 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_42_42;

#line 858 "declarative_tree.m"
                                                                                                {
#line 858 "declarative_tree.m"
                                                                                                  mdb__declarative_tree__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_42_42, 0) = ((MR_Box) (mdb__declarative_tree__ArgNum_13));
#line 858 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_42_42, 1) = ((MR_Box) (mdb__declarative_tree__TermPath_14));
#line 858 "declarative_tree.m"
                                                                                                }
#line 858 "declarative_tree.m"
                                                                                                {
#line 858 "declarative_tree.m"
                                                                                                  MR_Word base;
#line 858 "declarative_tree.m"
                                                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "declarative_tree.m"
                                                                                                  *mdb__declarative_tree__Origin_16 = base;
#line 858 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_2[2]));
#line 858 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__V_42_42));
#line 858 "declarative_tree.m"
                                                                                                }
#line 853 "declarative_tree.m"
                                                                                                mdb__declarative_tree__succeeded = MR_TRUE;
#line 853 "declarative_tree.m"
                                                                                              }
#line 859 "declarative_tree.m"
                                                                                          }
#line 847 "declarative_tree.m"
                                                                                      }
#line 945 "declarative_tree.m"
                                                                                  }
#line 847 "declarative_tree.m"
                                                                              }
#line 945 "declarative_tree.m"
                                                                          }
#line 847 "declarative_tree.m"
                                                                      }
#line 945 "declarative_tree.m"
                                                                  }
#line 847 "declarative_tree.m"
                                                              }
#line 945 "declarative_tree.m"
                                                          }
#line 847 "declarative_tree.m"
                                                      }
#line 847 "declarative_tree.m"
                                                  }
#line 945 "declarative_tree.m"
                                              }
#line 847 "declarative_tree.m"
                                          }
#line 847 "declarative_tree.m"
                                      }
#line 944 "declarative_tree.m"
                                  }
#line 847 "declarative_tree.m"
                              }
#line 944 "declarative_tree.m"
                          }
#line 847 "declarative_tree.m"
                      }
#line 943 "declarative_tree.m"
                  }
#line 943 "declarative_tree.m"
              }
#line 943 "declarative_tree.m"
          }
#line 943 "declarative_tree.m"
      }
#line 847 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 847 "declarative_tree.m"
  }
#line 842 "declarative_tree.m"
}

#line 637 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
#line 637 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84,
#line 637 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 637 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 637 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 637 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 637 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10)
#line 637 "declarative_tree.m"
{
#line 640 "declarative_tree.m"
  {
#line 640 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 640 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;
#line 640 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Ns1_38;
#line 640 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Next_72;

#line 641 "declarative_tree.m"
    {
#line 641 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__NodeId_7, &mdb__declarative_tree__Node_11);
    }
#line 647 "declarative_tree.m"
#line 647 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_11)) {
#line 647 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 647 "declarative_tree.m"
      case (MR_Integer) 0:
#line 645 "declarative_tree.m"
        {
#line 646 "declarative_tree.m"
          {
#line 646 "declarative_tree.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 646 "declarative_tree.m"
            return;
          }
#line 645 "declarative_tree.m"
        }
#line 647 "declarative_tree.m"
        break;
#line 647 "declarative_tree.m"
      case (MR_Integer) 1:
#line 662 "declarative_tree.m"
        {
#line 662 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 662 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 662 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 662 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 662 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 662 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_48_48 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 662 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 662 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));

#line 670 "declarative_tree.m"
          {
#line 670 "declarative_tree.m"
            mdb__declarative_tree__succeeded = mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_44);
          }
#line 670 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 671 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 670 "declarative_tree.m"
          else
#line 673 "declarative_tree.m"
            {
#line 673 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_76_76 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 673 "declarative_tree.m"
              {
#line 673 "declarative_tree.m"
                mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_76_76));
#line 673 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 673 "declarative_tree.m"
              }
#line 673 "declarative_tree.m"
            }
#line 662 "declarative_tree.m"
        }
#line 647 "declarative_tree.m"
        break;
#line 647 "declarative_tree.m"
      case (MR_Integer) 2:
#line 685 "declarative_tree.m"
        mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 647 "declarative_tree.m"
        break;
#line 647 "declarative_tree.m"
      case (MR_Integer) 3:
#line 647 "declarative_tree.m"
#line 647 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) {
#line 647 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 647 "declarative_tree.m"
          case (MR_Integer) 0:
#line 650 "declarative_tree.m"
            {
#line 650 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_87_87 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 652 "declarative_tree.m"
              {
#line 652 "declarative_tree.m"
                mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_87_87));
#line 652 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 652 "declarative_tree.m"
              }
#line 650 "declarative_tree.m"
            }
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 1:
#line 650 "declarative_tree.m"
            {
#line 650 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_78_78 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 652 "declarative_tree.m"
              {
#line 652 "declarative_tree.m"
                mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_78_78));
#line 652 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 652 "declarative_tree.m"
              }
#line 650 "declarative_tree.m"
            }
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 2:
#line 685 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 3:
#line 685 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 4:
#line 685 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 5:
#line 687 "declarative_tree.m"
            {
#line 687 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 687 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 687 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2)));

#line 693 "declarative_tree.m"
#line 693 "declarative_tree.m"
              switch (mdb__declarative_tree__CondStatus_71) {
#line 693 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 693 "declarative_tree.m"
                case (MR_Integer) 1:
#line 694 "declarative_tree.m"
                  {
#line 695 "declarative_tree.m"
                    {
#line 695 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 695 "declarative_tree.m"
                      return;
                    }
#line 694 "declarative_tree.m"
                  }
#line 693 "declarative_tree.m"
                  break;
#line 693 "declarative_tree.m"
                case (MR_Integer) 0:
#line 693 "declarative_tree.m"
                case (MR_Integer) 2:
#line 692 "declarative_tree.m"
                  mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 693 "declarative_tree.m"
                  break;
#line 693 "declarative_tree.m"
              }
#line 687 "declarative_tree.m"
            }
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 6:
#line 685 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 7:
#line 658 "declarative_tree.m"
            {
#line 658 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_82 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 658 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_83 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 658 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));

#line 660 "declarative_tree.m"
              {
#line 660 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Prec_82, mdb__declarative_tree__NestedStartId_83, mdb__declarative_tree__Ns0_9, &mdb__declarative_tree__Ns1_38);
              }
#line 658 "declarative_tree.m"
            }
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 8:
#line 645 "declarative_tree.m"
            {
#line 646 "declarative_tree.m"
              {
#line 646 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 646 "declarative_tree.m"
                return;
              }
#line 645 "declarative_tree.m"
            }
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 9:
#line 685 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
          case (MR_Integer) 10:
#line 654 "declarative_tree.m"
            {
#line 654 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_39 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 654 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_40 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 654 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));

#line 656 "declarative_tree.m"
              {
#line 656 "declarative_tree.m"
                mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, (MR_Integer) 0, mdb__declarative_tree__Store_6, mdb__declarative_tree__Prec_39, mdb__declarative_tree__NestedStartId_40, mdb__declarative_tree__Ns0_9, &mdb__declarative_tree__Ns1_38);
              }
#line 654 "declarative_tree.m"
            }
#line 647 "declarative_tree.m"
            break;
#line 647 "declarative_tree.m"
        }
#line 647 "declarative_tree.m"
        break;
#line 647 "declarative_tree.m"
    }
#line 698 "declarative_tree.m"
    {
#line 698 "declarative_tree.m"
      mdb__declarative_tree__Next_72 = mdb__declarative_execution__step_in_stratum_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_11);
    }
#line 699 "declarative_tree.m"
    {
#line 699 "declarative_tree.m"
      mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Next_72, mdb__declarative_tree__StartId_8, mdb__declarative_tree__Ns1_38, mdb__declarative_tree__Ns_10);
    }
#line 640 "declarative_tree.m"
  }
#line 637 "declarative_tree.m"
}

#line 627 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
#line 627 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11,
#line 627 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 627 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 627 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 627 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 627 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10)
#line 627 "declarative_tree.m"
{
#line 631 "declarative_tree.m"
  {
#line 631 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 631 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_13_13;

#line 631 "declarative_tree.m"
    {
#line 631 "declarative_tree.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_13_13);
    }
#line 631 "declarative_tree.m"
    {
#line 631 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_13, mdb__declarative_tree__NodeId_7, mdb__declarative_tree__StartId_8);
    }
#line 631 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 632 "declarative_tree.m"
      *mdb__declarative_tree__Ns_10 = mdb__declarative_tree__Ns0_9;
#line 631 "declarative_tree.m"
    else
#line 634 "declarative_tree.m"
      {
#line 634 "declarative_tree.m"
        mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11, mdb__declarative_tree__Store_6, mdb__declarative_tree__NodeId_7, mdb__declarative_tree__StartId_8, mdb__declarative_tree__Ns0_9, mdb__declarative_tree__Ns_10);
      }
#line 631 "declarative_tree.m"
  }
#line 627 "declarative_tree.m"
}

#line 505 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
#line 505 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115,
#line 505 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 505 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 505 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 505 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 505 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 505 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12)
#line 505 "declarative_tree.m"
{
#line 509 "declarative_tree.m"
  {
#line 509 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 509 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_13;
#line 509 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Ns1_32;
#line 509 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Next_72;

#line 510 "declarative_tree.m"
    {
#line 510 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, &mdb__declarative_tree__Node_13);
    }
#line 514 "declarative_tree.m"
#line 514 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_13)) {
#line 514 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 514 "declarative_tree.m"
      case (MR_Integer) 0:
#line 512 "declarative_tree.m"
        {
#line 513 "declarative_tree.m"
          {
#line 513 "declarative_tree.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 513 "declarative_tree.m"
            return;
          }
#line 512 "declarative_tree.m"
        }
#line 514 "declarative_tree.m"
        break;
#line 514 "declarative_tree.m"
      case (MR_Integer) 1:
#line 515 "declarative_tree.m"
        {
#line 515 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_83_83 = ((MR_Word) mdb__declarative_tree__NodeId_9);

#line 517 "declarative_tree.m"
          {
#line 517 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_83_83));
#line 517 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_11));
#line 517 "declarative_tree.m"
          }
#line 515 "declarative_tree.m"
        }
#line 514 "declarative_tree.m"
        break;
#line 514 "declarative_tree.m"
      case (MR_Integer) 2:
#line 591 "declarative_tree.m"
        mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 514 "declarative_tree.m"
        break;
#line 514 "declarative_tree.m"
      case (MR_Integer) 3:
#line 514 "declarative_tree.m"
#line 514 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) {
#line 514 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "declarative_tree.m"
          case (MR_Integer) 0:
#line 519 "declarative_tree.m"
            {
#line 519 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_34 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 519 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Call_39;
#line 519 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_40;
#line 519 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 519 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3));
#line 519 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 4)));
#line 519 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 5)));
#line 519 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 6)));
#line 534 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_97_97;
#line 534 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_98_98;
#line 534 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_99_99;
#line 534 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_100_100;
#line 534 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_101_101;
#line 534 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_102_102;
#line 534 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_103_103;
#line 534 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_104_104;
#line 534 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_105_105;

#line 533 "declarative_tree.m"
              {
#line 533 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_34, &mdb__declarative_tree__Call_39);
              }
#line 534 "declarative_tree.m"
              mdb__declarative_tree__NestedStartId_40 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 0));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_97_97 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 1));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 2)));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 3)));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 4)));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 5)));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 6)));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_103_103 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 7)));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 8)));
#line 534 "declarative_tree.m"
              mdb__declarative_tree__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 9)));
#line 535 "declarative_tree.m"
              {
#line 535 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__NestedStartId_40, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
              }
#line 519 "declarative_tree.m"
            }
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 1:
#line 552 "declarative_tree.m"
            {
#line 552 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_94 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 552 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 552 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3));
#line 552 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 4)));
#line 552 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 5)));
#line 552 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 6)));
#line 552 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 7)));

#line 567 "declarative_tree.m"
#line 567 "declarative_tree.m"
              switch (mdb__declarative_tree__ContourType_7) {
#line 567 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 567 "declarative_tree.m"
                case (MR_Integer) 1:
#line 565 "declarative_tree.m"
                  {
#line 565 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_82_82 = ((MR_Word) mdb__declarative_tree__NodeId_9);

#line 566 "declarative_tree.m"
                    {
#line 566 "declarative_tree.m"
                      mdb__declarative_tree__Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_82_82));
#line 566 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_11));
#line 566 "declarative_tree.m"
                    }
#line 565 "declarative_tree.m"
                  }
#line 567 "declarative_tree.m"
                  break;
#line 567 "declarative_tree.m"
                case (MR_Integer) 0:
#line 568 "declarative_tree.m"
                  {
#line 568 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Call_90;
#line 568 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__NestedStartId_91;
#line 570 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_106_106;
#line 570 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_107_107;
#line 570 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_108_108;
#line 570 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_109_109;
#line 570 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_110_110;
#line 570 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_111_111;
#line 570 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_112_112;
#line 570 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_113_113;
#line 570 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_114_114;

#line 569 "declarative_tree.m"
                    {
#line 569 "declarative_tree.m"
                      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_94, &mdb__declarative_tree__Call_90);
                    }
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__NestedStartId_91 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 0));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_106_106 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 1));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 2)));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 3)));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 4)));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 5)));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 6)));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_112_112 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 7)));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 8)));
#line 570 "declarative_tree.m"
                    mdb__declarative_tree__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 9)));
#line 571 "declarative_tree.m"
                    {
#line 571 "declarative_tree.m"
                      mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__NestedStartId_91, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
                    }
#line 568 "declarative_tree.m"
                  }
#line 567 "declarative_tree.m"
                  break;
#line 567 "declarative_tree.m"
              }
#line 552 "declarative_tree.m"
            }
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 2:
#line 591 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 3:
#line 591 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 4:
#line 591 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 5:
#line 593 "declarative_tree.m"
            {
#line 593 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondStatus_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));
#line 593 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_66_66 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 593 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2)));

#line 597 "declarative_tree.m"
#line 597 "declarative_tree.m"
              switch (mdb__declarative_tree__CondStatus_68) {
#line 597 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 597 "declarative_tree.m"
                case (MR_Integer) 1:
#line 595 "declarative_tree.m"
                  {
#line 596 "declarative_tree.m"
                    {
#line 596 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 596 "declarative_tree.m"
                      return;
                    }
#line 595 "declarative_tree.m"
                  }
#line 597 "declarative_tree.m"
                  break;
#line 597 "declarative_tree.m"
                case (MR_Integer) 0:
#line 597 "declarative_tree.m"
                case (MR_Integer) 2:
#line 601 "declarative_tree.m"
                  mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 597 "declarative_tree.m"
                  break;
#line 597 "declarative_tree.m"
              }
#line 593 "declarative_tree.m"
            }
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 6:
#line 591 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 7:
#line 548 "declarative_tree.m"
            {
#line 548 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_88 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 548 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_89 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 546 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 550 "declarative_tree.m"
              {
#line 550 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_89, mdb__declarative_tree__NestedStartId_88, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
              }
#line 548 "declarative_tree.m"
            }
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 8:
#line 604 "declarative_tree.m"
            {
#line 604 "declarative_tree.m"
              MR_Word mdb__declarative_tree__NegStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));
#line 604 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 604 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2)));

#line 608 "declarative_tree.m"
#line 608 "declarative_tree.m"
              switch (mdb__declarative_tree__ContourType_7) {
#line 608 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 608 "declarative_tree.m"
                case (MR_Integer) 1:
#line 613 "declarative_tree.m"
#line 613 "declarative_tree.m"
                  switch (mdb__declarative_tree__NegStatus_71) {
#line 613 "declarative_tree.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 613 "declarative_tree.m"
                    case (MR_Integer) 1:
#line 611 "declarative_tree.m"
                      {
#line 612 "declarative_tree.m"
                        {
#line 612 "declarative_tree.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 612 "declarative_tree.m"
                          return;
                        }
#line 611 "declarative_tree.m"
                      }
#line 613 "declarative_tree.m"
                      break;
#line 613 "declarative_tree.m"
                    case (MR_Integer) 0:
#line 613 "declarative_tree.m"
                    case (MR_Integer) 2:
#line 620 "declarative_tree.m"
                      mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 613 "declarative_tree.m"
                      break;
#line 613 "declarative_tree.m"
                  }
#line 608 "declarative_tree.m"
                  break;
#line 608 "declarative_tree.m"
                case (MR_Integer) 0:
#line 606 "declarative_tree.m"
                  {
#line 607 "declarative_tree.m"
                    {
#line 607 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 607 "declarative_tree.m"
                      return;
                    }
#line 606 "declarative_tree.m"
                  }
#line 608 "declarative_tree.m"
                  break;
#line 608 "declarative_tree.m"
              }
#line 604 "declarative_tree.m"
            }
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 9:
#line 548 "declarative_tree.m"
            {
#line 548 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_120 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 548 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_121 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 547 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_44_44 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 550 "declarative_tree.m"
              {
#line 550 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_121, mdb__declarative_tree__NestedStartId_120, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
              }
#line 548 "declarative_tree.m"
            }
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
          case (MR_Integer) 10:
#line 537 "declarative_tree.m"
            {
#line 537 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_41 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 537 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_87 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 537 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 544 "declarative_tree.m"
              {
#line 544 "declarative_tree.m"
                mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_41, mdb__declarative_tree__NestedStartId_87, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
              }
#line 537 "declarative_tree.m"
            }
#line 514 "declarative_tree.m"
            break;
#line 514 "declarative_tree.m"
        }
#line 514 "declarative_tree.m"
        break;
#line 514 "declarative_tree.m"
    }
#line 624 "declarative_tree.m"
    {
#line 624 "declarative_tree.m"
      mdb__declarative_tree__Next_72 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Node_13);
    }
#line 625 "declarative_tree.m"
    {
#line 625 "declarative_tree.m"
      mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__Next_72, mdb__declarative_tree__StartId_10, mdb__declarative_tree__Ns1_32, mdb__declarative_tree__Ns_12);
    }
#line 509 "declarative_tree.m"
  }
#line 505 "declarative_tree.m"
}

#line 494 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 494 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 494 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 494 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 494 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 494 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12)
#line 494 "declarative_tree.m"
{
#line 499 "declarative_tree.m"
  {
#line 499 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 499 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_15_15;

#line 499 "declarative_tree.m"
    {
#line 499 "declarative_tree.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_15_15);
    }
#line 499 "declarative_tree.m"
    {
#line 499 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_15, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__StartId_10);
    }
#line 499 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 500 "declarative_tree.m"
      *mdb__declarative_tree__Ns_12 = mdb__declarative_tree__Ns0_11;
#line 499 "declarative_tree.m"
    else
#line 502 "declarative_tree.m"
      {
#line 502 "declarative_tree.m"
        mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__StartId_10, mdb__declarative_tree__Ns0_11, mdb__declarative_tree__Ns_12);
      }
#line 499 "declarative_tree.m"
  }
#line 494 "declarative_tree.m"
}

#line 469 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
#line 469 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 469 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 469 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_4)
#line 469 "declarative_tree.m"
{
#line 471 "declarative_tree.m"
  {
#line 471 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 471 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_5;
#line 471 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_6_6;
#line 473 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_7_7;
#line 473 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_8_8;
#line 473 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 473 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 473 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 473 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 473 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13;
#line 473 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 473 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15;

#line 472 "declarative_tree.m"
    {
#line 472 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__Store_3, mdb__declarative_tree__Ref_4, &mdb__declarative_tree__CallNode_5);
    }
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 0));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 1));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 2)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 3)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 4)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 5)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 6)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 7)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 8)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 9)));
#line 473 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 471 "declarative_tree.m"
  }
#line 469 "declarative_tree.m"
}

#line 450 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
#line 450 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 450 "declarative_tree.m"
{
#line 450 "declarative_tree.m"
  {
#line 450 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 450 "declarative_tree.m"
    MR_builtin_longjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0, 1);
#line 450 "declarative_tree.m"
  }
#line 450 "declarative_tree.m"
}

#line 450 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
#line 450 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 450 "declarative_tree.m"
{
#line 450 "declarative_tree.m"
  {
#line 450 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 460 "declarative_tree.m"
    {
#line 460 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19);
    }
#line 460 "declarative_tree.m"
    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 460 "declarative_tree.m"
      {
#line 460 "declarative_tree.m"
        mdb__declarative_tree__missing_answer_special_case_1_p_0_1(mdb__declarative_tree__env_ptr);
      }
#line 450 "declarative_tree.m"
  }
#line 450 "declarative_tree.m"
}

#line 450 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
#line 450 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 450 "declarative_tree.m"
{
#line 450 "declarative_tree.m"
  {
#line 450 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 459 "declarative_tree.m"
    {
#line 459 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18);
    }
#line 450 "declarative_tree.m"
    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 450 "declarative_tree.m"
      {
#line 460 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_16_16 = (MR_String) "solutions";
#line 465 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19 = (MR_Word) &mdb__declarative_tree_scalar_common_2[0];
#line 465 "declarative_tree.m"
        {
#line 465 "declarative_tree.m"
          mdb__declarative_tree__missing_answer_special_case_1_p_0_3(mdb__declarative_tree__env_ptr);
        }
#line 466 "declarative_tree.m"
        {
#line 466 "declarative_tree.m"
          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[10]);
#line 466 "declarative_tree.m"
          {
#line 466 "declarative_tree.m"
            mdb__declarative_tree__missing_answer_special_case_1_p_0_3(mdb__declarative_tree__env_ptr);
          }
#line 466 "declarative_tree.m"
        }
#line 450 "declarative_tree.m"
      }
#line 450 "declarative_tree.m"
  }
#line 450 "declarative_tree.m"
}

#line 450 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
#line 450 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 450 "declarative_tree.m"
{
#line 450 "declarative_tree.m"
  {
#line 450 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 450 "declarative_tree.m"
    if (MR_builtin_setjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0) == 0)
#line 450 "declarative_tree.m"
      {
#line 450 "declarative_tree.m"
        {
#line 450 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ProcLabel_3;
#line 450 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 0)));
#line 450 "declarative_tree.m"
          MR_String mdb__declarative_tree__V_15_15;
#line 450 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21;
#line 450 "declarative_tree.m"
          MR_String mdb__declarative_tree__V_22_22;
#line 450 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_23_23;
#line 450 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_24_24;
#line 450 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_25_25;
#line 451 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 1)));
#line 453 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20;

#line 451 "declarative_tree.m"
          {
#line 451 "declarative_tree.m"
            mdb__declarative_tree__ProcLabel_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__V_8_8);
          }
#line 453 "declarative_tree.m"
          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__ProcLabel_3)) == (MR_mktag((MR_Integer) 0)));
#line 453 "declarative_tree.m"
          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 453 "declarative_tree.m"
            {
#line 453 "declarative_tree.m"
              {
#line 453 "declarative_tree.m"
                mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 0)));
#line 453 "declarative_tree.m"
                mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 1)));
#line 453 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 2)));
#line 453 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 3)));
#line 453 "declarative_tree.m"
                mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 4)));
#line 453 "declarative_tree.m"
                mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 5)));
#line 453 "declarative_tree.m"
              }
#line 450 "declarative_tree.m"
              {
#line 453 "declarative_tree.m"
                (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (mdb__declarative_tree__V_24_24 == (MR_Integer) 0);
#line 450 "declarative_tree.m"
                if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 450 "declarative_tree.m"
                  {
#line 455 "declarative_tree.m"
#line 455 "declarative_tree.m"
                    switch (mdb__declarative_tree__V_21_21) {
#line 455 "declarative_tree.m"
                      default:
#line 455 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
#line 455 "declarative_tree.m"
                        break;
#line 455 "declarative_tree.m"
                      case (MR_Integer) 4:
#line 453 "declarative_tree.m"
                        {
#line 454 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(mdb__declarative_tree__V_22_22, (MR_String) "builtin_aggregate") == 0);
#line 453 "declarative_tree.m"
                          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 453 "declarative_tree.m"
                            {
#line 453 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = mdb__declarative_tree__V_25_25;
#line 453 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = mdb__declarative_tree__V_23_23;
#line 453 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 453 "declarative_tree.m"
                            }
#line 453 "declarative_tree.m"
                        }
#line 455 "declarative_tree.m"
                        break;
#line 455 "declarative_tree.m"
                      case (MR_Integer) 6:
#line 456 "declarative_tree.m"
                        {
#line 457 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(mdb__declarative_tree__V_22_22, (MR_String) "builtin_aggregate2") == 0);
#line 456 "declarative_tree.m"
                          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 456 "declarative_tree.m"
                            {
#line 456 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = mdb__declarative_tree__V_25_25;
#line 456 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = mdb__declarative_tree__V_23_23;
#line 456 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 456 "declarative_tree.m"
                            }
#line 456 "declarative_tree.m"
                        }
#line 455 "declarative_tree.m"
                        break;
#line 455 "declarative_tree.m"
                    }
#line 450 "declarative_tree.m"
                    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 450 "declarative_tree.m"
                      {
#line 459 "declarative_tree.m"
                        mdb__declarative_tree__V_15_15 = (MR_String) "solutions";
#line 465 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18 = (MR_Word) &mdb__declarative_tree_scalar_common_2[0];
#line 465 "declarative_tree.m"
                        {
#line 465 "declarative_tree.m"
                          mdb__declarative_tree__missing_answer_special_case_1_p_0_2(mdb__declarative_tree__env_ptr);
                        }
#line 466 "declarative_tree.m"
                        {
#line 466 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[10]);
#line 466 "declarative_tree.m"
                          {
#line 466 "declarative_tree.m"
                            mdb__declarative_tree__missing_answer_special_case_1_p_0_2(mdb__declarative_tree__env_ptr);
                          }
#line 466 "declarative_tree.m"
                        }
#line 450 "declarative_tree.m"
                      }
#line 450 "declarative_tree.m"
                  }
#line 450 "declarative_tree.m"
              }
#line 453 "declarative_tree.m"
            }
#line 450 "declarative_tree.m"
        }
#line 450 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
#line 450 "declarative_tree.m"
      }
#line 450 "declarative_tree.m"
    else
#line 450 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 450 "declarative_tree.m"
  }
#line 450 "declarative_tree.m"
}

#line 448 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
#line 448 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_2)
#line 448 "declarative_tree.m"
{
#line 448 "declarative_tree.m"
  {
#line 448 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s mdb__declarative_tree__env;

#line 448 "declarative_tree.m"
    (mdb__declarative_tree__env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2 = mdb__declarative_tree__Atom_2;
#line 450 "declarative_tree.m"
    {
#line 450 "declarative_tree.m"
      mdb__declarative_tree__missing_answer_special_case_1_p_0_4(&mdb__declarative_tree__env);
    }
#line 450 "declarative_tree.m"
    return (mdb__declarative_tree__env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
#line 448 "declarative_tree.m"
  }
#line 448 "declarative_tree.m"
}

#line 341 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90,
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Weighting_10,
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 341 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevWeight_13,
#line 341 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Weight_14,
#line 341 "declarative_tree.m"
  MR_Word mdb__declarative_tree__RecordDups_15,
#line 341 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__DupFactor_16,
#line 341 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevDupWeight_17,
#line 341 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Excess_18)
#line 341 "declarative_tree.m"
{
#line 346 "declarative_tree.m"
  while (MR_TRUE)
#line 346 "declarative_tree.m"
    {
#line 346 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 346 "declarative_tree.m"
      {
#line 346 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 346 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Store_11 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 346 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Ref_12 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 346 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Final_19;
#line 348 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_21;
#line 348 "declarative_tree.m"
        MR_Box mdb__declarative_tree__RedoId_22;
#line 348 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__FinalEvent_24;
#line 348 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__FinalSuspicion_27;
#line 348 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NewRecordDups_28;

#line 347 "declarative_tree.m"
        {
#line 347 "declarative_tree.m"
          mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__Ref_12, &mdb__declarative_tree__Final_19);
        }
#line 353 "declarative_tree.m"
#line 353 "declarative_tree.m"
        switch (MR_tag((MR_Word) mdb__declarative_tree__Final_19)) {
#line 353 "declarative_tree.m"
          default:
#line 353 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_FALSE;
#line 353 "declarative_tree.m"
            break;
#line 353 "declarative_tree.m"
          case (MR_Integer) 1:
#line 351 "declarative_tree.m"
            {
#line 350 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 0));
#line 350 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_23_23;
#line 350 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25;
#line 350 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_26_26;

#line 350 "declarative_tree.m"
              mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 350 "declarative_tree.m"
              mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 350 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 3)));
#line 350 "declarative_tree.m"
              mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 350 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 350 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 350 "declarative_tree.m"
              mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 7)));
#line 352 "declarative_tree.m"
              mdb__declarative_tree__NewRecordDups_28 = mdb__declarative_tree__RecordDups_15;
#line 351 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 351 "declarative_tree.m"
            }
#line 353 "declarative_tree.m"
            break;
#line 353 "declarative_tree.m"
          case (MR_Integer) 3:
#line 353 "declarative_tree.m"
#line 353 "declarative_tree.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 0)))) {
#line 353 "declarative_tree.m"
              default:
#line 353 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_FALSE;
#line 353 "declarative_tree.m"
                break;
#line 353 "declarative_tree.m"
              case (MR_Integer) 0:
#line 355 "declarative_tree.m"
                {
#line 354 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 354 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_30_30;

#line 354 "declarative_tree.m"
                  mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 354 "declarative_tree.m"
                  mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 3));
#line 354 "declarative_tree.m"
                  mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 354 "declarative_tree.m"
                  mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 354 "declarative_tree.m"
                  mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 356 "declarative_tree.m"
                  mdb__declarative_tree__NewRecordDups_28 = (MR_Integer) 1;
#line 355 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 355 "declarative_tree.m"
                }
#line 353 "declarative_tree.m"
                break;
#line 353 "declarative_tree.m"
              case (MR_Integer) 1:
#line 359 "declarative_tree.m"
                {
#line 358 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 358 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_32_32;
#line 358 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_33_33;

#line 358 "declarative_tree.m"
                  mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 358 "declarative_tree.m"
                  mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 3));
#line 358 "declarative_tree.m"
                  mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 358 "declarative_tree.m"
                  mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 358 "declarative_tree.m"
                  mdb__declarative_tree__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 358 "declarative_tree.m"
                  mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 7)));
#line 360 "declarative_tree.m"
                  mdb__declarative_tree__NewRecordDups_28 = (MR_Integer) 1;
#line 359 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 359 "declarative_tree.m"
                }
#line 353 "declarative_tree.m"
                break;
#line 353 "declarative_tree.m"
            }
#line 353 "declarative_tree.m"
            break;
#line 353 "declarative_tree.m"
        }
#line 348 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 363 "declarative_tree.m"
          {
#line 363 "declarative_tree.m"
            MR_Box mdb__declarative_tree__ExitId_36;
#line 363 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__RedoEvent_37;
#line 363 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__RedoSuspicion_39;
#line 364 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Redo_34;
#line 365 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_35_35;
#line 365 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_38_38;

#line 364 "declarative_tree.m"
            {
#line 364 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__RedoId_22, &mdb__declarative_tree__Redo_34);
            }
#line 364 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 364 "declarative_tree.m"
              {
#line 365 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 0));
#line 365 "declarative_tree.m"
                mdb__declarative_tree__ExitId_36 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 1));
#line 365 "declarative_tree.m"
                mdb__declarative_tree__RedoEvent_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 2)));
#line 365 "declarative_tree.m"
                mdb__declarative_tree__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 3)));
#line 365 "declarative_tree.m"
                mdb__declarative_tree__RedoSuspicion_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 4)));
#line 365 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 364 "declarative_tree.m"
              }
#line 363 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 381 "declarative_tree.m"
              {
#line 381 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewPrevDupWeight_40;
#line 381 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewPrevWeight_41;
#line 381 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_56_56;
#line 381 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_57_57;

#line 17717 "mdb.declarative_tree.c"
#line 17718 "mdb.declarative_tree.c"
                switch (mdb__declarative_tree__NewRecordDups_28) {
#line 17720 "mdb.declarative_tree.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 17722 "mdb.declarative_tree.c"
                  case (MR_Integer) 0:
#line 17724 "mdb.declarative_tree.c"
                    {
#line 380 "declarative_tree.m"
                      mdb__declarative_tree__NewPrevDupWeight_40 = (MR_Integer) 0;
#line 385 "declarative_tree.m"
#line 385 "declarative_tree.m"
                      switch (mdb__declarative_tree__Weighting_10) {
#line 385 "declarative_tree.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 385 "declarative_tree.m"
                        case (MR_Integer) 0:
#line 383 "declarative_tree.m"
                          {
#line 383 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__V_52_52;
#line 383 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__V_53_53 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);

#line 384 "declarative_tree.m"
                            mdb__declarative_tree__V_52_52 = (mdb__declarative_tree__V_53_53 - mdb__declarative_tree__RedoEvent_37);
#line 384 "declarative_tree.m"
                            mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_52_52 + (MR_Integer) 1);
#line 383 "declarative_tree.m"
                          }
#line 385 "declarative_tree.m"
                          break;
#line 385 "declarative_tree.m"
                        case (MR_Integer) 1:
#line 386 "declarative_tree.m"
                          {
#line 386 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__V_51_51 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);

#line 387 "declarative_tree.m"
                            mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_51_51 - mdb__declarative_tree__RedoSuspicion_39);
#line 386 "declarative_tree.m"
                          }
#line 385 "declarative_tree.m"
                          break;
#line 385 "declarative_tree.m"
                      }
#line 17765 "mdb.declarative_tree.c"
                    }
#line 17767 "mdb.declarative_tree.c"
                    break;
#line 17769 "mdb.declarative_tree.c"
                  case (MR_Integer) 1:
#line 17771 "mdb.declarative_tree.c"
#line 17772 "mdb.declarative_tree.c"
                    switch (mdb__declarative_tree__Weighting_10) {
#line 17774 "mdb.declarative_tree.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 17776 "mdb.declarative_tree.c"
                      case (MR_Integer) 0:
#line 17778 "mdb.declarative_tree.c"
                        {
#line 17780 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_47_47;
#line 17782 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_48_48;
#line 17784 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_49_49 = (mdb__declarative_tree__FinalEvent_24 - mdb__declarative_tree__RedoEvent_37);
#line 17786 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_92_92;
#line 17788 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_93_93;

#line 372 "declarative_tree.m"
                          mdb__declarative_tree__V_48_48 = (mdb__declarative_tree__V_49_49 + (MR_Integer) 1);
#line 372 "declarative_tree.m"
                          mdb__declarative_tree__V_47_47 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_48_48);
#line 371 "declarative_tree.m"
                          mdb__declarative_tree__NewPrevDupWeight_40 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_47_47);
#line 384 "declarative_tree.m"
                          mdb__declarative_tree__V_93_93 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);
#line 384 "declarative_tree.m"
                          mdb__declarative_tree__V_92_92 = (mdb__declarative_tree__V_93_93 - mdb__declarative_tree__RedoEvent_37);
#line 384 "declarative_tree.m"
                          mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_92_92 + (MR_Integer) 1);
#line 17803 "mdb.declarative_tree.c"
                        }
#line 17805 "mdb.declarative_tree.c"
                        break;
#line 17807 "mdb.declarative_tree.c"
                      case (MR_Integer) 1:
#line 17809 "mdb.declarative_tree.c"
                        {
#line 17811 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_45_45;
#line 17813 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_46_46 = (mdb__declarative_tree__FinalSuspicion_27 - mdb__declarative_tree__RedoSuspicion_39);
#line 17815 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_95_95;

#line 376 "declarative_tree.m"
                          mdb__declarative_tree__V_45_45 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_46_46);
#line 375 "declarative_tree.m"
                          mdb__declarative_tree__NewPrevDupWeight_40 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_45_45);
#line 387 "declarative_tree.m"
                          mdb__declarative_tree__V_95_95 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);
#line 387 "declarative_tree.m"
                          mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_95_95 - mdb__declarative_tree__RedoSuspicion_39);
#line 17826 "mdb.declarative_tree.c"
                        }
#line 17828 "mdb.declarative_tree.c"
                        break;
#line 17830 "mdb.declarative_tree.c"
                    }
#line 17832 "mdb.declarative_tree.c"
                    break;
#line 17834 "mdb.declarative_tree.c"
                }
#line 389 "declarative_tree.m"
                mdb__declarative_tree__V_56_56 = ((MR_Word) mdb__declarative_tree__ExitId_36);
#line 391 "declarative_tree.m"
                mdb__declarative_tree__V_57_57 = (mdb__declarative_tree__DupFactor_16 + (MR_Integer) 1);
#line 389 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 389 "declarative_tree.m"
                {
#line 389 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__3__tmp_copy_3 = mdb__declarative_tree__V_56_56;
#line 389 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__PrevWeight__tmp_copy_13 = mdb__declarative_tree__NewPrevWeight_41;
#line 389 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__RecordDups__tmp_copy_15 = mdb__declarative_tree__NewRecordDups_28;
#line 389 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__DupFactor__tmp_copy_16 = mdb__declarative_tree__V_57_57;
#line 389 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__PrevDupWeight__tmp_copy_17 = mdb__declarative_tree__NewPrevDupWeight_40;

#line 389 "declarative_tree.m"
                  mdb__declarative_tree__PrevDupWeight_17 = mdb__declarative_tree__PrevDupWeight__tmp_copy_17;
#line 389 "declarative_tree.m"
                  mdb__declarative_tree__DupFactor_16 = mdb__declarative_tree__DupFactor__tmp_copy_16;
#line 389 "declarative_tree.m"
                  mdb__declarative_tree__RecordDups_15 = mdb__declarative_tree__RecordDups__tmp_copy_15;
#line 389 "declarative_tree.m"
                  mdb__declarative_tree__PrevWeight_13 = mdb__declarative_tree__PrevWeight__tmp_copy_13;
#line 389 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__HeadVar__3__tmp_copy_3;
#line 389 "declarative_tree.m"
                }
#line 389 "declarative_tree.m"
                continue;
#line 381 "declarative_tree.m"
              }
#line 363 "declarative_tree.m"
            else
#line 393 "declarative_tree.m"
              {
#line 393 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Call_42;
#line 393 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CallEvent_43;
#line 393 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CallSuspicion_44;
#line 394 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_72_72;
#line 394 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_73_73;
#line 394 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_74_74;
#line 394 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_75_75;
#line 394 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_76_76;
#line 394 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_77_77;
#line 394 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_78_78;
#line 394 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_79_79;

#line 393 "declarative_tree.m"
                {
#line 393 "declarative_tree.m"
                  mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__CallId_21, &mdb__declarative_tree__Call_42);
                }
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 0));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_73_73 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 1));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 2)));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 3)));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__CallEvent_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 4)));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 5)));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 6)));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 7)));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 8)));
#line 394 "declarative_tree.m"
                mdb__declarative_tree__CallSuspicion_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 9)));
#line 399 "declarative_tree.m"
#line 399 "declarative_tree.m"
                switch (mdb__declarative_tree__Weighting_10) {
#line 399 "declarative_tree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 399 "declarative_tree.m"
                  case (MR_Integer) 0:
#line 397 "declarative_tree.m"
                    {
#line 397 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_60_60;
#line 397 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_61_61 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);

#line 398 "declarative_tree.m"
                      mdb__declarative_tree__V_60_60 = (mdb__declarative_tree__V_61_61 - mdb__declarative_tree__CallEvent_43);
#line 398 "declarative_tree.m"
                      *mdb__declarative_tree__Weight_14 = (mdb__declarative_tree__V_60_60 + (MR_Integer) 1);
#line 397 "declarative_tree.m"
                    }
#line 399 "declarative_tree.m"
                    break;
#line 399 "declarative_tree.m"
                  case (MR_Integer) 1:
#line 400 "declarative_tree.m"
                    {
#line 400 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_59_59 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);

#line 401 "declarative_tree.m"
                      *mdb__declarative_tree__Weight_14 = (mdb__declarative_tree__V_59_59 - mdb__declarative_tree__CallSuspicion_44);
#line 400 "declarative_tree.m"
                    }
#line 399 "declarative_tree.m"
                    break;
#line 399 "declarative_tree.m"
                }
#line 414 "declarative_tree.m"
#line 414 "declarative_tree.m"
                switch (mdb__declarative_tree__NewRecordDups_28) {
#line 414 "declarative_tree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 414 "declarative_tree.m"
                  case (MR_Integer) 0:
#line 416 "declarative_tree.m"
                    *mdb__declarative_tree__Excess_18 = (MR_Integer) 0;
#line 414 "declarative_tree.m"
                    break;
#line 414 "declarative_tree.m"
                  case (MR_Integer) 1:
#line 409 "declarative_tree.m"
#line 409 "declarative_tree.m"
                    switch (mdb__declarative_tree__Weighting_10) {
#line 409 "declarative_tree.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 409 "declarative_tree.m"
                      case (MR_Integer) 0:
#line 406 "declarative_tree.m"
                        {
#line 406 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_65_65;
#line 406 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_66_66;
#line 406 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_67_67 = (mdb__declarative_tree__FinalEvent_24 - mdb__declarative_tree__CallEvent_43);

#line 408 "declarative_tree.m"
                          mdb__declarative_tree__V_66_66 = (mdb__declarative_tree__V_67_67 + (MR_Integer) 1);
#line 407 "declarative_tree.m"
                          mdb__declarative_tree__V_65_65 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_66_66);
#line 407 "declarative_tree.m"
                          *mdb__declarative_tree__Excess_18 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_65_65);
#line 406 "declarative_tree.m"
                        }
#line 409 "declarative_tree.m"
                        break;
#line 409 "declarative_tree.m"
                      case (MR_Integer) 1:
#line 410 "declarative_tree.m"
                        {
#line 410 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_63_63;
#line 410 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_64_64 = (mdb__declarative_tree__FinalSuspicion_27 - mdb__declarative_tree__CallSuspicion_44);

#line 411 "declarative_tree.m"
                          mdb__declarative_tree__V_63_63 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_64_64);
#line 411 "declarative_tree.m"
                          *mdb__declarative_tree__Excess_18 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_63_63);
#line 410 "declarative_tree.m"
                        }
#line 409 "declarative_tree.m"
                        break;
#line 409 "declarative_tree.m"
                    }
#line 414 "declarative_tree.m"
                    break;
#line 414 "declarative_tree.m"
                }
#line 393 "declarative_tree.m"
              }
#line 363 "declarative_tree.m"
          }
#line 348 "declarative_tree.m"
        else
#line 420 "declarative_tree.m"
          {
#line 420 "declarative_tree.m"
            {
#line 420 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[9])));
#line 420 "declarative_tree.m"
              return;
            }
#line 420 "declarative_tree.m"
          }
#line 346 "declarative_tree.m"
      }
#line 346 "declarative_tree.m"
      break;
#line 346 "declarative_tree.m"
    }
#line 341 "declarative_tree.m"
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
#line 181 "declarative_tree.m"
  while (MR_TRUE)
#line 181 "declarative_tree.m"
    {
#line 181 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 181 "declarative_tree.m"
      {
#line 181 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 181 "declarative_tree.m"
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
#line 181 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 184 "declarative_tree.m"
          {
#line 184 "declarative_tree.m"
            MR_Word mdb__declarative_tree__TypeInfo_40_62;
#line 184 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ExitNode_14;
#line 184 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NextId_15;
#line 184 "declarative_tree.m"
            MR_Word mdb__declarative_tree__DeclAtom_16;
#line 184 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_18_18;
#line 184 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ExitAtom_30;
#line 184 "declarative_tree.m"
            MR_Box mdb__declarative_tree__CallId_31;
#line 184 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Call_32;
#line 184 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__CallIoSeq_33;
#line 184 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__ExitIoSeq_34;
#line 185 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_19_19;
#line 185 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_20_20;
#line 185 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_21_21;
#line 185 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_22_22;
#line 185 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_23_23;
#line 185 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_24_24;
#line 185 "declarative_tree.m"
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

#line 184 "declarative_tree.m"
            {
#line 184 "declarative_tree.m"
              mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, mdb__declarative_tree__Store_5, mdb__declarative_tree__ExitId_10, &mdb__declarative_tree__ExitNode_14);
            }
#line 185 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 185 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 185 "declarative_tree.m"
            mdb__declarative_tree__NextId_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 185 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 185 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 185 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 185 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 185 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 105 "declarative_tree.m"
            {
#line 105 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
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
#line 110 "declarative_tree.m"
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
#line 114 "declarative_tree.m"
                {
#line 114 "declarative_tree.m"
                  mdb__declarative_tree__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 114 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_36_36, 0) = ((MR_Box) (mdb__declarative_tree__V_37_37));
#line 114 "declarative_tree.m"
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
#line 187 "declarative_tree.m"
            {
#line 187 "declarative_tree.m"
              mdb__declarative_tree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_18_18, 0) = ((MR_Box) (mdb__declarative_tree__DeclAtom_16));
#line 187 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_18_18, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtoms0_7));
#line 187 "declarative_tree.m"
            }
#line 187 "declarative_tree.m"
            /* direct tailcall eliminated */
#line 187 "declarative_tree.m"
            {
#line 187 "declarative_tree.m"
              MR_Box mdb__declarative_tree__RedoId__tmp_copy_6 = mdb__declarative_tree__NextId_15;
#line 187 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DeclAtoms0__tmp_copy_7 = mdb__declarative_tree__V_18_18;

#line 187 "declarative_tree.m"
              mdb__declarative_tree__DeclAtoms0_7 = mdb__declarative_tree__DeclAtoms0__tmp_copy_7;
#line 187 "declarative_tree.m"
              mdb__declarative_tree__RedoId_6 = mdb__declarative_tree__RedoId__tmp_copy_6;
#line 187 "declarative_tree.m"
            }
#line 187 "declarative_tree.m"
            continue;
#line 184 "declarative_tree.m"
          }
#line 181 "declarative_tree.m"
        else
#line 189 "declarative_tree.m"
          *mdb__declarative_tree__DeclAtoms_8 = mdb__declarative_tree__DeclAtoms0_7;
#line 181 "declarative_tree.m"
      }
#line 181 "declarative_tree.m"
      break;
#line 181 "declarative_tree.m"
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
#line 132 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_7)) {
#line 132 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 132 "declarative_tree.m"
      case (MR_Integer) 1:
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
#line 121 "declarative_tree.m"
          {
#line 121 "declarative_tree.m"
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
        break;
#line 132 "declarative_tree.m"
      case (MR_Integer) 3:
#line 132 "declarative_tree.m"
#line 132 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) {
#line 132 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 132 "declarative_tree.m"
          case (MR_Integer) 0:
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
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
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
#line 132 "declarative_tree.m"
            break;
#line 132 "declarative_tree.m"
          case (MR_Integer) 1:
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
#line 121 "declarative_tree.m"
              {
#line 121 "declarative_tree.m"
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
            break;
#line 132 "declarative_tree.m"
        }
#line 132 "declarative_tree.m"
        break;
#line 132 "declarative_tree.m"
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
#line 306 "declarative_tree.m"
  {
#line 306 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 306 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 306 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 306 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_7;
#line 306 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_8;
#line 306 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 1856 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_25;
#line 1857 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_23;
#line 98 "mdb.declarative_execution.int"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 98 "mdb.declarative_execution.int"
    MR_Box mdb__declarative_tree__conv1_Node0_23;
#line 309 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_10_10;
#line 309 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_11_11;
#line 309 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 309 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_13_13;
#line 309 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 309 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15;
#line 309 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_16_16;
#line 309 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17;
#line 309 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_18_18;

#line 98 "mdb.declarative_execution.int"
    {
#line 98 "mdb.declarative_execution.int"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_23);
    }
#line 98 "mdb.declarative_execution.int"
    if (mdb__declarative_tree__succeeded)
#line 98 "mdb.declarative_execution.int"
      {
#line 98 "mdb.declarative_execution.int"
        mdb__declarative_tree__Node0_23 = ((MR_Word) mdb__declarative_tree__conv1_Node0_23);
#line 98 "mdb.declarative_execution.int"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 98 "mdb.declarative_execution.int"
      }
#line 1857 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1859 "declarative_tree.m"
#line 1859 "declarative_tree.m"
      switch (MR_tag((MR_Word) mdb__declarative_tree__Node0_23)) {
#line 1859 "declarative_tree.m"
        default:
#line 1859 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
        case (MR_Integer) 1:
#line 1858 "declarative_tree.m"
          {
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 0));
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_26_26;
#line 1858 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_27_27;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_28_28;
#line 1858 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_30_30;
#line 1858 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_31_31;

#line 1858 "declarative_tree.m"
            mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 3)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 7)));
#line 1858 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1858 "declarative_tree.m"
          }
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
        case (MR_Integer) 3:
#line 1859 "declarative_tree.m"
#line 1859 "declarative_tree.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 0)))) {
#line 1859 "declarative_tree.m"
            default:
#line 1859 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1859 "declarative_tree.m"
              {
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_33_33;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_34_34;
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_35_35;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_36_36;

#line 1859 "declarative_tree.m"
                mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 3));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1859 "declarative_tree.m"
              }
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1860 "declarative_tree.m"
              {
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_38_38;
#line 1860 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_39_39;
#line 1860 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_40_40;
#line 1860 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_41_41;
#line 1860 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_42_42;

#line 1860 "declarative_tree.m"
                mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 3));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 7)));
#line 1860 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1860 "declarative_tree.m"
              }
#line 1859 "declarative_tree.m"
              break;
#line 1859 "declarative_tree.m"
          }
#line 1859 "declarative_tree.m"
          break;
#line 1859 "declarative_tree.m"
      }
#line 1856 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1863 "declarative_tree.m"
      mdb__declarative_tree__CallId_7 = mdb__declarative_tree__CallId0_25;
#line 1856 "declarative_tree.m"
    else
#line 1865 "declarative_tree.m"
      {
#line 1865 "declarative_tree.m"
        {
#line 1865 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1865 "declarative_tree.m"
      }
#line 308 "declarative_tree.m"
    {
#line 308 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_7, &mdb__declarative_tree__CallNode_8);
    }
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 309 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 309 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 309 "declarative_tree.m"
      *mdb__declarative_tree__ImplicitTreeInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_9_9, (MR_Integer) 0)));
#line 306 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 306 "declarative_tree.m"
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
#line 1870 "declarative_tree.m"
  {
#line 1870 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1870 "declarative_tree.m"
    {
#line 1870 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_97_116_111_109_95_115_117_98_116_101_114_109_95_105_115_95_103_114_111_117_110_100_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__ArgPos_6);
    }
#line 1870 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1870 "declarative_tree.m"
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
#line 1820 "declarative_tree.m"
  {
#line 1820 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1820 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 1820 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;
#line 1820 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Call_13;
#line 1820 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_28;
#line 1827 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_30_30;
#line 1827 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_31_31;
#line 1827 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_32_32;
#line 1827 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_33_33;
#line 1827 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_34_34;
#line 1827 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_35_35;
#line 1827 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_36_36;
#line 1827 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_37_37;

#line 1821 "declarative_tree.m"
    {
#line 1821 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_11);
    }
#line 1823 "declarative_tree.m"
#line 1823 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_11)) {
#line 1823 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1823 "declarative_tree.m"
      case (MR_Integer) 1:
#line 1822 "declarative_tree.m"
        {
#line 1822 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 1822 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_14_14;
#line 1822 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_15_15;
#line 1822 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_16_16;
#line 1822 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_17_17;
#line 1822 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18;

#line 1822 "declarative_tree.m"
          mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1822 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1822 "declarative_tree.m"
          mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 1822 "declarative_tree.m"
          *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1822 "declarative_tree.m"
          mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1822 "declarative_tree.m"
          mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1822 "declarative_tree.m"
          mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1822 "declarative_tree.m"
        }
#line 1823 "declarative_tree.m"
        break;
#line 1823 "declarative_tree.m"
      case (MR_Integer) 3:
#line 1823 "declarative_tree.m"
#line 1823 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) {
#line 1823 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1823 "declarative_tree.m"
          case (MR_Integer) 0:
#line 1823 "declarative_tree.m"
            {
#line 1823 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1823 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20;
#line 1823 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_21_21;
#line 1823 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_22_22;

#line 1823 "declarative_tree.m"
              mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1823 "declarative_tree.m"
              mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 1823 "declarative_tree.m"
              *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1823 "declarative_tree.m"
              mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1823 "declarative_tree.m"
              mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1823 "declarative_tree.m"
            }
#line 1823 "declarative_tree.m"
            break;
#line 1823 "declarative_tree.m"
          case (MR_Integer) 1:
#line 1824 "declarative_tree.m"
            {
#line 1824 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1824 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24;
#line 1824 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_25_25;
#line 1824 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26;
#line 1824 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;

#line 1824 "declarative_tree.m"
              mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1824 "declarative_tree.m"
              mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 1824 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1824 "declarative_tree.m"
              *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1824 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1824 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1824 "declarative_tree.m"
            }
#line 1823 "declarative_tree.m"
            break;
#line 1823 "declarative_tree.m"
        }
#line 1823 "declarative_tree.m"
        break;
#line 1823 "declarative_tree.m"
    }
#line 1826 "declarative_tree.m"
    {
#line 1826 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47, mdb__declarative_tree__Store_6, mdb__declarative_tree__Call_13, &mdb__declarative_tree__CallNode_28);
    }
#line 1827 "declarative_tree.m"
    *mdb__declarative_tree__CallPreceding_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 0));
#line 1827 "declarative_tree.m"
    mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 1));
#line 1827 "declarative_tree.m"
    mdb__declarative_tree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 2)));
#line 1827 "declarative_tree.m"
    *mdb__declarative_tree__SeqNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 3)));
#line 1827 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 4)));
#line 1827 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 5)));
#line 1827 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 6)));
#line 1827 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 7)));
#line 1827 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 8)));
#line 1827 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 9)));
#line 1820 "declarative_tree.m"
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
