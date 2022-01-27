/*
** Automatically generated from `declarative_tree.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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



#line 1883 "declarative_tree.m"
struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s {
#line 1886 "declarative_tree.m"
  MR_bool mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
#line 1886 "declarative_tree.m"
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6;
#line 1891 "declarative_tree.m"
  jmp_buf mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0;
#line 1891 "declarative_tree.m"
  MR_Word mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7;
#line 1892 "declarative_tree.m"
  MR_Box mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7;
#line 1883 "declarative_tree.m"
};

#line 447 "declarative_tree.m"
struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s {
#line 447 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2;
#line 449 "declarative_tree.m"
  MR_bool mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
#line 449 "declarative_tree.m"
  jmp_buf mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0;
#line 449 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4;
#line 449 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5;
#line 449 "declarative_tree.m"
  MR_String mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_16_16;
#line 449 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18;
#line 449 "declarative_tree.m"
  MR_Word mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19;
#line 447 "declarative_tree.m"
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

#line 1899 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
#line 1899 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_9_9,
#line 1899 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_10_10,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 1899 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 1899 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1899 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 1899 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1899 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1899 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6);

#line 86 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5);

#line 1745 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_12,
#line 1745 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_13,
#line 1745 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_14,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_15,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeNodeId_16,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Prims_17,
#line 1745 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_18,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_19,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_21,
#line 1745 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_22);

#line 1557 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
#line 1557 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1557 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 1552 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
#line 1552 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1552 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1552 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath0_3,
#line 1552 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_5,
#line 1552 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_6);

#line 1355 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
#line 1355 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1355 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__2_2);

#line 946 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
#line 946 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49,
#line 946 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 946 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_7,
#line 946 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_8,
#line 946 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10);

#line 1649 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1649__1_2_p_0(
#line 1649 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1649 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_43);

#line 1661 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1661__1_2_p_0(
#line 1661 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1661 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_114);

#line 1183 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1183__1_3_p_0(
#line 1183 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1183 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AdjustedContour_21,
#line 1183 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_29);

#line 272 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
#line 272 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_127,
#line 272 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 272 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 94 "declarative_tree.m"
static MR_Integer MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 93 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 92 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 92 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3,
#line 92 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 91 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(
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
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 90 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__3_3,
#line 90 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__4_4);

#line 89 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 88 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 87 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 86 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5);

#line 900 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
#line 900 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 900 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 85 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 85 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5,
#line 85 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__6_6);

#line 84 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 84 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 84 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 83 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(
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
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 82 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 81 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 81 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 81 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 80 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(
#line 80 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 80 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 80 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 80 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3);

#line 770 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_15,
#line 770 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 770 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1112 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_14,
#line 1112 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 1112 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1737 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
#line 1737 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1737 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1737 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 1737 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
#line 1737 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1737 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 777 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
#line 777 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 777 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 777 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 777 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
#line 777 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 777 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 774 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
#line 774 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 774 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 774 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 774 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
#line 774 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 774 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 740 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_35,
#line 740 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 740 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_19,
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 486 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
#line 486 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 486 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 486 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 486 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
#line 486 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_1,
#line 486 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 779 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_23,
#line 779 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3);

#line 779 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_17,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2);

#line 1891 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
#line 1891 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1892 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
#line 1892 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1891 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
#line 1891 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1891 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
#line 1891 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 1883 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
#line 1883 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21,
#line 1883 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 1883 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_4);

#line 1835 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
#line 1835 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32,
#line 1835 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1835 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 1835 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Node_6);

#line 1805 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
#line 1805 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1805 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_2,
#line 1805 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Pos_3,
#line 1805 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ArgPos_4);

#line 1800 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
#line 1800 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_4,
#line 1800 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_5);

#line 1778 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
#line 1778 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__TracingOn_1);

#line 1767 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
#line 1767 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1767 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ParentPath_2,
#line 1767 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__N_3,
#line 1767 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4);

#line 1725 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
#line 1725 "declarative_tree.m"
  MR_String mdb__declarative_tree__Module_5,
#line 1725 "declarative_tree.m"
  MR_String mdb__declarative_tree__Name_6,
#line 1725 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_7,
#line 1725 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__NewVar_8);

#line 1540 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
#line 1540 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_5,
#line 1540 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_6,
#line 1540 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_7,
#line 1540 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Var_8);

#line 1528 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
#line 1528 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalId_3,
#line 1528 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_4);

#line 1384 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145,
#line 1384 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_17,
#line 1384 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_18,
#line 1384 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_19,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_20,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoal_21,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalArgs_22,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_23,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_24,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_25,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_26,
#line 1384 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_27,
#line 1384 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_28,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_29,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_30,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_31);

#line 1217 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177,
#line 1217 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_13,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Goal_14,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_15,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_16,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_17,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_18,
#line 1217 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_19,
#line 1217 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_20,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_21,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_22,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_23);

#line 1139 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1139 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_11,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_12,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_13,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_14,
#line 1139 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_15,
#line 1139 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_16,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_17,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_18,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_19);

#line 1105 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
#line 1105 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 1105 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1105 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1105 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__FinalAtom_7);

#line 1103 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
#line 1103 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1103 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 1103 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__wrapper_arg_2);

#line 1095 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
#line 1095 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 1095 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1095 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_5,
#line 1095 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ExitAtoms_6);

#line 1065 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
#line 1065 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34,
#line 1065 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1065 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 1065 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Node_8,
#line 1065 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Nodes0_9,
#line 1065 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Nodes_10);

#line 1042 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
#line 1042 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25,
#line 1042 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1042 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_5,
#line 1042 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ParentCallNode_6);

#line 1011 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
#line 1011 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_25,
#line 1011 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_5,
#line 1011 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_6,
#line 1011 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_7,
#line 1011 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_8);

#line 993 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
#line 993 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42,
#line 993 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 993 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_7,
#line 993 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_8,
#line 993 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_9,
#line 993 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10);

#line 940 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
#line 940 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 940 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1);

#line 841 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
#line 841 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43,
#line 841 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_9,
#line 841 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_10,
#line 841 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_11,
#line 841 "declarative_tree.m"
  MR_Word mdb__declarative_tree__StartLoc_12,
#line 841 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_13,
#line 841 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_14,
#line 841 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_15,
#line 841 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_16);

#line 636 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
#line 636 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84,
#line 636 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 636 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 636 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 636 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 636 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10);

#line 626 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
#line 626 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11,
#line 626 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 626 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 626 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 626 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 626 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10);

#line 504 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
#line 504 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115,
#line 504 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 504 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 504 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 504 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 504 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 504 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12);

#line 493 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
#line 493 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13,
#line 493 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 493 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 493 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 493 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 493 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 493 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12);

#line 468 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
#line 468 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 468 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 468 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_4);

#line 449 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
#line 449 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 449 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
#line 449 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 449 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
#line 449 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 449 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
#line 449 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg);

#line 447 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
#line 447 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_2);

#line 340 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90,
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Weighting_10,
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 340 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevWeight_13,
#line 340 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Weight_14,
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__RecordDups_15,
#line 340 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__DupFactor_16,
#line 340 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevDupWeight_17,
#line 340 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Excess_18);

#line 175 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_answers_4_p_0(
#line 175 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26,
#line 175 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_5,
#line 175 "declarative_tree.m"
  MR_Box mdb__declarative_tree__RedoId_6,
#line 175 "declarative_tree.m"
  MR_Word mdb__declarative_tree__DeclAtoms0_7,
#line 175 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__DeclAtoms_8);

#line 123 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(
#line 123 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29,
#line 123 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 123 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 123 "declarative_tree.m"
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

#line 1899 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(
#line 1899 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_9_9,
#line 1899 "declarative_tree.m"
  MR_Word mdb__declarative_tree__V_10_10,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1899 "declarative_tree.m"
{
#line 1905 "declarative_tree.m"
  {
#line 1905 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1185 "declarative_tree.m"
    {
#line 1185 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[0], ((MR_Box) (mdb__declarative_tree__V_9_9)), ((MR_Box) (mdb__declarative_tree__V_10_10)));
    }
#line 1905 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1904 "declarative_tree.m"
      {
#line 1904 "declarative_tree.m"
      }
#line 1905 "declarative_tree.m"
    else
#line 1906 "declarative_tree.m"
      {
#line 1906 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1906 "declarative_tree.m"
        {
#line 1906 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1906 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1906 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1906 "declarative_tree.m"
        }
#line 1906 "declarative_tree.m"
        {
#line 1906 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1906 "declarative_tree.m"
          return;
        }
#line 1906 "declarative_tree.m"
      }
#line 1905 "declarative_tree.m"
  }
#line 1899 "declarative_tree.m"
}

#line 1899 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(
#line 1899 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1899 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1899 "declarative_tree.m"
{
#line 1905 "declarative_tree.m"
  {
#line 1905 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1903 "declarative_tree.m"
    {
#line 1903 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1661__1_2_p_0(mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_10_10);
    }
#line 1905 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1904 "declarative_tree.m"
      {
#line 1904 "declarative_tree.m"
      }
#line 1905 "declarative_tree.m"
    else
#line 1906 "declarative_tree.m"
      {
#line 1906 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1906 "declarative_tree.m"
        {
#line 1906 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1906 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1906 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1906 "declarative_tree.m"
        }
#line 1906 "declarative_tree.m"
        {
#line 1906 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1906 "declarative_tree.m"
          return;
        }
#line 1906 "declarative_tree.m"
      }
#line 1905 "declarative_tree.m"
  }
#line 1899 "declarative_tree.m"
}

#line 1899 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(
#line 1899 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_9_9,
#line 1899 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__V_10_10,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Loc_5,
#line 1899 "declarative_tree.m"
  MR_String mdb__declarative_tree__Msg_6)
#line 1899 "declarative_tree.m"
{
#line 1905 "declarative_tree.m"
  {
#line 1905 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1903 "declarative_tree.m"
    {
#line 1903 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1649__1_2_p_0(mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_10_10);
    }
#line 1905 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1904 "declarative_tree.m"
      {
#line 1904 "declarative_tree.m"
      }
#line 1905 "declarative_tree.m"
    else
#line 1906 "declarative_tree.m"
      {
#line 1906 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7;

#line 1906 "declarative_tree.m"
        {
#line 1906 "declarative_tree.m"
          mdb__declarative_tree__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1906 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 0) = ((MR_Box) (mdb__declarative_tree__Loc_5));
#line 1906 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_7_7, 1) = ((MR_Box) (mdb__declarative_tree__Msg_6));
#line 1906 "declarative_tree.m"
        }
#line 1906 "declarative_tree.m"
        {
#line 1906 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_tree__V_7_7)));
#line 1906 "declarative_tree.m"
          return;
        }
#line 1906 "declarative_tree.m"
      }
#line 1905 "declarative_tree.m"
  }
#line 1899 "declarative_tree.m"
}

#line 86 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5)
#line 86 "declarative_tree.m"
{
#line 793 "declarative_tree.m"
  {
#line 793 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 793 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_10 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 793 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_11 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 793 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ChainStart_12;

#line 794 "declarative_tree.m"
    {
#line 794 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, mdb__declarative_tree__Store_10, mdb__declarative_tree__Ref_11, mdb__declarative_tree__HeadVar__3_3, &mdb__declarative_tree__ChainStart_12);
    }
#line 798 "declarative_tree.m"
    if ((mdb__declarative_tree__ChainStart_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 798 "declarative_tree.m"
    else
#line 796 "declarative_tree.m"
      {
#line 796 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartLoc_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 0)));
#line 796 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 1)));
#line 796 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 2)));
#line 796 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 3));
#line 796 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 4)));
#line 796 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_12, (MR_Integer) 5)));
#line 4070 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_20_20;

#line 4073 "mdb.declarative_tree.c"
        {
#line 4075 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_20_20);
        }
#line 1795 "declarative_tree.m"
        if ((mdb__declarative_tree__StartLoc_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1795 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 1795 "declarative_tree.m"
        else
#line 1796 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 0;
#line 796 "declarative_tree.m"
      }
#line 793 "declarative_tree.m"
  }
#line 86 "declarative_tree.m"
}

#line 1745 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_12,
#line 1745 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_13,
#line 1745 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_14,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_15,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeNodeId_16,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Prims_17,
#line 1745 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_18,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_19,
#line 1745 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_21,
#line 1745 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_22)
#line 1745 "declarative_tree.m"
{
#line 1761 "declarative_tree.m"
  {
#line 1761 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1752 "declarative_tree.m"
    {
#line 1752 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var_18)), mdb__declarative_tree__BoundVars_12);
    }
#line 1761 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1753 "declarative_tree.m"
      {
#line 1753 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Pos_23;
#line 1753 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_32_32;

#line 1803 "declarative_tree.m"
        {
#line 1803 "declarative_tree.m"
          mdb__declarative_tree__V_32_32 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__Args_15);
        }
#line 1803 "declarative_tree.m"
        {
#line 1803 "declarative_tree.m"
          mdb__declarative_tree__find_arg_pos_from_back_4_p_0(mdb__declarative_tree__Args_15, mdb__declarative_tree__Var_18, mdb__declarative_tree__V_32_32, &mdb__declarative_tree__Pos_23);
        }
#line 1757 "declarative_tree.m"
        if ((mdb__declarative_tree__MaybeNodeId_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1758 "declarative_tree.m"
          {
#line 1759 "declarative_tree.m"
            {
#line 1759 "declarative_tree.m"
              MR_Word base;
#line 1759 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1759 "declarative_tree.m"
              *mdb__declarative_tree__Origin_22 = base;
#line 1759 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_13));
#line 1759 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_14));
#line 1759 "declarative_tree.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 2));
#line 1759 "declarative_tree.m"
            }
#line 1758 "declarative_tree.m"
          }
#line 1757 "declarative_tree.m"
        else
#line 1755 "declarative_tree.m"
          {
#line 1755 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NodeId_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeNodeId_16, (MR_Integer) 0));
#line 1755 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_26_26 = ((MR_Word) mdb__declarative_tree__NodeId_24);

#line 1756 "declarative_tree.m"
            {
#line 1756 "declarative_tree.m"
              MR_Word base;
#line 1756 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1756 "declarative_tree.m"
              *mdb__declarative_tree__Origin_22 = base;
#line 1756 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_26_26));
#line 1756 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__Pos_23));
#line 1756 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TermPath_19));
#line 1756 "declarative_tree.m"
            }
#line 1755 "declarative_tree.m"
          }
#line 1753 "declarative_tree.m"
      }
#line 1761 "declarative_tree.m"
    else
#line 1762 "declarative_tree.m"
      {
#line 1762 "declarative_tree.m"
        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var_18, mdb__declarative_tree__TermPath_19, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__Origin_22);
#line 1762 "declarative_tree.m"
        return;
      }
#line 1761 "declarative_tree.m"
  }
#line 1745 "declarative_tree.m"
}

#line 1557 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0_1(
#line 1557 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1557 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 1557 "declarative_tree.m"
{
#line 1557 "declarative_tree.m"
  {
#line 1557 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 1557 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 1557 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 1557 "declarative_tree.m"
    {
#line 1557 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 1557 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 1557 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 1557 "declarative_tree.m"
  }
#line 1557 "declarative_tree.m"
}

#line 1552 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(
#line 1552 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1552 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1552 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath0_3,
#line 1552 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_5,
#line 1552 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_6)
#line 1552 "declarative_tree.m"
{
#line 1556 "declarative_tree.m"
  while (MR_TRUE)
#line 1556 "declarative_tree.m"
    {
#line 1556 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1556 "declarative_tree.m"
      {
#line 1556 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1556 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1556 "declarative_tree.m"
          {
#line 1556 "declarative_tree.m"
            MR_Word mdb__declarative_tree__HeadVars_12;
#line 1556 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ArgPos_13;
#line 1556 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 0)));
#line 1557 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 1)));
#line 1557 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 2)));
#line 1557 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 3)));
#line 1557 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_5, (MR_Integer) 4)));

#line 1557 "declarative_tree.m"
            {
#line 1557 "declarative_tree.m"
              mdb__declarative_tree__HeadVars_12 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[3], mdb__declarative_tree__V_15_15);
            }
#line 1558 "declarative_tree.m"
            {
#line 1558 "declarative_tree.m"
              mdb__declarative_tree__ArgPos_13 = mdb__declarative_tree__find_arg_pos_2_f_0(mdb__declarative_tree__HeadVars_12, mdb__declarative_tree__Var0_2);
            }
#line 1559 "declarative_tree.m"
            {
#line 1559 "declarative_tree.m"
              MR_Word base;
#line 1559 "declarative_tree.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1559 "declarative_tree.m"
              *mdb__declarative_tree__Origin_6 = base;
#line 1559 "declarative_tree.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__ArgPos_13));
#line 1559 "declarative_tree.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__TermPath0_3));
#line 1559 "declarative_tree.m"
            }
#line 1556 "declarative_tree.m"
          }
#line 1556 "declarative_tree.m"
        else
#line 1561 "declarative_tree.m"
          {
#line 1561 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Prim_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1561 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Prims_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1561 "declarative_tree.m"
            MR_String mdb__declarative_tree__File_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 0)));
#line 1561 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__Line_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 1)));
#line 1561 "declarative_tree.m"
            MR_Word mdb__declarative_tree__BoundVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 2)));
#line 1561 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoal_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 3)));
#line 1561 "declarative_tree.m"
            MR_Word mdb__declarative_tree__MaybeNodeId_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 5)));
#line 1562 "declarative_tree.m"
            MR_Word mdb__declarative_tree___GoalPath_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Prim_16, (MR_Integer) 4)));

#line 1580 "declarative_tree.m"
#line 1580 "declarative_tree.m"
            switch (MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_26)) {
#line 1580 "declarative_tree.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1580 "declarative_tree.m"
              case (MR_Integer) 0:
#line 1565 "declarative_tree.m"
                {
#line 1565 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__FieldVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1565 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree___CellVar_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1565 "declarative_tree.m"
                  MR_String mdb__declarative_tree___Cons_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1566 "declarative_tree.m"
                  {
#line 1566 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                  }
#line 1576 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1570 "declarative_tree.m"
                    if ((mdb__declarative_tree__TermPath0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1568 "declarative_tree.m"
                      {
#line 1569 "declarative_tree.m"
                        {
#line 1569 "declarative_tree.m"
                          MR_Word base;
#line 1569 "declarative_tree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1569 "declarative_tree.m"
                          *mdb__declarative_tree__Origin_6 = base;
#line 1569 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1569 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1569 "declarative_tree.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1569 "declarative_tree.m"
                        }
#line 1568 "declarative_tree.m"
                      }
#line 1570 "declarative_tree.m"
                    else
#line 1571 "declarative_tree.m"
                      {
#line 1571 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__TermPathStep0_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1571 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__TermPath_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1571 "declarative_tree.m"
                        MR_Integer mdb__declarative_tree__Var_34;
#line 1572 "declarative_tree.m"
                        MR_Box mdb__declarative_tree__conv3_Var_34;

#line 1572 "declarative_tree.m"
                        {
#line 1572 "declarative_tree.m"
                          mercury__list__det_index1_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__FieldVars_31, mdb__declarative_tree__TermPathStep0_32, &mdb__declarative_tree__conv3_Var_34);
                        }
#line 1572 "declarative_tree.m"
                        mdb__declarative_tree__Var_34 = ((MR_Integer) mdb__declarative_tree__conv3_Var_34);
#line 1573 "declarative_tree.m"
                        /* direct tailcall eliminated */
#line 1573 "declarative_tree.m"
                        {
#line 1573 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1573 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_34;
#line 1573 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_33;

#line 1573 "declarative_tree.m"
                          mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1573 "declarative_tree.m"
                          mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1573 "declarative_tree.m"
                          mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1573 "declarative_tree.m"
                        }
#line 1573 "declarative_tree.m"
                        continue;
#line 1571 "declarative_tree.m"
                      }
#line 1576 "declarative_tree.m"
                  else
#line 1577 "declarative_tree.m"
                    {
#line 1577 "declarative_tree.m"
                      /* direct tailcall eliminated */
#line 1577 "declarative_tree.m"
                      {
#line 1577 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1577 "declarative_tree.m"
                        mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1577 "declarative_tree.m"
                      }
#line 1577 "declarative_tree.m"
                      continue;
#line 1577 "declarative_tree.m"
                    }
#line 1565 "declarative_tree.m"
                }
#line 1580 "declarative_tree.m"
                break;
#line 1580 "declarative_tree.m"
              case (MR_Integer) 1:
#line 1581 "declarative_tree.m"
                {
#line 1581 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__CellVar_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1581 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__FieldVars_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1581 "declarative_tree.m"
                  MR_String mdb__declarative_tree___Cons_83 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1582 "declarative_tree.m"
                  {
#line 1582 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                  }
#line 1589 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1586 "declarative_tree.m"
                    {
#line 1586 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__Pos_36;

#line 1583 "declarative_tree.m"
                      {
#line 1583 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__FieldVars_85, ((MR_Box) (mdb__declarative_tree__Var0_2)), &mdb__declarative_tree__Pos_36);
                      }
#line 1586 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1584 "declarative_tree.m"
                        {
#line 1584 "declarative_tree.m"
                          MR_Word mdb__declarative_tree__V_78_78;

#line 1584 "declarative_tree.m"
                          {
#line 1584 "declarative_tree.m"
                            mdb__declarative_tree__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1584 "declarative_tree.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_78_78, 0) = ((MR_Box) (mdb__declarative_tree__Pos_36));
#line 1584 "declarative_tree.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_78_78, 1) = ((MR_Box) (mdb__declarative_tree__TermPath0_3));
#line 1584 "declarative_tree.m"
                          }
#line 1584 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1584 "declarative_tree.m"
                          {
#line 1584 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1584 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__CellVar_35;
#line 1584 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__V_78_78;

#line 1584 "declarative_tree.m"
                            mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1584 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1584 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1584 "declarative_tree.m"
                          }
#line 1584 "declarative_tree.m"
                          continue;
#line 1584 "declarative_tree.m"
                        }
#line 1586 "declarative_tree.m"
                      else
#line 1587 "declarative_tree.m"
                        {
#line 1587 "declarative_tree.m"
                          {
#line 1587 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[32])));
#line 1587 "declarative_tree.m"
                            return;
                          }
#line 1587 "declarative_tree.m"
                        }
#line 1586 "declarative_tree.m"
                    }
#line 1589 "declarative_tree.m"
                  else
#line 1590 "declarative_tree.m"
                    {
#line 1590 "declarative_tree.m"
                      /* direct tailcall eliminated */
#line 1590 "declarative_tree.m"
                      {
#line 1590 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1590 "declarative_tree.m"
                        mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1590 "declarative_tree.m"
                      }
#line 1590 "declarative_tree.m"
                      continue;
#line 1590 "declarative_tree.m"
                    }
#line 1581 "declarative_tree.m"
                }
#line 1580 "declarative_tree.m"
                break;
#line 1580 "declarative_tree.m"
              case (MR_Integer) 2:
#line 1594 "declarative_tree.m"
                {
#line 1594 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__MaybeFieldVars_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1594 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)));
#line 1594 "declarative_tree.m"
                  MR_String mdb__declarative_tree__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1613 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__TermPathStep0_89;
#line 1613 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__TermPath_90;

#line 1596 "declarative_tree.m"
                  {
#line 1596 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                  }
#line 1596 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1596 "declarative_tree.m"
                    {
#line 1597 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__TermPath0_3)) == (MR_mktag((MR_Integer) 1)));
#line 1597 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1597 "declarative_tree.m"
                        {
#line 1597 "declarative_tree.m"
                          mdb__declarative_tree__TermPathStep0_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1597 "declarative_tree.m"
                          mdb__declarative_tree__TermPath_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1597 "declarative_tree.m"
                        }
#line 1596 "declarative_tree.m"
                    }
#line 1613 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1599 "declarative_tree.m"
                    {
#line 1599 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__MaybeVar_40;
#line 1599 "declarative_tree.m"
                      MR_Box mdb__declarative_tree__conv2_MaybeVar_40;

#line 1599 "declarative_tree.m"
                      {
#line 1599 "declarative_tree.m"
                        mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[3], mdb__declarative_tree__MaybeFieldVars_39, mdb__declarative_tree__TermPathStep0_89, &mdb__declarative_tree__conv2_MaybeVar_40);
                      }
#line 1599 "declarative_tree.m"
                      mdb__declarative_tree__MaybeVar_40 = ((MR_Word) mdb__declarative_tree__conv2_MaybeVar_40);
#line 1606 "declarative_tree.m"
                      if ((mdb__declarative_tree__MaybeVar_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1610 "declarative_tree.m"
                        {
#line 1610 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1610 "declarative_tree.m"
                          {
#line 1610 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1610 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1610 "declarative_tree.m"
                          }
#line 1610 "declarative_tree.m"
                          continue;
#line 1610 "declarative_tree.m"
                        }
#line 1606 "declarative_tree.m"
                      else
#line 1601 "declarative_tree.m"
                        {
#line 1601 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeVar_40, (MR_Integer) 0)));

#line 1604 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1604 "declarative_tree.m"
                          {
#line 1604 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1604 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_86;
#line 1604 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_90;

#line 1604 "declarative_tree.m"
                            mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1604 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1604 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1604 "declarative_tree.m"
                          }
#line 1604 "declarative_tree.m"
                          continue;
#line 1601 "declarative_tree.m"
                        }
#line 1599 "declarative_tree.m"
                    }
#line 1613 "declarative_tree.m"
                  else
#line 1614 "declarative_tree.m"
                    {
#line 1614 "declarative_tree.m"
                      /* direct tailcall eliminated */
#line 1614 "declarative_tree.m"
                      {
#line 1614 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1614 "declarative_tree.m"
                        mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1614 "declarative_tree.m"
                      }
#line 1614 "declarative_tree.m"
                      continue;
#line 1614 "declarative_tree.m"
                    }
#line 1594 "declarative_tree.m"
                }
#line 1580 "declarative_tree.m"
                break;
#line 1580 "declarative_tree.m"
              case (MR_Integer) 3:
#line 1580 "declarative_tree.m"
#line 1580 "declarative_tree.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 0)))) {
#line 1580 "declarative_tree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 0:
#line 1618 "declarative_tree.m"
                    {
#line 1618 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__MaybeFieldVars_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1618 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1618 "declarative_tree.m"
                      MR_String mdb__declarative_tree__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1619 "declarative_tree.m"
                      {
#line 1619 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1641 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1623 "declarative_tree.m"
                        if ((mdb__declarative_tree__TermPath0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1621 "declarative_tree.m"
                          {
#line 1622 "declarative_tree.m"
                            {
#line 1622 "declarative_tree.m"
                              MR_Word base;
#line 1622 "declarative_tree.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1622 "declarative_tree.m"
                              *mdb__declarative_tree__Origin_6 = base;
#line 1622 "declarative_tree.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1622 "declarative_tree.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1622 "declarative_tree.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 3));
#line 1622 "declarative_tree.m"
                            }
#line 1621 "declarative_tree.m"
                          }
#line 1623 "declarative_tree.m"
                        else
#line 1624 "declarative_tree.m"
                          {
#line 1624 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__TermPathStep0_97 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 0)));
#line 1624 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__TermPath_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__TermPath0_3, (MR_Integer) 1)));
#line 1624 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__MaybeVar_100;
#line 1625 "declarative_tree.m"
                            MR_Box mdb__declarative_tree__conv1_MaybeVar_100;

#line 1625 "declarative_tree.m"
                            {
#line 1625 "declarative_tree.m"
                              mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[3], mdb__declarative_tree__MaybeFieldVars_112, mdb__declarative_tree__TermPathStep0_97, &mdb__declarative_tree__conv1_MaybeVar_100);
                            }
#line 1625 "declarative_tree.m"
                            mdb__declarative_tree__MaybeVar_100 = ((MR_Word) mdb__declarative_tree__conv1_MaybeVar_100);
#line 1632 "declarative_tree.m"
                            if ((mdb__declarative_tree__MaybeVar_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1633 "declarative_tree.m"
                              {
#line 1638 "declarative_tree.m"
                                {
#line 1638 "declarative_tree.m"
                                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[31])));
#line 1638 "declarative_tree.m"
                                  return;
                                }
#line 1633 "declarative_tree.m"
                              }
#line 1632 "declarative_tree.m"
                            else
#line 1627 "declarative_tree.m"
                              {
#line 1627 "declarative_tree.m"
                                MR_Integer mdb__declarative_tree__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeVar_100, (MR_Integer) 0)));

#line 1630 "declarative_tree.m"
                                /* direct tailcall eliminated */
#line 1630 "declarative_tree.m"
                                {
#line 1630 "declarative_tree.m"
                                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1630 "declarative_tree.m"
                                  MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__Var_95;
#line 1630 "declarative_tree.m"
                                  MR_Word mdb__declarative_tree__TermPath0__tmp_copy_3 = mdb__declarative_tree__TermPath_98;

#line 1630 "declarative_tree.m"
                                  mdb__declarative_tree__TermPath0_3 = mdb__declarative_tree__TermPath0__tmp_copy_3;
#line 1630 "declarative_tree.m"
                                  mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1630 "declarative_tree.m"
                                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1630 "declarative_tree.m"
                                }
#line 1630 "declarative_tree.m"
                                continue;
#line 1627 "declarative_tree.m"
                              }
#line 1624 "declarative_tree.m"
                          }
#line 1641 "declarative_tree.m"
                      else
#line 1642 "declarative_tree.m"
                        {
#line 1642 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1642 "declarative_tree.m"
                          {
#line 1642 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1642 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1642 "declarative_tree.m"
                          }
#line 1642 "declarative_tree.m"
                          continue;
#line 1642 "declarative_tree.m"
                        }
#line 1618 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 1:
#line 1646 "declarative_tree.m"
                    {
#line 1646 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__ToVar_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1646 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__FromVar_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1648 "declarative_tree.m"
                      {
#line 1648 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1653 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1650 "declarative_tree.m"
                        {
#line 1649 "declarative_tree.m"
                          {
#line 1649 "declarative_tree.m"
                            mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_49_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__Var0_2, mdb__declarative_tree__ToVar_43, (MR_String) "traverse_primitives", (MR_String) "bad assign");
                          }
#line 1651 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1651 "declarative_tree.m"
                          {
#line 1651 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1651 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__FromVar_44;

#line 1651 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1651 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1651 "declarative_tree.m"
                          }
#line 1651 "declarative_tree.m"
                          continue;
#line 1650 "declarative_tree.m"
                        }
#line 1653 "declarative_tree.m"
                      else
#line 1654 "declarative_tree.m"
                        {
#line 1654 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1654 "declarative_tree.m"
                          {
#line 1654 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1654 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1654 "declarative_tree.m"
                          }
#line 1654 "declarative_tree.m"
                          continue;
#line 1654 "declarative_tree.m"
                        }
#line 1646 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 2:
#line 1658 "declarative_tree.m"
                    {
#line 1658 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__ToVar_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1658 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__FromVar_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1660 "declarative_tree.m"
                      {
#line 1660 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1664 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1661 "declarative_tree.m"
                        {
#line 1661 "declarative_tree.m"
                          {
#line 1661 "declarative_tree.m"
                            mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_50_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__Var0_2, mdb__declarative_tree__ToVar_114, (MR_String) "predicate \140mdb.declarative_tree.traverse_primitives\'/6", (MR_String) "bad unsafe_cast");
                          }
#line 1662 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1662 "declarative_tree.m"
                          {
#line 1662 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1662 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__FromVar_115;

#line 1662 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1662 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1662 "declarative_tree.m"
                          }
#line 1662 "declarative_tree.m"
                          continue;
#line 1661 "declarative_tree.m"
                        }
#line 1664 "declarative_tree.m"
                      else
#line 1665 "declarative_tree.m"
                        {
#line 1665 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1665 "declarative_tree.m"
                          {
#line 1665 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1665 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1665 "declarative_tree.m"
                          }
#line 1665 "declarative_tree.m"
                          continue;
#line 1665 "declarative_tree.m"
                        }
#line 1658 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 3:
#line 1680 "declarative_tree.m"
                    {
#line 1678 "declarative_tree.m"
                      {
#line 1678 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1680 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1679 "declarative_tree.m"
                        {
#line 1679 "declarative_tree.m"
                          {
#line 1679 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[33])));
#line 1679 "declarative_tree.m"
                            return;
                          }
#line 1679 "declarative_tree.m"
                        }
#line 1680 "declarative_tree.m"
                      else
#line 1681 "declarative_tree.m"
                        {
#line 1681 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1681 "declarative_tree.m"
                          {
#line 1681 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1681 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1681 "declarative_tree.m"
                          }
#line 1681 "declarative_tree.m"
                          continue;
#line 1681 "declarative_tree.m"
                        }
#line 1680 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 4:
#line 1672 "declarative_tree.m"
                    {
#line 1670 "declarative_tree.m"
                      {
#line 1670 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1672 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1671 "declarative_tree.m"
                        {
#line 1671 "declarative_tree.m"
                          {
#line 1671 "declarative_tree.m"
                            MR_Word base;
#line 1671 "declarative_tree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1671 "declarative_tree.m"
                            *mdb__declarative_tree__Origin_6 = base;
#line 1671 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1671 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1671 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1671 "declarative_tree.m"
                          }
#line 1671 "declarative_tree.m"
                        }
#line 1672 "declarative_tree.m"
                      else
#line 1673 "declarative_tree.m"
                        {
#line 1673 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1673 "declarative_tree.m"
                          {
#line 1673 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1673 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1673 "declarative_tree.m"
                          }
#line 1673 "declarative_tree.m"
                          continue;
#line 1673 "declarative_tree.m"
                        }
#line 1672 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 5:
#line 1685 "declarative_tree.m"
                    {
#line 1685 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__Args_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1685 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));

#line 1686 "declarative_tree.m"
                      {
#line 1686 "declarative_tree.m"
                        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_49, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1686 "declarative_tree.m"
                        return;
                      }
#line 1685 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 6:
#line 1689 "declarative_tree.m"
                    {
#line 1689 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__Args_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1689 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1689 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));

#line 1690 "declarative_tree.m"
                      {
#line 1690 "declarative_tree.m"
                        mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_116, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1690 "declarative_tree.m"
                        return;
                      }
#line 1689 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 7:
#line 1693 "declarative_tree.m"
                    {
#line 1693 "declarative_tree.m"
                      MR_String mdb__declarative_tree__Module_52 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 1)));
#line 1693 "declarative_tree.m"
                      MR_String mdb__declarative_tree__Name_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 2)));
#line 1693 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__Args_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_26, (MR_Integer) 3)));
#line 1700 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__NewVar_54;

#line 1695 "declarative_tree.m"
                      {
#line 1695 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1695 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1696 "declarative_tree.m"
                        {
#line 1696 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdb__declarative_tree__plain_call_is_special_case_4_p_0(mdb__declarative_tree__Module_52, mdb__declarative_tree__Name_53, mdb__declarative_tree__Args_117, &mdb__declarative_tree__NewVar_54);
                        }
#line 1700 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1698 "declarative_tree.m"
                        {
#line 1698 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1698 "declarative_tree.m"
                          {
#line 1698 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;
#line 1698 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var0__tmp_copy_2 = mdb__declarative_tree__NewVar_54;

#line 1698 "declarative_tree.m"
                            mdb__declarative_tree__Var0_2 = mdb__declarative_tree__Var0__tmp_copy_2;
#line 1698 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1698 "declarative_tree.m"
                          }
#line 1698 "declarative_tree.m"
                          continue;
#line 1698 "declarative_tree.m"
                        }
#line 1700 "declarative_tree.m"
                      else
#line 1701 "declarative_tree.m"
                        {
#line 1701 "declarative_tree.m"
                          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_99_97_108_108_95_95_91_49_44_32_49_48_93_95_48_11_p_0(mdb__declarative_tree__BoundVars_25, mdb__declarative_tree__File_23, mdb__declarative_tree__Line_24, mdb__declarative_tree__Args_117, mdb__declarative_tree__MaybeNodeId_28, mdb__declarative_tree__Prims_17, mdb__declarative_tree__Var0_2, mdb__declarative_tree__TermPath0_3, mdb__declarative_tree__ProcDefnRep_5, mdb__declarative_tree__Origin_6);
#line 1701 "declarative_tree.m"
                          return;
                        }
#line 1693 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 8:
#line 1708 "declarative_tree.m"
                    {
#line 1706 "declarative_tree.m"
                      {
#line 1706 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1708 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1707 "declarative_tree.m"
                        {
#line 1707 "declarative_tree.m"
                          {
#line 1707 "declarative_tree.m"
                            MR_Word base;
#line 1707 "declarative_tree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "declarative_tree.m"
                            *mdb__declarative_tree__Origin_6 = base;
#line 1707 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_tree__File_23));
#line 1707 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_tree__Line_24));
#line 1707 "declarative_tree.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1707 "declarative_tree.m"
                          }
#line 1707 "declarative_tree.m"
                        }
#line 1708 "declarative_tree.m"
                      else
#line 1709 "declarative_tree.m"
                        {
#line 1709 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1709 "declarative_tree.m"
                          {
#line 1709 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1709 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1709 "declarative_tree.m"
                          }
#line 1709 "declarative_tree.m"
                          continue;
#line 1709 "declarative_tree.m"
                        }
#line 1708 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                  case (MR_Integer) 9:
#line 1716 "declarative_tree.m"
                    {
#line 1714 "declarative_tree.m"
                      {
#line 1714 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_tree__Var0_2)), mdb__declarative_tree__BoundVars_25);
                      }
#line 1716 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1715 "declarative_tree.m"
                        {
#line 1715 "declarative_tree.m"
                          {
#line 1715 "declarative_tree.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[30])));
#line 1715 "declarative_tree.m"
                            return;
                          }
#line 1715 "declarative_tree.m"
                        }
#line 1716 "declarative_tree.m"
                      else
#line 1717 "declarative_tree.m"
                        {
#line 1717 "declarative_tree.m"
                          /* direct tailcall eliminated */
#line 1717 "declarative_tree.m"
                          {
#line 1717 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__Prims_17;

#line 1717 "declarative_tree.m"
                            mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1717 "declarative_tree.m"
                          }
#line 1717 "declarative_tree.m"
                          continue;
#line 1717 "declarative_tree.m"
                        }
#line 1716 "declarative_tree.m"
                    }
#line 1580 "declarative_tree.m"
                    break;
#line 1580 "declarative_tree.m"
                }
#line 1580 "declarative_tree.m"
                break;
#line 1580 "declarative_tree.m"
            }
#line 1561 "declarative_tree.m"
          }
#line 1556 "declarative_tree.m"
      }
#line 1556 "declarative_tree.m"
      break;
#line 1556 "declarative_tree.m"
    }
#line 1552 "declarative_tree.m"
}

#line 1355 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(
#line 1355 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1355 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__2_2)
#line 1355 "declarative_tree.m"
{
#line 1359 "declarative_tree.m"
  while (MR_TRUE)
#line 1359 "declarative_tree.m"
    {
#line 1359 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1359 "declarative_tree.m"
      {
#line 1359 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1359 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1359 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1359 "declarative_tree.m"
        else
#line 1360 "declarative_tree.m"
          {
#line 1360 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourHeadNode_6;
#line 1360 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ContourTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1360 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1361 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_22_22, (MR_Integer) 0));

#line 1361 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_22_22, (MR_Integer) 1)));
#line 1364 "declarative_tree.m"
            if (((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_6)) == (MR_mktag((MR_Integer) 1))))
#line 1363 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1364 "declarative_tree.m"
            else
#line 1364 "declarative_tree.m"
            if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1364 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1364 "declarative_tree.m"
            else
#line 1364 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1368 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1367 "declarative_tree.m"
              {
#line 1367 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1367 "declarative_tree.m"
                {
#line 1367 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__ContourTail_7;

#line 1367 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1367 "declarative_tree.m"
                }
#line 1367 "declarative_tree.m"
                continue;
#line 1367 "declarative_tree.m"
              }
#line 1368 "declarative_tree.m"
            else
#line 1369 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__2_2 = mdb__declarative_tree__HeadVar__1_1;
#line 1360 "declarative_tree.m"
          }
#line 1359 "declarative_tree.m"
      }
#line 1359 "declarative_tree.m"
      break;
#line 1359 "declarative_tree.m"
    }
#line 1355 "declarative_tree.m"
}

#line 946 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(
#line 946 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49,
#line 946 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 946 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_7,
#line 946 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_8,
#line 946 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10)
#line 946 "declarative_tree.m"
{
#line 949 "declarative_tree.m"
  {
#line 949 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 949 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;

#line 950 "declarative_tree.m"
    {
#line 950 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_11);
    }
#line 968 "declarative_tree.m"
#line 968 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_11)) {
#line 968 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 968 "declarative_tree.m"
      case (MR_Integer) 1:
#line 952 "declarative_tree.m"
        {
#line 952 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_51_51;
#line 952 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_52_52;
#line 952 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 952 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ExitAtom_20;
#line 952 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_21;
#line 952 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_22;
#line 952 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 952 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 952 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 952 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 952 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 952 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 952 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1869 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Args_73;
#line 1869 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArgInfo_74;
#line 1869 "declarative_tree.m"
          MR_Word mdb__declarative_tree__MaybeArg_77;
#line 1869 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_72_72;
#line 1871 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_75_75;
#line 1871 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_76_76;
#line 1872 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_78_78;

#line 5428 "mdb.declarative_tree.c"
          {
#line 5430 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_51_51);
          }
#line 953 "declarative_tree.m"
          {
#line 953 "declarative_tree.m"
            mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_51_51, mdb__declarative_tree__Node_11);
          }
#line 954 "declarative_tree.m"
          {
#line 954 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13, &mdb__declarative_tree__CallNode_21);
          }
#line 5443 "mdb.declarative_tree.c"
          {
#line 5445 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_52_52);
          }
#line 955 "declarative_tree.m"
          {
#line 955 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_22 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_52_52, mdb__declarative_tree__CallNode_21);
          }
#line 1869 "declarative_tree.m"
          mdb__declarative_tree__V_72_72 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_22, (MR_Integer) 0)));
#line 1869 "declarative_tree.m"
          mdb__declarative_tree__Args_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_22, (MR_Integer) 1)));
#line 1870 "declarative_tree.m"
          {
#line 1870 "declarative_tree.m"
            mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_73, &mdb__declarative_tree__ArgInfo_74);
          }
#line 1871 "declarative_tree.m"
          mdb__declarative_tree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 0)));
#line 1871 "declarative_tree.m"
          mdb__declarative_tree__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 1)));
#line 1871 "declarative_tree.m"
          mdb__declarative_tree__MaybeArg_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_74, (MR_Integer) 2)));
#line 1872 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_77)) == (MR_mktag((MR_Integer) 1)));
#line 1872 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1872 "declarative_tree.m"
            {
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_77, (MR_Integer) 0)));
#line 957 "declarative_tree.m"
              {
#line 957 "declarative_tree.m"
                mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13, mdb__declarative_tree__CallNode_21, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 957 "declarative_tree.m"
                return;
              }
#line 1872 "declarative_tree.m"
            }
#line 1872 "declarative_tree.m"
          else
#line 965 "declarative_tree.m"
            {
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 1)));
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ArgInfo_83;
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__MaybeArg_86;
#line 1869 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 0)));
#line 1871 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_84_84;
#line 1871 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_85_85;
#line 1872 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_87_87;

#line 1870 "declarative_tree.m"
              {
#line 1870 "declarative_tree.m"
                mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_82, &mdb__declarative_tree__ArgInfo_83);
              }
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 0)));
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 1)));
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__MaybeArg_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_83, (MR_Integer) 2)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_86)) == (MR_mktag((MR_Integer) 1)));
#line 1872 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1872 "declarative_tree.m"
                {
#line 1872 "declarative_tree.m"
                  mdb__declarative_tree__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_86, (MR_Integer) 0)));
#line 960 "declarative_tree.m"
                  {
#line 960 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_13);
                  }
#line 962 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 961 "declarative_tree.m"
                    {
#line 961 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__TypeInfo_53_53;

#line 5535 "mdb.declarative_tree.c"
                      {
#line 5537 "mdb.declarative_tree.c"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_53_53);
                      }
#line 961 "declarative_tree.m"
                      {
#line 961 "declarative_tree.m"
                        mdb__declarative_tree__find_chain_start_outside_4_p_0(mdb__declarative_tree__TypeInfo_53_53, mdb__declarative_tree__CallNode_21, mdb__declarative_tree__Node_11, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 961 "declarative_tree.m"
                        return;
                      }
#line 961 "declarative_tree.m"
                    }
#line 962 "declarative_tree.m"
                  else
#line 963 "declarative_tree.m"
                    *mdb__declarative_tree__ChainStart_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1872 "declarative_tree.m"
                }
#line 1872 "declarative_tree.m"
              else
#line 966 "declarative_tree.m"
                {
#line 966 "declarative_tree.m"
                  {
#line 966 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[28])));
#line 966 "declarative_tree.m"
                    return;
                  }
#line 966 "declarative_tree.m"
                }
#line 965 "declarative_tree.m"
            }
#line 952 "declarative_tree.m"
        }
#line 968 "declarative_tree.m"
        break;
#line 968 "declarative_tree.m"
      case (MR_Integer) 3:
#line 968 "declarative_tree.m"
#line 968 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) {
#line 968 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 968 "declarative_tree.m"
          case (MR_Integer) 0:
#line 969 "declarative_tree.m"
            {
#line 969 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_56_56;
#line 969 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_43 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 969 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_44;
#line 969 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_45;
#line 969 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 969 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 969 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 969 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 969 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Args_91;
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ArgInfo_92;
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__MaybeArg_95;
#line 1869 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_90_90;
#line 1871 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_93_93;
#line 1871 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_94_94;
#line 1872 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_96_96;

#line 970 "declarative_tree.m"
              {
#line 970 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_43, &mdb__declarative_tree__CallNode_44);
              }
#line 5623 "mdb.declarative_tree.c"
              {
#line 5625 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_56_56);
              }
#line 971 "declarative_tree.m"
              {
#line 971 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_45 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_56_56, mdb__declarative_tree__CallNode_44);
              }
#line 1869 "declarative_tree.m"
              mdb__declarative_tree__V_90_90 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_45, (MR_Integer) 0)));
#line 1869 "declarative_tree.m"
              mdb__declarative_tree__Args_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_45, (MR_Integer) 1)));
#line 1870 "declarative_tree.m"
              {
#line 1870 "declarative_tree.m"
                mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_91, &mdb__declarative_tree__ArgInfo_92);
              }
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 0)));
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 1)));
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__MaybeArg_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_92, (MR_Integer) 2)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_95)) == (MR_mktag((MR_Integer) 1)));
#line 1872 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1872 "declarative_tree.m"
                {
#line 1872 "declarative_tree.m"
                  mdb__declarative_tree__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_95, (MR_Integer) 0)));
#line 973 "declarative_tree.m"
                  {
#line 973 "declarative_tree.m"
                    mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_43, mdb__declarative_tree__CallNode_44, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 973 "declarative_tree.m"
                    return;
                  }
#line 1872 "declarative_tree.m"
                }
#line 1872 "declarative_tree.m"
              else
#line 976 "declarative_tree.m"
                {
#line 976 "declarative_tree.m"
                  {
#line 976 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[29])));
#line 976 "declarative_tree.m"
                    return;
                  }
#line 976 "declarative_tree.m"
                }
#line 969 "declarative_tree.m"
            }
#line 968 "declarative_tree.m"
            break;
#line 968 "declarative_tree.m"
          case (MR_Integer) 1:
#line 979 "declarative_tree.m"
            {
#line 979 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_59_59;
#line 979 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 979 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_47;
#line 979 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_48;
#line 979 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 979 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 979 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 979 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 979 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 979 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Args_64;
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ArgInfo_65;
#line 1869 "declarative_tree.m"
              MR_Word mdb__declarative_tree__MaybeArg_68;
#line 1869 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_63_63;
#line 1871 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_66_66;
#line 1871 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_67_67;
#line 1872 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_69_69;

#line 980 "declarative_tree.m"
              {
#line 980 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_46, &mdb__declarative_tree__CallNode_47);
              }
#line 5726 "mdb.declarative_tree.c"
              {
#line 5728 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_59_59);
              }
#line 981 "declarative_tree.m"
              {
#line 981 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_59_59, mdb__declarative_tree__CallNode_47);
              }
#line 1869 "declarative_tree.m"
              mdb__declarative_tree__V_63_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_48, (MR_Integer) 0)));
#line 1869 "declarative_tree.m"
              mdb__declarative_tree__Args_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_48, (MR_Integer) 1)));
#line 1870 "declarative_tree.m"
              {
#line 1870 "declarative_tree.m"
                mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__Args_64, &mdb__declarative_tree__ArgInfo_65);
              }
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 0)));
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 1)));
#line 1871 "declarative_tree.m"
              mdb__declarative_tree__MaybeArg_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_65, (MR_Integer) 2)));
#line 1872 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_68)) == (MR_mktag((MR_Integer) 1)));
#line 1872 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1872 "declarative_tree.m"
                {
#line 1872 "declarative_tree.m"
                  mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_68, (MR_Integer) 0)));
#line 986 "declarative_tree.m"
                  {
#line 986 "declarative_tree.m"
                    mdb__declarative_tree__find_chain_start_inside_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_49, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_46, mdb__declarative_tree__CallNode_47, mdb__declarative_tree__ArgPos_8, mdb__declarative_tree__ChainStart_10);
#line 986 "declarative_tree.m"
                    return;
                  }
#line 1872 "declarative_tree.m"
                }
#line 1872 "declarative_tree.m"
              else
#line 989 "declarative_tree.m"
                {
#line 989 "declarative_tree.m"
                  {
#line 989 "declarative_tree.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[27])));
#line 989 "declarative_tree.m"
                    return;
                  }
#line 989 "declarative_tree.m"
                }
#line 979 "declarative_tree.m"
            }
#line 968 "declarative_tree.m"
            break;
#line 968 "declarative_tree.m"
        }
#line 968 "declarative_tree.m"
        break;
#line 968 "declarative_tree.m"
    }
#line 949 "declarative_tree.m"
  }
#line 946 "declarative_tree.m"
}

#line 45 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_97_116_111_109_95_115_117_98_116_101_114_109_95_105_115_95_103_114_111_117_110_100_95_95_91_51_93_95_48_3_p_0(
#line 45 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 45 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_6)
#line 45 "declarative_tree.m"
{
#line 1869 "declarative_tree.m"
  {
#line 1869 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1869 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Args_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1869 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ArgInfo_8;
#line 1869 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybeArg_11;
#line 1869 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1871 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 1871 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 1872 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;

#line 1870 "declarative_tree.m"
    {
#line 1870 "declarative_tree.m"
      mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_tree__ArgPos_6, mdb__declarative_tree__Args_5, &mdb__declarative_tree__ArgInfo_8);
    }
#line 1871 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 0)));
#line 1871 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 1)));
#line 1871 "declarative_tree.m"
    mdb__declarative_tree__MaybeArg_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArgInfo_8, (MR_Integer) 2)));
#line 1872 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeArg_11)) == (MR_mktag((MR_Integer) 1)));
#line 1872 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1872 "declarative_tree.m"
      mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeArg_11, (MR_Integer) 0)));
#line 1869 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1869 "declarative_tree.m"
  }
#line 45 "declarative_tree.m"
}

#line 1649 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1649__1_2_p_0(
#line 1649 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1649 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_43)
#line 1649 "declarative_tree.m"
{
#line 1649 "declarative_tree.m"
  {
#line 1649 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__Var0_2 == mdb__declarative_tree__ToVar_43);

#line 1649 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1649 "declarative_tree.m"
  }
#line 1649 "declarative_tree.m"
}

#line 1661 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__traverse_primitives__1661__1_2_p_0(
#line 1661 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var0_2,
#line 1661 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ToVar_114)
#line 1661 "declarative_tree.m"
{
#line 1661 "declarative_tree.m"
  {
#line 1661 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__Var0_2 == mdb__declarative_tree__ToVar_114);

#line 1661 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1661 "declarative_tree.m"
  }
#line 1661 "declarative_tree.m"
}

#line 1183 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1183__1_3_p_0(
#line 1183 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1183 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AdjustedContour_21,
#line 1183 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_29)
#line 1183 "declarative_tree.m"
{
#line 1183 "declarative_tree.m"
  {
#line 1183 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1183 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_43_43;
#line 1183 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_44_44;
#line 1183 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_46_46;
#line 1183 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_48_48;

#line 5914 "mdb.declarative_tree.c"
    {
#line 5916 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_43_43);
    }
#line 5919 "mdb.declarative_tree.c"
    {
#line 5921 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_44_44);
    }
#line 5924 "mdb.declarative_tree.c"
    {
#line 5926 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5928 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 5930 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_46_46, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_44_44));
#line 5932 "mdb.declarative_tree.c"
    }
#line 5934 "mdb.declarative_tree.c"
    {
#line 5936 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5938 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 5940 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_43_43));
#line 5942 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_48_48, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_46_46));
#line 5944 "mdb.declarative_tree.c"
    }
#line 1183 "declarative_tree.m"
    {
#line 1183 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_tree__TypeInfo_48_48, mdb__declarative_tree__AdjustedContour_21, mdb__declarative_tree__HeadVar__3_29);
    }
#line 1183 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1183 "declarative_tree.m"
  }
#line 1183 "declarative_tree.m"
}

#line 272 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(
#line 272 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_127,
#line 272 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 272 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 272 "declarative_tree.m"
{
#line 272 "declarative_tree.m"
  {
#line 272 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 272 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 272 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1));
#line 272 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 272 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 272 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 272 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 272 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 6)));
#line 272 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 7)));
#line 272 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 8)));
#line 272 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 9)));
#line 272 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_128_128;

#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)) = mdb__declarative_tree__V_13_13;
#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)) = mdb__declarative_tree__V_14_14;
#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)) = ((MR_Box) (mdb__declarative_tree__V_15_15));
#line 272 "declarative_tree.m"
    mdb__declarative_tree__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)) = ((MR_Box) (mdb__declarative_tree__V_17_17));
#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)) = ((MR_Box) (mdb__declarative_tree__V_18_18));
#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 6)) = ((MR_Box) (mdb__declarative_tree__V_19_19));
#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 7)) = ((MR_Box) (mdb__declarative_tree__V_20_20));
#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 8)) = ((MR_Box) (mdb__declarative_tree__V_21_21));
#line 272 "declarative_tree.m"
    (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 9)) = ((MR_Box) (mdb__declarative_tree__V_22_22));
#line 272 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == mdb__declarative_tree__V_128_128);
#line 272 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 272 "declarative_tree.m"
  }
#line 272 "declarative_tree.m"
}

#line 94 "declarative_tree.m"
static MR_Integer MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_3_f_0(
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 94 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 94 "declarative_tree.m"
{
#line 1877 "declarative_tree.m"
  {
#line 1877 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1877 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__HeadVar__4_4;
#line 1877 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_14_14;
#line 1877 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 1877 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_9 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 1877 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_10;
#line 1877 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_11;
#line 1877 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Atom_12;
#line 1863 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_20;
#line 1856 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_18;
#line 6060 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6062 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_18;

#line 6065 "mdb.declarative_tree.c"
    {
#line 6067 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5), mdb__declarative_tree__Store_8, mdb__declarative_tree__Ref_9, &mdb__declarative_tree__conv1_Node0_18);
    }
#line 6070 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 6072 "mdb.declarative_tree.c"
      {
#line 6074 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_18 = ((MR_Word) mdb__declarative_tree__conv1_Node0_18);
#line 6076 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 6078 "mdb.declarative_tree.c"
      }
#line 1856 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1858 "declarative_tree.m"
#line 1858 "declarative_tree.m"
      switch (MR_tag((MR_Word) mdb__declarative_tree__Node0_18)) {
#line 1858 "declarative_tree.m"
        default:
#line 1858 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
        case (MR_Integer) 1:
#line 1857 "declarative_tree.m"
          {
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 0));
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_21_21;
#line 1857 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_22_22;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_23_23;
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_25_25;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_26_26;

#line 1857 "declarative_tree.m"
            mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 3)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_24_24 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_18, (MR_Integer) 7)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1857 "declarative_tree.m"
          }
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
        case (MR_Integer) 3:
#line 1858 "declarative_tree.m"
#line 1858 "declarative_tree.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 0)))) {
#line 1858 "declarative_tree.m"
            default:
#line 1858 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1858 "declarative_tree.m"
              {
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_28_28;
#line 1858 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_29_29;
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_30_30;
#line 1858 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_31_31;

#line 1858 "declarative_tree.m"
                mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 3));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1858 "declarative_tree.m"
              }
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1859 "declarative_tree.m"
              {
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 1));
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_33_33;
#line 1859 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_34_34;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_35_35;
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_36_36;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_37_37;

#line 1859 "declarative_tree.m"
                mdb__declarative_tree__CallId0_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 2));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 3));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 4)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 5)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_36_36 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 6)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_18, (MR_Integer) 7)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1859 "declarative_tree.m"
              }
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
          }
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
      }
#line 1863 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1862 "declarative_tree.m"
      mdb__declarative_tree__CallId_10 = mdb__declarative_tree__CallId0_20;
#line 1863 "declarative_tree.m"
    else
#line 1864 "declarative_tree.m"
      {
#line 1864 "declarative_tree.m"
        {
#line 1864 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1864 "declarative_tree.m"
      }
#line 1879 "declarative_tree.m"
    {
#line 1879 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__Call_11);
    }
#line 6233 "mdb.declarative_tree.c"
    {
#line 6235 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_14_14);
    }
#line 1880 "declarative_tree.m"
    {
#line 1880 "declarative_tree.m"
      mdb__declarative_tree__Atom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_14_14, mdb__declarative_tree__Call_11);
    }
#line 1881 "declarative_tree.m"
    {
#line 1881 "declarative_tree.m"
      mdb__declarative_execution__user_arg_num_3_p_0(mdb__declarative_tree__HeadVar__3_3, mdb__declarative_tree__Atom_12, &mdb__declarative_tree__HeadVar__4_4);
    }
#line 1877 "declarative_tree.m"
    return mdb__declarative_tree__HeadVar__4_4;
#line 1877 "declarative_tree.m"
  }
#line 94 "declarative_tree.m"
}

#line 93 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_proc_label_2_2_f_0(
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 93 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 93 "declarative_tree.m"
{
#line 477 "declarative_tree.m"
  {
#line 477 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 477 "declarative_tree.m"
    MR_Word mdb__declarative_tree__HeadVar__3_3;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 477 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Label_13;
#line 477 "declarative_tree.m"
    MR_Box mdb__declarative_tree__ProcLayout_28;

#line 478 "declarative_tree.m"
    {
#line 478 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 480 "declarative_tree.m"
#line 480 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 480 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 480 "declarative_tree.m"
      case (MR_Integer) 1:
#line 480 "declarative_tree.m"
        {
#line 480 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 480 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 480 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 480 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 480 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 480 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20;
#line 480 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21;

#line 480 "declarative_tree.m"
          mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 480 "declarative_tree.m"
          mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 480 "declarative_tree.m"
          mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 480 "declarative_tree.m"
        }
#line 480 "declarative_tree.m"
        break;
#line 480 "declarative_tree.m"
      case (MR_Integer) 3:
#line 480 "declarative_tree.m"
#line 480 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 480 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 480 "declarative_tree.m"
          case (MR_Integer) 0:
#line 479 "declarative_tree.m"
            {
#line 479 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 479 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 479 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 479 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 479 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_14_14;

#line 479 "declarative_tree.m"
              mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 479 "declarative_tree.m"
              mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 479 "declarative_tree.m"
            }
#line 480 "declarative_tree.m"
            break;
#line 480 "declarative_tree.m"
          case (MR_Integer) 1:
#line 481 "declarative_tree.m"
            {
#line 481 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 481 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 481 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 481 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 481 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 481 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;

#line 481 "declarative_tree.m"
              mdb__declarative_tree__Label_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 481 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 481 "declarative_tree.m"
            }
#line 480 "declarative_tree.m"
            break;
#line 480 "declarative_tree.m"
        }
#line 480 "declarative_tree.m"
        break;
#line 480 "declarative_tree.m"
    }
#line 483 "declarative_tree.m"
    {
#line 483 "declarative_tree.m"
      mdb__declarative_tree__ProcLayout_28 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_tree__Label_13);
    }
#line 484 "declarative_tree.m"
    {
#line 484 "declarative_tree.m"
      return mdb__declarative_tree__HeadVar__3_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__ProcLayout_28);
    }
#line 477 "declarative_tree.m"
    return mdb__declarative_tree__HeadVar__3_3;
#line 477 "declarative_tree.m"
  }
#line 93 "declarative_tree.m"
}

#line 92 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_context_4_4_p_0(
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 92 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 92 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3,
#line 92 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 92 "declarative_tree.m"
{
#line 426 "declarative_tree.m"
  {
#line 426 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 426 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 426 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_8 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 426 "declarative_tree.m"
    MR_String mdb__declarative_tree__FileName_9;
#line 426 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__LineNo_10;
#line 426 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Final_11;
#line 426 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_13;
#line 426 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Label_17;
#line 426 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_29;
#line 426 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_57_57;
#line 438 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_54_54;
#line 438 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_55_55;
#line 438 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_56_56;
#line 438 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_58_58;
#line 438 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_59_59;
#line 438 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_60_60;
#line 438 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_61_61;
#line 438 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_62_62;
#line 438 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_63_63;

#line 427 "declarative_tree.m"
    {
#line 427 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_7, mdb__declarative_tree__Ref_8, &mdb__declarative_tree__Final_11);
    }
#line 430 "declarative_tree.m"
#line 430 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Final_11)) {
#line 430 "declarative_tree.m"
      default:
#line 430 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_FALSE;
#line 430 "declarative_tree.m"
        break;
#line 430 "declarative_tree.m"
      case (MR_Integer) 1:
#line 429 "declarative_tree.m"
        {
#line 429 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 0));
#line 429 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_14_14;
#line 429 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_15_15;
#line 429 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_16_16;
#line 429 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18;
#line 429 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19;

#line 429 "declarative_tree.m"
          mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 429 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 429 "declarative_tree.m"
          mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 3)));
#line 429 "declarative_tree.m"
          mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 429 "declarative_tree.m"
          mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 429 "declarative_tree.m"
          mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 429 "declarative_tree.m"
          mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_11, (MR_Integer) 7)));
#line 429 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 429 "declarative_tree.m"
        }
#line 430 "declarative_tree.m"
        break;
#line 430 "declarative_tree.m"
      case (MR_Integer) 3:
#line 430 "declarative_tree.m"
#line 430 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 0)))) {
#line 430 "declarative_tree.m"
          default:
#line 430 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_FALSE;
#line 430 "declarative_tree.m"
            break;
#line 430 "declarative_tree.m"
          case (MR_Integer) 0:
#line 431 "declarative_tree.m"
            {
#line 431 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 431 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_21_21;
#line 431 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_22_22;
#line 431 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_23_23;

#line 431 "declarative_tree.m"
              mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 431 "declarative_tree.m"
              mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 3));
#line 431 "declarative_tree.m"
              mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 431 "declarative_tree.m"
              mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 431 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 431 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 431 "declarative_tree.m"
            }
#line 430 "declarative_tree.m"
            break;
#line 430 "declarative_tree.m"
          case (MR_Integer) 1:
#line 433 "declarative_tree.m"
            {
#line 433 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 1));
#line 433 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25;
#line 433 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_26_26;
#line 433 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;
#line 433 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_28_28;

#line 433 "declarative_tree.m"
              mdb__declarative_tree__CallId_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 2));
#line 433 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 3));
#line 433 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 4)));
#line 433 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 5)));
#line 433 "declarative_tree.m"
              mdb__declarative_tree__Label_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 6)));
#line 433 "declarative_tree.m"
              mdb__declarative_tree__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_11, (MR_Integer) 7)));
#line 433 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 433 "declarative_tree.m"
            }
#line 430 "declarative_tree.m"
            break;
#line 430 "declarative_tree.m"
        }
#line 430 "declarative_tree.m"
        break;
#line 430 "declarative_tree.m"
    }
#line 426 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 426 "declarative_tree.m"
      {
#line 435 "declarative_tree.m"
        {
#line 435 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(mdb__declarative_tree__Label_17, &mdb__declarative_tree__FileName_9, &mdb__declarative_tree__LineNo_10);
        }
#line 426 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 426 "declarative_tree.m"
          {
#line 425 "declarative_tree.m"
            {
#line 425 "declarative_tree.m"
              MR_Word base;
#line 425 "declarative_tree.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 425 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__3_3 = base;
#line 425 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__FileName_9));
#line 425 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__LineNo_10));
#line 425 "declarative_tree.m"
            }
#line 436 "declarative_tree.m"
            {
#line 436 "declarative_tree.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_7, mdb__declarative_tree__CallId_13, &mdb__declarative_tree__Call_29);
            }
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_63_63 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 0));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_62_62 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 1));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 2)));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 3)));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 4)));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 5)));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 6)));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_56_56 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 7)));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 8)));
#line 438 "declarative_tree.m"
            mdb__declarative_tree__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_29, (MR_Integer) 9)));
#line 442 "declarative_tree.m"
            if ((mdb__declarative_tree__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "declarative_tree.m"
              {
#line 444 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 444 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 444 "declarative_tree.m"
              }
#line 442 "declarative_tree.m"
            else
#line 438 "declarative_tree.m"
              {
#line 438 "declarative_tree.m"
                MR_Box mdb__declarative_tree__ReturnLabel_30 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_57_57, (MR_Integer) 0)));
#line 438 "declarative_tree.m"
                MR_String mdb__declarative_tree__ReturnFileName_31;
#line 438 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__ReturnLineNo_32;
#line 438 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_35_35;

#line 439 "declarative_tree.m"
                {
#line 439 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdbcomp__rtti_access__get_context_from_label_layout_3_p_0(mdb__declarative_tree__ReturnLabel_30, &mdb__declarative_tree__ReturnFileName_31, &mdb__declarative_tree__ReturnLineNo_32);
                }
#line 438 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 438 "declarative_tree.m"
                  {
#line 441 "declarative_tree.m"
                    {
#line 441 "declarative_tree.m"
                      mdb__declarative_tree__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 0) = ((MR_Box) (mdb__declarative_tree__ReturnFileName_31));
#line 441 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 1) = ((MR_Box) (mdb__declarative_tree__ReturnLineNo_32));
#line 441 "declarative_tree.m"
                    }
#line 441 "declarative_tree.m"
                    {
#line 441 "declarative_tree.m"
                      MR_Word base;
#line 441 "declarative_tree.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__4_4 = base;
#line 441 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_35_35));
#line 441 "declarative_tree.m"
                    }
#line 441 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 438 "declarative_tree.m"
                  }
#line 438 "declarative_tree.m"
              }
#line 426 "declarative_tree.m"
          }
#line 426 "declarative_tree.m"
      }
#line 426 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 426 "declarative_tree.m"
  }
#line 92 "declarative_tree.m"
}

#line 91 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subtree_suspicion_4_4_p_0(
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
#line 320 "declarative_tree.m"
  {
#line 320 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 321 "declarative_tree.m"
    {
#line 321 "declarative_tree.m"
      mdb__declarative_tree__trace_weight_9_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 1, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0, mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__declarative_tree__HeadVar__4_4);
#line 321 "declarative_tree.m"
      return;
    }
#line 320 "declarative_tree.m"
  }
#line 91 "declarative_tree.m"
}

#line 90 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_number_of_events_4_4_p_0(
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 90 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 90 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__3_3,
#line 90 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__HeadVar__4_4)
#line 90 "declarative_tree.m"
{
#line 313 "declarative_tree.m"
  {
#line 313 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 314 "declarative_tree.m"
    {
#line 314 "declarative_tree.m"
      mdb__declarative_tree__trace_weight_9_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 0, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0, mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__declarative_tree__HeadVar__4_4);
#line 314 "declarative_tree.m"
      return;
    }
#line 313 "declarative_tree.m"
  }
#line 90 "declarative_tree.m"
}

#line 89 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_topmost_node_2_2_p_0(
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 89 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 89 "declarative_tree.m"
{
#line 264 "declarative_tree.m"
  {
#line 264 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 264 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_39_39;
#line 264 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 264 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 264 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_6;
#line 264 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_8;
#line 264 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_35_35;
#line 264 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 272 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_26_26;
#line 272 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_27_27;
#line 272 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_28_28;
#line 272 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_29_29;
#line 272 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_30_30;
#line 272 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_31_31;
#line 272 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 272 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 272 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;

#line 265 "declarative_tree.m"
    {
#line 265 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__Node_6);
    }
#line 267 "declarative_tree.m"
#line 267 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_6)) {
#line 267 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 267 "declarative_tree.m"
      case (MR_Integer) 1:
#line 266 "declarative_tree.m"
        {
#line 266 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 0));
#line 266 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_9_9;
#line 266 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_10_10;
#line 266 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_11_11;
#line 266 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12;
#line 266 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_13_13;
#line 266 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_14_14;

#line 266 "declarative_tree.m"
          mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 266 "declarative_tree.m"
          mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 266 "declarative_tree.m"
          mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 3)));
#line 266 "declarative_tree.m"
          mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 266 "declarative_tree.m"
          mdb__declarative_tree__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 266 "declarative_tree.m"
          mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 266 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_6, (MR_Integer) 7)));
#line 266 "declarative_tree.m"
        }
#line 267 "declarative_tree.m"
        break;
#line 267 "declarative_tree.m"
      case (MR_Integer) 3:
#line 267 "declarative_tree.m"
#line 267 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 0)))) {
#line 267 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 267 "declarative_tree.m"
          case (MR_Integer) 0:
#line 267 "declarative_tree.m"
            {
#line 267 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 267 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_16_16;
#line 267 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_17_17;
#line 267 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_18_18;
#line 267 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_19_19;

#line 267 "declarative_tree.m"
              mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 267 "declarative_tree.m"
              mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 3));
#line 267 "declarative_tree.m"
              mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 267 "declarative_tree.m"
              mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 267 "declarative_tree.m"
              mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 267 "declarative_tree.m"
            }
#line 267 "declarative_tree.m"
            break;
#line 267 "declarative_tree.m"
          case (MR_Integer) 1:
#line 268 "declarative_tree.m"
            {
#line 268 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 1));
#line 268 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_21_21;
#line 268 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_22_22;
#line 268 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_23_23;
#line 268 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24;
#line 268 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_25_25;

#line 268 "declarative_tree.m"
              mdb__declarative_tree__CallId_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 2));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 3));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 4)));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 5)));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_24_24 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 6)));
#line 268 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_6, (MR_Integer) 7)));
#line 268 "declarative_tree.m"
            }
#line 267 "declarative_tree.m"
            break;
#line 267 "declarative_tree.m"
        }
#line 267 "declarative_tree.m"
        break;
#line 267 "declarative_tree.m"
    }
#line 272 "declarative_tree.m"
    {
#line 272 "declarative_tree.m"
      mdb__declarative_tree__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 0) = NULL;
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 1) = NULL;
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 2) = NULL;
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 3) = ((MR_Box) ((MR_Integer) 1));
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 4) = NULL;
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 5) = NULL;
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 6) = NULL;
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 7) = NULL;
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 8) = NULL;
#line 272 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_35_35, 9) = NULL;
#line 272 "declarative_tree.m"
    }
#line 272 "declarative_tree.m"
    {
#line 272 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_8, &mdb__declarative_tree__V_37_37);
    }
#line 6974 "mdb.declarative_tree.c"
    {
#line 6976 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_39_39);
    }
#line 272 "declarative_tree.m"
    {
#line 272 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____mdb__declarative_execution__trace_node_1_1(mdb__declarative_tree__TypeInfo_39_39, mdb__declarative_tree__V_35_35, mdb__declarative_tree__V_37_37);
    }
#line 264 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 264 "declarative_tree.m"
  }
#line 89 "declarative_tree.m"
}

#line 88 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_same_nodes_3_3_p_0(
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 88 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 88 "declarative_tree.m"
{
#line 247 "declarative_tree.m"
  {
#line 247 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 247 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 247 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref1_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 247 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref2_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 247 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node1_8;
#line 247 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node2_9;

#line 248 "declarative_tree.m"
    {
#line 248 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref1_6, &mdb__declarative_tree__Node1_8);
    }
#line 249 "declarative_tree.m"
    {
#line 249 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref2_7, &mdb__declarative_tree__Node2_9);
    }
#line 253 "declarative_tree.m"
#line 253 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node1_8)) {
#line 253 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 253 "declarative_tree.m"
      case (MR_Integer) 1:
#line 251 "declarative_tree.m"
        {
#line 251 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__Event_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 251 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_49_49;
#line 251 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 0));
#line 251 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 251 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 251 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 3)));
#line 251 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 251 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 251 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node1_8, (MR_Integer) 7)));
#line 252 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_18_18;
#line 252 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_19_19;
#line 252 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_20_20;
#line 252 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_21_21;
#line 252 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_22_22;
#line 252 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_23_23;
#line 252 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_24_24;

#line 252 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 1)));
#line 252 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 252 "declarative_tree.m"
            {
#line 252 "declarative_tree.m"
              mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 0));
#line 252 "declarative_tree.m"
              mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 252 "declarative_tree.m"
              mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 252 "declarative_tree.m"
              mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 3)));
#line 252 "declarative_tree.m"
              mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 252 "declarative_tree.m"
              mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 252 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 252 "declarative_tree.m"
              mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node2_9, (MR_Integer) 7)));
#line 252 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_14 == mdb__declarative_tree__V_49_49);
#line 252 "declarative_tree.m"
            }
#line 251 "declarative_tree.m"
        }
#line 253 "declarative_tree.m"
        break;
#line 253 "declarative_tree.m"
      case (MR_Integer) 3:
#line 253 "declarative_tree.m"
#line 253 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 0)))) {
#line 253 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 253 "declarative_tree.m"
          case (MR_Integer) 0:
#line 254 "declarative_tree.m"
            {
#line 254 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Event_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 254 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_50_50;
#line 254 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 254 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 254 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 3));
#line 254 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 254 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 255 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_30_30;
#line 255 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_31_31;
#line 255 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_32_32;
#line 255 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_33_33;
#line 255 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_34_34;

#line 255 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 255 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 255 "declarative_tree.m"
                {
#line 255 "declarative_tree.m"
                  mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 255 "declarative_tree.m"
                  mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 255 "declarative_tree.m"
                  mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 3));
#line 255 "declarative_tree.m"
                  mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 255 "declarative_tree.m"
                  mdb__declarative_tree__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 255 "declarative_tree.m"
                  mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 255 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_47 == mdb__declarative_tree__V_50_50);
#line 255 "declarative_tree.m"
                }
#line 254 "declarative_tree.m"
            }
#line 253 "declarative_tree.m"
            break;
#line 253 "declarative_tree.m"
          case (MR_Integer) 1:
#line 257 "declarative_tree.m"
            {
#line 257 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Event_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 5)));
#line 257 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_51_51;
#line 257 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 1));
#line 257 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 2));
#line 257 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 3));
#line 257 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 4)));
#line 257 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_39_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 6)));
#line 257 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node1_8, (MR_Integer) 7)));
#line 258 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_41_41;
#line 258 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_42_42;
#line 258 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_43_43;
#line 258 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_44_44;
#line 258 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_45_45;
#line 258 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_46_46;

#line 258 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node2_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 258 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 258 "declarative_tree.m"
                {
#line 258 "declarative_tree.m"
                  mdb__declarative_tree__V_41_41 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 1));
#line 258 "declarative_tree.m"
                  mdb__declarative_tree__V_42_42 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 2));
#line 258 "declarative_tree.m"
                  mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 3));
#line 258 "declarative_tree.m"
                  mdb__declarative_tree__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 4)));
#line 258 "declarative_tree.m"
                  mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 5)));
#line 258 "declarative_tree.m"
                  mdb__declarative_tree__V_45_45 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 6)));
#line 258 "declarative_tree.m"
                  mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node2_9, (MR_Integer) 7)));
#line 258 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__Event_48 == mdb__declarative_tree__V_51_51);
#line 258 "declarative_tree.m"
                }
#line 257 "declarative_tree.m"
            }
#line 253 "declarative_tree.m"
            break;
#line 253 "declarative_tree.m"
        }
#line 253 "declarative_tree.m"
        break;
#line 253 "declarative_tree.m"
    }
#line 247 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 247 "declarative_tree.m"
  }
#line 88 "declarative_tree.m"
}

#line 87 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_is_implicit_root_2_2_p_0(
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 87 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 87 "declarative_tree.m"
{
#line 301 "declarative_tree.m"
  {
#line 301 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 301 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 301 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 301 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_6;
#line 1863 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_12;
#line 1856 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_10;
#line 7262 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 7264 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_10;
#line 470 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_36;
#line 470 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 472 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_38_38;
#line 472 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_39_39;
#line 472 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_40_40;
#line 472 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_41_41;
#line 472 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_42_42;
#line 472 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_43_43;
#line 472 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_44_44;
#line 472 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_45_45;
#line 472 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_46_46;

#line 7289 "mdb.declarative_tree.c"
    {
#line 7291 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_10);
    }
#line 7294 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 7296 "mdb.declarative_tree.c"
      {
#line 7298 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_10 = ((MR_Word) mdb__declarative_tree__conv1_Node0_10);
#line 7300 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 7302 "mdb.declarative_tree.c"
      }
#line 1856 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1858 "declarative_tree.m"
#line 1858 "declarative_tree.m"
      switch (MR_tag((MR_Word) mdb__declarative_tree__Node0_10)) {
#line 1858 "declarative_tree.m"
        default:
#line 1858 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
        case (MR_Integer) 1:
#line 1857 "declarative_tree.m"
          {
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 0));
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_13_13;
#line 1857 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_14_14;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_15_15;
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_16_16;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_17_17;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_18_18;

#line 1857 "declarative_tree.m"
            mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 3)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_10, (MR_Integer) 7)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1857 "declarative_tree.m"
          }
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
        case (MR_Integer) 3:
#line 1858 "declarative_tree.m"
#line 1858 "declarative_tree.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 0)))) {
#line 1858 "declarative_tree.m"
            default:
#line 1858 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1858 "declarative_tree.m"
              {
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_20_20;
#line 1858 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_21_21;
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_22_22;
#line 1858 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_23_23;

#line 1858 "declarative_tree.m"
                mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 3));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1858 "declarative_tree.m"
              }
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1859 "declarative_tree.m"
              {
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 1));
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_25_25;
#line 1859 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_26_26;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_27_27;
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_28_28;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_29_29;

#line 1859 "declarative_tree.m"
                mdb__declarative_tree__CallId0_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 2));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 3));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 4)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 5)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 6)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_10, (MR_Integer) 7)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1859 "declarative_tree.m"
              }
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
          }
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
      }
#line 1863 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1862 "declarative_tree.m"
      mdb__declarative_tree__CallId_6 = mdb__declarative_tree__CallId0_12;
#line 1863 "declarative_tree.m"
    else
#line 1864 "declarative_tree.m"
      {
#line 1864 "declarative_tree.m"
        {
#line 1864 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1864 "declarative_tree.m"
      }
#line 471 "declarative_tree.m"
    {
#line 471 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_3, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_6, &mdb__declarative_tree__CallNode_36);
    }
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 0));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 1));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 2)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 3)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 4)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 5)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 6)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_44_44 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 7)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 8)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_36, (MR_Integer) 9)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 303 "declarative_tree.m"
    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 301 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 301 "declarative_tree.m"
  }
#line 87 "declarative_tree.m"
}

#line 86 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_subterm_mode_5_5_p_0(
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 86 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 86 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5)
#line 86 "declarative_tree.m"
{
#line 793 "declarative_tree.m"
  {
#line 793 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 793 "declarative_tree.m"
    {
#line 793 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_109_101_114_99_117_114_121_95_101_100_116_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_119_114_97_112_95_95_97_114_105_116_121_49_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_116_114_101_101_95_95_101_100_116_95_110_111_100_101_95_95_97_114_105_116_121_49_95_95_95_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_101_100_116_95_95_101_100_116_95_115_117_98_116_101_114_109_95_109_111_100_101_95_53_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_6, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__HeadVar__2_2, mdb__declarative_tree__HeadVar__3_3, mdb__declarative_tree__HeadVar__5_5);
#line 793 "declarative_tree.m"
      return;
    }
#line 793 "declarative_tree.m"
  }
#line 86 "declarative_tree.m"
}

#line 900 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0_1(
#line 900 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 900 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 900 "declarative_tree.m"
{
#line 900 "declarative_tree.m"
  {
#line 900 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 900 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 900 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 900 "declarative_tree.m"
    {
#line 900 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 900 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 900 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 900 "declarative_tree.m"
  }
#line 900 "declarative_tree.m"
}

#line 85 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0(
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 85 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__4_4,
#line 85 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__5_5,
#line 85 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__6_6)
#line 85 "declarative_tree.m"
{
#line 809 "declarative_tree.m"
  {
#line 809 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 809 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_12 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 809 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_13 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 809 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ChainStart_14;

#line 810 "declarative_tree.m"
    {
#line 810 "declarative_tree.m"
      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_99_104_97_105_110_95_115_116_97_114_116_95_95_91_53_93_95_48_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__Ref_13, mdb__declarative_tree__HeadVar__3_3, &mdb__declarative_tree__ChainStart_14);
    }
#line 830 "declarative_tree.m"
    if ((mdb__declarative_tree__ChainStart_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 831 "declarative_tree.m"
      {
#line 832 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 834 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 831 "declarative_tree.m"
      }
#line 830 "declarative_tree.m"
    else
#line 813 "declarative_tree.m"
      {
#line 813 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartLoc_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 0)));
#line 813 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__ArgNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 1)));
#line 813 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__TotalArgs_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 2)));
#line 813 "declarative_tree.m"
        MR_Box mdb__declarative_tree__NodeId_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 3));
#line 813 "declarative_tree.m"
        MR_Word mdb__declarative_tree__StartPath_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 4)));
#line 813 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeProcDefnRep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ChainStart_14, (MR_Integer) 5)));
#line 7615 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_24_24;

#line 7618 "mdb.declarative_tree.c"
        {
#line 7620 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_24_24);
        }
#line 1795 "declarative_tree.m"
        if ((mdb__declarative_tree__StartLoc_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1795 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 1;
#line 1795 "declarative_tree.m"
        else
#line 1796 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__5_5 = (MR_Integer) 0;
#line 818 "declarative_tree.m"
        if ((mdb__declarative_tree__MaybeProcDefnRep_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 817 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 818 "declarative_tree.m"
        else
#line 819 "declarative_tree.m"
          {
#line 819 "declarative_tree.m"
            MR_Word mdb__declarative_tree__ProcDefnRep_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeProcDefnRep_20, (MR_Integer) 0)));
#line 825 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Origin0_22;

#line 821 "declarative_tree.m"
            {
#line 821 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_tree__trace_dependency_special_case_8_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__Ref_13, mdb__declarative_tree__StartLoc_15, mdb__declarative_tree__ArgNum_16, mdb__declarative_tree__HeadVar__4_4, mdb__declarative_tree__NodeId_18, &mdb__declarative_tree__Origin0_22);
            }
#line 825 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 824 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__6_6 = mdb__declarative_tree__Origin0_22;
#line 825 "declarative_tree.m"
            else
#line 890 "declarative_tree.m"
              {
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Node_36;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Contour0_37;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Contour_40;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__HeadVars_41;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__GoalRep_42;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__AllTraced_43;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__MaybePrims_44;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_54_54;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_55_55;
#line 890 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_56_56;
#line 900 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_61_61;
#line 900 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_62_62;
#line 900 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_63_63;
#line 900 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_64_64;
#line 901 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_65_65;
#line 901 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_66_66;
#line 901 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_67_67;
#line 901 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_68_68;

#line 891 "declarative_tree.m"
                {
#line 891 "declarative_tree.m"
                  mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__NodeId_18, &mdb__declarative_tree__Node_36);
                }
#line 892 "declarative_tree.m"
                {
#line 892 "declarative_tree.m"
                  mdb__declarative_tree__materialize_contour_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__NodeId_18, mdb__declarative_tree__Node_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Contour0_37);
                }
#line 896 "declarative_tree.m"
                if ((mdb__declarative_tree__StartLoc_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "declarative_tree.m"
                  mdb__declarative_tree__Contour_40 = mdb__declarative_tree__Contour0_37;
#line 896 "declarative_tree.m"
                else
#line 894 "declarative_tree.m"
                  {
#line 894 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_54_70;
#line 894 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_55_71;
#line 894 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_57_73;
#line 894 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__TypeInfo_59_75;
#line 894 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CallId_38 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, (MR_Integer) 0));
#line 894 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__CallNode_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, (MR_Integer) 1)));
#line 894 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_50_50;
#line 894 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_51_51;

#line 7729 "mdb.declarative_tree.c"
                    {
#line 7731 "mdb.declarative_tree.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_54_70);
                    }
#line 7734 "mdb.declarative_tree.c"
                    {
#line 7736 "mdb.declarative_tree.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_55_71);
                    }
#line 7739 "mdb.declarative_tree.c"
                    {
#line 7741 "mdb.declarative_tree.c"
                      mdb__declarative_tree__TypeInfo_57_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7743 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_57_73, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 7745 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_57_73, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_55_71));
#line 7747 "mdb.declarative_tree.c"
                    }
#line 7749 "mdb.declarative_tree.c"
                    {
#line 7751 "mdb.declarative_tree.c"
                      mdb__declarative_tree__TypeInfo_59_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7753 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7755 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_54_70));
#line 7757 "mdb.declarative_tree.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_59_75, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_57_73));
#line 7759 "mdb.declarative_tree.c"
                    }
#line 895 "declarative_tree.m"
                    {
#line 895 "declarative_tree.m"
                      mdb__declarative_tree__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 895 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_51_51, 0) = mdb__declarative_tree__CallId_38;
#line 895 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_51_51, 1) = ((MR_Box) (mdb__declarative_tree__CallNode_39));
#line 895 "declarative_tree.m"
                    }
#line 895 "declarative_tree.m"
                    {
#line 895 "declarative_tree.m"
                      mdb__declarative_tree__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_50_50, 0) = ((MR_Box) (mdb__declarative_tree__V_51_51));
#line 895 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "declarative_tree.m"
                    }
#line 895 "declarative_tree.m"
                    {
#line 895 "declarative_tree.m"
                      mdb__declarative_tree__Contour_40 = mercury__list__append_2_f_0(mdb__declarative_tree__TypeInfo_59_75, mdb__declarative_tree__Contour0_37, mdb__declarative_tree__V_50_50);
                    }
#line 894 "declarative_tree.m"
                  }
#line 900 "declarative_tree.m"
                mdb__declarative_tree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 0)));
#line 900 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 1)));
#line 900 "declarative_tree.m"
                mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 2)));
#line 900 "declarative_tree.m"
                mdb__declarative_tree__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 3)));
#line 900 "declarative_tree.m"
                mdb__declarative_tree__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 4)));
#line 900 "declarative_tree.m"
                {
#line 900 "declarative_tree.m"
                  mdb__declarative_tree__HeadVars_41 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[2], mdb__declarative_tree__V_54_54);
                }
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 0)));
#line 901 "declarative_tree.m"
                mdb__declarative_tree__GoalRep_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 1)));
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 2)));
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 3)));
#line 901 "declarative_tree.m"
                mdb__declarative_tree__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_21, (MR_Integer) 4)));
#line 1783 "declarative_tree.m"
{
#define MR_PROC_LABEL mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_dependency_6_6_p_0

	MR_Word TracingOn;

		{
#line 1783 "declarative_tree.m"

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif

#line 7828 "mdb.declarative_tree.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_tree__AllTraced_43  = TracingOn;
#line 1783 "declarative_tree.m"
}
#line 904 "declarative_tree.m"
                {
#line 904 "declarative_tree.m"
                  mdb__declarative_tree__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_56_56, 0) = ((MR_Box) (mdb__declarative_tree__GoalRep_42));
#line 904 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "declarative_tree.m"
                }
#line 904 "declarative_tree.m"
                {
#line 904 "declarative_tree.m"
                  mdb__declarative_tree__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_55_55, 0) = ((MR_Box) (mdb__declarative_tree__V_56_56));
#line 904 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "declarative_tree.m"
                }
#line 903 "declarative_tree.m"
                {
#line 903 "declarative_tree.m"
                  mdb__declarative_tree__MaybePrims_44 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_7, mdb__declarative_tree__Store_12, mdb__declarative_tree__V_55_55, mdb__declarative_tree__Contour_40, mdb__declarative_tree__StartPath_19, mdb__declarative_tree__ArgNum_16, mdb__declarative_tree__TotalArgs_17, mdb__declarative_tree__HeadVars_41, mdb__declarative_tree__AllTraced_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                }
#line 926 "declarative_tree.m"
                if ((mdb__declarative_tree__MaybePrims_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 926 "declarative_tree.m"
                else
#line 908 "declarative_tree.m"
                  {
#line 908 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Primitives_45;
#line 908 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_46;
#line 908 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__MaybeClosure_47;
#line 908 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__AdjustedTermPath_48;
#line 908 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_44, (MR_Integer) 0)));

#line 907 "declarative_tree.m"
                    mdb__declarative_tree__Primitives_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 0)));
#line 907 "declarative_tree.m"
                    mdb__declarative_tree__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 1)));
#line 907 "declarative_tree.m"
                    mdb__declarative_tree__MaybeClosure_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_60_60, (MR_Integer) 2)));
#line 920 "declarative_tree.m"
#line 920 "declarative_tree.m"
                    switch (mdb__declarative_tree__MaybeClosure_47) {
#line 920 "declarative_tree.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 920 "declarative_tree.m"
                      case (MR_Integer) 0:
#line 922 "declarative_tree.m"
                        mdb__declarative_tree__AdjustedTermPath_48 = mdb__declarative_tree__HeadVar__4_4;
#line 920 "declarative_tree.m"
                        break;
#line 920 "declarative_tree.m"
                      case (MR_Integer) 1:
#line 919 "declarative_tree.m"
                        {
#line 919 "declarative_tree.m"
                          mdb__declarative_tree__AdjustedTermPath_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "declarative_tree.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedTermPath_48, 0) = ((MR_Box) (mdb__declarative_tree__ArgNum_16));
#line 919 "declarative_tree.m"
                          MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedTermPath_48, 1) = ((MR_Box) (mdb__declarative_tree__HeadVar__4_4));
#line 919 "declarative_tree.m"
                        }
#line 920 "declarative_tree.m"
                        break;
#line 920 "declarative_tree.m"
                    }
#line 924 "declarative_tree.m"
                    {
#line 924 "declarative_tree.m"
                      mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_118_101_114_115_101_95_112_114_105_109_105_116_105_118_101_115_95_95_91_49_44_32_53_93_95_48_6_p_0(mdb__declarative_tree__Primitives_45, mdb__declarative_tree__Var_46, mdb__declarative_tree__AdjustedTermPath_48, mdb__declarative_tree__ProcDefnRep_21, mdb__declarative_tree__HeadVar__6_6);
#line 924 "declarative_tree.m"
                      return;
                    }
#line 908 "declarative_tree.m"
                  }
#line 890 "declarative_tree.m"
              }
#line 819 "declarative_tree.m"
          }
#line 813 "declarative_tree.m"
      }
#line 809 "declarative_tree.m"
  }
#line 85 "declarative_tree.m"
}

#line 84 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_parent_3_3_p_0(
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
#line 240 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_31_31;
#line 240 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_32_32;
#line 240 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 240 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;
#line 240 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_35_35;
#line 240 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_36_36;
#line 240 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_37_37;
#line 240 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_38_38;
#line 240 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 242 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_40_40;
#line 242 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_41_41;
#line 242 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_42_42;
#line 242 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_43_43;
#line 242 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_44_44;
#line 242 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_45_45;
#line 242 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_46_46;
#line 242 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_47_47;
#line 242 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_48_48;

#line 234 "declarative_tree.m"
    {
#line 234 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__Ref_6, &mdb__declarative_tree__Node_8);
    }
#line 236 "declarative_tree.m"
#line 236 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 236 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 236 "declarative_tree.m"
      case (MR_Integer) 1:
#line 236 "declarative_tree.m"
        {
#line 236 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 236 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_16_16;
#line 236 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_17_17;
#line 236 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18;
#line 236 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_19_19;
#line 236 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20;
#line 236 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21;

#line 236 "declarative_tree.m"
          mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 236 "declarative_tree.m"
          mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 236 "declarative_tree.m"
        }
#line 236 "declarative_tree.m"
        break;
#line 236 "declarative_tree.m"
      case (MR_Integer) 3:
#line 236 "declarative_tree.m"
#line 236 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 236 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 236 "declarative_tree.m"
          case (MR_Integer) 0:
#line 235 "declarative_tree.m"
            {
#line 235 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 235 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_11_11;
#line 235 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_12_12;
#line 235 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_13_13;
#line 235 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_14_14;

#line 235 "declarative_tree.m"
              mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 235 "declarative_tree.m"
              mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 235 "declarative_tree.m"
              mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 235 "declarative_tree.m"
              mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 235 "declarative_tree.m"
              mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 235 "declarative_tree.m"
            }
#line 236 "declarative_tree.m"
            break;
#line 236 "declarative_tree.m"
          case (MR_Integer) 1:
#line 237 "declarative_tree.m"
            {
#line 237 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 237 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_23_23;
#line 237 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_24_24;
#line 237 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_25_25;
#line 237 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26;
#line 237 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;

#line 237 "declarative_tree.m"
              mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 237 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 237 "declarative_tree.m"
              mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 237 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 237 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 237 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 237 "declarative_tree.m"
            }
#line 236 "declarative_tree.m"
            break;
#line 236 "declarative_tree.m"
        }
#line 236 "declarative_tree.m"
        break;
#line 236 "declarative_tree.m"
    }
#line 239 "declarative_tree.m"
    {
#line 239 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__Call_28);
    }
#line 240 "declarative_tree.m"
    mdb__declarative_tree__CallPrecId_29 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 0));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 1));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 2)));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 3)));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 4)));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 5)));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 6)));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 7)));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 8)));
#line 240 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_28, (MR_Integer) 9)));
#line 241 "declarative_tree.m"
    {
#line 241 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallPrecId_29, &mdb__declarative_tree__ParentCallNode_30);
    }
#line 233 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 233 "declarative_tree.m"
      {
#line 242 "declarative_tree.m"
        mdb__declarative_tree__V_40_40 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 0));
#line 242 "declarative_tree.m"
        mdb__declarative_tree__Parent_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 1));
#line 242 "declarative_tree.m"
        mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 2)));
#line 242 "declarative_tree.m"
        mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 3)));
#line 242 "declarative_tree.m"
        mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 4)));
#line 242 "declarative_tree.m"
        mdb__declarative_tree__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 5)));
#line 242 "declarative_tree.m"
        mdb__declarative_tree__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 6)));
#line 242 "declarative_tree.m"
        mdb__declarative_tree__V_46_46 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 7)));
#line 242 "declarative_tree.m"
        mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ParentCallNode_30, (MR_Integer) 8)));
#line 242 "declarative_tree.m"
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
#line 84 "declarative_tree.m"
}

#line 83 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_children_3_3_p_0(
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
#line 277 "declarative_tree.m"
  {
#line 277 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 277 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 277 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 277 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 278 "declarative_tree.m"
    {
#line 278 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 283 "declarative_tree.m"
#line 283 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 283 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 283 "declarative_tree.m"
      case (MR_Integer) 1:
#line 284 "declarative_tree.m"
        {
#line 284 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_38_38;
#line 284 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Atom_21;
#line 284 "declarative_tree.m"
          MR_Box mdb__declarative_tree__PrecId_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 284 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_34 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 284 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_62;
#line 284 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_63_63;
#line 284 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 284 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 284 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 284 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 284 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 284 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 472 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_64_64;
#line 472 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_65_65;
#line 472 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_66_66;
#line 472 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_67_67;
#line 472 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_68_68;
#line 472 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_69_69;
#line 472 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_70_70;
#line 472 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_71_71;
#line 472 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_72_72;

#line 8272 "mdb.declarative_tree.c"
          {
#line 8274 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_38_38);
          }
#line 285 "declarative_tree.m"
          {
#line 285 "declarative_tree.m"
            mdb__declarative_tree__Atom_21 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_38_38, mdb__declarative_tree__Node_8);
          }
#line 471 "declarative_tree.m"
          {
#line 471 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_34, &mdb__declarative_tree__CallNode_62);
          }
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 0));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 1));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 2)));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 3)));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 4)));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 5)));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 6)));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 7)));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 8)));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_62, (MR_Integer) 9)));
#line 472 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 284 "declarative_tree.m"
            {
#line 287 "declarative_tree.m"
              {
#line 287 "declarative_tree.m"
                mdb__declarative_tree__succeeded = mdb__declarative_tree__missing_answer_special_case_1_p_0(mdb__declarative_tree__Atom_21);
              }
#line 289 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 288 "declarative_tree.m"
                {
#line 288 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__TypeInfo_13_79;

#line 8327 "mdb.declarative_tree.c"
                  {
#line 8329 "mdb.declarative_tree.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_13_79);
                  }
#line 630 "declarative_tree.m"
                  {
#line 630 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_79, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34);
                  }
#line 632 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 631 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_29_29;
#line 632 "declarative_tree.m"
                  else
#line 633 "declarative_tree.m"
                    {
#line 633 "declarative_tree.m"
                      mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34, mdb__declarative_tree__V_29_29, mdb__declarative_tree__HeadVar__3_3);
                    }
#line 288 "declarative_tree.m"
                }
#line 289 "declarative_tree.m"
              else
#line 290 "declarative_tree.m"
                {
#line 290 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 498 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__TypeInfo_15_87;

#line 8359 "mdb.declarative_tree.c"
                  {
#line 8361 "mdb.declarative_tree.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_15_87);
                  }
#line 498 "declarative_tree.m"
                  {
#line 498 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_87, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34);
                  }
#line 500 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 499 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_31_31;
#line 500 "declarative_tree.m"
                  else
#line 501 "declarative_tree.m"
                    {
#line 501 "declarative_tree.m"
                      mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_33, mdb__declarative_tree__CallId_34, mdb__declarative_tree__V_31_31, mdb__declarative_tree__HeadVar__3_3);
                    }
#line 290 "declarative_tree.m"
                }
#line 289 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 284 "declarative_tree.m"
            }
#line 284 "declarative_tree.m"
        }
#line 283 "declarative_tree.m"
        break;
#line 283 "declarative_tree.m"
      case (MR_Integer) 3:
#line 283 "declarative_tree.m"
#line 283 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 283 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 283 "declarative_tree.m"
          case (MR_Integer) 0:
#line 280 "declarative_tree.m"
            {
#line 280 "declarative_tree.m"
              MR_Box mdb__declarative_tree__PrecId_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 280 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 280 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_32_32;
#line 280 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 280 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 280 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 280 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 630 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_13_94;
#line 630 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__TypeInfoIndex_93;

#line 281 "declarative_tree.m"
              {
#line 281 "declarative_tree.m"
                mdb__declarative_tree__succeeded = mdb__declarative_tree__not_at_depth_limit_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10);
              }
#line 280 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 280 "declarative_tree.m"
                {
#line 282 "declarative_tree.m"
                  mdb__declarative_tree__V_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8431 "mdb.declarative_tree.c"
                  mdb__declarative_tree__TypeInfoIndex_93 = (MR_Integer) 2;
#line 8433 "mdb.declarative_tree.c"
                  {
#line 8435 "mdb.declarative_tree.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__TypeInfoIndex_93, &mdb__declarative_tree__TypeInfo_13_94);
                  }
#line 630 "declarative_tree.m"
                  {
#line 630 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_94, mdb__declarative_tree__PrecId_9, mdb__declarative_tree__CallId_10);
                  }
#line 632 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 631 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_32_32;
#line 632 "declarative_tree.m"
                  else
#line 633 "declarative_tree.m"
                    {
#line 633 "declarative_tree.m"
                      mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_9, mdb__declarative_tree__CallId_10, mdb__declarative_tree__V_32_32, mdb__declarative_tree__HeadVar__3_3);
                    }
#line 632 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 280 "declarative_tree.m"
                }
#line 280 "declarative_tree.m"
            }
#line 283 "declarative_tree.m"
            break;
#line 283 "declarative_tree.m"
          case (MR_Integer) 1:
#line 293 "declarative_tree.m"
            {
#line 293 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_27_27;
#line 293 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_28_28;
#line 293 "declarative_tree.m"
              MR_Box mdb__declarative_tree__PrecId_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 293 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 293 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_41;
#line 293 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_42_42;
#line 293 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 293 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 293 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 293 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 293 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 472 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_43_43;
#line 472 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_44_44;
#line 472 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_45_45;
#line 472 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_46_46;
#line 472 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_47_47;
#line 472 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_48_48;
#line 472 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_49_49;
#line 472 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_50_50;
#line 472 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_51_51;
#line 498 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_15_59;
#line 498 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__TypeInfoIndex_58;

#line 471 "declarative_tree.m"
              {
#line 471 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_41);
              }
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 0));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 1));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 2)));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 3)));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 4)));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 5)));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 6)));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 7)));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 8)));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_41, (MR_Integer) 9)));
#line 472 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 293 "declarative_tree.m"
                {
#line 295 "declarative_tree.m"
                  mdb__declarative_tree__V_27_27 = (MR_Integer) 1;
#line 295 "declarative_tree.m"
                  mdb__declarative_tree__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8546 "mdb.declarative_tree.c"
                  mdb__declarative_tree__TypeInfoIndex_58 = (MR_Integer) 2;
#line 8548 "mdb.declarative_tree.c"
                  {
#line 8550 "mdb.declarative_tree.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__TypeInfoIndex_58, &mdb__declarative_tree__TypeInfo_15_59);
                  }
#line 498 "declarative_tree.m"
                  {
#line 498 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_59, mdb__declarative_tree__PrecId_35, mdb__declarative_tree__CallId_36);
                  }
#line 500 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 499 "declarative_tree.m"
                    *mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__V_28_28;
#line 500 "declarative_tree.m"
                  else
#line 501 "declarative_tree.m"
                    {
#line 501 "declarative_tree.m"
                      mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__V_27_27, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrecId_35, mdb__declarative_tree__CallId_36, mdb__declarative_tree__V_28_28, mdb__declarative_tree__HeadVar__3_3);
                    }
#line 500 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 293 "declarative_tree.m"
                }
#line 293 "declarative_tree.m"
            }
#line 283 "declarative_tree.m"
            break;
#line 283 "declarative_tree.m"
        }
#line 283 "declarative_tree.m"
        break;
#line 283 "declarative_tree.m"
    }
#line 277 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 277 "declarative_tree.m"
  }
#line 83 "declarative_tree.m"
}

#line 82 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_i_bug_4_4_p_0(
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 82 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 82 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 82 "declarative_tree.m"
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
#line 127 "declarative_tree.m"
    {
#line 127 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__BugRef_7, &mdb__declarative_tree__Node_16);
    }
#line 131 "declarative_tree.m"
#line 131 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_16)) {
#line 131 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 131 "declarative_tree.m"
      case (MR_Integer) 1:
#line 129 "declarative_tree.m"
        {
#line 129 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_51;
#line 129 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 129 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_48;
#line 129 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_49;
#line 129 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 0));
#line 129 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 129 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 3)));
#line 129 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 129 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 129 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 6)));
#line 129 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_16, (MR_Integer) 7)));

#line 119 "declarative_tree.m"
          {
#line 119 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_18, &mdb__declarative_tree__CallNode_48);
          }
#line 8670 "mdb.declarative_tree.c"
          {
#line 8672 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_51);
          }
#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_49 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_51, mdb__declarative_tree__CallNode_48);
          }
#line 121 "declarative_tree.m"
          mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_49;
#line 129 "declarative_tree.m"
        }
#line 131 "declarative_tree.m"
        break;
#line 131 "declarative_tree.m"
      case (MR_Integer) 3:
#line 131 "declarative_tree.m"
#line 131 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 0)))) {
#line 131 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 131 "declarative_tree.m"
          case (MR_Integer) 0:
#line 132 "declarative_tree.m"
            {
#line 132 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_11_58;
#line 132 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 132 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_55;
#line 132 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_56;
#line 132 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 132 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 3));
#line 132 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 132 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 132 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 6)));

#line 119 "declarative_tree.m"
              {
#line 119 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_55);
              }
#line 8721 "mdb.declarative_tree.c"
              {
#line 8723 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_58);
              }
#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_56 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_58, mdb__declarative_tree__CallNode_55);
              }
#line 121 "declarative_tree.m"
              mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_56;
#line 132 "declarative_tree.m"
            }
#line 131 "declarative_tree.m"
            break;
#line 131 "declarative_tree.m"
          case (MR_Integer) 1:
#line 135 "declarative_tree.m"
            {
#line 135 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_11_44;
#line 135 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 2));
#line 135 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_41;
#line 135 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_42;
#line 135 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 1));
#line 135 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 3));
#line 135 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 4)));
#line 135 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 5)));
#line 135 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 6)));
#line 135 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_16, (MR_Integer) 7)));

#line 119 "declarative_tree.m"
              {
#line 119 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_37, &mdb__declarative_tree__CallNode_41);
              }
#line 8767 "mdb.declarative_tree.c"
              {
#line 8769 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_44);
              }
#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_42 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_44, mdb__declarative_tree__CallNode_41);
              }
#line 121 "declarative_tree.m"
              mdb__declarative_tree__BugAtom_9 = (MR_Word) mdb__declarative_tree__CallAtom_42;
#line 135 "declarative_tree.m"
            }
#line 131 "declarative_tree.m"
            break;
#line 131 "declarative_tree.m"
        }
#line 131 "declarative_tree.m"
        break;
#line 131 "declarative_tree.m"
    }
#line 218 "declarative_tree.m"
    {
#line 218 "declarative_tree.m"
      mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__InadmissibleRef_8, &mdb__declarative_tree__InadmissibleAtom_10);
    }
#line 143 "declarative_tree.m"
    {
#line 143 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_5, mdb__declarative_tree__Store_6, mdb__declarative_tree__BugRef_7, &mdb__declarative_tree__Node_62);
    }
#line 146 "declarative_tree.m"
#line 146 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_62)) {
#line 146 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 146 "declarative_tree.m"
      case (MR_Integer) 1:
#line 145 "declarative_tree.m"
        {
#line 145 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_63_63 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 0));
#line 145 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 145 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 145 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 3)));
#line 145 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_67_67;
#line 145 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_68_68;
#line 145 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_69_69;

#line 145 "declarative_tree.m"
          mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 145 "declarative_tree.m"
          mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 145 "declarative_tree.m"
          mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 145 "declarative_tree.m"
          mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_62, (MR_Integer) 7)));
#line 145 "declarative_tree.m"
        }
#line 146 "declarative_tree.m"
        break;
#line 146 "declarative_tree.m"
      case (MR_Integer) 3:
#line 146 "declarative_tree.m"
#line 146 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 0)))) {
#line 146 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 146 "declarative_tree.m"
          case (MR_Integer) 0:
#line 147 "declarative_tree.m"
            {
#line 147 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_70_70 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 147 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_71_71 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 147 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 3));
#line 147 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_73_73;
#line 147 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_74_74;

#line 147 "declarative_tree.m"
              mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 147 "declarative_tree.m"
              mdb__declarative_tree__V_73_73 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 147 "declarative_tree.m"
              mdb__declarative_tree__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 147 "declarative_tree.m"
            }
#line 146 "declarative_tree.m"
            break;
#line 146 "declarative_tree.m"
          case (MR_Integer) 1:
#line 149 "declarative_tree.m"
            {
#line 149 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_75_75 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 1));
#line 149 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 2));
#line 149 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_77_77 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 3));
#line 149 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 4)));
#line 149 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_79_79;
#line 149 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_80_80;

#line 149 "declarative_tree.m"
              mdb__declarative_tree__Event_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 5)));
#line 149 "declarative_tree.m"
              mdb__declarative_tree__V_79_79 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 6)));
#line 149 "declarative_tree.m"
              mdb__declarative_tree__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_62, (MR_Integer) 7)));
#line 149 "declarative_tree.m"
            }
#line 146 "declarative_tree.m"
            break;
#line 146 "declarative_tree.m"
        }
#line 146 "declarative_tree.m"
        break;
#line 146 "declarative_tree.m"
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
#line 82 "declarative_tree.m"
}

#line 81 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_get_e_bug_3_3_p_0(
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
#line 202 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 202 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 202 "declarative_tree.m"
      case (MR_Integer) 1:
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
#line 105 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_60_60;
#line 105 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_61_61;
#line 105 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_62_62;
#line 105 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_63_63;
#line 105 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_64_64;
#line 105 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_65_65;
#line 105 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_66_66;
#line 107 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_67_67;
#line 107 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_68_68;
#line 107 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_69_69;
#line 107 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_70_70;
#line 107 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_71_71;
#line 107 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_72_72;
#line 107 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_73_73;
#line 107 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_74_74;
#line 107 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_75_75;
#line 108 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_76_76;
#line 108 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_77_77;
#line 108 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_78_78;
#line 108 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_79_79;
#line 108 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_80_80;
#line 108 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_81_81;
#line 108 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_82_82;

#line 119 "declarative_tree.m"
          {
#line 119 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__CallNode_45);
          }
#line 9053 "mdb.declarative_tree.c"
          {
#line 9055 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_48);
          }
#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_48, mdb__declarative_tree__CallNode_45);
          }
#line 121 "declarative_tree.m"
          mdb__declarative_tree__InitDeclAtom_17 = (MR_Word) mdb__declarative_tree__CallAtom_46;
#line 9065 "mdb.declarative_tree.c"
          {
#line 9067 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_84);
          }
#line 104 "declarative_tree.m"
          {
#line 104 "declarative_tree.m"
            mdb__declarative_tree__ExitAtom_52 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_84, mdb__declarative_tree__Node_8);
          }
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__CallId_53 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_64_64 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 106 "declarative_tree.m"
          {
#line 106 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_53, &mdb__declarative_tree__Call_54);
          }
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_67_67 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 0));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_68_68 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 1));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 2)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 3)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 4)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 5)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 6)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_74_74 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__CallIoSeq_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 8)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_54, (MR_Integer) 9)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_77_77 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_78_78 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__ExitIoSeq_56 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 109 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_55 == mdb__declarative_tree__ExitIoSeq_56);
#line 111 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 110 "declarative_tree.m"
            {
#line 110 "declarative_tree.m"
              {
#line 110 "declarative_tree.m"
                mdb__declarative_tree__FinalDeclAtom_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_52));
#line 110 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "declarative_tree.m"
              }
#line 110 "declarative_tree.m"
            }
#line 111 "declarative_tree.m"
          else
#line 112 "declarative_tree.m"
            {
#line 112 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_58_58;
#line 112 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_59_59;

#line 113 "declarative_tree.m"
              {
#line 113 "declarative_tree.m"
                mdb__declarative_tree__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_59_59, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_55));
#line 113 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_59_59, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_56));
#line 113 "declarative_tree.m"
              }
#line 113 "declarative_tree.m"
              {
#line 113 "declarative_tree.m"
                mdb__declarative_tree__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_58_58, 0) = ((MR_Box) (mdb__declarative_tree__V_59_59));
#line 113 "declarative_tree.m"
              }
#line 112 "declarative_tree.m"
              {
#line 112 "declarative_tree.m"
                mdb__declarative_tree__FinalDeclAtom_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_52));
#line 112 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_18, 1) = ((MR_Box) (mdb__declarative_tree__V_58_58));
#line 112 "declarative_tree.m"
              }
#line 112 "declarative_tree.m"
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
        break;
#line 202 "declarative_tree.m"
      case (MR_Integer) 3:
#line 202 "declarative_tree.m"
#line 202 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 202 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 202 "declarative_tree.m"
          case (MR_Integer) 0:
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

#line 119 "declarative_tree.m"
              {
#line 119 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_30, &mdb__declarative_tree__CallNode_88);
              }
#line 9253 "mdb.declarative_tree.c"
              {
#line 9255 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_91);
              }
#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_89 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_91, mdb__declarative_tree__CallNode_88);
              }
#line 121 "declarative_tree.m"
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
#line 202 "declarative_tree.m"
            break;
#line 202 "declarative_tree.m"
          case (MR_Integer) 1:
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

#line 119 "declarative_tree.m"
              {
#line 119 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_32, &mdb__declarative_tree__CallNode_38);
              }
#line 9315 "mdb.declarative_tree.c"
              {
#line 9317 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_41);
              }
#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_39 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_41, mdb__declarative_tree__CallNode_38);
              }
#line 121 "declarative_tree.m"
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
            break;
#line 202 "declarative_tree.m"
        }
#line 202 "declarative_tree.m"
        break;
#line 202 "declarative_tree.m"
    }
#line 194 "declarative_tree.m"
  }
#line 81 "declarative_tree.m"
}

#line 80 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__ClassMethod_for_mdb__declarative_edt__mercury_edt____mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1______mdb__declarative_edt__edt_question_3_3_p_0(
#line 80 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4,
#line 80 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 80 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 80 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__3_3)
#line 80 "declarative_tree.m"
{
#line 157 "declarative_tree.m"
  {
#line 157 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 157 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_6 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 157 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 157 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_8;

#line 158 "declarative_tree.m"
    {
#line 158 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_8);
    }
#line 164 "declarative_tree.m"
#line 164 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_8)) {
#line 164 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 164 "declarative_tree.m"
      case (MR_Integer) 1:
#line 165 "declarative_tree.m"
        {
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_52;
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_40_88;
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__InitDeclAtom_24;
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__FinalDeclAtom_25;
#line 165 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_36 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_49;
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_50;
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ExitAtom_56;
#line 165 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_57;
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Call_58;
#line 165 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__CallIoSeq_59;
#line 165 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__ExitIoSeq_60;
#line 165 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 165 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 165 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 165 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 165 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 165 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 165 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 105 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_64_64;
#line 105 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_65_65;
#line 105 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_66_66;
#line 105 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_67_67;
#line 105 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_68_68;
#line 105 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_69_69;
#line 105 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_70_70;
#line 107 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_71_71;
#line 107 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_72_72;
#line 107 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_73_73;
#line 107 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_74_74;
#line 107 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_75_75;
#line 107 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_76_76;
#line 107 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_77_77;
#line 107 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_78_78;
#line 107 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_79_79;
#line 108 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_80_80;
#line 108 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_81_81;
#line 108 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_82_82;
#line 108 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_83_83;
#line 108 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_84_84;
#line 108 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_85_85;
#line 108 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_86_86;

#line 119 "declarative_tree.m"
          {
#line 119 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_36, &mdb__declarative_tree__CallNode_49);
          }
#line 9486 "mdb.declarative_tree.c"
          {
#line 9488 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_52);
          }
#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_50 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_52, mdb__declarative_tree__CallNode_49);
          }
#line 121 "declarative_tree.m"
          mdb__declarative_tree__InitDeclAtom_24 = (MR_Word) mdb__declarative_tree__CallAtom_50;
#line 9498 "mdb.declarative_tree.c"
          {
#line 9500 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_88);
          }
#line 104 "declarative_tree.m"
          {
#line 104 "declarative_tree.m"
            mdb__declarative_tree__ExitAtom_56 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_88, mdb__declarative_tree__Node_8);
          }
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_64_64 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__CallId_57 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_65_65 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_68_68 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 105 "declarative_tree.m"
          mdb__declarative_tree__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 106 "declarative_tree.m"
          {
#line 106 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_57, &mdb__declarative_tree__Call_58);
          }
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_71_71 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 0));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 1));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 2)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 3)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 4)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 5)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 6)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__CallIoSeq_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 8)));
#line 107 "declarative_tree.m"
          mdb__declarative_tree__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_58, (MR_Integer) 9)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_80_80 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_81_81 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_82_82 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_85_85 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__ExitIoSeq_60 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 108 "declarative_tree.m"
          mdb__declarative_tree__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 109 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_59 == mdb__declarative_tree__ExitIoSeq_60);
#line 111 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 110 "declarative_tree.m"
            {
#line 110 "declarative_tree.m"
              {
#line 110 "declarative_tree.m"
                mdb__declarative_tree__FinalDeclAtom_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_56));
#line 110 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "declarative_tree.m"
              }
#line 110 "declarative_tree.m"
            }
#line 111 "declarative_tree.m"
          else
#line 112 "declarative_tree.m"
            {
#line 112 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_62_62;
#line 112 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_63_63;

#line 113 "declarative_tree.m"
              {
#line 113 "declarative_tree.m"
                mdb__declarative_tree__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_63_63, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_59));
#line 113 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_63_63, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_60));
#line 113 "declarative_tree.m"
              }
#line 113 "declarative_tree.m"
              {
#line 113 "declarative_tree.m"
                mdb__declarative_tree__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_62_62, 0) = ((MR_Box) (mdb__declarative_tree__V_63_63));
#line 113 "declarative_tree.m"
              }
#line 112 "declarative_tree.m"
              {
#line 112 "declarative_tree.m"
                mdb__declarative_tree__FinalDeclAtom_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_56));
#line 112 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__FinalDeclAtom_25, 1) = ((MR_Box) (mdb__declarative_tree__V_62_62));
#line 112 "declarative_tree.m"
              }
#line 112 "declarative_tree.m"
            }
#line 168 "declarative_tree.m"
          {
#line 168 "declarative_tree.m"
            MR_Word base;
#line 168 "declarative_tree.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 168 "declarative_tree.m"
            *mdb__declarative_tree__HeadVar__3_3 = base;
#line 168 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 168 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__InitDeclAtom_24));
#line 168 "declarative_tree.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_tree__FinalDeclAtom_25));
#line 168 "declarative_tree.m"
          }
#line 165 "declarative_tree.m"
        }
#line 164 "declarative_tree.m"
        break;
#line 164 "declarative_tree.m"
      case (MR_Integer) 3:
#line 164 "declarative_tree.m"
#line 164 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) {
#line 164 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 164 "declarative_tree.m"
          case (MR_Integer) 0:
#line 160 "declarative_tree.m"
            {
#line 160 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_11_95;
#line 160 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_10 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 160 "declarative_tree.m"
              MR_Box mdb__declarative_tree__RedoId_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 160 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DeclAtom_15;
#line 160 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Answers_16;
#line 160 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_92;
#line 160 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_93;
#line 160 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 160 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 160 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 160 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));

#line 119 "declarative_tree.m"
              {
#line 119 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_10, &mdb__declarative_tree__CallNode_92);
              }
#line 9681 "mdb.declarative_tree.c"
              {
#line 9683 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_95);
              }
#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_93 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_95, mdb__declarative_tree__CallNode_92);
              }
#line 121 "declarative_tree.m"
              mdb__declarative_tree__DeclAtom_15 = (MR_Word) mdb__declarative_tree__CallAtom_93;
#line 162 "declarative_tree.m"
              {
#line 162 "declarative_tree.m"
                mdb__declarative_tree__get_answers_4_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__RedoId_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Answers_16);
              }
#line 163 "declarative_tree.m"
              {
#line 163 "declarative_tree.m"
                MR_Word base;
#line 163 "declarative_tree.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 163 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__3_3 = base;
#line 163 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 163 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtom_15));
#line 163 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__Answers_16));
#line 163 "declarative_tree.m"
              }
#line 160 "declarative_tree.m"
            }
#line 164 "declarative_tree.m"
            break;
#line 164 "declarative_tree.m"
          case (MR_Integer) 1:
#line 170 "declarative_tree.m"
            {
#line 170 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_11_45;
#line 170 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Exception_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 170 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 170 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DeclAtom_38;
#line 170 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_42;
#line 170 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_43;
#line 170 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 170 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_27_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3));
#line 170 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 170 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 170 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 7)));

#line 119 "declarative_tree.m"
              {
#line 119 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_37, &mdb__declarative_tree__CallNode_42);
              }
#line 9750 "mdb.declarative_tree.c"
              {
#line 9752 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_45);
              }
#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_43 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_45, mdb__declarative_tree__CallNode_42);
              }
#line 121 "declarative_tree.m"
              mdb__declarative_tree__DeclAtom_38 = (MR_Word) mdb__declarative_tree__CallAtom_43;
#line 172 "declarative_tree.m"
              {
#line 172 "declarative_tree.m"
                MR_Word base;
#line 172 "declarative_tree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 172 "declarative_tree.m"
                *mdb__declarative_tree__HeadVar__3_3 = base;
#line 172 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 172 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__DeclAtom_38));
#line 172 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_tree__Exception_28));
#line 172 "declarative_tree.m"
              }
#line 170 "declarative_tree.m"
            }
#line 164 "declarative_tree.m"
            break;
#line 164 "declarative_tree.m"
        }
#line 164 "declarative_tree.m"
        break;
#line 164 "declarative_tree.m"
    }
#line 157 "declarative_tree.m"
  }
#line 80 "declarative_tree.m"
}

#line 39 "declarative_tree.m"
void MR_CALL 
mdb__declarative_tree____Compare____wrap_1_0(
#line 39 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_S_8,
#line 39 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 39 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 39 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 39 "declarative_tree.m"
{
#line 39 "declarative_tree.m"
  {
#line 39 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 39 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_6 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 39 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_7 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 39 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_6 == mdb__declarative_tree__CastY_7);
#line 39 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9819 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "declarative_tree.m"
    else
#line 39 "declarative_tree.m"
      {
#line 39 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 39 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_5_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));

#line 39 "declarative_tree.m"
        {
#line 39 "declarative_tree.m"
          mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_S_8, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_5_5);
#line 39 "declarative_tree.m"
          return;
        }
#line 39 "declarative_tree.m"
      }
#line 39 "declarative_tree.m"
  }
#line 39 "declarative_tree.m"
}

#line 39 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree____Unify____wrap_1_0(
#line 39 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_S_7,
#line 39 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 39 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 39 "declarative_tree.m"
{
#line 39 "declarative_tree.m"
  {
#line 39 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 39 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_5 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 39 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_6 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 39 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_5 == mdb__declarative_tree__CastY_6);
#line 39 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 39 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 39 "declarative_tree.m"
    else
#line 39 "declarative_tree.m"
      {
#line 39 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_3_3 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 39 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));

#line 9879 "mdb.declarative_tree.c"
        {
#line 9881 "mdb.declarative_tree.c"
          return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_S_7, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_4_4);
        }
#line 39 "declarative_tree.m"
      }
#line 39 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 39 "declarative_tree.m"
  }
#line 39 "declarative_tree.m"
}

#line 770 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____start_loc_1_0(
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_15,
#line 770 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 770 "declarative_tree.m"
{
#line 770 "declarative_tree.m"
  {
#line 770 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 770 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_13 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 770 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_14 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 770 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_13 == mdb__declarative_tree__CastY_14);
#line 770 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 9919 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 770 "declarative_tree.m"
    else
#line 770 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 770 "declarative_tree.m"
      else
#line 9931 "mdb.declarative_tree.c"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 1;
#line 770 "declarative_tree.m"
    else
#line 770 "declarative_tree.m"
      {
#line 770 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 770 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));

#line 770 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9944 "mdb.declarative_tree.c"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 2;
#line 770 "declarative_tree.m"
        else
#line 770 "declarative_tree.m"
          {
#line 770 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0));
#line 770 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 770 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_12_12;

#line 770 "declarative_tree.m"
            {
#line 770 "declarative_tree.m"
              mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_15, &mdb__declarative_tree__V_12_12, mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_10_10);
            }
#line 9962 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_12_12 == (MR_Integer) 0);
#line 770 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 770 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 770 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_12_12;
#line 770 "declarative_tree.m"
            else
#line 770 "declarative_tree.m"
              {
#line 770 "declarative_tree.m"
                mdb__declarative_execution____Compare____trace_node_1_0(mdb__declarative_tree__TypeInfo_for_R_15, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_18_18, mdb__declarative_tree__V_11_11);
#line 770 "declarative_tree.m"
                return;
              }
#line 770 "declarative_tree.m"
          }
#line 770 "declarative_tree.m"
      }
#line 770 "declarative_tree.m"
  }
#line 770 "declarative_tree.m"
}

#line 770 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____start_loc_1_0(
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 770 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 770 "declarative_tree.m"
{
#line 770 "declarative_tree.m"
  {
#line 770 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 770 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 770 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 770 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 770 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 770 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 770 "declarative_tree.m"
    else
#line 770 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "declarative_tree.m"
      {
#line 770 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastX_3 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 770 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastY_4 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 770 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastY_4 == mdb__declarative_tree__CastX_3);
#line 770 "declarative_tree.m"
      }
#line 770 "declarative_tree.m"
    else
#line 770 "declarative_tree.m"
      {
#line 770 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0));
#line 770 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 770 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_7_7;
#line 770 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8;

#line 770 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 770 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 770 "declarative_tree.m"
          {
#line 770 "declarative_tree.m"
            mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 770 "declarative_tree.m"
            mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 10052 "mdb.declarative_tree.c"
            {
#line 10054 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_11, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_7_7);
            }
#line 770 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 10059 "mdb.declarative_tree.c"
              {
#line 10061 "mdb.declarative_tree.c"
                return mdb__declarative_tree__succeeded = mdb__declarative_execution____Unify____trace_node_1_0(mdb__declarative_tree__TypeInfo_for_R_11, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_8_8);
              }
#line 770 "declarative_tree.m"
          }
#line 770 "declarative_tree.m"
      }
#line 770 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 770 "declarative_tree.m"
  }
#line 770 "declarative_tree.m"
}

#line 1112 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____primitive_list_and_var_1_0(
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_14,
#line 1112 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 1112 "declarative_tree.m"
{
#line 1112 "declarative_tree.m"
  {
#line 1112 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1112 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_12 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 1112 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_13 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 1112 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_12 == mdb__declarative_tree__CastY_13);
#line 1112 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10101 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 1112 "declarative_tree.m"
    else
#line 1112 "declarative_tree.m"
      {
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1112 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 1112 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_16_16;

#line 10124 "mdb.declarative_tree.c"
        {
#line 10126 "mdb.declarative_tree.c"
          mdb__declarative_tree__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10128 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_16_16, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
#line 10130 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_16_16, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_for_R_14));
#line 10132 "mdb.declarative_tree.c"
        }
#line 1112 "declarative_tree.m"
        {
#line 1112 "declarative_tree.m"
          mercury__list____Compare____list_1_0(mdb__declarative_tree__TypeInfo_16_16, &mdb__declarative_tree__V_10_10, (MR_Word) mdb__declarative_tree__V_4_4, (MR_Word) mdb__declarative_tree__V_7_7);
        }
#line 10139 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_10_10 == (MR_Integer) 0);
#line 1112 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1112 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1112 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_10_10;
#line 1112 "declarative_tree.m"
        else
#line 1112 "declarative_tree.m"
          {
#line 1112 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_11_11;

#line 1112 "declarative_tree.m"
            {
#line 1112 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_11_11, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_8_8);
            }
#line 10159 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_11_11 == (MR_Integer) 0);
#line 1112 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1112 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1112 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_11_11;
#line 1112 "declarative_tree.m"
            else
#line 1112 "declarative_tree.m"
              {
#line 1112 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_21_21 = (MR_Integer) mdb__declarative_tree__V_6_6;
#line 1112 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_22_22 = (MR_Integer) mdb__declarative_tree__V_9_9;

#line 1112 "declarative_tree.m"
                {
#line 1112 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_21_21, mdb__declarative_tree__V_22_22);
#line 1112 "declarative_tree.m"
                  return;
                }
#line 1112 "declarative_tree.m"
              }
#line 1112 "declarative_tree.m"
          }
#line 1112 "declarative_tree.m"
      }
#line 1112 "declarative_tree.m"
  }
#line 1112 "declarative_tree.m"
}

#line 1112 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____primitive_list_and_var_1_0(
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_11,
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1112 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 1112 "declarative_tree.m"
{
#line 1112 "declarative_tree.m"
  {
#line 1112 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1112 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 1112 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 1112 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 1112 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1112 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 1112 "declarative_tree.m"
    else
#line 1112 "declarative_tree.m"
      {
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_13_13;
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1112 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1112 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1112 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));

#line 10239 "mdb.declarative_tree.c"
        {
#line 10241 "mdb.declarative_tree.c"
          mdb__declarative_tree__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10243 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_13_13, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_annotated_primitive_1));
#line 10245 "mdb.declarative_tree.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_13_13, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_for_R_11));
#line 10247 "mdb.declarative_tree.c"
        }
#line 10249 "mdb.declarative_tree.c"
        {
#line 10251 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_tree__TypeInfo_13_13, (MR_Word) mdb__declarative_tree__V_3_3, (MR_Word) mdb__declarative_tree__V_6_6);
        }
#line 1112 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1112 "declarative_tree.m"
          {
#line 10258 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_7_7);
#line 1112 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 10262 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_5_5 == mdb__declarative_tree__V_8_8);
#line 1112 "declarative_tree.m"
          }
#line 1112 "declarative_tree.m"
      }
#line 1112 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1112 "declarative_tree.m"
  }
#line 1112 "declarative_tree.m"
}

#line 1737 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____plain_call_info_0_0(
#line 1737 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 1737 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1737 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 1737 "declarative_tree.m"
{
#line 1737 "declarative_tree.m"
  {
#line 1737 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1737 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 1737 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 1737 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_15 == mdb__declarative_tree__CastY_16);
#line 1737 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10299 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 1737 "declarative_tree.m"
    else
#line 1737 "declarative_tree.m"
      {
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1737 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 1737 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3)));
#line 1737 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12;

#line 1737 "declarative_tree.m"
        {
#line 1737 "declarative_tree.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_12_12, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_8_8);
        }
#line 10329 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_12_12 == (MR_Integer) 0);
#line 1737 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1737 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1737 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_12_12;
#line 1737 "declarative_tree.m"
        else
#line 1737 "declarative_tree.m"
          {
#line 1737 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_13_13;

#line 1737 "declarative_tree.m"
            {
#line 1737 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_13_13, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_9_9);
            }
#line 10349 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_13_13 == (MR_Integer) 0);
#line 1737 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1737 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1737 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_13_13;
#line 1737 "declarative_tree.m"
            else
#line 1737 "declarative_tree.m"
              {
#line 1737 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_14_14;

#line 1737 "declarative_tree.m"
                {
#line 1737 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_14_14, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_10_10);
                }
#line 10369 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_14_14 == (MR_Integer) 0);
#line 1737 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 1737 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1737 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_14_14;
#line 1737 "declarative_tree.m"
                else
#line 1737 "declarative_tree.m"
                  {
#line 1737 "declarative_tree.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_11_11);
#line 1737 "declarative_tree.m"
                    return;
                  }
#line 1737 "declarative_tree.m"
              }
#line 1737 "declarative_tree.m"
          }
#line 1737 "declarative_tree.m"
      }
#line 1737 "declarative_tree.m"
  }
#line 1737 "declarative_tree.m"
}

#line 1737 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____plain_call_info_0_0(
#line 1737 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1737 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 1737 "declarative_tree.m"
{
#line 1737 "declarative_tree.m"
  {
#line 1737 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1737 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_11 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 1737 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_12 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 1737 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_11 == mdb__declarative_tree__CastY_12);
#line 1737 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1737 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 1737 "declarative_tree.m"
    else
#line 1737 "declarative_tree.m"
      {
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1737 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 1737 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 1737 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));

#line 10442 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_7_7) == 0);
#line 1737 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1737 "declarative_tree.m"
          {
#line 10448 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_8_8);
#line 1737 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1737 "declarative_tree.m"
              {
#line 10454 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_9_9) == 0);
#line 1737 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 10458 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_10_10) == 0);
#line 1737 "declarative_tree.m"
              }
#line 1737 "declarative_tree.m"
          }
#line 1737 "declarative_tree.m"
      }
#line 1737 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1737 "declarative_tree.m"
  }
#line 1737 "declarative_tree.m"
}

#line 777 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_list_0_0(
#line 777 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 777 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 777 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 777 "declarative_tree.m"
{
#line 777 "declarative_tree.m"
  {
#line 777 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 777 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar1_4 = mdb__declarative_tree__HeadVar__2_2;
#line 777 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar2_5 = mdb__declarative_tree__HeadVar__3_3;

#line 777 "declarative_tree.m"
    {
#line 777 "declarative_tree.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[7], mdb__declarative_tree__HeadVar__1_1, ((MR_Box) (mdb__declarative_tree__Cast_HeadVar1_4)), ((MR_Box) (mdb__declarative_tree__Cast_HeadVar2_5)));
#line 777 "declarative_tree.m"
      return;
    }
#line 777 "declarative_tree.m"
  }
#line 777 "declarative_tree.m"
}

#line 777 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_list_0_0(
#line 777 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 777 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 777 "declarative_tree.m"
{
#line 777 "declarative_tree.m"
  {
#line 777 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 777 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar1_3 = mdb__declarative_tree__HeadVar__1_1;
#line 777 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Cast_HeadVar2_4 = mdb__declarative_tree__HeadVar__2_2;

#line 777 "declarative_tree.m"
    {
#line 777 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[7], ((MR_Box) (mdb__declarative_tree__Cast_HeadVar1_3)), ((MR_Box) (mdb__declarative_tree__Cast_HeadVar2_4)));
    }
#line 777 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 777 "declarative_tree.m"
  }
#line 777 "declarative_tree.m"
}

#line 774 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____goal_and_path_0_0(
#line 774 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 774 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 774 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 774 "declarative_tree.m"
{
#line 774 "declarative_tree.m"
  {
#line 774 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 774 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_9 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 774 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_10 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 774 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_9 == mdb__declarative_tree__CastY_10);
#line 774 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10559 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 774 "declarative_tree.m"
    else
#line 774 "declarative_tree.m"
      {
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8;

#line 774 "declarative_tree.m"
        {
#line 774 "declarative_tree.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], &mdb__declarative_tree__V_8_8, ((MR_Box) (mdb__declarative_tree__V_4_4)), ((MR_Box) (mdb__declarative_tree__V_6_6)));
        }
#line 10581 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_8_8 == (MR_Integer) 0);
#line 774 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 774 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 774 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_8_8;
#line 774 "declarative_tree.m"
        else
#line 774 "declarative_tree.m"
          {
#line 774 "declarative_tree.m"
            mdbcomp__goal_path____Compare____reverse_goal_path_0_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_7_7);
#line 774 "declarative_tree.m"
            return;
          }
#line 774 "declarative_tree.m"
      }
#line 774 "declarative_tree.m"
  }
#line 774 "declarative_tree.m"
}

#line 774 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____goal_and_path_0_0(
#line 774 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 774 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 774 "declarative_tree.m"
{
#line 774 "declarative_tree.m"
  {
#line 774 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 774 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_7 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 774 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_8 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 774 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_7 == mdb__declarative_tree__CastY_8);
#line 774 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 774 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 774 "declarative_tree.m"
    else
#line 774 "declarative_tree.m"
      {
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 774 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));

#line 10642 "mdb.declarative_tree.c"
        {
#line 10644 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], ((MR_Box) (mdb__declarative_tree__V_3_3)), ((MR_Box) (mdb__declarative_tree__V_5_5)));
        }
#line 774 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 10649 "mdb.declarative_tree.c"
          {
#line 10651 "mdb.declarative_tree.c"
            return mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_6_6);
          }
#line 774 "declarative_tree.m"
      }
#line 774 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 774 "declarative_tree.m"
  }
#line 774 "declarative_tree.m"
}

#line 31 "declarative_tree.m"
void MR_CALL 
mdb__declarative_tree____Compare____edt_node_1_0(
#line 31 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_8,
#line 31 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 31 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 31 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 31 "declarative_tree.m"
{
#line 31 "declarative_tree.m"
  {
#line 31 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 31 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_6 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 31 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_7 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 31 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_6 == mdb__declarative_tree__CastY_7);
#line 31 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10689 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "declarative_tree.m"
    else
#line 31 "declarative_tree.m"
      {
#line 31 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 31 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_5_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));

#line 31 "declarative_tree.m"
        {
#line 31 "declarative_tree.m"
          mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_8, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_5_5);
#line 31 "declarative_tree.m"
          return;
        }
#line 31 "declarative_tree.m"
      }
#line 31 "declarative_tree.m"
  }
#line 31 "declarative_tree.m"
}

#line 31 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree____Unify____edt_node_1_0(
#line 31 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_7,
#line 31 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 31 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 31 "declarative_tree.m"
{
#line 31 "declarative_tree.m"
  {
#line 31 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 31 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_5 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 31 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_6 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 31 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_5 == mdb__declarative_tree__CastY_6);
#line 31 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 31 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 31 "declarative_tree.m"
    else
#line 31 "declarative_tree.m"
      {
#line 31 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_3_3 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 31 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_4_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));

#line 10749 "mdb.declarative_tree.c"
        {
#line 10751 "mdb.declarative_tree.c"
          return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_7, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_4_4);
        }
#line 31 "declarative_tree.m"
      }
#line 31 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 31 "declarative_tree.m"
  }
#line 31 "declarative_tree.m"
}

#line 740 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____dependency_chain_start_1_0(
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_35,
#line 740 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 740 "declarative_tree.m"
{
#line 740 "declarative_tree.m"
  {
#line 740 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 740 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_33 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 740 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_34 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 740 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_33 == mdb__declarative_tree__CastY_34);
#line 740 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 10789 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 740 "declarative_tree.m"
    else
#line 740 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "declarative_tree.m"
      if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "declarative_tree.m"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 740 "declarative_tree.m"
      else
#line 10801 "mdb.declarative_tree.c"
        *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 2;
#line 740 "declarative_tree.m"
    else
#line 740 "declarative_tree.m"
      {
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 740 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3));
#line 740 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 740 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));

#line 740 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10822 "mdb.declarative_tree.c"
          *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 1;
#line 740 "declarative_tree.m"
        else
#line 740 "declarative_tree.m"
          {
#line 740 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 740 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 740 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 740 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3));
#line 740 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 4)));
#line 740 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 5)));
#line 740 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_16_16;

#line 740 "declarative_tree.m"
            {
#line 740 "declarative_tree.m"
              mdb__declarative_tree____Compare____start_loc_1_0(mdb__declarative_tree__TypeInfo_for_R_35, &mdb__declarative_tree__V_16_16, mdb__declarative_tree__V_47_47, mdb__declarative_tree__V_10_10);
            }
#line 10848 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == (MR_Integer) 0);
#line 740 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 740 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_16_16;
#line 740 "declarative_tree.m"
            else
#line 740 "declarative_tree.m"
              {
#line 740 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_17_17;

#line 740 "declarative_tree.m"
                {
#line 740 "declarative_tree.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_17_17, mdb__declarative_tree__V_46_46, mdb__declarative_tree__V_11_11);
                }
#line 10868 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_17_17 == (MR_Integer) 0);
#line 740 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 740 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_17_17;
#line 740 "declarative_tree.m"
                else
#line 740 "declarative_tree.m"
                  {
#line 740 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_18_18;

#line 740 "declarative_tree.m"
                    {
#line 740 "declarative_tree.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_18_18, mdb__declarative_tree__V_45_45, mdb__declarative_tree__V_12_12);
                    }
#line 10888 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_18_18 == (MR_Integer) 0);
#line 740 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 740 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_18_18;
#line 740 "declarative_tree.m"
                    else
#line 740 "declarative_tree.m"
                      {
#line 740 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_19_19;

#line 740 "declarative_tree.m"
                        {
#line 740 "declarative_tree.m"
                          mercury__builtin__compare_3_p_0(mdb__declarative_tree__TypeInfo_for_R_35, &mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_44_44, mdb__declarative_tree__V_13_13);
                        }
#line 10908 "mdb.declarative_tree.c"
                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_19_19 == (MR_Integer) 0);
#line 740 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 740 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
                          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_19_19;
#line 740 "declarative_tree.m"
                        else
#line 740 "declarative_tree.m"
                          {
#line 740 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__V_20_20;

#line 740 "declarative_tree.m"
                            {
#line 740 "declarative_tree.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[0], &mdb__declarative_tree__V_20_20, ((MR_Box) (mdb__declarative_tree__V_43_43)), ((MR_Box) (mdb__declarative_tree__V_14_14)));
                            }
#line 10928 "mdb.declarative_tree.c"
                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_20_20 == (MR_Integer) 0);
#line 740 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 740 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
                              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_20_20;
#line 740 "declarative_tree.m"
                            else
#line 740 "declarative_tree.m"
                              {
#line 740 "declarative_tree.m"
                                {
#line 740 "declarative_tree.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[6], mdb__declarative_tree__HeadVar__1_1, ((MR_Box) (mdb__declarative_tree__V_42_42)), ((MR_Box) (mdb__declarative_tree__V_15_15)));
#line 740 "declarative_tree.m"
                                  return;
                                }
#line 740 "declarative_tree.m"
                              }
#line 740 "declarative_tree.m"
                          }
#line 740 "declarative_tree.m"
                      }
#line 740 "declarative_tree.m"
                  }
#line 740 "declarative_tree.m"
              }
#line 740 "declarative_tree.m"
          }
#line 740 "declarative_tree.m"
      }
#line 740 "declarative_tree.m"
  }
#line 740 "declarative_tree.m"
}

#line 740 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____dependency_chain_start_1_0(
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_19,
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 740 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 740 "declarative_tree.m"
{
#line 740 "declarative_tree.m"
  {
#line 740 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 740 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastX_17 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 740 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_18 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 740 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_17 == mdb__declarative_tree__CastY_18);
#line 740 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 740 "declarative_tree.m"
    else
#line 740 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "declarative_tree.m"
      {
#line 740 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 740 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 740 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastY_16 == mdb__declarative_tree__CastX_15);
#line 740 "declarative_tree.m"
      }
#line 740 "declarative_tree.m"
    else
#line 740 "declarative_tree.m"
      {
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_20_20;
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_21_21;
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 740 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 740 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 740 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_6_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3));
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)));
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)));
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9;
#line 740 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_10_10;
#line 740 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 740 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 740 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;

#line 740 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 740 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
          {
#line 740 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 740 "declarative_tree.m"
            mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 740 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 740 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3));
#line 740 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 740 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 11058 "mdb.declarative_tree.c"
            {
#line 11060 "mdb.declarative_tree.c"
              mdb__declarative_tree__succeeded = mdb__declarative_tree____Unify____start_loc_1_0(mdb__declarative_tree__TypeInfo_for_R_19, mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_9_9);
            }
#line 740 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
              {
#line 11067 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_10_10);
#line 740 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
                  {
#line 11073 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_5_5 == mdb__declarative_tree__V_11_11);
#line 740 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
                      {
#line 11079 "mdb.declarative_tree.c"
                        {
#line 11081 "mdb.declarative_tree.c"
                          mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_for_R_19, mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_12_12);
                        }
#line 740 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
                          {
#line 11088 "mdb.declarative_tree.c"
                            mdb__declarative_tree__TypeInfo_20_20 = (MR_Word) &mdb__declarative_tree_scalar_common_1[0];
#line 11090 "mdb.declarative_tree.c"
                            {
#line 11092 "mdb.declarative_tree.c"
                              mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_20_20, ((MR_Box) (mdb__declarative_tree__V_7_7)), ((MR_Box) (mdb__declarative_tree__V_13_13)));
                            }
#line 740 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 740 "declarative_tree.m"
                              {
#line 11099 "mdb.declarative_tree.c"
                                mdb__declarative_tree__TypeInfo_21_21 = (MR_Word) &mdb__declarative_tree_scalar_common_1[6];
#line 11101 "mdb.declarative_tree.c"
                                {
#line 11103 "mdb.declarative_tree.c"
                                  return mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_21_21, ((MR_Box) (mdb__declarative_tree__V_8_8)), ((MR_Box) (mdb__declarative_tree__V_14_14)));
                                }
#line 740 "declarative_tree.m"
                              }
#line 740 "declarative_tree.m"
                          }
#line 740 "declarative_tree.m"
                      }
#line 740 "declarative_tree.m"
                  }
#line 740 "declarative_tree.m"
              }
#line 740 "declarative_tree.m"
          }
#line 740 "declarative_tree.m"
      }
#line 740 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 740 "declarative_tree.m"
  }
#line 740 "declarative_tree.m"
}

#line 486 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____contour_type_0_0(
#line 486 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__1_1,
#line 486 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 486 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3)
#line 486 "declarative_tree.m"
{
#line 486 "declarative_tree.m"
  {
#line 486 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 486 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 486 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 486 "declarative_tree.m"
    {
#line 486 "declarative_tree.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__Cast_HeadVar1_4, mdb__declarative_tree__Cast_HeadVar2_5);
#line 486 "declarative_tree.m"
      return;
    }
#line 486 "declarative_tree.m"
  }
#line 486 "declarative_tree.m"
}

#line 486 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____contour_type_0_0(
#line 486 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_1,
#line 486 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2)
#line 486 "declarative_tree.m"
{
#line 11168 "mdb.declarative_tree.c"
  {
#line 11170 "mdb.declarative_tree.c"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__HeadVar__2_1 == mdb__declarative_tree__HeadVar__2_2);

#line 11173 "mdb.declarative_tree.c"
    return mdb__declarative_tree__succeeded;
#line 11175 "mdb.declarative_tree.c"
  }
#line 486 "declarative_tree.m"
}

#line 779 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree____Compare____annotated_primitive_1_0(
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_23,
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
    MR_Integer mdb__declarative_tree__CastX_21 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;
#line 779 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_22 = (MR_Integer) mdb__declarative_tree__HeadVar__3_3;

#line 779 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_21 == mdb__declarative_tree__CastY_22);
#line 779 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 11206 "mdb.declarative_tree.c"
      *mdb__declarative_tree__HeadVar__1_1 = (MR_Integer) 0;
#line 779 "declarative_tree.m"
    else
#line 779 "declarative_tree.m"
      {
#line 779 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 779 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));
#line 779 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 0)));
#line 779 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 1)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 2)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 3)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 4)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__3_3, (MR_Integer) 5)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16;

#line 779 "declarative_tree.m"
        {
#line 779 "declarative_tree.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_tree__V_16_16, mdb__declarative_tree__V_4_4, mdb__declarative_tree__V_10_10);
        }
#line 11244 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_16_16 == (MR_Integer) 0);
#line 779 "declarative_tree.m"
        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 779 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_16_16;
#line 779 "declarative_tree.m"
        else
#line 779 "declarative_tree.m"
          {
#line 779 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_17_17;

#line 779 "declarative_tree.m"
            {
#line 779 "declarative_tree.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_tree__V_17_17, mdb__declarative_tree__V_5_5, mdb__declarative_tree__V_11_11);
            }
#line 11264 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_17_17 == (MR_Integer) 0);
#line 779 "declarative_tree.m"
            mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 779 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
              *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_17_17;
#line 779 "declarative_tree.m"
            else
#line 779 "declarative_tree.m"
              {
#line 779 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_18_18;

#line 779 "declarative_tree.m"
                {
#line 779 "declarative_tree.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[4], &mdb__declarative_tree__V_18_18, ((MR_Box) (mdb__declarative_tree__V_6_6)), ((MR_Box) (mdb__declarative_tree__V_12_12)));
                }
#line 11284 "mdb.declarative_tree.c"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_18_18 == (MR_Integer) 0);
#line 779 "declarative_tree.m"
                mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 779 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
                  *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_18_18;
#line 779 "declarative_tree.m"
                else
#line 779 "declarative_tree.m"
                  {
#line 779 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_19_19;

#line 779 "declarative_tree.m"
                    {
#line 779 "declarative_tree.m"
                      mdbcomp__program_representation____Compare____atomic_goal_rep_0_0(&mdb__declarative_tree__V_19_19, mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_13_13);
                    }
#line 11304 "mdb.declarative_tree.c"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_19_19 == (MR_Integer) 0);
#line 779 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 779 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
                      *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_19_19;
#line 779 "declarative_tree.m"
                    else
#line 779 "declarative_tree.m"
                      {
#line 779 "declarative_tree.m"
                        MR_Word mdb__declarative_tree__V_20_20;

#line 779 "declarative_tree.m"
                        {
#line 779 "declarative_tree.m"
                          mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdb__declarative_tree__V_20_20, mdb__declarative_tree__V_8_8, mdb__declarative_tree__V_14_14);
                        }
#line 11324 "mdb.declarative_tree.c"
                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_20_20 == (MR_Integer) 0);
#line 779 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = !(mdb__declarative_tree__succeeded);
#line 779 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
                          *mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__V_20_20;
#line 779 "declarative_tree.m"
                        else
#line 779 "declarative_tree.m"
                          {
#line 779 "declarative_tree.m"
                            mercury__maybe____Compare____maybe_1_0(mdb__declarative_tree__TypeInfo_for_R_23, mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__V_9_9, mdb__declarative_tree__V_15_15);
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
      }
#line 779 "declarative_tree.m"
  }
#line 779 "declarative_tree.m"
}

#line 779 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree____Unify____annotated_primitive_1_0(
#line 779 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_17,
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
    MR_Integer mdb__declarative_tree__CastX_15 = (MR_Integer) mdb__declarative_tree__HeadVar__1_1;
#line 779 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CastY_16 = (MR_Integer) mdb__declarative_tree__HeadVar__2_2;

#line 779 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__CastX_15 == mdb__declarative_tree__CastY_16);
#line 779 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
      mdb__declarative_tree__succeeded = MR_TRUE;
#line 779 "declarative_tree.m"
    else
#line 779 "declarative_tree.m"
      {
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_18_18;
#line 779 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 779 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 2)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 3)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 4)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 5)));
#line 779 "declarative_tree.m"
        MR_String mdb__declarative_tree__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0)));
#line 779 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 2)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 3)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 4)));
#line 779 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 5)));

#line 11413 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_3_3, mdb__declarative_tree__V_9_9) == 0);
#line 779 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
          {
#line 11419 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_4_4 == mdb__declarative_tree__V_10_10);
#line 779 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
              {
#line 11425 "mdb.declarative_tree.c"
                mdb__declarative_tree__TypeInfo_18_18 = (MR_Word) &mdb__declarative_tree_scalar_common_1[4];
#line 11427 "mdb.declarative_tree.c"
                {
#line 11429 "mdb.declarative_tree.c"
                  mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_18_18, ((MR_Box) (mdb__declarative_tree__V_5_5)), ((MR_Box) (mdb__declarative_tree__V_11_11)));
                }
#line 779 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
                  {
#line 11436 "mdb.declarative_tree.c"
                    {
#line 11438 "mdb.declarative_tree.c"
                      mdb__declarative_tree__succeeded = mdbcomp__program_representation____Unify____atomic_goal_rep_0_0(mdb__declarative_tree__V_6_6, mdb__declarative_tree__V_12_12);
                    }
#line 779 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 779 "declarative_tree.m"
                      {
#line 11445 "mdb.declarative_tree.c"
                        {
#line 11447 "mdb.declarative_tree.c"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__V_7_7, mdb__declarative_tree__V_13_13);
                        }
#line 779 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 11452 "mdb.declarative_tree.c"
                          {
#line 11454 "mdb.declarative_tree.c"
                            return mdb__declarative_tree__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_tree__TypeInfo_for_R_17, mdb__declarative_tree__V_8_8, mdb__declarative_tree__V_14_14);
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
      }
#line 779 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 779 "declarative_tree.m"
  }
#line 779 "declarative_tree.m"
}

#line 1891 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(
#line 1891 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1891 "declarative_tree.m"
{
#line 1891 "declarative_tree.m"
  {
#line 1891 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1891 "declarative_tree.m"
    MR_builtin_longjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0, 1);
#line 1891 "declarative_tree.m"
  }
#line 1891 "declarative_tree.m"
}

#line 1892 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3(
#line 1892 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1892 "declarative_tree.m"
{
#line 1892 "declarative_tree.m"
  {
#line 1892 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1892 "declarative_tree.m"
    (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7 = ((MR_Word) (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7);
#line 1892 "declarative_tree.m"
    {
#line 1892 "declarative_tree.m"
      mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(mdb__declarative_tree__env_ptr);
#line 1892 "declarative_tree.m"
      return;
    }
#line 1892 "declarative_tree.m"
  }
#line 1892 "declarative_tree.m"
}

#line 1891 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_2(
#line 1891 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1891 "declarative_tree.m"
{
#line 1891 "declarative_tree.m"
  {
#line 1891 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1891 "declarative_tree.m"
    {
#line 1894 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 2)));
#line 1894 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 0)));
#line 1894 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Arg_7, (MR_Integer) 1)));
#line 1894 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_10_10;

#line 1894 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 1894 "declarative_tree.m"
      if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
#line 1894 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_11_11, (MR_Integer) 0)));
#line 1893 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
#line 1893 "declarative_tree.m"
      if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded)
#line 1893 "declarative_tree.m"
        {
#line 1893 "declarative_tree.m"
          mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_1(mdb__declarative_tree__env_ptr);
#line 1893 "declarative_tree.m"
          return;
        }
#line 1891 "declarative_tree.m"
    }
#line 1891 "declarative_tree.m"
  }
#line 1891 "declarative_tree.m"
}

#line 1891 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(
#line 1891 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 1891 "declarative_tree.m"
{
#line 1891 "declarative_tree.m"
  {
#line 1891 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 1891 "declarative_tree.m"
    if (MR_builtin_setjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__commit_0) == 0)
#line 1891 "declarative_tree.m"
      {
#line 1891 "declarative_tree.m"
        {
#line 1892 "declarative_tree.m"
          {
#line 1892 "declarative_tree.m"
            mercury__list__member_2_p_1((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, &(mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__conv0_Arg_7, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6, mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_3, mdb__declarative_tree__env_ptr);
          }
#line 1891 "declarative_tree.m"
        }
#line 1891 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_FALSE;
#line 1891 "declarative_tree.m"
      }
#line 1891 "declarative_tree.m"
    else
#line 1891 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = MR_TRUE;
#line 1891 "declarative_tree.m"
  }
#line 1891 "declarative_tree.m"
}

#line 1883 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(
#line 1883 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21,
#line 1883 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 1883 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_4)
#line 1883 "declarative_tree.m"
{
#line 1883 "declarative_tree.m"
  {
#line 1883 "declarative_tree.m"
    struct mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0_s mdb__declarative_tree__env;

#line 1886 "declarative_tree.m"
    {
#line 1886 "declarative_tree.m"
      MR_Word mdb__declarative_tree__Call_5;
#line 1888 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_12_12;
#line 1888 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_13_13;
#line 1888 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_14_14;
#line 1888 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_15_15;
#line 1888 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_16_16;
#line 1888 "declarative_tree.m"
      MR_Word mdb__declarative_tree__V_17_17;
#line 1888 "declarative_tree.m"
      MR_Box mdb__declarative_tree__V_18_18;
#line 1888 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_19_19;
#line 1888 "declarative_tree.m"
      MR_Integer mdb__declarative_tree__V_20_20;

#line 1887 "declarative_tree.m"
      {
#line 1887 "declarative_tree.m"
        mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_21, mdb__declarative_tree__Store_3, mdb__declarative_tree__CallId_4, &mdb__declarative_tree__Call_5);
      }
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 0));
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 1));
#line 1888 "declarative_tree.m"
      (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 2)));
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 3)));
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 4)));
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 5)));
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 6)));
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 7)));
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 8)));
#line 1888 "declarative_tree.m"
      mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_5, (MR_Integer) 9)));
#line 1891 "declarative_tree.m"
      {
#line 1891 "declarative_tree.m"
        mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_4(&mdb__declarative_tree__env);
      }
#line 1891 "declarative_tree.m"
      (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded = !((mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded);
#line 1886 "declarative_tree.m"
      return (mdb__declarative_tree__env).mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0_env_0__succeeded;
#line 1886 "declarative_tree.m"
    }
#line 1883 "declarative_tree.m"
  }
#line 1883 "declarative_tree.m"
}

#line 1835 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(
#line 1835 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32,
#line 1835 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1835 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 1835 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Node_6)
#line 1835 "declarative_tree.m"
{
#line 1847 "declarative_tree.m"
  {
#line 1847 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1847 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_7;
#line 11703 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11705 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_7;

#line 11708 "mdb.declarative_tree.c"
    {
#line 11710 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_32), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_7);
    }
#line 11713 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 11715 "mdb.declarative_tree.c"
      {
#line 11717 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_7 = ((MR_Word) mdb__declarative_tree__conv1_Node0_7);
#line 11719 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 11721 "mdb.declarative_tree.c"
      }
#line 1840 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1842 "declarative_tree.m"
#line 1842 "declarative_tree.m"
      switch (MR_tag((MR_Word) mdb__declarative_tree__Node0_7)) {
#line 1842 "declarative_tree.m"
        default:
#line 1842 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1842 "declarative_tree.m"
          break;
#line 1842 "declarative_tree.m"
        case (MR_Integer) 1:
#line 1841 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_TRUE;
#line 1842 "declarative_tree.m"
          break;
#line 1842 "declarative_tree.m"
        case (MR_Integer) 3:
#line 1842 "declarative_tree.m"
#line 1842 "declarative_tree.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_7, (MR_Integer) 0)))) {
#line 1842 "declarative_tree.m"
            default:
#line 1842 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1842 "declarative_tree.m"
              break;
#line 1842 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1842 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1842 "declarative_tree.m"
              break;
#line 1842 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1843 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 1842 "declarative_tree.m"
              break;
#line 1842 "declarative_tree.m"
          }
#line 1842 "declarative_tree.m"
          break;
#line 1842 "declarative_tree.m"
      }
#line 1847 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1846 "declarative_tree.m"
      *mdb__declarative_tree__Node_6 = mdb__declarative_tree__Node0_7;
#line 1847 "declarative_tree.m"
    else
#line 1848 "declarative_tree.m"
      {
#line 1848 "declarative_tree.m"
        {
#line 1848 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[26])));
#line 1848 "declarative_tree.m"
          return;
        }
#line 1848 "declarative_tree.m"
      }
#line 1847 "declarative_tree.m"
  }
#line 1835 "declarative_tree.m"
}

#line 1805 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_arg_pos_from_back_4_p_0(
#line 1805 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1805 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_2,
#line 1805 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Pos_3,
#line 1805 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ArgPos_4)
#line 1805 "declarative_tree.m"
{
#line 1808 "declarative_tree.m"
  while (MR_TRUE)
#line 1808 "declarative_tree.m"
    {
#line 1808 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1808 "declarative_tree.m"
      {
#line 1808 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;

#line 1808 "declarative_tree.m"
        if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1808 "declarative_tree.m"
          {
#line 1809 "declarative_tree.m"
            {
#line 1809 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[25])));
#line 1809 "declarative_tree.m"
              return;
            }
#line 1808 "declarative_tree.m"
          }
#line 1808 "declarative_tree.m"
        else
#line 1810 "declarative_tree.m"
          {
#line 1810 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__HeadVar_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1810 "declarative_tree.m"
            MR_Word mdb__declarative_tree__HeadVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));

#line 1811 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__HeadVar_11 == mdb__declarative_tree__Var_2);
#line 1813 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1812 "declarative_tree.m"
              {
#line 1812 "declarative_tree.m"
                MR_Word base;
#line 1812 "declarative_tree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1812 "declarative_tree.m"
                *mdb__declarative_tree__ArgPos_4 = base;
#line 1812 "declarative_tree.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_tree__Pos_3));
#line 1812 "declarative_tree.m"
              }
#line 1813 "declarative_tree.m"
            else
#line 1814 "declarative_tree.m"
              {
#line 1814 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_16_16 = (mdb__declarative_tree__Pos_3 - (MR_Integer) 1);

#line 1814 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1814 "declarative_tree.m"
                {
#line 1814 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__1__tmp_copy_1 = mdb__declarative_tree__HeadVars_12;
#line 1814 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__Pos__tmp_copy_3 = mdb__declarative_tree__V_16_16;

#line 1814 "declarative_tree.m"
                  mdb__declarative_tree__Pos_3 = mdb__declarative_tree__Pos__tmp_copy_3;
#line 1814 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__1_1 = mdb__declarative_tree__HeadVar__1__tmp_copy_1;
#line 1814 "declarative_tree.m"
                }
#line 1814 "declarative_tree.m"
                continue;
#line 1814 "declarative_tree.m"
              }
#line 1810 "declarative_tree.m"
          }
#line 1808 "declarative_tree.m"
      }
#line 1808 "declarative_tree.m"
      break;
#line 1808 "declarative_tree.m"
    }
#line 1805 "declarative_tree.m"
}

#line 1800 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__find_arg_pos_2_f_0(
#line 1800 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_4,
#line 1800 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Var_5)
#line 1800 "declarative_tree.m"
{
#line 1802 "declarative_tree.m"
  {
#line 1802 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1802 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ArgPos_6;
#line 1802 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_7_7;

#line 1803 "declarative_tree.m"
    {
#line 1803 "declarative_tree.m"
      mdb__declarative_tree__V_7_7 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__HeadVars_4);
    }
#line 1803 "declarative_tree.m"
    {
#line 1803 "declarative_tree.m"
      mdb__declarative_tree__find_arg_pos_from_back_4_p_0(mdb__declarative_tree__HeadVars_4, mdb__declarative_tree__Var_5, mdb__declarative_tree__V_7_7, &mdb__declarative_tree__ArgPos_6);
    }
#line 1802 "declarative_tree.m"
    return mdb__declarative_tree__ArgPos_6;
#line 1802 "declarative_tree.m"
  }
#line 1800 "declarative_tree.m"
}

#line 1778 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__is_traced_grade_1_p_0(
#line 1778 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__TracingOn_1)
#line 1778 "declarative_tree.m"
{
#line 1780 "declarative_tree.m"
  {
#line 1780 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1783 "declarative_tree.m"
{
#define MR_PROC_LABEL mdb__declarative_tree__is_traced_grade_1_p_0

	MR_Word TracingOn;

		{
#line 1783 "declarative_tree.m"

    #ifdef MR_EXEC_TRACE
        TracingOn = MR_YES;
    #else
        TracingOn = MR_NO;
    #endif

#line 11952 "mdb.declarative_tree.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_tree__TracingOn_1  = TracingOn;
#line 1783 "declarative_tree.m"
}
#line 1780 "declarative_tree.m"
  }
#line 1778 "declarative_tree.m"
}

#line 1767 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(
#line 1767 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 1767 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ParentPath_2,
#line 1767 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__N_3,
#line 1767 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__HeadVar__4_4)
#line 1767 "declarative_tree.m"
{
#line 1770 "declarative_tree.m"
  {
#line 1770 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1770 "declarative_tree.m"
    if ((mdb__declarative_tree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1770 "declarative_tree.m"
      *mdb__declarative_tree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1770 "declarative_tree.m"
    else
#line 1772 "declarative_tree.m"
      {
#line 1772 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 0)));
#line 1772 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVar__1_1, (MR_Integer) 1)));
#line 1772 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Path_11;
#line 1772 "declarative_tree.m"
        MR_Word mdb__declarative_tree__GoalAndPaths_12;
#line 1772 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1772 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;
#line 1772 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15;

#line 1773 "declarative_tree.m"
        {
#line 1773 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1773 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_14_14, 0) = ((MR_Box) (mdb__declarative_tree__N_3));
#line 1773 "declarative_tree.m"
        }
#line 1773 "declarative_tree.m"
        {
#line 1773 "declarative_tree.m"
          mdb__declarative_tree__Path_11 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__ParentPath_2, mdb__declarative_tree__V_14_14);
        }
#line 1772 "declarative_tree.m"
        {
#line 1772 "declarative_tree.m"
          mdb__declarative_tree__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1772 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_13_13, 0) = ((MR_Box) (mdb__declarative_tree__Goal_7));
#line 1772 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_13_13, 1) = ((MR_Box) (mdb__declarative_tree__Path_11));
#line 1772 "declarative_tree.m"
        }
#line 1774 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = (mdb__declarative_tree__N_3 + (MR_Integer) 1);
#line 1774 "declarative_tree.m"
        {
#line 1774 "declarative_tree.m"
          mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(mdb__declarative_tree__Goals_8, mdb__declarative_tree__ParentPath_2, mdb__declarative_tree__V_15_15, &mdb__declarative_tree__GoalAndPaths_12);
        }
#line 1772 "declarative_tree.m"
        {
#line 1772 "declarative_tree.m"
          MR_Word base;
#line 1772 "declarative_tree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "declarative_tree.m"
          *mdb__declarative_tree__HeadVar__4_4 = base;
#line 1772 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_13_13));
#line 1772 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__GoalAndPaths_12));
#line 1772 "declarative_tree.m"
        }
#line 1772 "declarative_tree.m"
      }
#line 1770 "declarative_tree.m"
  }
#line 1767 "declarative_tree.m"
}

#line 1725 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__plain_call_is_special_case_4_p_0(
#line 1725 "declarative_tree.m"
  MR_String mdb__declarative_tree__Module_5,
#line 1725 "declarative_tree.m"
  MR_String mdb__declarative_tree__Name_6,
#line 1725 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_7,
#line 1725 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__NewVar_8)
#line 1725 "declarative_tree.m"
{
#line 1728 "declarative_tree.m"
  {
#line 1728 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Module_5, (MR_String) "builtin") == 0);
#line 1728 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeCtorInfo_11_11;
#line 1728 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_9_9;
#line 1728 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 1728 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1735 "declarative_tree.m"
    MR_Box mdb__declarative_tree__conv0_NewVar_8;

#line 1728 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1728 "declarative_tree.m"
      {
#line 1733 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Name_6, (MR_String) "cc_multi_equal") == 0);
#line 1728 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1728 "declarative_tree.m"
          {
#line 1734 "declarative_tree.m"
            mdb__declarative_tree__V_9_9 = (MR_Integer) 3;
#line 12096 "mdb.declarative_tree.c"
            mdb__declarative_tree__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1734 "declarative_tree.m"
            {
#line 1734 "declarative_tree.m"
              mercury__list__length_2_p_0(mdb__declarative_tree__TypeCtorInfo_11_11, mdb__declarative_tree__Args_7, &mdb__declarative_tree__V_12_12);
            }
#line 1734 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_9_9 == mdb__declarative_tree__V_12_12);
#line 1728 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1728 "declarative_tree.m"
              {
#line 1735 "declarative_tree.m"
                mdb__declarative_tree__V_10_10 = (MR_Integer) 2;
#line 1735 "declarative_tree.m"
                {
#line 1735 "declarative_tree.m"
                  mdb__declarative_tree__conv0_NewVar_8 = mercury__list__det_index1_2_f_0(mdb__declarative_tree__TypeCtorInfo_11_11, mdb__declarative_tree__Args_7, mdb__declarative_tree__V_10_10);
                }
#line 1735 "declarative_tree.m"
                *mdb__declarative_tree__NewVar_8 = ((MR_Integer) mdb__declarative_tree__conv0_NewVar_8);
#line 1735 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1728 "declarative_tree.m"
              }
#line 1728 "declarative_tree.m"
          }
#line 1728 "declarative_tree.m"
      }
#line 1728 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1728 "declarative_tree.m"
  }
#line 1725 "declarative_tree.m"
}

#line 1540 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_variable_in_args_4_p_0(
#line 1540 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Args_5,
#line 1540 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_6,
#line 1540 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_7,
#line 1540 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Var_8)
#line 1540 "declarative_tree.m"
{
#line 1548 "declarative_tree.m"
  {
#line 1548 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1548 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__FoundVar_9;
#line 1546 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1546 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_10_10;
#line 1546 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 1546 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1546 "declarative_tree.m"
    MR_Box mdb__declarative_tree__conv0_FoundVar_9;

#line 1546 "declarative_tree.m"
    {
#line 1546 "declarative_tree.m"
      mdb__declarative_tree__V_10_10 = mercury__list__reverse_1_f_0(mdb__declarative_tree__TypeCtorInfo_17_17, mdb__declarative_tree__Args_5);
    }
#line 1546 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = (mdb__declarative_tree__TotalArgs_7 - mdb__declarative_tree__ArgNum_6);
#line 1546 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = (mdb__declarative_tree__V_12_12 + (MR_Integer) 1);
#line 1546 "declarative_tree.m"
    {
#line 1546 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__list__index1_3_p_0(mdb__declarative_tree__TypeCtorInfo_17_17, mdb__declarative_tree__V_10_10, mdb__declarative_tree__V_11_11, &mdb__declarative_tree__conv0_FoundVar_9);
    }
#line 1546 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1546 "declarative_tree.m"
      {
#line 1546 "declarative_tree.m"
        mdb__declarative_tree__FoundVar_9 = ((MR_Integer) mdb__declarative_tree__conv0_FoundVar_9);
#line 1546 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1546 "declarative_tree.m"
      }
#line 1548 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1547 "declarative_tree.m"
      *mdb__declarative_tree__Var_8 = mdb__declarative_tree__FoundVar_9;
#line 1548 "declarative_tree.m"
    else
#line 1549 "declarative_tree.m"
      {
#line 1549 "declarative_tree.m"
        {
#line 1549 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[24])));
#line 1549 "declarative_tree.m"
          return;
        }
#line 1549 "declarative_tree.m"
      }
#line 1548 "declarative_tree.m"
  }
#line 1540 "declarative_tree.m"
}

#line 1528 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(
#line 1528 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalId_3,
#line 1528 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_4)
#line 1528 "declarative_tree.m"
{
#line 1531 "declarative_tree.m"
  {
#line 1531 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1531 "declarative_tree.m"
    MR_String mdb__declarative_tree__GoalModule_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 0)));
#line 1531 "declarative_tree.m"
    MR_String mdb__declarative_tree__GoalName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 1)));
#line 1531 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__GoalArity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__AtomicGoalId_3, (MR_Integer) 2)));
#line 1531 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ProcLabel_8;
#line 1531 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EventModule_9;
#line 1531 "declarative_tree.m"
    MR_String mdb__declarative_tree__EventName_10;
#line 1531 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__EventArity_13;
#line 1531 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 0)));
#line 1531 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15;
#line 1531 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_19_19;
#line 1533 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 1)));
#line 1534 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 1534 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 1535 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_17_17;

#line 1533 "declarative_tree.m"
    {
#line 1533 "declarative_tree.m"
      mdb__declarative_tree__ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__V_14_14);
    }
#line 1534 "declarative_tree.m"
    {
#line 1534 "declarative_tree.m"
      mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_tree__ProcLabel_8, &mdb__declarative_tree__EventModule_9, &mdb__declarative_tree__EventName_10, &mdb__declarative_tree__V_11_11, &mdb__declarative_tree__V_12_12);
    }
#line 1535 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 0)));
#line 1535 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Atom_4, (MR_Integer) 1)));
#line 1535 "declarative_tree.m"
    {
#line 1535 "declarative_tree.m"
      mdb__declarative_tree__EventArity_13 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_15_15);
    }
#line 1536 "declarative_tree.m"
    {
#line 1536 "declarative_tree.m"
      mdb__declarative_tree__V_19_19 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_tree__EventModule_9);
    }
#line 1536 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__GoalModule_5, mdb__declarative_tree__V_19_19) == 0);
#line 1531 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1531 "declarative_tree.m"
      {
#line 1537 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__EventName_10, mdb__declarative_tree__GoalName_6) == 0);
#line 1531 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1538 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__EventArity_13 == mdb__declarative_tree__GoalArity_7);
#line 1531 "declarative_tree.m"
      }
#line 1531 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1531 "declarative_tree.m"
  }
#line 1528 "declarative_tree.m"
}

#line 1384 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145,
#line 1384 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_17,
#line 1384 "declarative_tree.m"
  MR_String mdb__declarative_tree__File_18,
#line 1384 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__Line_19,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__BoundVars_20,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoal_21,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AtomicGoalArgs_22,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_23,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_24,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_25,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_26,
#line 1384 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_27,
#line 1384 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_28,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_29,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_30,
#line 1384 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_31)
#line 1384 "declarative_tree.m"
{
#line 1466 "declarative_tree.m"
  {
#line 1466 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_25)) == (MR_mktag((MR_Integer) 1)));
#line 1466 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_32;
#line 1466 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ContourHeadNode_34;
#line 1466 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EndPath_35;
#line 1394 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_89_89;
#line 1394 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_90_90;
#line 1394 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_33_33;

#line 1394 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1394 "declarative_tree.m"
      {
#line 1394 "declarative_tree.m"
        mdb__declarative_tree__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 0)));
#line 1394 "declarative_tree.m"
        mdb__declarative_tree__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 1)));
#line 1394 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1394 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1394 "declarative_tree.m"
          {
#line 1394 "declarative_tree.m"
            mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_89_89, (MR_Integer) 0));
#line 1394 "declarative_tree.m"
            mdb__declarative_tree__ContourHeadNode_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_89_89, (MR_Integer) 1)));
#line 1395 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeEnd_26)) == (MR_mktag((MR_Integer) 1)));
#line 1395 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1395 "declarative_tree.m"
              mdb__declarative_tree__EndPath_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeEnd_26, (MR_Integer) 0)));
#line 1394 "declarative_tree.m"
          }
#line 1394 "declarative_tree.m"
      }
#line 1466 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1463 "declarative_tree.m"
      {
#line 1463 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_46;
#line 1399 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_147_147;
#line 1399 "declarative_tree.m"
        MR_Word mdb__declarative_tree__MaybeReturnLabel_42;
#line 1399 "declarative_tree.m"
        MR_String mdb__declarative_tree__CallPathStr_47;
#line 1399 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallPath_48;
#line 1399 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__PolyConst2_146;
#line 1398 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_36_36;
#line 1398 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_37_37;
#line 1398 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_38_38;
#line 1398 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_39_39;
#line 1398 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_40_40;
#line 1398 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_41_41;
#line 1398 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_43_43;
#line 1398 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_44_44;
#line 1398 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_45_45;

#line 1398 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_34)) == (MR_mktag((MR_Integer) 0)));
#line 1398 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1398 "declarative_tree.m"
          {
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 0));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 1));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 2)));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 3)));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 4)));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 5)));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__MaybeReturnLabel_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 6)));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 7)));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 8)));
#line 1398 "declarative_tree.m"
            mdb__declarative_tree__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ContourHeadNode_34, (MR_Integer) 9)));
#line 12439 "mdb.declarative_tree.c"
            mdb__declarative_tree__PolyConst2_146 = (MR_Integer) 2;
#line 12441 "mdb.declarative_tree.c"
            {
#line 12443 "mdb.declarative_tree.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__PolyConst2_146, &mdb__declarative_tree__TypeInfo_147_147);
            }
#line 1400 "declarative_tree.m"
            {
#line 1400 "declarative_tree.m"
              mdb__declarative_tree__Atom_46 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_147_147, mdb__declarative_tree__ContourHeadNode_34);
            }
#line 1401 "declarative_tree.m"
            {
#line 1401 "declarative_tree.m"
              mdb__declarative_tree__CallPathStr_47 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__MaybeReturnLabel_42);
            }
#line 1402 "declarative_tree.m"
            {
#line 1402 "declarative_tree.m"
              mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_47, &mdb__declarative_tree__CallPath_48);
            }
#line 1403 "declarative_tree.m"
            {
#line 1403 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CallPath_48, mdb__declarative_tree__EndPath_35);
            }
#line 1398 "declarative_tree.m"
          }
#line 1463 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1449 "declarative_tree.m"
          {
#line 1410 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoalId_49;
#line 1407 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_91_91;

#line 1407 "declarative_tree.m"
            {
#line 1407 "declarative_tree.m"
              mdb__declarative_tree__V_91_91 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(mdb__declarative_tree__AtomicGoal_21);
            }
#line 1407 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_91_91)) == (MR_mktag((MR_Integer) 1)));
#line 1407 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1407 "declarative_tree.m"
              {
#line 1407 "declarative_tree.m"
                mdb__declarative_tree__AtomicGoalId_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_91_91, (MR_Integer) 0)));
#line 1409 "declarative_tree.m"
                {
#line 1409 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(mdb__declarative_tree__AtomicGoalId_49, mdb__declarative_tree__Atom_46);
                }
#line 1407 "declarative_tree.m"
              }
#line 1407 "declarative_tree.m"
            else
#line 1411 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 1);
#line 1449 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1423 "declarative_tree.m"
              {
#line 1417 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_92_92;
#line 1417 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_93_93;

#line 1417 "declarative_tree.m"
                {
#line 1417 "declarative_tree.m"
                  mdb__declarative_tree__V_93_93 = mercury__list__length_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_tree__AtomicGoalArgs_22);
                }
#line 1417 "declarative_tree.m"
                mdb__declarative_tree__V_92_92 = (mdb__declarative_tree__TotalArgs_28 - mdb__declarative_tree__V_93_93);
#line 1417 "declarative_tree.m"
                mdb__declarative_tree__succeeded = (mdb__declarative_tree__ArgNum_27 > mdb__declarative_tree__V_92_92);
#line 1423 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1420 "declarative_tree.m"
                  {
#line 1420 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__Var_50;
#line 1420 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_94_94;

#line 1419 "declarative_tree.m"
                    {
#line 1419 "declarative_tree.m"
                      mdb__declarative_tree__find_variable_in_args_4_p_0(mdb__declarative_tree__AtomicGoalArgs_22, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, &mdb__declarative_tree__Var_50);
                    }
#line 1422 "declarative_tree.m"
                    {
#line 1422 "declarative_tree.m"
                      mdb__declarative_tree__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1422 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1422 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 1) = ((MR_Box) (mdb__declarative_tree__Var_50));
#line 1422 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_94_94, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1422 "declarative_tree.m"
                    }
#line 1421 "declarative_tree.m"
                    {
#line 1421 "declarative_tree.m"
                      mdb__declarative_tree__MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_32, 0) = ((MR_Box) (mdb__declarative_tree__V_94_94));
#line 1421 "declarative_tree.m"
                    }
#line 1420 "declarative_tree.m"
                  }
#line 1423 "declarative_tree.m"
                else
#line 1431 "declarative_tree.m"
#line 1431 "declarative_tree.m"
                  switch (MR_tag((MR_Word) mdb__declarative_tree__AtomicGoal_21)) {
#line 1431 "declarative_tree.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1431 "declarative_tree.m"
                    case (MR_Integer) 0:
#line 1431 "declarative_tree.m"
                    case (MR_Integer) 1:
#line 1431 "declarative_tree.m"
                    case (MR_Integer) 2:
#line 1444 "declarative_tree.m"
                      {
#line 1445 "declarative_tree.m"
                        {
#line 1445 "declarative_tree.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                        }
#line 1444 "declarative_tree.m"
                      }
#line 1431 "declarative_tree.m"
                      break;
#line 1431 "declarative_tree.m"
                    case (MR_Integer) 3:
#line 1431 "declarative_tree.m"
#line 1431 "declarative_tree.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 0)))) {
#line 1431 "declarative_tree.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 0:
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 1:
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 2:
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 3:
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 4:
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 6:
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 7:
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 8:
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 9:
#line 1444 "declarative_tree.m"
                          {
#line 1445 "declarative_tree.m"
                            {
#line 1445 "declarative_tree.m"
                              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[18])));
                            }
#line 1444 "declarative_tree.m"
                          }
#line 1431 "declarative_tree.m"
                          break;
#line 1431 "declarative_tree.m"
                        case (MR_Integer) 5:
#line 1427 "declarative_tree.m"
                          {
#line 1427 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__V_99_99;
#line 1427 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__Var_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 1)));
#line 1427 "declarative_tree.m"
                            MR_Word mdb__declarative_tree__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__AtomicGoal_21, (MR_Integer) 2)));

#line 1430 "declarative_tree.m"
                            {
#line 1430 "declarative_tree.m"
                              mdb__declarative_tree__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1430 "declarative_tree.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1430 "declarative_tree.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 1) = ((MR_Box) (mdb__declarative_tree__Var_123));
#line 1430 "declarative_tree.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_99_99, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1430 "declarative_tree.m"
                            }
#line 1429 "declarative_tree.m"
                            {
#line 1429 "declarative_tree.m"
                              mdb__declarative_tree__MaybePrims_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "declarative_tree.m"
                              MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_32, 0) = ((MR_Box) (mdb__declarative_tree__V_99_99));
#line 1429 "declarative_tree.m"
                            }
#line 1427 "declarative_tree.m"
                          }
#line 1431 "declarative_tree.m"
                          break;
#line 1431 "declarative_tree.m"
                      }
#line 1431 "declarative_tree.m"
                      break;
#line 1431 "declarative_tree.m"
                  }
#line 1423 "declarative_tree.m"
              }
#line 1449 "declarative_tree.m"
            else
#line 1453 "declarative_tree.m"
#line 1453 "declarative_tree.m"
              switch (mdb__declarative_tree__AllTraced_30) {
#line 1453 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1453 "declarative_tree.m"
                case (MR_Integer) 0:
#line 1454 "declarative_tree.m"
                  {
#line 1454 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Primitive_83;
#line 1454 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Primitives1_84;

#line 1455 "declarative_tree.m"
                    {
#line 1455 "declarative_tree.m"
                      mdb__declarative_tree__Primitive_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1455 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1455 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1455 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1455 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1455 "declarative_tree.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_83, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "declarative_tree.m"
                    }
#line 1457 "declarative_tree.m"
                    {
#line 1457 "declarative_tree.m"
                      mdb__declarative_tree__Primitives1_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_84, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_83));
#line 1457 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_84, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1457 "declarative_tree.m"
                    }
#line 1458 "declarative_tree.m"
                    {
#line 1458 "declarative_tree.m"
                      return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, mdb__declarative_tree__Contour_25, mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_84);
                    }
#line 1454 "declarative_tree.m"
                  }
#line 1453 "declarative_tree.m"
                  break;
#line 1453 "declarative_tree.m"
                case (MR_Integer) 1:
#line 1451 "declarative_tree.m"
                  {
#line 1452 "declarative_tree.m"
                    {
#line 1452 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[19])));
                    }
#line 1451 "declarative_tree.m"
                  }
#line 1453 "declarative_tree.m"
                  break;
#line 1453 "declarative_tree.m"
              }
#line 1449 "declarative_tree.m"
          }
#line 1463 "declarative_tree.m"
        else
#line 1464 "declarative_tree.m"
          {
#line 1464 "declarative_tree.m"
            {
#line 1464 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[20])));
            }
#line 1464 "declarative_tree.m"
          }
#line 1463 "declarative_tree.m"
      }
#line 1466 "declarative_tree.m"
    else
#line 1510 "declarative_tree.m"
    if ((mdb__declarative_tree__Contour_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1522 "declarative_tree.m"
      {
#line 1513 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__MaybeEnd_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1513 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1514 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 0);
#line 1522 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1517 "declarative_tree.m"
          {
#line 1517 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Primitive_134;
#line 1517 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Primitives1_135;

#line 1516 "declarative_tree.m"
            {
#line 1516 "declarative_tree.m"
              mdb__declarative_tree__Primitive_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1516 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1516 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1516 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1516 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1516 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1516 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_134, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1516 "declarative_tree.m"
            }
#line 1518 "declarative_tree.m"
            {
#line 1518 "declarative_tree.m"
              mdb__declarative_tree__Primitives1_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_135, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_134));
#line 1518 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_135, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1518 "declarative_tree.m"
            }
#line 1519 "declarative_tree.m"
            {
#line 1519 "declarative_tree.m"
              return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_135);
            }
#line 1517 "declarative_tree.m"
          }
#line 1522 "declarative_tree.m"
        else
#line 1523 "declarative_tree.m"
          {
#line 1523 "declarative_tree.m"
            {
#line 1523 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[21])));
            }
#line 1523 "declarative_tree.m"
          }
#line 1522 "declarative_tree.m"
      }
#line 1510 "declarative_tree.m"
    else
#line 1468 "declarative_tree.m"
      {
#line 1468 "declarative_tree.m"
        MR_Box mdb__declarative_tree__ContourHeadId_85;
#line 1468 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourTail_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 1)));
#line 1468 "declarative_tree.m"
        MR_Word mdb__declarative_tree__CallInfo_87;
#line 1468 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NewContour_88;
#line 1468 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_25, (MR_Integer) 0)));
#line 1468 "declarative_tree.m"
        MR_Word mdb__declarative_tree__ContourHeadNode_129;
#line 1468 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Primitive_132;
#line 1468 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Primitives1_133;
#line 1493 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Atom_127;
#line 1469 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_153_153;

#line 1468 "declarative_tree.m"
        mdb__declarative_tree__ContourHeadId_85 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 0));
#line 1468 "declarative_tree.m"
        mdb__declarative_tree__ContourHeadNode_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 1)));
#line 12839 "mdb.declarative_tree.c"
        {
#line 12841 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_153_153);
        }
#line 1469 "declarative_tree.m"
        {
#line 1469 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_execution__get_trace_exit_atom_1_f_1(mdb__declarative_tree__TypeInfo_153_153, mdb__declarative_tree__ContourHeadNode_129, &mdb__declarative_tree__Atom_127);
        }
#line 1493 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1482 "declarative_tree.m"
          {
#line 1476 "declarative_tree.m"
            MR_Word mdb__declarative_tree__AtomicGoalId_125;
#line 1472 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_114_114;

#line 1472 "declarative_tree.m"
            {
#line 1472 "declarative_tree.m"
              mdb__declarative_tree__V_114_114 = mdbcomp__program_representation__atomic_goal_identifiable_1_f_0(mdb__declarative_tree__AtomicGoal_21);
            }
#line 1473 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_114_114)) == (MR_mktag((MR_Integer) 1)));
#line 1473 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1473 "declarative_tree.m"
              {
#line 1473 "declarative_tree.m"
                mdb__declarative_tree__AtomicGoalId_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_114_114, (MR_Integer) 0)));
#line 1475 "declarative_tree.m"
                {
#line 1475 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = mdb__declarative_tree__atomic_goal_matches_atom_2_p_0(mdb__declarative_tree__AtomicGoalId_125, mdb__declarative_tree__Atom_127);
                }
#line 1473 "declarative_tree.m"
              }
#line 1473 "declarative_tree.m"
            else
#line 1477 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_30 == (MR_Integer) 1);
#line 1482 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1480 "declarative_tree.m"
              {
#line 1480 "declarative_tree.m"
                {
#line 1480 "declarative_tree.m"
                  mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1480 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__CallInfo_87, 0) = mdb__declarative_tree__ContourHeadId_85;
#line 1480 "declarative_tree.m"
                }
#line 1481 "declarative_tree.m"
                mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__ContourTail_86;
#line 1480 "declarative_tree.m"
              }
#line 1482 "declarative_tree.m"
            else
#line 1487 "declarative_tree.m"
#line 1487 "declarative_tree.m"
              switch (mdb__declarative_tree__AllTraced_30) {
#line 1487 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1487 "declarative_tree.m"
                case (MR_Integer) 0:
#line 1488 "declarative_tree.m"
                  {
#line 1489 "declarative_tree.m"
                    mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1490 "declarative_tree.m"
                    mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__Contour_25;
#line 1488 "declarative_tree.m"
                  }
#line 1487 "declarative_tree.m"
                  break;
#line 1487 "declarative_tree.m"
                case (MR_Integer) 1:
#line 1484 "declarative_tree.m"
                  {
#line 1485 "declarative_tree.m"
                    {
#line 1485 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[22])));
                    }
#line 1484 "declarative_tree.m"
                  }
#line 1487 "declarative_tree.m"
                  break;
#line 1487 "declarative_tree.m"
              }
#line 1482 "declarative_tree.m"
          }
#line 1493 "declarative_tree.m"
        else
#line 1499 "declarative_tree.m"
#line 1499 "declarative_tree.m"
          switch (mdb__declarative_tree__AllTraced_30) {
#line 1499 "declarative_tree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1499 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1500 "declarative_tree.m"
              {
#line 1501 "declarative_tree.m"
                mdb__declarative_tree__CallInfo_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1502 "declarative_tree.m"
                mdb__declarative_tree__NewContour_88 = mdb__declarative_tree__Contour_25;
#line 1500 "declarative_tree.m"
              }
#line 1499 "declarative_tree.m"
              break;
#line 1499 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1495 "declarative_tree.m"
              {
#line 1496 "declarative_tree.m"
                {
#line 1496 "declarative_tree.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[23])));
                }
#line 1495 "declarative_tree.m"
              }
#line 1499 "declarative_tree.m"
              break;
#line 1499 "declarative_tree.m"
          }
#line 1505 "declarative_tree.m"
        {
#line 1505 "declarative_tree.m"
          mdb__declarative_tree__Primitive_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 0) = ((MR_Box) (mdb__declarative_tree__File_18));
#line 1505 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 1) = ((MR_Box) (mdb__declarative_tree__Line_19));
#line 1505 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_20));
#line 1505 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_21));
#line 1505 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 4) = ((MR_Box) (mdb__declarative_tree__Path_23));
#line 1505 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_132, 5) = ((MR_Box) (mdb__declarative_tree__CallInfo_87));
#line 1505 "declarative_tree.m"
        }
#line 1507 "declarative_tree.m"
        {
#line 1507 "declarative_tree.m"
          mdb__declarative_tree__Primitives1_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_133, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_132));
#line 1507 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_133, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_31));
#line 1507 "declarative_tree.m"
        }
#line 1508 "declarative_tree.m"
        {
#line 1508 "declarative_tree.m"
          return mdb__declarative_tree__MaybePrims_32 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_145, mdb__declarative_tree__Store_17, mdb__declarative_tree__GoalPaths_24, mdb__declarative_tree__NewContour_88, mdb__declarative_tree__MaybeEnd_26, mdb__declarative_tree__ArgNum_27, mdb__declarative_tree__TotalArgs_28, mdb__declarative_tree__HeadVars_29, mdb__declarative_tree__AllTraced_30, mdb__declarative_tree__Primitives1_133);
        }
#line 1468 "declarative_tree.m"
      }
#line 1466 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_32;
#line 1466 "declarative_tree.m"
  }
#line 1384 "declarative_tree.m"
}

#line 1217 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__match_goal_to_contour_event_11_f_0(
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177,
#line 1217 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_13,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Goal_14,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Path_15,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_16,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_17,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_18,
#line 1217 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_19,
#line 1217 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_20,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_21,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_22,
#line 1217 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_23)
#line 1217 "declarative_tree.m"
{
#line 1223 "declarative_tree.m"
  {
#line 1223 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1223 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_24;
#line 1223 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalExpr_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Goal_14, (MR_Integer) 0)));
#line 1224 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Goal_14, (MR_Integer) 1)));

#line 1231 "declarative_tree.m"
#line 1231 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__GoalExpr_25)) {
#line 1231 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1231 "declarative_tree.m"
      case (MR_Integer) 0:
#line 1226 "declarative_tree.m"
        {
#line 1226 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Conjs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1226 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ConjPaths_29;
#line 1226 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_137_137;

#line 1227 "declarative_tree.m"
          {
#line 1227 "declarative_tree.m"
            mdb__declarative_tree__add_paths_to_conjuncts_4_p_0(mdb__declarative_tree__Conjs_28, mdb__declarative_tree__Path_15, (MR_Integer) 1, &mdb__declarative_tree__ConjPaths_29);
          }
#line 1228 "declarative_tree.m"
          {
#line 1228 "declarative_tree.m"
            mdb__declarative_tree__V_137_137 = mercury__list__f_43_43_2_f_0((MR_Word) &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_goal_and_path_0, mdb__declarative_tree__ConjPaths_29, mdb__declarative_tree__GoalPaths_16);
          }
#line 1228 "declarative_tree.m"
          {
#line 1228 "declarative_tree.m"
            return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_137_137, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
          }
#line 1226 "declarative_tree.m"
        }
#line 1231 "declarative_tree.m"
        break;
#line 1231 "declarative_tree.m"
      case (MR_Integer) 1:
#line 1255 "declarative_tree.m"
        {
#line 1255 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Disjs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1272 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourTail_45;
#line 1272 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjPath_51;
#line 1272 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__N_54;
#line 1257 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourHeadNode_44;
#line 1257 "declarative_tree.m"
          MR_Box mdb__declarative_tree__Label_47;
#line 1257 "declarative_tree.m"
          MR_String mdb__declarative_tree__DisjPathStr_50;
#line 1257 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjInitialPath_52;
#line 1257 "declarative_tree.m"
          MR_Word mdb__declarative_tree__DisjLastStep_53;
#line 1257 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_128_128;
#line 1257 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_43_43;

#line 1257 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1257 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1257 "declarative_tree.m"
            {
#line 1257 "declarative_tree.m"
              mdb__declarative_tree__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1257 "declarative_tree.m"
              mdb__declarative_tree__ContourTail_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1257 "declarative_tree.m"
              mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_128_128, (MR_Integer) 0));
#line 1257 "declarative_tree.m"
              mdb__declarative_tree__ContourHeadNode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_128_128, (MR_Integer) 1)));
#line 1259 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1258 "declarative_tree.m"
                {
#line 1258 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 1));

#line 1258 "declarative_tree.m"
                  mdb__declarative_tree__Label_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 2)));
#line 1258 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 1258 "declarative_tree.m"
                }
#line 1259 "declarative_tree.m"
              else
#line 1259 "declarative_tree.m"
              if (((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1259 "declarative_tree.m"
                {
#line 1259 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_48_48 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 1));
#line 1259 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_49_49;

#line 1259 "declarative_tree.m"
                  mdb__declarative_tree__Label_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 2)));
#line 1259 "declarative_tree.m"
                  mdb__declarative_tree__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_44, (MR_Integer) 3));
#line 1259 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 1259 "declarative_tree.m"
                }
#line 1259 "declarative_tree.m"
              else
#line 1259 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_FALSE;
#line 1257 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1257 "declarative_tree.m"
                {
#line 1261 "declarative_tree.m"
                  {
#line 1261 "declarative_tree.m"
                    mdb__declarative_tree__DisjPathStr_50 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_47);
                  }
#line 1262 "declarative_tree.m"
                  {
#line 1262 "declarative_tree.m"
                    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__DisjPathStr_50, &mdb__declarative_tree__DisjPath_51);
                  }
#line 1263 "declarative_tree.m"
                  {
#line 1263 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__DisjPath_51, &mdb__declarative_tree__DisjInitialPath_52, &mdb__declarative_tree__DisjLastStep_53);
                  }
#line 1257 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1257 "declarative_tree.m"
                    {
#line 1264 "declarative_tree.m"
                      {
#line 1264 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__DisjInitialPath_52, mdb__declarative_tree__Path_15);
                      }
#line 1257 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1257 "declarative_tree.m"
                        {
#line 1265 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__DisjLastStep_53)) == (MR_mktag((MR_Integer) 2)));
#line 1265 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1265 "declarative_tree.m"
                            mdb__declarative_tree__N_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__DisjLastStep_53, (MR_Integer) 0)));
#line 1257 "declarative_tree.m"
                        }
#line 1257 "declarative_tree.m"
                    }
#line 1257 "declarative_tree.m"
                }
#line 1257 "declarative_tree.m"
            }
#line 1272 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1267 "declarative_tree.m"
            {
#line 1267 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Disj_55;
#line 1267 "declarative_tree.m"
              MR_Word mdb__declarative_tree__DisjAndPath_56;
#line 1267 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_129_129;
#line 1267 "declarative_tree.m"
              MR_Box mdb__declarative_tree__conv0_Disj_55;

#line 1267 "declarative_tree.m"
              {
#line 1267 "declarative_tree.m"
                mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[1], mdb__declarative_tree__Disjs_42, mdb__declarative_tree__N_54, &mdb__declarative_tree__conv0_Disj_55);
              }
#line 1267 "declarative_tree.m"
              mdb__declarative_tree__Disj_55 = ((MR_Word) mdb__declarative_tree__conv0_Disj_55);
#line 1268 "declarative_tree.m"
              {
#line 1268 "declarative_tree.m"
                mdb__declarative_tree__DisjAndPath_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__DisjAndPath_56, 0) = ((MR_Box) (mdb__declarative_tree__Disj_55));
#line 1268 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__DisjAndPath_56, 1) = ((MR_Box) (mdb__declarative_tree__DisjPath_51));
#line 1268 "declarative_tree.m"
              }
#line 1269 "declarative_tree.m"
              {
#line 1269 "declarative_tree.m"
                mdb__declarative_tree__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_129_129, 0) = ((MR_Box) (mdb__declarative_tree__DisjAndPath_56));
#line 1269 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_129_129, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1269 "declarative_tree.m"
              }
#line 1269 "declarative_tree.m"
              {
#line 1269 "declarative_tree.m"
                return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_129_129, mdb__declarative_tree__ContourTail_45, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
              }
#line 1267 "declarative_tree.m"
            }
#line 1272 "declarative_tree.m"
          else
#line 1273 "declarative_tree.m"
            {
#line 1273 "declarative_tree.m"
              {
#line 1273 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[14])));
              }
#line 1273 "declarative_tree.m"
            }
#line 1255 "declarative_tree.m"
        }
#line 1231 "declarative_tree.m"
        break;
#line 1231 "declarative_tree.m"
      case (MR_Integer) 2:
#line 1276 "declarative_tree.m"
        {
#line 1276 "declarative_tree.m"
          MR_Word mdb__declarative_tree__Cases_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1276 "declarative_tree.m"
          MR_Integer mdb__declarative_tree___SwitchVar_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)));
#line 1276 "declarative_tree.m"
          MR_Word mdb__declarative_tree___SwitchCanFail_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1292 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArmPath_63;
#line 1292 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourTail_141;
#line 1292 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__N_143;
#line 1278 "declarative_tree.m"
          MR_String mdb__declarative_tree__ArmPathStr_62;
#line 1278 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArmInitialPath_64;
#line 1278 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ArmLastStep_65;
#line 1278 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_123_123;
#line 1278 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ContourHeadNode_138;
#line 1278 "declarative_tree.m"
          MR_Box mdb__declarative_tree__Label_139;
#line 1278 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_60_60;
#line 1279 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_61_61;
#line 1284 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_66_66;

#line 1278 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1278 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1278 "declarative_tree.m"
            {
#line 1278 "declarative_tree.m"
              mdb__declarative_tree__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1278 "declarative_tree.m"
              mdb__declarative_tree__ContourTail_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1278 "declarative_tree.m"
              mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_123_123, (MR_Integer) 0));
#line 1278 "declarative_tree.m"
              mdb__declarative_tree__ContourHeadNode_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_123_123, (MR_Integer) 1)));
#line 1279 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_138)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1279 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1279 "declarative_tree.m"
                {
#line 1279 "declarative_tree.m"
                  mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 1));
#line 1279 "declarative_tree.m"
                  mdb__declarative_tree__Label_139 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_138, (MR_Integer) 2)));
#line 1280 "declarative_tree.m"
                  {
#line 1280 "declarative_tree.m"
                    mdb__declarative_tree__ArmPathStr_62 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_139);
                  }
#line 1281 "declarative_tree.m"
                  {
#line 1281 "declarative_tree.m"
                    mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__ArmPathStr_62, &mdb__declarative_tree__ArmPath_63);
                  }
#line 1282 "declarative_tree.m"
                  {
#line 1282 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__ArmPath_63, &mdb__declarative_tree__ArmInitialPath_64, &mdb__declarative_tree__ArmLastStep_65);
                  }
#line 1278 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1278 "declarative_tree.m"
                    {
#line 1283 "declarative_tree.m"
                      {
#line 1283 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__ArmInitialPath_64, mdb__declarative_tree__Path_15);
                      }
#line 1278 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1278 "declarative_tree.m"
                        {
#line 1284 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ArmLastStep_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1284 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1284 "declarative_tree.m"
                            {
#line 1284 "declarative_tree.m"
                              mdb__declarative_tree__N_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 1)));
#line 1284 "declarative_tree.m"
                              mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ArmLastStep_65, (MR_Integer) 2)));
#line 1284 "declarative_tree.m"
                            }
#line 1278 "declarative_tree.m"
                        }
#line 1278 "declarative_tree.m"
                    }
#line 1279 "declarative_tree.m"
                }
#line 1278 "declarative_tree.m"
            }
#line 1292 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1286 "declarative_tree.m"
            {
#line 1286 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Case_67;
#line 1286 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Arm_70;
#line 1286 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ArmAndPath_71;
#line 1286 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_124_124;
#line 1286 "declarative_tree.m"
              MR_Box mdb__declarative_tree__conv1_Case_67;
#line 1287 "declarative_tree.m"
              MR_Word mdb__declarative_tree___ConsId_68;
#line 1287 "declarative_tree.m"
              MR_Word mdb__declarative_tree___ConsIdArity_69;

#line 1286 "declarative_tree.m"
              {
#line 1286 "declarative_tree.m"
                mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_tree_scalar_common_1[2], mdb__declarative_tree__Cases_59, mdb__declarative_tree__N_143, &mdb__declarative_tree__conv1_Case_67);
              }
#line 1286 "declarative_tree.m"
              mdb__declarative_tree__Case_67 = ((MR_Word) mdb__declarative_tree__conv1_Case_67);
#line 1287 "declarative_tree.m"
              mdb__declarative_tree___ConsId_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 0)));
#line 1287 "declarative_tree.m"
              mdb__declarative_tree___ConsIdArity_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 1)));
#line 1287 "declarative_tree.m"
              mdb__declarative_tree__Arm_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Case_67, (MR_Integer) 2)));
#line 1288 "declarative_tree.m"
              {
#line 1288 "declarative_tree.m"
                mdb__declarative_tree__ArmAndPath_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1288 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArmAndPath_71, 0) = ((MR_Box) (mdb__declarative_tree__Arm_70));
#line 1288 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__ArmAndPath_71, 1) = ((MR_Box) (mdb__declarative_tree__ArmPath_63));
#line 1288 "declarative_tree.m"
              }
#line 1289 "declarative_tree.m"
              {
#line 1289 "declarative_tree.m"
                mdb__declarative_tree__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_124_124, 0) = ((MR_Box) (mdb__declarative_tree__ArmAndPath_71));
#line 1289 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_124_124, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1289 "declarative_tree.m"
              }
#line 1289 "declarative_tree.m"
              {
#line 1289 "declarative_tree.m"
                return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_124_124, mdb__declarative_tree__ContourTail_141, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
              }
#line 1286 "declarative_tree.m"
            }
#line 1292 "declarative_tree.m"
          else
#line 1293 "declarative_tree.m"
            {
#line 1293 "declarative_tree.m"
              {
#line 1293 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[17])));
              }
#line 1293 "declarative_tree.m"
            }
#line 1276 "declarative_tree.m"
        }
#line 1231 "declarative_tree.m"
        break;
#line 1231 "declarative_tree.m"
      case (MR_Integer) 3:
#line 1231 "declarative_tree.m"
#line 1231 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 0)))) {
#line 1231 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1231 "declarative_tree.m"
          case (MR_Integer) 0:
#line 1296 "declarative_tree.m"
            {
#line 1296 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Cond_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1296 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Then_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1296 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Else_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 3)));
#line 1312 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondPath_79;
#line 1312 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ContourTail_164;
#line 1298 "declarative_tree.m"
              MR_String mdb__declarative_tree__CondPathStr_78;
#line 1298 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondInitialPath_80;
#line 1298 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondLastStep_81;
#line 1298 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_113_113;
#line 1298 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ContourHeadNode_148;
#line 1298 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Label_149;
#line 1298 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_75_75;
#line 1299 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_76_76;
#line 1299 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_77_77;

#line 1298 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1298 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1298 "declarative_tree.m"
                {
#line 1298 "declarative_tree.m"
                  mdb__declarative_tree__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1298 "declarative_tree.m"
                  mdb__declarative_tree__ContourTail_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1298 "declarative_tree.m"
                  mdb__declarative_tree__V_75_75 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 0));
#line 1298 "declarative_tree.m"
                  mdb__declarative_tree__ContourHeadNode_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_113_113, (MR_Integer) 1)));
#line 1299 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_148)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1299 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1299 "declarative_tree.m"
                    {
#line 1299 "declarative_tree.m"
                      mdb__declarative_tree__V_76_76 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 1));
#line 1299 "declarative_tree.m"
                      mdb__declarative_tree__Label_149 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 2)));
#line 1299 "declarative_tree.m"
                      mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_148, (MR_Integer) 3)));
#line 1300 "declarative_tree.m"
                      {
#line 1300 "declarative_tree.m"
                        mdb__declarative_tree__CondPathStr_78 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_149);
                      }
#line 1301 "declarative_tree.m"
                      {
#line 1301 "declarative_tree.m"
                        mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CondPathStr_78, &mdb__declarative_tree__CondPath_79);
                      }
#line 1302 "declarative_tree.m"
                      {
#line 1302 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__CondPath_79, &mdb__declarative_tree__CondInitialPath_80, &mdb__declarative_tree__CondLastStep_81);
                      }
#line 1298 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1298 "declarative_tree.m"
                        {
#line 1303 "declarative_tree.m"
                          {
#line 1303 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CondInitialPath_80, mdb__declarative_tree__Path_15);
                          }
#line 1298 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1304 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__CondLastStep_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "declarative_tree.m"
                        }
#line 1299 "declarative_tree.m"
                    }
#line 1298 "declarative_tree.m"
                }
#line 1312 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1306 "declarative_tree.m"
                {
#line 1306 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ThenPath_82;
#line 1306 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondAndPath_83;
#line 1306 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ThenAndPath_84;
#line 1306 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_115_115;
#line 1306 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_116_116;

#line 1306 "declarative_tree.m"
                  {
#line 1306 "declarative_tree.m"
                    mdb__declarative_tree__ThenPath_82 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
                  }
#line 1307 "declarative_tree.m"
                  {
#line 1307 "declarative_tree.m"
                    mdb__declarative_tree__CondAndPath_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1307 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__CondAndPath_83, 0) = ((MR_Box) (mdb__declarative_tree__Cond_72));
#line 1307 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__CondAndPath_83, 1) = ((MR_Box) (mdb__declarative_tree__CondPath_79));
#line 1307 "declarative_tree.m"
                  }
#line 1308 "declarative_tree.m"
                  {
#line 1308 "declarative_tree.m"
                    mdb__declarative_tree__ThenAndPath_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1308 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__ThenAndPath_84, 0) = ((MR_Box) (mdb__declarative_tree__Then_73));
#line 1308 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__ThenAndPath_84, 1) = ((MR_Box) (mdb__declarative_tree__ThenPath_82));
#line 1308 "declarative_tree.m"
                  }
#line 1310 "declarative_tree.m"
                  {
#line 1310 "declarative_tree.m"
                    mdb__declarative_tree__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_116_116, 0) = ((MR_Box) (mdb__declarative_tree__ThenAndPath_84));
#line 1310 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_116_116, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1310 "declarative_tree.m"
                  }
#line 1310 "declarative_tree.m"
                  {
#line 1310 "declarative_tree.m"
                    mdb__declarative_tree__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_115_115, 0) = ((MR_Box) (mdb__declarative_tree__CondAndPath_83));
#line 1310 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_115_115, 1) = ((MR_Box) (mdb__declarative_tree__V_116_116));
#line 1310 "declarative_tree.m"
                  }
#line 1309 "declarative_tree.m"
                  {
#line 1309 "declarative_tree.m"
                    return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_115_115, mdb__declarative_tree__ContourTail_164, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                  }
#line 1306 "declarative_tree.m"
                }
#line 1312 "declarative_tree.m"
              else
#line 1328 "declarative_tree.m"
                {
#line 1328 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourTail_157;
#line 1313 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__ElseCondId_87;
#line 1313 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondNode_89;
#line 1313 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_117_117;
#line 1313 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourHeadNode_150;
#line 1313 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__Label_151;
#line 1313 "declarative_tree.m"
                  MR_String mdb__declarative_tree__CondPathStr_152;
#line 1313 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondPath_153;
#line 1313 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondInitialPath_154;
#line 1313 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__CondLastStep_155;
#line 1313 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_85_85;
#line 1314 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_86_86;
#line 1314 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_88_88;
#line 1316 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_90_90;
#line 1316 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_91_91;

#line 1313 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1313 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1313 "declarative_tree.m"
                    {
#line 1313 "declarative_tree.m"
                      mdb__declarative_tree__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1313 "declarative_tree.m"
                      mdb__declarative_tree__ContourTail_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1313 "declarative_tree.m"
                      mdb__declarative_tree__V_85_85 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_117_117, (MR_Integer) 0));
#line 1313 "declarative_tree.m"
                      mdb__declarative_tree__ContourHeadNode_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_117_117, (MR_Integer) 1)));
#line 1314 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_150)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1314 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1314 "declarative_tree.m"
                        {
#line 1314 "declarative_tree.m"
                          mdb__declarative_tree__V_86_86 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 1));
#line 1314 "declarative_tree.m"
                          mdb__declarative_tree__ElseCondId_87 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 2));
#line 1314 "declarative_tree.m"
                          mdb__declarative_tree__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_150, (MR_Integer) 3)));
#line 1315 "declarative_tree.m"
                          {
#line 1315 "declarative_tree.m"
                            mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__ElseCondId_87, &mdb__declarative_tree__CondNode_89);
                          }
#line 1316 "declarative_tree.m"
                          mdb__declarative_tree__V_90_90 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 1));
#line 1316 "declarative_tree.m"
                          mdb__declarative_tree__Label_151 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 2)));
#line 1316 "declarative_tree.m"
                          mdb__declarative_tree__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__CondNode_89, (MR_Integer) 3)));
#line 1317 "declarative_tree.m"
                          {
#line 1317 "declarative_tree.m"
                            mdb__declarative_tree__CondPathStr_152 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_tree__Label_151);
                          }
#line 1318 "declarative_tree.m"
                          {
#line 1318 "declarative_tree.m"
                            mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CondPathStr_152, &mdb__declarative_tree__CondPath_153);
                          }
#line 1319 "declarative_tree.m"
                          {
#line 1319 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(mdb__declarative_tree__CondPath_153, &mdb__declarative_tree__CondInitialPath_154, &mdb__declarative_tree__CondLastStep_155);
                          }
#line 1313 "declarative_tree.m"
                          if (mdb__declarative_tree__succeeded)
#line 1313 "declarative_tree.m"
                            {
#line 1320 "declarative_tree.m"
                              {
#line 1320 "declarative_tree.m"
                                mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CondInitialPath_154, mdb__declarative_tree__Path_15);
                              }
#line 1313 "declarative_tree.m"
                              if (mdb__declarative_tree__succeeded)
#line 1321 "declarative_tree.m"
                                mdb__declarative_tree__succeeded = (mdb__declarative_tree__CondLastStep_155 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1313 "declarative_tree.m"
                            }
#line 1314 "declarative_tree.m"
                        }
#line 1313 "declarative_tree.m"
                    }
#line 1328 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1323 "declarative_tree.m"
                    {
#line 1323 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__ElsePath_92;
#line 1323 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__ElseAndPath_93;
#line 1323 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_119_119;

#line 1323 "declarative_tree.m"
                      {
#line 1323 "declarative_tree.m"
                        mdb__declarative_tree__ElsePath_92 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                      }
#line 1324 "declarative_tree.m"
                      {
#line 1324 "declarative_tree.m"
                        mdb__declarative_tree__ElseAndPath_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__ElseAndPath_93, 0) = ((MR_Box) (mdb__declarative_tree__Else_74));
#line 1324 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__ElseAndPath_93, 1) = ((MR_Box) (mdb__declarative_tree__ElsePath_92));
#line 1324 "declarative_tree.m"
                      }
#line 1325 "declarative_tree.m"
                      {
#line 1325 "declarative_tree.m"
                        mdb__declarative_tree__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_119_119, 0) = ((MR_Box) (mdb__declarative_tree__ElseAndPath_93));
#line 1325 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_119_119, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1325 "declarative_tree.m"
                      }
#line 1325 "declarative_tree.m"
                      {
#line 1325 "declarative_tree.m"
                        return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_119_119, mdb__declarative_tree__ContourTail_157, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                      }
#line 1323 "declarative_tree.m"
                    }
#line 1328 "declarative_tree.m"
                  else
#line 1329 "declarative_tree.m"
                    {
#line 1329 "declarative_tree.m"
                      {
#line 1329 "declarative_tree.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[15])));
                      }
#line 1329 "declarative_tree.m"
                    }
#line 1328 "declarative_tree.m"
                }
#line 1296 "declarative_tree.m"
            }
#line 1231 "declarative_tree.m"
            break;
#line 1231 "declarative_tree.m"
          case (MR_Integer) 1:
#line 1332 "declarative_tree.m"
            {
#line 1332 "declarative_tree.m"
              MR_Word mdb__declarative_tree__NegGoal_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1340 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ContourTail_174;
#line 1334 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_105_105;
#line 1334 "declarative_tree.m"
              MR_Word mdb__declarative_tree__ContourHeadNode_169;
#line 1334 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_95_95;
#line 1335 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_96_96;
#line 1335 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_97_97;
#line 1335 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_98_98;

#line 1334 "declarative_tree.m"
              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1334 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1334 "declarative_tree.m"
                {
#line 1334 "declarative_tree.m"
                  mdb__declarative_tree__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1334 "declarative_tree.m"
                  mdb__declarative_tree__ContourTail_174 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1334 "declarative_tree.m"
                  mdb__declarative_tree__V_95_95 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_105_105, (MR_Integer) 0));
#line 1334 "declarative_tree.m"
                  mdb__declarative_tree__ContourHeadNode_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_105_105, (MR_Integer) 1)));
#line 1335 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_169)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 1335 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1335 "declarative_tree.m"
                    {
#line 1335 "declarative_tree.m"
                      mdb__declarative_tree__V_96_96 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 1));
#line 1335 "declarative_tree.m"
                      mdb__declarative_tree__V_97_97 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 2));
#line 1335 "declarative_tree.m"
                      mdb__declarative_tree__V_98_98 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_169, (MR_Integer) 3)));
#line 1335 "declarative_tree.m"
                    }
#line 1334 "declarative_tree.m"
                }
#line 1340 "declarative_tree.m"
              if (mdb__declarative_tree__succeeded)
#line 1338 "declarative_tree.m"
                {
#line 1338 "declarative_tree.m"
                  return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__ContourTail_174, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                }
#line 1340 "declarative_tree.m"
              else
#line 1350 "declarative_tree.m"
                {
#line 1350 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourTail_172;
#line 1341 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_106_106;
#line 1341 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__ContourHeadNode_170;
#line 1341 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_99_99;
#line 1342 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_100_100;
#line 1342 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_101_101;
#line 1342 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_102_102;

#line 1341 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Contour_17)) == (MR_mktag((MR_Integer) 1)));
#line 1341 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1341 "declarative_tree.m"
                    {
#line 1341 "declarative_tree.m"
                      mdb__declarative_tree__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 0)));
#line 1341 "declarative_tree.m"
                      mdb__declarative_tree__ContourTail_172 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Contour_17, (MR_Integer) 1)));
#line 1341 "declarative_tree.m"
                      mdb__declarative_tree__V_99_99 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_106_106, (MR_Integer) 0));
#line 1341 "declarative_tree.m"
                      mdb__declarative_tree__ContourHeadNode_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_106_106, (MR_Integer) 1)));
#line 1342 "declarative_tree.m"
                      mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__ContourHeadNode_170)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1342 "declarative_tree.m"
                      if (mdb__declarative_tree__succeeded)
#line 1342 "declarative_tree.m"
                        {
#line 1342 "declarative_tree.m"
                          mdb__declarative_tree__V_100_100 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 1));
#line 1342 "declarative_tree.m"
                          mdb__declarative_tree__V_101_101 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 2)));
#line 1342 "declarative_tree.m"
                          mdb__declarative_tree__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__ContourHeadNode_170, (MR_Integer) 3)));
#line 1342 "declarative_tree.m"
                        }
#line 1341 "declarative_tree.m"
                    }
#line 1350 "declarative_tree.m"
                  if (mdb__declarative_tree__succeeded)
#line 1346 "declarative_tree.m"
                    {
#line 1346 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__NegPath_103;
#line 1346 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__NegAndPath_104;
#line 1346 "declarative_tree.m"
                      MR_Word mdb__declarative_tree__V_108_108;

#line 1346 "declarative_tree.m"
                      {
#line 1346 "declarative_tree.m"
                        mdb__declarative_tree__NegPath_103 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
                      }
#line 1347 "declarative_tree.m"
                      {
#line 1347 "declarative_tree.m"
                        mdb__declarative_tree__NegAndPath_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1347 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__NegAndPath_104, 0) = ((MR_Box) (mdb__declarative_tree__NegGoal_94));
#line 1347 "declarative_tree.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_tree__NegAndPath_104, 1) = ((MR_Box) (mdb__declarative_tree__NegPath_103));
#line 1347 "declarative_tree.m"
                      }
#line 1348 "declarative_tree.m"
                      {
#line 1348 "declarative_tree.m"
                        mdb__declarative_tree__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_108_108, 0) = ((MR_Box) (mdb__declarative_tree__NegAndPath_104));
#line 1348 "declarative_tree.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1348 "declarative_tree.m"
                      }
#line 1348 "declarative_tree.m"
                      {
#line 1348 "declarative_tree.m"
                        return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_108_108, mdb__declarative_tree__ContourTail_172, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                      }
#line 1346 "declarative_tree.m"
                    }
#line 1350 "declarative_tree.m"
                  else
#line 1351 "declarative_tree.m"
                    {
#line 1351 "declarative_tree.m"
                      {
#line 1351 "declarative_tree.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[16])));
                      }
#line 1351 "declarative_tree.m"
                    }
#line 1350 "declarative_tree.m"
                }
#line 1332 "declarative_tree.m"
            }
#line 1231 "declarative_tree.m"
            break;
#line 1231 "declarative_tree.m"
          case (MR_Integer) 2:
#line 1232 "declarative_tree.m"
            {
#line 1232 "declarative_tree.m"
              MR_Word mdb__declarative_tree__InnerGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1232 "declarative_tree.m"
              MR_Word mdb__declarative_tree__MaybeCut_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1232 "declarative_tree.m"
              MR_Word mdb__declarative_tree__InnerPath_32;
#line 1232 "declarative_tree.m"
              MR_Word mdb__declarative_tree__InnerAndPath_33;
#line 1232 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_134_134;
#line 1232 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_135_135;

#line 1233 "declarative_tree.m"
              {
#line 1233 "declarative_tree.m"
                mdb__declarative_tree__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "declarative_tree.m"
                MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1233 "declarative_tree.m"
                MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_134_134, 1) = ((MR_Box) (mdb__declarative_tree__MaybeCut_31));
#line 1233 "declarative_tree.m"
              }
#line 1233 "declarative_tree.m"
              {
#line 1233 "declarative_tree.m"
                mdb__declarative_tree__InnerPath_32 = mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(mdb__declarative_tree__Path_15, mdb__declarative_tree__V_134_134);
              }
#line 1234 "declarative_tree.m"
              {
#line 1234 "declarative_tree.m"
                mdb__declarative_tree__InnerAndPath_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__InnerAndPath_33, 0) = ((MR_Box) (mdb__declarative_tree__InnerGoal_30));
#line 1234 "declarative_tree.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_tree__InnerAndPath_33, 1) = ((MR_Box) (mdb__declarative_tree__InnerPath_32));
#line 1234 "declarative_tree.m"
              }
#line 1235 "declarative_tree.m"
              {
#line 1235 "declarative_tree.m"
                mdb__declarative_tree__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1235 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_135_135, 0) = ((MR_Box) (mdb__declarative_tree__InnerAndPath_33));
#line 1235 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_135_135, 1) = ((MR_Box) (mdb__declarative_tree__GoalPaths_16));
#line 1235 "declarative_tree.m"
              }
#line 1235 "declarative_tree.m"
              {
#line 1235 "declarative_tree.m"
                return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__V_135_135, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
              }
#line 1232 "declarative_tree.m"
            }
#line 1231 "declarative_tree.m"
            break;
#line 1231 "declarative_tree.m"
          case (MR_Integer) 3:
#line 1239 "declarative_tree.m"
            {
#line 1239 "declarative_tree.m"
              MR_String mdb__declarative_tree__File_34 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 1)));
#line 1239 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__Line_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 2)));
#line 1239 "declarative_tree.m"
              MR_Word mdb__declarative_tree__BoundVars_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 3)));
#line 1239 "declarative_tree.m"
              MR_Word mdb__declarative_tree__AtomicGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExpr_25, (MR_Integer) 4)));
#line 1239 "declarative_tree.m"
              MR_Word mdb__declarative_tree__GeneratesEvent_38;

#line 1240 "declarative_tree.m"
              {
#line 1240 "declarative_tree.m"
                mdb__declarative_tree__GeneratesEvent_38 = mdbcomp__program_representation__atomic_goal_generates_event_like_call_1_f_0(mdb__declarative_tree__AtomicGoal_37);
              }
#line 1247 "declarative_tree.m"
              if ((mdb__declarative_tree__GeneratesEvent_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "declarative_tree.m"
                {
#line 1248 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__Primitive_40;
#line 1248 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__Primitives1_41;

#line 1249 "declarative_tree.m"
                  {
#line 1249 "declarative_tree.m"
                    mdb__declarative_tree__Primitive_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1249 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 0) = ((MR_Box) (mdb__declarative_tree__File_34));
#line 1249 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 1) = ((MR_Box) (mdb__declarative_tree__Line_35));
#line 1249 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 2) = ((MR_Box) (mdb__declarative_tree__BoundVars_36));
#line 1249 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 3) = ((MR_Box) (mdb__declarative_tree__AtomicGoal_37));
#line 1249 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 4) = ((MR_Box) (mdb__declarative_tree__Path_15));
#line 1249 "declarative_tree.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_tree__Primitive_40, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1249 "declarative_tree.m"
                  }
#line 1250 "declarative_tree.m"
                  {
#line 1250 "declarative_tree.m"
                    mdb__declarative_tree__Primitives1_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_41, 0) = ((MR_Box) (mdb__declarative_tree__Primitive_40));
#line 1250 "declarative_tree.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_tree__Primitives1_41, 1) = ((MR_Box) (mdb__declarative_tree__Primitives0_23));
#line 1250 "declarative_tree.m"
                  }
#line 1251 "declarative_tree.m"
                  {
#line 1251 "declarative_tree.m"
                    return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__make_primitive_list_9_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives1_41);
                  }
#line 1248 "declarative_tree.m"
                }
#line 1247 "declarative_tree.m"
              else
#line 1242 "declarative_tree.m"
                {
#line 1242 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__AtomicGoalArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GeneratesEvent_38, (MR_Integer) 0)));

#line 1243 "declarative_tree.m"
                  {
#line 1243 "declarative_tree.m"
                    return mdb__declarative_tree__MaybePrims_24 = mdb__declarative_tree__match_atomic_goal_to_contour_event_15_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_177, mdb__declarative_tree__Store_13, mdb__declarative_tree__File_34, mdb__declarative_tree__Line_35, mdb__declarative_tree__BoundVars_36, mdb__declarative_tree__AtomicGoal_37, mdb__declarative_tree__AtomicGoalArgs_39, mdb__declarative_tree__Path_15, mdb__declarative_tree__GoalPaths_16, mdb__declarative_tree__Contour_17, mdb__declarative_tree__MaybeEnd_18, mdb__declarative_tree__ArgNum_19, mdb__declarative_tree__TotalArgs_20, mdb__declarative_tree__HeadVars_21, mdb__declarative_tree__AllTraced_22, mdb__declarative_tree__Primitives0_23);
                  }
#line 1242 "declarative_tree.m"
                }
#line 1239 "declarative_tree.m"
            }
#line 1231 "declarative_tree.m"
            break;
#line 1231 "declarative_tree.m"
        }
#line 1231 "declarative_tree.m"
        break;
#line 1231 "declarative_tree.m"
    }
#line 1223 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_24;
#line 1223 "declarative_tree.m"
  }
#line 1217 "declarative_tree.m"
}

#line 1139 "declarative_tree.m"
static MR_Word MR_CALL 
mdb__declarative_tree__make_primitive_list_9_f_0(
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37,
#line 1139 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_11,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__GoalPaths_12,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Contour_13,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__MaybeEnd_14,
#line 1139 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_15,
#line 1139 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__TotalArgs_16,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVars_17,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__AllTraced_18,
#line 1139 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Primitives0_19)
#line 1139 "declarative_tree.m"
{
#line 1145 "declarative_tree.m"
  {
#line 1145 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_18 == (MR_Integer) 0);
#line 1145 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybePrims_20;
#line 1145 "declarative_tree.m"
    MR_Word mdb__declarative_tree__AdjustedContour_21;
#line 1162 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__PolyConst2_40;
#line 1162 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_58;
#line 1162 "declarative_tree.m"
    MR_Word mdb__declarative_tree__EndPath_59;
#line 1162 "declarative_tree.m"
    MR_Word mdb__declarative_tree__MaybeReturnLabel_66;
#line 1162 "declarative_tree.m"
    MR_String mdb__declarative_tree__CallPathStr_70;
#line 1162 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallPath_71;
#line 1162 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_72_72;
#line 1162 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_73_73;
#line 14156 "mdb.declarative_tree.c"
    MR_Word mdb__declarative_tree__TypeInfo_41_41;
#line 1195 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_57_57;
#line 1196 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_60_60;
#line 1196 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_61_61;
#line 1196 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_62_62;
#line 1196 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_63_63;
#line 1196 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_64_64;
#line 1196 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_65_65;
#line 1196 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_67_67;
#line 1196 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_68_68;
#line 1196 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_69_69;

#line 1147 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1147 "declarative_tree.m"
      {
#line 1203 "declarative_tree.m"
        {
#line 1203 "declarative_tree.m"
          MR_Word mdb__declarative_tree__NextGoal_52;
#line 1203 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_55_55;
#line 1203 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_56_56;
#line 1203 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_54_54;
#line 1203 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_53_53;

#line 1203 "declarative_tree.m"
          mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__GoalPaths_12)) == (MR_mktag((MR_Integer) 1)));
#line 1203 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 1203 "declarative_tree.m"
            {
#line 1203 "declarative_tree.m"
              mdb__declarative_tree__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));
#line 1203 "declarative_tree.m"
              mdb__declarative_tree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1203 "declarative_tree.m"
              mdb__declarative_tree__NextGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_55_55, (MR_Integer) 0)));
#line 1203 "declarative_tree.m"
              mdb__declarative_tree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_55_55, (MR_Integer) 1)));
#line 1204 "declarative_tree.m"
              {
#line 1204 "declarative_tree.m"
                mdb__declarative_tree__V_56_56 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(mdb__declarative_tree__NextGoal_52);
              }
#line 1204 "declarative_tree.m"
              mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_56_56 == (MR_Integer) 1);
#line 1203 "declarative_tree.m"
            }
#line 1203 "declarative_tree.m"
        }
#line 1150 "declarative_tree.m"
        if (!(mdb__declarative_tree__succeeded))
#line 1151 "declarative_tree.m"
          mdb__declarative_tree__succeeded = (mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1147 "declarative_tree.m"
      }
#line 1158 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1157 "declarative_tree.m"
      {
#line 14231 "mdb.declarative_tree.c"
        MR_Word mdb__declarative_tree__TypeInfo_39_39;

#line 14234 "mdb.declarative_tree.c"
        {
#line 14236 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_39_39);
        }
#line 1157 "declarative_tree.m"
        {
#line 1157 "declarative_tree.m"
          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_108_101_97_100_105_110_103_95_101_120_105_116_95_102_97_105_108_95_101_118_101_110_116_115_95_95_91_49_93_95_48_2_p_0(mdb__declarative_tree__Contour_13, &mdb__declarative_tree__AdjustedContour_21);
        }
#line 1157 "declarative_tree.m"
      }
#line 1158 "declarative_tree.m"
    else
#line 1159 "declarative_tree.m"
      mdb__declarative_tree__AdjustedContour_21 = mdb__declarative_tree__Contour_13;
#line 1162 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__AllTraced_18 == (MR_Integer) 0);
#line 1162 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1162 "declarative_tree.m"
      {
#line 14256 "mdb.declarative_tree.c"
        mdb__declarative_tree__PolyConst2_40 = (MR_Integer) 2;
#line 14258 "mdb.declarative_tree.c"
        {
#line 14260 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__PolyConst2_40, &mdb__declarative_tree__TypeInfo_41_41);
        }
#line 1195 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__AdjustedContour_21)) == (MR_mktag((MR_Integer) 1)));
#line 1195 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1195 "declarative_tree.m"
          {
#line 1195 "declarative_tree.m"
            mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedContour_21, (MR_Integer) 0)));
#line 1195 "declarative_tree.m"
            mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__AdjustedContour_21, (MR_Integer) 1)));
#line 1195 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1162 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1162 "declarative_tree.m"
              {
#line 1195 "declarative_tree.m"
                mdb__declarative_tree__V_57_57 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_72_72, (MR_Integer) 0));
#line 1195 "declarative_tree.m"
                mdb__declarative_tree__Node_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_72_72, (MR_Integer) 1)));
#line 1195 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__MaybeEnd_14)) == (MR_mktag((MR_Integer) 1)));
#line 1195 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1195 "declarative_tree.m"
                  {
#line 1195 "declarative_tree.m"
                    mdb__declarative_tree__EndPath_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybeEnd_14, (MR_Integer) 0)));
#line 1196 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_58)) == (MR_mktag((MR_Integer) 0)));
#line 1196 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1196 "declarative_tree.m"
                      {
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 0));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_61_61 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 1));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 2)));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 3)));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 4)));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 5)));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__MaybeReturnLabel_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 6)));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 7)));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 8)));
#line 1196 "declarative_tree.m"
                        mdb__declarative_tree__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_58, (MR_Integer) 9)));
#line 1197 "declarative_tree.m"
                        {
#line 1197 "declarative_tree.m"
                          mdb__declarative_tree__CallPathStr_70 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__MaybeReturnLabel_66);
                        }
#line 1198 "declarative_tree.m"
                        {
#line 1198 "declarative_tree.m"
                          mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_70, &mdb__declarative_tree__CallPath_71);
                        }
#line 1199 "declarative_tree.m"
                        {
#line 1199 "declarative_tree.m"
                          mdb__declarative_tree__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdb__declarative_tree__CallPath_71, mdb__declarative_tree__EndPath_59);
                        }
#line 1162 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 1162 "declarative_tree.m"
                          {
#line 1203 "declarative_tree.m"
                            {
#line 1203 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__NextGoal_75;
#line 1203 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_78_78;
#line 1203 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_79_79;
#line 1203 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_77_77;
#line 1203 "declarative_tree.m"
                              MR_Word mdb__declarative_tree__V_76_76;

#line 1203 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__GoalPaths_12)) == (MR_mktag((MR_Integer) 1)));
#line 1203 "declarative_tree.m"
                              if (mdb__declarative_tree__succeeded)
#line 1203 "declarative_tree.m"
                                {
#line 1203 "declarative_tree.m"
                                  mdb__declarative_tree__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));
#line 1203 "declarative_tree.m"
                                  mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1203 "declarative_tree.m"
                                  mdb__declarative_tree__NextGoal_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_78_78, (MR_Integer) 0)));
#line 1203 "declarative_tree.m"
                                  mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_78_78, (MR_Integer) 1)));
#line 1204 "declarative_tree.m"
                                  {
#line 1204 "declarative_tree.m"
                                    mdb__declarative_tree__V_79_79 = mdbcomp__program_representation__goal_generates_internal_event_1_f_0(mdb__declarative_tree__NextGoal_75);
                                  }
#line 1204 "declarative_tree.m"
                                  mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_79_79 == (MR_Integer) 1);
#line 1203 "declarative_tree.m"
                                }
#line 1203 "declarative_tree.m"
                            }
#line 1166 "declarative_tree.m"
                            if (!(mdb__declarative_tree__succeeded))
#line 1167 "declarative_tree.m"
                              mdb__declarative_tree__succeeded = (mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1162 "declarative_tree.m"
                          }
#line 1196 "declarative_tree.m"
                      }
#line 1195 "declarative_tree.m"
                  }
#line 1162 "declarative_tree.m"
              }
#line 1195 "declarative_tree.m"
          }
#line 1162 "declarative_tree.m"
      }
#line 1175 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1174 "declarative_tree.m"
      mdb__declarative_tree__MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "declarative_tree.m"
    else
#line 1181 "declarative_tree.m"
    if ((mdb__declarative_tree__GoalPaths_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1182 "declarative_tree.m"
      {
#line 1182 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__Var_25;
#line 1182 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_34_34;

#line 1903 "declarative_tree.m"
        {
#line 1903 "declarative_tree.m"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__IntroducedFrom__pred__make_primitive_list__1183__1_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__AdjustedContour_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        }
#line 1905 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1904 "declarative_tree.m"
          {
#line 1904 "declarative_tree.m"
          }
#line 1905 "declarative_tree.m"
        else
#line 1906 "declarative_tree.m"
          {
#line 1906 "declarative_tree.m"
            {
#line 1906 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[13])));
            }
#line 1906 "declarative_tree.m"
          }
#line 1185 "declarative_tree.m"
        {
#line 1185 "declarative_tree.m"
          mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_108_95_114_101_113_117_105_114_101_95_95_104_111_51_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__MaybeEnd_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_String) "make_primitive_list", (MR_String) "found end when looking for call");
        }
#line 1187 "declarative_tree.m"
        {
#line 1187 "declarative_tree.m"
          mdb__declarative_tree__find_variable_in_args_4_p_0(mdb__declarative_tree__HeadVars_17, mdb__declarative_tree__ArgNum_15, mdb__declarative_tree__TotalArgs_16, &mdb__declarative_tree__Var_25);
        }
#line 1188 "declarative_tree.m"
        {
#line 1188 "declarative_tree.m"
          mdb__declarative_tree__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 0) = ((MR_Box) (mdb__declarative_tree__Primitives0_19));
#line 1188 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 1) = ((MR_Box) (mdb__declarative_tree__Var_25));
#line 1188 "declarative_tree.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_34_34, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1188 "declarative_tree.m"
        }
#line 1188 "declarative_tree.m"
        {
#line 1188 "declarative_tree.m"
          mdb__declarative_tree__MaybePrims_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "declarative_tree.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_tree__MaybePrims_20, 0) = ((MR_Box) (mdb__declarative_tree__V_34_34));
#line 1188 "declarative_tree.m"
        }
#line 1182 "declarative_tree.m"
      }
#line 1181 "declarative_tree.m"
    else
#line 1177 "declarative_tree.m"
      {
#line 1177 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Goal_22;
#line 1177 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Path_23;
#line 1177 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Tail_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 1)));
#line 1177 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__GoalPaths_12, (MR_Integer) 0)));

#line 1177 "declarative_tree.m"
        mdb__declarative_tree__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_36_36, (MR_Integer) 0)));
#line 1177 "declarative_tree.m"
        mdb__declarative_tree__Path_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_36_36, (MR_Integer) 1)));
#line 1178 "declarative_tree.m"
        {
#line 1178 "declarative_tree.m"
          return mdb__declarative_tree__MaybePrims_20 = mdb__declarative_tree__match_goal_to_contour_event_11_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_37, mdb__declarative_tree__Store_11, mdb__declarative_tree__Goal_22, mdb__declarative_tree__Path_23, mdb__declarative_tree__Tail_24, mdb__declarative_tree__AdjustedContour_21, mdb__declarative_tree__MaybeEnd_14, mdb__declarative_tree__ArgNum_15, mdb__declarative_tree__TotalArgs_16, mdb__declarative_tree__HeadVars_17, mdb__declarative_tree__AllTraced_18, mdb__declarative_tree__Primitives0_19);
        }
#line 1177 "declarative_tree.m"
      }
#line 1145 "declarative_tree.m"
    return mdb__declarative_tree__MaybePrims_20;
#line 1145 "declarative_tree.m"
  }
#line 1139 "declarative_tree.m"
}

#line 1105 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atom_3_p_0(
#line 1105 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 1105 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1105 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 1105 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__FinalAtom_7)
#line 1105 "declarative_tree.m"
{
#line 1108 "declarative_tree.m"
  {
#line 1108 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_40_52;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Exit_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 1)));
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitAtom_20;
#line 1108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_21;
#line 1108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_22;
#line 1108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__CallIoSeq_23;
#line 1108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ExitIoSeq_24;
#line 1108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__PolyConst2_51;
#line 1108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__HeadVar__2_2, (MR_Integer) 0));
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_8_8;
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_9_9;
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_10_10;
#line 1109 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_11_11;
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_12_12;
#line 1109 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13;
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 1109 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15;
#line 105 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_28_28;
#line 105 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_29_29;
#line 105 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_30_30;
#line 105 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_31_31;
#line 105 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 105 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_33_33;
#line 105 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_34_34;
#line 107 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_35_35;
#line 107 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_36_36;
#line 107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 107 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_38_38;
#line 107 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_40_40;
#line 107 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_41_41;
#line 107 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_42_42;
#line 107 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_43_43;
#line 108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_44_44;
#line 108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_45_45;
#line 108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_46_46;
#line 108 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_47_47;
#line 108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_48_48;
#line 108 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_49_49;
#line 108 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_50_50;

#line 1109 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Exit_6)) == (MR_mktag((MR_Integer) 1)));
#line 1109 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1109 "declarative_tree.m"
      {
#line 1109 "declarative_tree.m"
        mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 1109 "declarative_tree.m"
        mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 1109 "declarative_tree.m"
        mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 1109 "declarative_tree.m"
        mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 1109 "declarative_tree.m"
        mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 1109 "declarative_tree.m"
        mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 1109 "declarative_tree.m"
        mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 1109 "declarative_tree.m"
        mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 14610 "mdb.declarative_tree.c"
        mdb__declarative_tree__PolyConst2_51 = (MR_Integer) 2;
#line 14612 "mdb.declarative_tree.c"
        {
#line 14614 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__PolyConst2_51, &mdb__declarative_tree__TypeInfo_40_52);
        }
#line 104 "declarative_tree.m"
        {
#line 104 "declarative_tree.m"
          mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_52, mdb__declarative_tree__Exit_6);
        }
#line 105 "declarative_tree.m"
        mdb__declarative_tree__V_28_28 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 105 "declarative_tree.m"
        mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 105 "declarative_tree.m"
        mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 105 "declarative_tree.m"
        mdb__declarative_tree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 105 "declarative_tree.m"
        mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 105 "declarative_tree.m"
        mdb__declarative_tree__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 105 "declarative_tree.m"
        mdb__declarative_tree__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 105 "declarative_tree.m"
        mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 106 "declarative_tree.m"
        {
#line 106 "declarative_tree.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_21, &mdb__declarative_tree__Call_22);
        }
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 0));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_36_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 1));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 2)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 3)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 4)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 5)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 6)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__CallIoSeq_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 8)));
#line 107 "declarative_tree.m"
        mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_22, (MR_Integer) 9)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_44_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 0));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 1));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 2));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 3)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 4)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 5)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__ExitIoSeq_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 6)));
#line 108 "declarative_tree.m"
        mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Exit_6, (MR_Integer) 7)));
#line 109 "declarative_tree.m"
        mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_23 == mdb__declarative_tree__ExitIoSeq_24);
#line 111 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 110 "declarative_tree.m"
          {
#line 110 "declarative_tree.m"
            {
#line 110 "declarative_tree.m"
              MR_Word base;
#line 110 "declarative_tree.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "declarative_tree.m"
              *mdb__declarative_tree__FinalAtom_7 = base;
#line 110 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_20));
#line 110 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "declarative_tree.m"
            }
#line 110 "declarative_tree.m"
          }
#line 111 "declarative_tree.m"
        else
#line 112 "declarative_tree.m"
          {
#line 112 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_26_26;
#line 112 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_27_27;

#line 113 "declarative_tree.m"
            {
#line 113 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_27_27, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_23));
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_27_27, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_24));
#line 113 "declarative_tree.m"
            }
#line 113 "declarative_tree.m"
            {
#line 113 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "declarative_tree.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_26_26, 0) = ((MR_Box) (mdb__declarative_tree__V_27_27));
#line 113 "declarative_tree.m"
            }
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
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_tree__V_26_26));
#line 112 "declarative_tree.m"
            }
#line 112 "declarative_tree.m"
          }
#line 111 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1109 "declarative_tree.m"
      }
#line 1108 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1108 "declarative_tree.m"
  }
#line 1105 "declarative_tree.m"
}

#line 1103 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1(
#line 1103 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 1103 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1,
#line 1103 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__wrapper_arg_2)
#line 1103 "declarative_tree.m"
{
#line 1103 "declarative_tree.m"
  {
#line 1103 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1103 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 1103 "declarative_tree.m"
    MR_Word mdb__declarative_tree__conv0_FinalAtom_7;

#line 1103 "declarative_tree.m"
    {
#line 1103 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__get_exit_atom_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__closure, (MR_Integer) 4)), ((MR_Word) mdb__declarative_tree__wrapper_arg_1), &mdb__declarative_tree__conv0_FinalAtom_7);
    }
#line 1103 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1103 "declarative_tree.m"
      {
#line 1103 "declarative_tree.m"
        *mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_FinalAtom_7));
#line 1103 "declarative_tree.m"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 1103 "declarative_tree.m"
      }
#line 1103 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1103 "declarative_tree.m"
  }
#line 1103 "declarative_tree.m"
}

#line 1095 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0(
#line 1095 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 1095 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1095 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_5,
#line 1095 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ExitAtoms_6)
#line 1095 "declarative_tree.m"
{
#line 1099 "declarative_tree.m"
  {
#line 1099 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1099 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_23_23;
#line 1099 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_24_24;
#line 1099 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_26_26;
#line 1099 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_28_28;
#line 1099 "declarative_tree.m"
    MR_Box mdb__declarative_tree__ExitPrecId_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 0));
#line 1099 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitPrec_8;
#line 1099 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Contour_9;
#line 1099 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_11_11;
#line 1100 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 1));
#line 1100 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 2));
#line 1100 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 3)));
#line 1100 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 4)));
#line 1100 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 5)));
#line 1100 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 6)));
#line 1100 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_5, (MR_Integer) 7)));

#line 1101 "declarative_tree.m"
    {
#line 1101 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__ExitPrecId_7, &mdb__declarative_tree__ExitPrec_8);
    }
#line 1102 "declarative_tree.m"
    {
#line 1102 "declarative_tree.m"
      mdb__declarative_tree__materialize_contour_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__ExitPrecId_7, mdb__declarative_tree__ExitPrec_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_tree__Contour_9);
    }
#line 1103 "declarative_tree.m"
    {
#line 1103 "declarative_tree.m"
      mdb__declarative_tree__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_6[0]));
#line 1103 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 1) = ((MR_Box) (mdb__declarative_tree__get_exit_atoms_in_contour_3_p_0_1));
#line 1103 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1103 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 3) = ((MR_Box) (mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19));
#line 1103 "declarative_tree.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_11_11, 4) = mdb__declarative_tree__Store_4;
#line 1103 "declarative_tree.m"
    }
#line 14871 "mdb.declarative_tree.c"
    {
#line 14873 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_23_23);
    }
#line 14876 "mdb.declarative_tree.c"
    {
#line 14878 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_24_24);
    }
#line 14881 "mdb.declarative_tree.c"
    {
#line 14883 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14885 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_26_26, 0) = ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1));
#line 14887 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_26_26, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_24_24));
#line 14889 "mdb.declarative_tree.c"
    }
#line 14891 "mdb.declarative_tree.c"
    {
#line 14893 "mdb.declarative_tree.c"
      mdb__declarative_tree__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 14895 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 14897 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 1) = ((MR_Box) (mdb__declarative_tree__TypeInfo_23_23));
#line 14899 "mdb.declarative_tree.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeInfo_28_28, 2) = ((MR_Box) (mdb__declarative_tree__TypeInfo_26_26));
#line 14901 "mdb.declarative_tree.c"
    }
#line 1103 "declarative_tree.m"
    {
#line 1103 "declarative_tree.m"
      mercury__list__filter_map_3_p_0(mdb__declarative_tree__TypeInfo_28_28, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_tree__V_11_11, mdb__declarative_tree__Contour_9, mdb__declarative_tree__ExitAtoms_6);
#line 1103 "declarative_tree.m"
      return;
    }
#line 1099 "declarative_tree.m"
  }
#line 1095 "declarative_tree.m"
}

#line 1065 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__materialize_contour_5_p_0(
#line 1065 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34,
#line 1065 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 1065 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 1065 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Node_8,
#line 1065 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Nodes0_9,
#line 1065 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Nodes_10)
#line 1065 "declarative_tree.m"
{
#line 1072 "declarative_tree.m"
  while (MR_TRUE)
#line 1072 "declarative_tree.m"
    {
#line 1072 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1072 "declarative_tree.m"
      {
#line 1072 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 0)));
#line 1070 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_11_11;
#line 1070 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_12_12;
#line 1070 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1070 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_14_14;
#line 1070 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_15_15;
#line 1070 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_16_16;
#line 1070 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_17_17;
#line 1070 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_18_18;
#line 1070 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_19_19;
#line 1070 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_20_20;

#line 1070 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1070 "declarative_tree.m"
          {
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 0));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 4)));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 5)));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 6)));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 7)));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 8)));
#line 1070 "declarative_tree.m"
            mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_8, (MR_Integer) 9)));
#line 1071 "declarative_tree.m"
            *mdb__declarative_tree__Nodes_10 = mdb__declarative_tree__Nodes0_9;
#line 1070 "declarative_tree.m"
          }
#line 1070 "declarative_tree.m"
        else
#line 1082 "declarative_tree.m"
          {
#line 1082 "declarative_tree.m"
            MR_Box mdb__declarative_tree__PrevNodeId_24;
#line 1082 "declarative_tree.m"
            MR_Word mdb__declarative_tree__PrevNode_28;
#line 1082 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Nodes1_32;
#line 1078 "declarative_tree.m"
            MR_Box mdb__declarative_tree__NegPrec_21;
#line 1076 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_22_22;
#line 1076 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_23_23;
#line 1084 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29;
#line 1084 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_30_30;
#line 1084 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_31_31;

#line 1076 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1076 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1076 "declarative_tree.m"
              {
#line 1076 "declarative_tree.m"
                mdb__declarative_tree__NegPrec_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1076 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1076 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1077 "declarative_tree.m"
                mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_tree__NegPrec_21;
#line 1076 "declarative_tree.m"
              }
#line 1076 "declarative_tree.m"
            else
#line 1080 "declarative_tree.m"
              {
#line 1080 "declarative_tree.m"
                MR_Box mdb__declarative_tree__CondPrec_25;
#line 1078 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_26_26;
#line 1078 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_27_27;

#line 1078 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1078 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1078 "declarative_tree.m"
                  {
#line 1078 "declarative_tree.m"
                    mdb__declarative_tree__CondPrec_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1078 "declarative_tree.m"
                    mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2)));
#line 1078 "declarative_tree.m"
                    mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1079 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_tree__CondPrec_25;
#line 1078 "declarative_tree.m"
                  }
#line 1078 "declarative_tree.m"
                else
#line 1081 "declarative_tree.m"
                  {
#line 1081 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_24 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_8);
                  }
#line 1080 "declarative_tree.m"
              }
#line 1083 "declarative_tree.m"
            {
#line 1083 "declarative_tree.m"
              mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_34, mdb__declarative_tree__Store_6, mdb__declarative_tree__PrevNodeId_24, &mdb__declarative_tree__PrevNode_28);
            }
#line 1084 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1084 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1084 "declarative_tree.m"
              {
#line 1084 "declarative_tree.m"
                mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 1));
#line 1084 "declarative_tree.m"
                mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 2));
#line 1084 "declarative_tree.m"
                mdb__declarative_tree__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_8, (MR_Integer) 3)));
#line 1088 "declarative_tree.m"
                mdb__declarative_tree__Nodes1_32 = mdb__declarative_tree__Nodes0_9;
#line 1084 "declarative_tree.m"
              }
#line 1084 "declarative_tree.m"
            else
#line 1090 "declarative_tree.m"
              {
#line 1090 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_33_33;

#line 1090 "declarative_tree.m"
                {
#line 1090 "declarative_tree.m"
                  mdb__declarative_tree__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_33_33, 0) = mdb__declarative_tree__NodeId_7;
#line 1090 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_33_33, 1) = ((MR_Box) (mdb__declarative_tree__Node_8));
#line 1090 "declarative_tree.m"
                }
#line 1090 "declarative_tree.m"
                {
#line 1090 "declarative_tree.m"
                  mdb__declarative_tree__Nodes1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Nodes1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_33_33));
#line 1090 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__Nodes1_32, 1) = ((MR_Box) (mdb__declarative_tree__Nodes0_9));
#line 1090 "declarative_tree.m"
                }
#line 1090 "declarative_tree.m"
              }
#line 1092 "declarative_tree.m"
            /* direct tailcall eliminated */
#line 1092 "declarative_tree.m"
            {
#line 1092 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NodeId__tmp_copy_7 = mdb__declarative_tree__PrevNodeId_24;
#line 1092 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Node__tmp_copy_8 = mdb__declarative_tree__PrevNode_28;
#line 1092 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Nodes0__tmp_copy_9 = mdb__declarative_tree__Nodes1_32;

#line 1092 "declarative_tree.m"
              mdb__declarative_tree__Nodes0_9 = mdb__declarative_tree__Nodes0__tmp_copy_9;
#line 1092 "declarative_tree.m"
              mdb__declarative_tree__Node_8 = mdb__declarative_tree__Node__tmp_copy_8;
#line 1092 "declarative_tree.m"
              mdb__declarative_tree__NodeId_7 = mdb__declarative_tree__NodeId__tmp_copy_7;
#line 1092 "declarative_tree.m"
            }
#line 1092 "declarative_tree.m"
            continue;
#line 1082 "declarative_tree.m"
          }
#line 1072 "declarative_tree.m"
      }
#line 1072 "declarative_tree.m"
      break;
#line 1072 "declarative_tree.m"
    }
#line 1065 "declarative_tree.m"
}

#line 1042 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__step_left_to_call_3_p_0(
#line 1042 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25,
#line 1042 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 1042 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_5,
#line 1042 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ParentCallNode_6)
#line 1042 "declarative_tree.m"
{
#line 1045 "declarative_tree.m"
  while (MR_TRUE)
#line 1045 "declarative_tree.m"
    {
#line 1045 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 1045 "declarative_tree.m"
      {
#line 1045 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 1045 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Node_7;
#line 15173 "mdb.declarative_tree.c"
        MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15175 "mdb.declarative_tree.c"
        MR_Box mdb__declarative_tree__conv1_Node_7;
#line 1047 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_8_8;
#line 1047 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_9_9;
#line 1047 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_10_10;
#line 1047 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_11_11;
#line 1047 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_12_12;
#line 1047 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_13_13;
#line 1047 "declarative_tree.m"
        MR_Word mdb__declarative_tree__V_14_14;
#line 1047 "declarative_tree.m"
        MR_Box mdb__declarative_tree__V_15_15;
#line 1047 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_16_16;
#line 1047 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__V_17_17;

#line 15198 "mdb.declarative_tree.c"
        {
#line 15200 "mdb.declarative_tree.c"
          mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25), mdb__declarative_tree__Store_4, mdb__declarative_tree__NodeId_5, &mdb__declarative_tree__conv1_Node_7);
        }
#line 15203 "mdb.declarative_tree.c"
        if (mdb__declarative_tree__succeeded)
#line 15205 "mdb.declarative_tree.c"
          {
#line 15207 "mdb.declarative_tree.c"
            mdb__declarative_tree__Node_7 = ((MR_Word) mdb__declarative_tree__conv1_Node_7);
#line 15209 "mdb.declarative_tree.c"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 15211 "mdb.declarative_tree.c"
          }
#line 1045 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 1045 "declarative_tree.m"
          {
#line 1047 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 0)));
#line 1047 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 1047 "declarative_tree.m"
              {
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 0));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 7)));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 8)));
#line 1047 "declarative_tree.m"
                mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Node_7, (MR_Integer) 9)));
#line 1048 "declarative_tree.m"
                *mdb__declarative_tree__ParentCallNode_6 = mdb__declarative_tree__Node_7;
#line 1048 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1047 "declarative_tree.m"
              }
#line 1047 "declarative_tree.m"
            else
#line 1061 "declarative_tree.m"
              {
#line 1061 "declarative_tree.m"
                MR_Box mdb__declarative_tree__PrevNodeId_21;
#line 1057 "declarative_tree.m"
                MR_Box mdb__declarative_tree__NegPrec_18;
#line 1055 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_19_19;
#line 1055 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_20_20;

#line 1055 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 1055 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 1055 "declarative_tree.m"
                  {
#line 1055 "declarative_tree.m"
                    mdb__declarative_tree__NegPrec_18 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1055 "declarative_tree.m"
                    mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1055 "declarative_tree.m"
                    mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1056 "declarative_tree.m"
                    mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_tree__NegPrec_18;
#line 1055 "declarative_tree.m"
                  }
#line 1055 "declarative_tree.m"
                else
#line 1059 "declarative_tree.m"
                  {
#line 1059 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__CondPrec_22;
#line 1057 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_23_23;
#line 1057 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_24_24;

#line 1057 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 1057 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 1057 "declarative_tree.m"
                      {
#line 1057 "declarative_tree.m"
                        mdb__declarative_tree__CondPrec_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 1057 "declarative_tree.m"
                        mdb__declarative_tree__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2)));
#line 1057 "declarative_tree.m"
                        mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 1058 "declarative_tree.m"
                        mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_tree__CondPrec_22;
#line 1057 "declarative_tree.m"
                      }
#line 1057 "declarative_tree.m"
                    else
#line 1060 "declarative_tree.m"
                      {
#line 1060 "declarative_tree.m"
                        mdb__declarative_tree__PrevNodeId_21 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_25, mdb__declarative_tree__Store_4, mdb__declarative_tree__Node_7);
                      }
#line 1059 "declarative_tree.m"
                  }
#line 1062 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 1062 "declarative_tree.m"
                {
#line 1062 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__NodeId__tmp_copy_5 = mdb__declarative_tree__PrevNodeId_21;

#line 1062 "declarative_tree.m"
                  mdb__declarative_tree__NodeId_5 = mdb__declarative_tree__NodeId__tmp_copy_5;
#line 1062 "declarative_tree.m"
                }
#line 1062 "declarative_tree.m"
                continue;
#line 1061 "declarative_tree.m"
              }
#line 1045 "declarative_tree.m"
          }
#line 1045 "declarative_tree.m"
        return mdb__declarative_tree__succeeded;
#line 1045 "declarative_tree.m"
      }
#line 1045 "declarative_tree.m"
      break;
#line 1045 "declarative_tree.m"
    }
#line 1042 "declarative_tree.m"
}

#line 1011 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_outside_4_p_0(
#line 1011 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeInfo_for_R_25,
#line 1011 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_5,
#line 1011 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ExitNode_6,
#line 1011 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_7,
#line 1011 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_8)
#line 1011 "declarative_tree.m"
{
#line 1015 "declarative_tree.m"
  {
#line 1015 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1015 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ExitAtom_10;
#line 1015 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ArgNum_11;
#line 1015 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__TotalArgs_12;
#line 1015 "declarative_tree.m"
    MR_Box mdb__declarative_tree__StartId_13;
#line 1015 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartRep_15;
#line 1015 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_16_16;
#line 1019 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_17_17;
#line 1020 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_18_18;
#line 1020 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_19_19;
#line 1020 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_20_20;
#line 1020 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_21_21;
#line 1020 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_22_22;
#line 1020 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_23_23;
#line 1020 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_24_24;

#line 1017 "declarative_tree.m"
    {
#line 1017 "declarative_tree.m"
      mdb__declarative_tree__ExitAtom_10 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_for_R_25, mdb__declarative_tree__ExitNode_6);
    }
#line 1018 "declarative_tree.m"
    {
#line 1018 "declarative_tree.m"
      mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_tree__ArgPos_7, mdb__declarative_tree__ExitAtom_10, &mdb__declarative_tree__ArgNum_11);
    }
#line 1019 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_10, (MR_Integer) 0)));
#line 1019 "declarative_tree.m"
    mdb__declarative_tree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_10, (MR_Integer) 1)));
#line 1019 "declarative_tree.m"
    {
#line 1019 "declarative_tree.m"
      mdb__declarative_tree__TotalArgs_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_16_16);
    }
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__StartId_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 0));
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_18_18 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 1));
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 2));
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 3)));
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 4)));
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 5)));
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 6)));
#line 1020 "declarative_tree.m"
    mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_6, (MR_Integer) 7)));
#line 1022 "declarative_tree.m"
    {
#line 1022 "declarative_tree.m"
      mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(mdb__declarative_tree__TypeInfo_for_R_25, mdb__declarative_tree__CallNode_5, &mdb__declarative_tree__StartRep_15);
    }
#line 1023 "declarative_tree.m"
    {
#line 1023 "declarative_tree.m"
      MR_Word base;
#line 1023 "declarative_tree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "declarative_tree.m"
      *mdb__declarative_tree__ChainStart_8 = base;
#line 1023 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__ArgNum_11));
#line 1023 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TotalArgs_12));
#line 1023 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 3) = mdb__declarative_tree__StartId_13;
#line 1023 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (mdb__declarative_tree__StartRep_15));
#line 1023 "declarative_tree.m"
    }
#line 1015 "declarative_tree.m"
  }
#line 1011 "declarative_tree.m"
}

#line 993 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__find_chain_start_inside_5_p_0(
#line 993 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42,
#line 993 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 993 "declarative_tree.m"
  MR_Box mdb__declarative_tree__CallId_7,
#line 993 "declarative_tree.m"
  MR_Word mdb__declarative_tree__CallNode_8,
#line 993 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_9,
#line 993 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ChainStart_10)
#line 993 "declarative_tree.m"
{
#line 997 "declarative_tree.m"
  {
#line 997 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_44_44;
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallAtom_12;
#line 997 "declarative_tree.m"
    MR_String mdb__declarative_tree__CallPathStr_13;
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallPath_14;
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartLoc_15;
#line 997 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__ArgNum_16;
#line 997 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__TotalArgs_17;
#line 997 "declarative_tree.m"
    MR_Box mdb__declarative_tree__StartId_18 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartPath_19;
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__StartRep_20;
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_21_21;
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_22_22;
#line 997 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Call_49;
#line 997 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallPrecId_50;
#line 998 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 998 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 998 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 998 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 998 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 998 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 998 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 1000 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_32_32;
#line 1000 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_33_33;
#line 1000 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_34_34;
#line 1000 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_35_35;
#line 1000 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_36_36;
#line 1000 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_37_37;
#line 1000 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_38_38;
#line 1000 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_39_39;
#line 1000 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_40_40;
#line 1004 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_41_41;
#line 1031 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_52_52;
#line 1031 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_53_53;
#line 1031 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_54_54;
#line 1031 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_55_55;
#line 1031 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_56_56;
#line 1031 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_57_57;
#line 1031 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_58_58;
#line 1031 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_59_59;
#line 1031 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_60_60;
#line 1034 "declarative_tree.m"
    MR_Word mdb__declarative_tree__ParentCallNode_51;

#line 15565 "mdb.declarative_tree.c"
    {
#line 15567 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_44_44);
    }
#line 999 "declarative_tree.m"
    {
#line 999 "declarative_tree.m"
      mdb__declarative_tree__CallAtom_12 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_44_44, mdb__declarative_tree__CallNode_8);
    }
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 1000 "declarative_tree.m"
    mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 1000 "declarative_tree.m"
    {
#line 1000 "declarative_tree.m"
      mdb__declarative_tree__CallPathStr_13 = mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_f_0(mdb__declarative_tree__V_21_21);
    }
#line 1001 "declarative_tree.m"
    {
#line 1001 "declarative_tree.m"
      mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(mdb__declarative_tree__CallPathStr_13, &mdb__declarative_tree__CallPath_14);
    }
#line 1002 "declarative_tree.m"
    {
#line 1002 "declarative_tree.m"
      mdb__declarative_tree__StartLoc_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, 0) = mdb__declarative_tree__CallId_7;
#line 1002 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartLoc_15, 1) = ((MR_Box) (mdb__declarative_tree__CallNode_8));
#line 1002 "declarative_tree.m"
    }
#line 1003 "declarative_tree.m"
    {
#line 1003 "declarative_tree.m"
      mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_tree__ArgPos_9, mdb__declarative_tree__CallAtom_12, &mdb__declarative_tree__ArgNum_16);
    }
#line 1004 "declarative_tree.m"
    mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_12, (MR_Integer) 0)));
#line 1004 "declarative_tree.m"
    mdb__declarative_tree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallAtom_12, (MR_Integer) 1)));
#line 1004 "declarative_tree.m"
    {
#line 1004 "declarative_tree.m"
      mdb__declarative_tree__TotalArgs_17 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__V_22_22);
    }
#line 1006 "declarative_tree.m"
    {
#line 1006 "declarative_tree.m"
      mdb__declarative_tree__StartPath_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1006 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_tree__StartPath_19, 0) = ((MR_Box) (mdb__declarative_tree__CallPath_14));
#line 1006 "declarative_tree.m"
    }
#line 1030 "declarative_tree.m"
    {
#line 1030 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_7, &mdb__declarative_tree__Call_49);
    }
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__CallPrecId_50 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 0));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_52_52 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 1));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 2)));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 3)));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 4)));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 5)));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 6)));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_58_58 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 7)));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 8)));
#line 1031 "declarative_tree.m"
    mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_49, (MR_Integer) 9)));
#line 1032 "declarative_tree.m"
    {
#line 1032 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__step_left_to_call_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallPrecId_50, &mdb__declarative_tree__ParentCallNode_51);
    }
#line 1034 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1033 "declarative_tree.m"
      {
#line 1033 "declarative_tree.m"
        MR_Word mdb__declarative_tree__TypeInfo_21_62;

#line 15674 "mdb.declarative_tree.c"
        {
#line 15676 "mdb.declarative_tree.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_21_62);
        }
#line 1033 "declarative_tree.m"
        {
#line 1033 "declarative_tree.m"
          mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(mdb__declarative_tree__TypeInfo_21_62, mdb__declarative_tree__ParentCallNode_51, &mdb__declarative_tree__StartRep_20);
        }
#line 1033 "declarative_tree.m"
      }
#line 1034 "declarative_tree.m"
    else
#line 1035 "declarative_tree.m"
      mdb__declarative_tree__StartRep_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1008 "declarative_tree.m"
    {
#line 1008 "declarative_tree.m"
      MR_Word base;
#line 1008 "declarative_tree.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "declarative_tree.m"
      *mdb__declarative_tree__ChainStart_10 = base;
#line 1008 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__StartLoc_15));
#line 1008 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_tree__ArgNum_16));
#line 1008 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TotalArgs_17));
#line 1008 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 3) = mdb__declarative_tree__StartId_18;
#line 1008 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_tree__StartPath_19));
#line 1008 "declarative_tree.m"
      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (mdb__declarative_tree__StartRep_20));
#line 1008 "declarative_tree.m"
    }
#line 997 "declarative_tree.m"
  }
#line 993 "declarative_tree.m"
}

#line 940 "declarative_tree.m"
static MR_Box MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0_1(
#line 940 "declarative_tree.m"
  MR_Box mdb__declarative_tree__closure_arg,
#line 940 "declarative_tree.m"
  MR_Box mdb__declarative_tree__wrapper_arg_1)
#line 940 "declarative_tree.m"
{
#line 940 "declarative_tree.m"
  {
#line 940 "declarative_tree.m"
    MR_Box mdb__declarative_tree__wrapper_arg_2;
#line 940 "declarative_tree.m"
    MR_Box mdb__declarative_tree__closure = mdb__declarative_tree__closure_arg;
#line 940 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__conv0_HeadVar__2_2;

#line 940 "declarative_tree.m"
    {
#line 940 "declarative_tree.m"
      mdb__declarative_tree__conv0_HeadVar__2_2 = mdbcomp__program_representation__head_var_to_var_1_f_0(((MR_Word) mdb__declarative_tree__wrapper_arg_1));
    }
#line 940 "declarative_tree.m"
    mdb__declarative_tree__wrapper_arg_2 = ((MR_Box) (mdb__declarative_tree__conv0_HeadVar__2_2));
#line 940 "declarative_tree.m"
    return mdb__declarative_tree__wrapper_arg_2;
#line 940 "declarative_tree.m"
  }
#line 940 "declarative_tree.m"
}

#line 841 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__trace_dependency_special_case_8_p_0(
#line 841 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43,
#line 841 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_9,
#line 841 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ProcDefnRep_10,
#line 841 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_11,
#line 841 "declarative_tree.m"
  MR_Word mdb__declarative_tree__StartLoc_12,
#line 841 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__ArgNum_13,
#line 841 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TermPath_14,
#line 841 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_15,
#line 841 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Origin_16)
#line 841 "declarative_tree.m"
{
#line 846 "declarative_tree.m"
  {
#line 846 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalRep_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 1)));
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__HeadVars_50;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__GoalExprRep_51;
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__A_52;
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__B_53;
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__C_54;
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__D_55;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_59_59;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_60_60;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_61_61;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_62_62;
#line 846 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_63_63;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_64_64;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_65_65;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_66_66;
#line 846 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_67_67;
#line 846 "declarative_tree.m"
    MR_String mdb__declarative_tree__V_68_68;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_69_69;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_70_70;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_71_71;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_72_72;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_73_73;
#line 846 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 0)));
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_88_88;
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_89_89;
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_90_90;
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_91_91;
#line 846 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_92_92;
#line 939 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 2)));
#line 939 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 3)));
#line 939 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcDefnRep_10, (MR_Integer) 4)));
#line 941 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_82_82;
#line 943 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_56_56;

#line 940 "declarative_tree.m"
    {
#line 940 "declarative_tree.m"
      mdb__declarative_tree__HeadVars_50 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_tree_scalar_common_4[0], mdb__declarative_tree__V_74_74);
    }
#line 941 "declarative_tree.m"
    mdb__declarative_tree__GoalExprRep_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalRep_49, (MR_Integer) 0)));
#line 941 "declarative_tree.m"
    mdb__declarative_tree__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__GoalRep_49, (MR_Integer) 1)));
#line 942 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__HeadVars_50)) == (MR_mktag((MR_Integer) 1)));
#line 942 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 942 "declarative_tree.m"
      {
#line 942 "declarative_tree.m"
        mdb__declarative_tree__A_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVars_50, (MR_Integer) 0)));
#line 942 "declarative_tree.m"
        mdb__declarative_tree__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__HeadVars_50, (MR_Integer) 1)));
#line 942 "declarative_tree.m"
        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 942 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 942 "declarative_tree.m"
          {
#line 942 "declarative_tree.m"
            mdb__declarative_tree__B_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_59_59, (MR_Integer) 0)));
#line 942 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_59_59, (MR_Integer) 1)));
#line 942 "declarative_tree.m"
            mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 942 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 942 "declarative_tree.m"
              {
#line 942 "declarative_tree.m"
                mdb__declarative_tree__C_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_60_60, (MR_Integer) 0)));
#line 942 "declarative_tree.m"
                mdb__declarative_tree__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_60_60, (MR_Integer) 1)));
#line 942 "declarative_tree.m"
                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 942 "declarative_tree.m"
                if (mdb__declarative_tree__succeeded)
#line 942 "declarative_tree.m"
                  {
#line 942 "declarative_tree.m"
                    mdb__declarative_tree__D_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_61_61, (MR_Integer) 0)));
#line 942 "declarative_tree.m"
                    mdb__declarative_tree__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_61_61, (MR_Integer) 1)));
#line 942 "declarative_tree.m"
                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "declarative_tree.m"
                    if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                      {
#line 943 "declarative_tree.m"
                        mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__GoalExprRep_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 943 "declarative_tree.m"
                        if (mdb__declarative_tree__succeeded)
#line 943 "declarative_tree.m"
                          {
#line 943 "declarative_tree.m"
                            mdb__declarative_tree__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 1)));
#line 943 "declarative_tree.m"
                            mdb__declarative_tree__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 2)));
#line 943 "declarative_tree.m"
                            mdb__declarative_tree__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 3)));
#line 943 "declarative_tree.m"
                            mdb__declarative_tree__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__GoalExprRep_51, (MR_Integer) 4)));
#line 943 "declarative_tree.m"
                            mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_63_63, (MR_String) "exception.m") == 0);
#line 846 "declarative_tree.m"
                            if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                              {
#line 943 "declarative_tree.m"
                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 943 "declarative_tree.m"
                                if (mdb__declarative_tree__succeeded)
#line 943 "declarative_tree.m"
                                  {
#line 943 "declarative_tree.m"
                                    mdb__declarative_tree__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_64_64, (MR_Integer) 0)));
#line 943 "declarative_tree.m"
                                    mdb__declarative_tree__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_64_64, (MR_Integer) 1)));
#line 943 "declarative_tree.m"
                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__D_55 == mdb__declarative_tree__V_88_88);
#line 846 "declarative_tree.m"
                                    if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                                      {
#line 943 "declarative_tree.m"
                                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "declarative_tree.m"
                                        if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                                          {
#line 944 "declarative_tree.m"
                                            mdb__declarative_tree__succeeded = ((((MR_tag((MR_Word) mdb__declarative_tree__V_66_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 944 "declarative_tree.m"
                                            if (mdb__declarative_tree__succeeded)
#line 944 "declarative_tree.m"
                                              {
#line 944 "declarative_tree.m"
                                                mdb__declarative_tree__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                mdb__declarative_tree__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 2)));
#line 944 "declarative_tree.m"
                                                mdb__declarative_tree__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__V_66_66, (MR_Integer) 3)));
#line 944 "declarative_tree.m"
                                                mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_67_67, (MR_String) "exception") == 0);
#line 846 "declarative_tree.m"
                                                if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                                                  {
#line 944 "declarative_tree.m"
                                                    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__V_68_68, (MR_String) "builtin_catch") == 0);
#line 846 "declarative_tree.m"
                                                    if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                                                      {
#line 944 "declarative_tree.m"
                                                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                        if (mdb__declarative_tree__succeeded)
#line 944 "declarative_tree.m"
                                                          {
#line 944 "declarative_tree.m"
                                                            mdb__declarative_tree__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_69_69, (MR_Integer) 0)));
#line 944 "declarative_tree.m"
                                                            mdb__declarative_tree__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_69_69, (MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__A_52 == mdb__declarative_tree__V_89_89);
#line 846 "declarative_tree.m"
                                                            if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                                                              {
#line 944 "declarative_tree.m"
                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                                if (mdb__declarative_tree__succeeded)
#line 944 "declarative_tree.m"
                                                                  {
#line 944 "declarative_tree.m"
                                                                    mdb__declarative_tree__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_70_70, (MR_Integer) 0)));
#line 944 "declarative_tree.m"
                                                                    mdb__declarative_tree__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_70_70, (MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__B_53 == mdb__declarative_tree__V_90_90);
#line 846 "declarative_tree.m"
                                                                    if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                                                                      {
#line 944 "declarative_tree.m"
                                                                        mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                                        if (mdb__declarative_tree__succeeded)
#line 944 "declarative_tree.m"
                                                                          {
#line 944 "declarative_tree.m"
                                                                            mdb__declarative_tree__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_71_71, (MR_Integer) 0)));
#line 944 "declarative_tree.m"
                                                                            mdb__declarative_tree__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_71_71, (MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                                            mdb__declarative_tree__succeeded = (mdb__declarative_tree__C_54 == mdb__declarative_tree__V_91_91);
#line 846 "declarative_tree.m"
                                                                            if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                                                                              {
#line 944 "declarative_tree.m"
                                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                                                if (mdb__declarative_tree__succeeded)
#line 944 "declarative_tree.m"
                                                                                  {
#line 944 "declarative_tree.m"
                                                                                    mdb__declarative_tree__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_72_72, (MR_Integer) 0)));
#line 944 "declarative_tree.m"
                                                                                    mdb__declarative_tree__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_72_72, (MR_Integer) 1)));
#line 944 "declarative_tree.m"
                                                                                    mdb__declarative_tree__succeeded = (mdb__declarative_tree__D_55 == mdb__declarative_tree__V_92_92);
#line 846 "declarative_tree.m"
                                                                                    if (mdb__declarative_tree__succeeded)
#line 846 "declarative_tree.m"
                                                                                      {
#line 944 "declarative_tree.m"
                                                                                        mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "declarative_tree.m"
                                                                                        if (mdb__declarative_tree__succeeded)
#line 858 "declarative_tree.m"
                                                                                          {
#line 858 "declarative_tree.m"
                                                                                            if ((mdb__declarative_tree__StartLoc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 859 "declarative_tree.m"
                                                                                              {
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TypeInfo_45_45;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TypeInfo_47_47;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__ExitNode_19;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__ExitAtom_20;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__Args_22;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultArgInfo_23;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultRep_26;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__TryResultUniv_27;
#line 859 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__TryResult_28;
#line 859 "declarative_tree.m"
                                                                                                MR_String mdb__declarative_tree__Functor_29;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_32_32;
#line 859 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_33_33;
#line 870 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__V_21_21;
#line 871 "declarative_tree.m"
                                                                                                MR_Box mdb__declarative_tree__conv1_TryResultArgInfo_23;
#line 872 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_24_24;
#line 872 "declarative_tree.m"
                                                                                                MR_Integer mdb__declarative_tree__V_25_25;
#line 875 "declarative_tree.m"
                                                                                                MR_Integer mdb__declarative_tree__V_30_30;
#line 875 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_31_31;

#line 868 "declarative_tree.m"
                                                                                                {
#line 868 "declarative_tree.m"
                                                                                                  mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43, mdb__declarative_tree__Store_9, mdb__declarative_tree__Ref_11, &mdb__declarative_tree__ExitNode_19);
                                                                                                }
#line 16080 "mdb.declarative_tree.c"
                                                                                                {
#line 16082 "mdb.declarative_tree.c"
                                                                                                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_43, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_45_45);
                                                                                                }
#line 869 "declarative_tree.m"
                                                                                                {
#line 869 "declarative_tree.m"
                                                                                                  mdb__declarative_tree__ExitAtom_20 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_45_45, mdb__declarative_tree__ExitNode_19);
                                                                                                }
#line 870 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 0)));
#line 870 "declarative_tree.m"
                                                                                                mdb__declarative_tree__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ExitAtom_20, (MR_Integer) 1)));
#line 871 "declarative_tree.m"
                                                                                                {
#line 871 "declarative_tree.m"
                                                                                                  mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_tree__Args_22, mdb__declarative_tree__ArgNum_13, &mdb__declarative_tree__conv1_TryResultArgInfo_23);
                                                                                                }
#line 871 "declarative_tree.m"
                                                                                                mdb__declarative_tree__TryResultArgInfo_23 = ((MR_Word) mdb__declarative_tree__conv1_TryResultArgInfo_23);
#line 872 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 0)));
#line 872 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 1)));
#line 872 "declarative_tree.m"
                                                                                                mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TryResultArgInfo_23, (MR_Integer) 2)));
#line 872 "declarative_tree.m"
                                                                                                mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 872 "declarative_tree.m"
                                                                                                if (mdb__declarative_tree__succeeded)
#line 872 "declarative_tree.m"
                                                                                                  {
#line 872 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__TryResultRep_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_32_32, (MR_Integer) 0)));
#line 873 "declarative_tree.m"
                                                                                                    {
#line 873 "declarative_tree.m"
                                                                                                      mdb__term_rep__rep_to_univ_2_p_0(mdb__declarative_tree__TryResultRep_26, &mdb__declarative_tree__TryResultUniv_27);
                                                                                                    }
#line 874 "declarative_tree.m"
                                                                                                    {
#line 874 "declarative_tree.m"
                                                                                                      mdb__declarative_tree__TryResult_28 = mercury__univ__univ_value_1_f_0(&mdb__declarative_tree__TypeInfo_47_47, mdb__declarative_tree__TryResultUniv_27);
                                                                                                    }
#line 875 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__V_33_33 = (MR_Integer) 1;
#line 875 "declarative_tree.m"
                                                                                                    {
#line 875 "declarative_tree.m"
                                                                                                      mercury__deconstruct__deconstruct_5_p_1(mdb__declarative_tree__TypeInfo_47_47, mdb__declarative_tree__TryResult_28, mdb__declarative_tree__V_33_33, &mdb__declarative_tree__Functor_29, &mdb__declarative_tree__V_30_30, &mdb__declarative_tree__V_31_31);
                                                                                                    }
#line 876 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__succeeded = (strcmp(mdb__declarative_tree__Functor_29, (MR_String) "succeeded") == 0);
#line 879 "declarative_tree.m"
                                                                                                    if (mdb__declarative_tree__succeeded)
#line 877 "declarative_tree.m"
                                                                                                      {
#line 877 "declarative_tree.m"
                                                                                                        MR_Word mdb__declarative_tree__V_34_34 = ((MR_Word) mdb__declarative_tree__NodeId_15);

#line 877 "declarative_tree.m"
                                                                                                        {
#line 877 "declarative_tree.m"
                                                                                                          MR_Word base;
#line 877 "declarative_tree.m"
                                                                                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 877 "declarative_tree.m"
                                                                                                          *mdb__declarative_tree__Origin_16 = base;
#line 877 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_tree__V_34_34));
#line 877 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &mdb__declarative_tree_scalar_common_2[2])));
#line 877 "declarative_tree.m"
                                                                                                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_tree__TermPath_14));
#line 877 "declarative_tree.m"
                                                                                                        }
#line 877 "declarative_tree.m"
                                                                                                      }
#line 879 "declarative_tree.m"
                                                                                                    else
#line 880 "declarative_tree.m"
                                                                                                      {
#line 880 "declarative_tree.m"
                                                                                                        *mdb__declarative_tree__Origin_16 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_tree_scalar_common_4[1]);
#line 880 "declarative_tree.m"
                                                                                                      }
#line 879 "declarative_tree.m"
                                                                                                    mdb__declarative_tree__succeeded = MR_TRUE;
#line 872 "declarative_tree.m"
                                                                                                  }
#line 859 "declarative_tree.m"
                                                                                              }
#line 858 "declarative_tree.m"
                                                                                            else
#line 852 "declarative_tree.m"
                                                                                              {
#line 852 "declarative_tree.m"
                                                                                                MR_Word mdb__declarative_tree__V_42_42;

#line 857 "declarative_tree.m"
                                                                                                {
#line 857 "declarative_tree.m"
                                                                                                  mdb__declarative_tree__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_42_42, 0) = ((MR_Box) (mdb__declarative_tree__ArgNum_13));
#line 857 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_42_42, 1) = ((MR_Box) (mdb__declarative_tree__TermPath_14));
#line 857 "declarative_tree.m"
                                                                                                }
#line 857 "declarative_tree.m"
                                                                                                {
#line 857 "declarative_tree.m"
                                                                                                  MR_Word base;
#line 857 "declarative_tree.m"
                                                                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "declarative_tree.m"
                                                                                                  *mdb__declarative_tree__Origin_16 = base;
#line 857 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (&mdb__declarative_tree_scalar_common_2[2]));
#line 857 "declarative_tree.m"
                                                                                                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_tree__V_42_42));
#line 857 "declarative_tree.m"
                                                                                                }
#line 852 "declarative_tree.m"
                                                                                                mdb__declarative_tree__succeeded = MR_TRUE;
#line 852 "declarative_tree.m"
                                                                                              }
#line 858 "declarative_tree.m"
                                                                                          }
#line 846 "declarative_tree.m"
                                                                                      }
#line 944 "declarative_tree.m"
                                                                                  }
#line 846 "declarative_tree.m"
                                                                              }
#line 944 "declarative_tree.m"
                                                                          }
#line 846 "declarative_tree.m"
                                                                      }
#line 944 "declarative_tree.m"
                                                                  }
#line 846 "declarative_tree.m"
                                                              }
#line 944 "declarative_tree.m"
                                                          }
#line 846 "declarative_tree.m"
                                                      }
#line 846 "declarative_tree.m"
                                                  }
#line 944 "declarative_tree.m"
                                              }
#line 846 "declarative_tree.m"
                                          }
#line 846 "declarative_tree.m"
                                      }
#line 943 "declarative_tree.m"
                                  }
#line 846 "declarative_tree.m"
                              }
#line 943 "declarative_tree.m"
                          }
#line 846 "declarative_tree.m"
                      }
#line 942 "declarative_tree.m"
                  }
#line 942 "declarative_tree.m"
              }
#line 942 "declarative_tree.m"
          }
#line 942 "declarative_tree.m"
      }
#line 846 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 846 "declarative_tree.m"
  }
#line 841 "declarative_tree.m"
}

#line 636 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_2_5_p_0(
#line 636 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84,
#line 636 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 636 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 636 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 636 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 636 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10)
#line 636 "declarative_tree.m"
{
#line 639 "declarative_tree.m"
  {
#line 639 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 639 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;
#line 639 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Ns1_38;
#line 639 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Next_72;

#line 640 "declarative_tree.m"
    {
#line 640 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__NodeId_7, &mdb__declarative_tree__Node_11);
    }
#line 646 "declarative_tree.m"
#line 646 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_11)) {
#line 646 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 646 "declarative_tree.m"
      case (MR_Integer) 0:
#line 644 "declarative_tree.m"
        {
#line 645 "declarative_tree.m"
          {
#line 645 "declarative_tree.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 645 "declarative_tree.m"
            return;
          }
#line 644 "declarative_tree.m"
        }
#line 646 "declarative_tree.m"
        break;
#line 646 "declarative_tree.m"
      case (MR_Integer) 1:
#line 661 "declarative_tree.m"
        {
#line 661 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 661 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_43_43 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 661 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 661 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 661 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 661 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_48_48 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 661 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 661 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));

#line 669 "declarative_tree.m"
          {
#line 669 "declarative_tree.m"
            mdb__declarative_tree__succeeded = mdb__declarative_tree__calls_arguments_are_all_ground_2_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__CallId_44);
          }
#line 671 "declarative_tree.m"
          if (mdb__declarative_tree__succeeded)
#line 670 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 671 "declarative_tree.m"
          else
#line 672 "declarative_tree.m"
            {
#line 672 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_76_76 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 672 "declarative_tree.m"
              {
#line 672 "declarative_tree.m"
                mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_76_76));
#line 672 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 672 "declarative_tree.m"
              }
#line 672 "declarative_tree.m"
            }
#line 661 "declarative_tree.m"
        }
#line 646 "declarative_tree.m"
        break;
#line 646 "declarative_tree.m"
      case (MR_Integer) 2:
#line 684 "declarative_tree.m"
        mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 646 "declarative_tree.m"
        break;
#line 646 "declarative_tree.m"
      case (MR_Integer) 3:
#line 646 "declarative_tree.m"
#line 646 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) {
#line 646 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 646 "declarative_tree.m"
          case (MR_Integer) 0:
#line 649 "declarative_tree.m"
            {
#line 649 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_87_87 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 651 "declarative_tree.m"
              {
#line 651 "declarative_tree.m"
                mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_87_87));
#line 651 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 651 "declarative_tree.m"
              }
#line 649 "declarative_tree.m"
            }
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 1:
#line 649 "declarative_tree.m"
            {
#line 649 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_78_78 = ((MR_Word) mdb__declarative_tree__NodeId_7);

#line 651 "declarative_tree.m"
              {
#line 651 "declarative_tree.m"
                mdb__declarative_tree__Ns1_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 0) = ((MR_Box) (mdb__declarative_tree__V_78_78));
#line 651 "declarative_tree.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_38, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_9));
#line 651 "declarative_tree.m"
              }
#line 649 "declarative_tree.m"
            }
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 2:
#line 684 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 3:
#line 684 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 4:
#line 684 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 5:
#line 686 "declarative_tree.m"
            {
#line 686 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 686 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 686 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2)));

#line 692 "declarative_tree.m"
#line 692 "declarative_tree.m"
              switch (mdb__declarative_tree__CondStatus_71) {
#line 692 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 692 "declarative_tree.m"
                case (MR_Integer) 1:
#line 693 "declarative_tree.m"
                  {
#line 694 "declarative_tree.m"
                    {
#line 694 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 694 "declarative_tree.m"
                      return;
                    }
#line 693 "declarative_tree.m"
                  }
#line 692 "declarative_tree.m"
                  break;
#line 692 "declarative_tree.m"
                case (MR_Integer) 0:
#line 692 "declarative_tree.m"
                case (MR_Integer) 2:
#line 691 "declarative_tree.m"
                  mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 692 "declarative_tree.m"
                  break;
#line 692 "declarative_tree.m"
              }
#line 686 "declarative_tree.m"
            }
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 6:
#line 684 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 7:
#line 657 "declarative_tree.m"
            {
#line 657 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_82 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 657 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_83 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 657 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));

#line 659 "declarative_tree.m"
              {
#line 659 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Prec_82, mdb__declarative_tree__NestedStartId_83, mdb__declarative_tree__Ns0_9, &mdb__declarative_tree__Ns1_38);
              }
#line 657 "declarative_tree.m"
            }
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 8:
#line 644 "declarative_tree.m"
            {
#line 645 "declarative_tree.m"
              {
#line 645 "declarative_tree.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[12])));
#line 645 "declarative_tree.m"
                return;
              }
#line 644 "declarative_tree.m"
            }
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 9:
#line 684 "declarative_tree.m"
            mdb__declarative_tree__Ns1_38 = mdb__declarative_tree__Ns0_9;
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
          case (MR_Integer) 10:
#line 653 "declarative_tree.m"
            {
#line 653 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_39 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 653 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_40 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 653 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3)));

#line 655 "declarative_tree.m"
              {
#line 655 "declarative_tree.m"
                mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, (MR_Integer) 0, mdb__declarative_tree__Store_6, mdb__declarative_tree__Prec_39, mdb__declarative_tree__NestedStartId_40, mdb__declarative_tree__Ns0_9, &mdb__declarative_tree__Ns1_38);
              }
#line 653 "declarative_tree.m"
            }
#line 646 "declarative_tree.m"
            break;
#line 646 "declarative_tree.m"
        }
#line 646 "declarative_tree.m"
        break;
#line 646 "declarative_tree.m"
    }
#line 697 "declarative_tree.m"
    {
#line 697 "declarative_tree.m"
      mdb__declarative_tree__Next_72 = mdb__declarative_execution__step_in_stratum_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Node_11);
    }
#line 698 "declarative_tree.m"
    {
#line 698 "declarative_tree.m"
      mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_84, mdb__declarative_tree__Store_6, mdb__declarative_tree__Next_72, mdb__declarative_tree__StartId_8, mdb__declarative_tree__Ns1_38, mdb__declarative_tree__Ns_10);
#line 698 "declarative_tree.m"
      return;
    }
#line 639 "declarative_tree.m"
  }
#line 636 "declarative_tree.m"
}

#line 626 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__stratum_children_5_p_0(
#line 626 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11,
#line 626 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 626 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_7,
#line 626 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_8,
#line 626 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_9,
#line 626 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_10)
#line 626 "declarative_tree.m"
{
#line 632 "declarative_tree.m"
  {
#line 632 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 630 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_13_13;

#line 16597 "mdb.declarative_tree.c"
    {
#line 16599 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_13_13);
    }
#line 630 "declarative_tree.m"
    {
#line 630 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_13_13, mdb__declarative_tree__NodeId_7, mdb__declarative_tree__StartId_8);
    }
#line 632 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 631 "declarative_tree.m"
      *mdb__declarative_tree__Ns_10 = mdb__declarative_tree__Ns0_9;
#line 632 "declarative_tree.m"
    else
#line 633 "declarative_tree.m"
      {
#line 633 "declarative_tree.m"
        mdb__declarative_tree__stratum_children_2_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_11, mdb__declarative_tree__Store_6, mdb__declarative_tree__NodeId_7, mdb__declarative_tree__StartId_8, mdb__declarative_tree__Ns0_9, mdb__declarative_tree__Ns_10);
#line 633 "declarative_tree.m"
        return;
      }
#line 632 "declarative_tree.m"
  }
#line 626 "declarative_tree.m"
}

#line 504 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_2_6_p_0(
#line 504 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115,
#line 504 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 504 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 504 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 504 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 504 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 504 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12)
#line 504 "declarative_tree.m"
{
#line 508 "declarative_tree.m"
  {
#line 508 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 508 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_13;
#line 508 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Ns1_32;
#line 508 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Next_72;

#line 509 "declarative_tree.m"
    {
#line 509 "declarative_tree.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, &mdb__declarative_tree__Node_13);
    }
#line 513 "declarative_tree.m"
#line 513 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_13)) {
#line 513 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 513 "declarative_tree.m"
      case (MR_Integer) 0:
#line 511 "declarative_tree.m"
        {
#line 512 "declarative_tree.m"
          {
#line 512 "declarative_tree.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 512 "declarative_tree.m"
            return;
          }
#line 511 "declarative_tree.m"
        }
#line 513 "declarative_tree.m"
        break;
#line 513 "declarative_tree.m"
      case (MR_Integer) 1:
#line 514 "declarative_tree.m"
        {
#line 514 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_83_83 = ((MR_Word) mdb__declarative_tree__NodeId_9);

#line 516 "declarative_tree.m"
          {
#line 516 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_83_83));
#line 516 "declarative_tree.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_11));
#line 516 "declarative_tree.m"
          }
#line 514 "declarative_tree.m"
        }
#line 513 "declarative_tree.m"
        break;
#line 513 "declarative_tree.m"
      case (MR_Integer) 2:
#line 590 "declarative_tree.m"
        mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 513 "declarative_tree.m"
        break;
#line 513 "declarative_tree.m"
      case (MR_Integer) 3:
#line 513 "declarative_tree.m"
#line 513 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 0)))) {
#line 513 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 513 "declarative_tree.m"
          case (MR_Integer) 0:
#line 518 "declarative_tree.m"
            {
#line 518 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_34 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 518 "declarative_tree.m"
              MR_Word mdb__declarative_tree__Call_39;
#line 518 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_40;
#line 518 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 518 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3));
#line 518 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 4)));
#line 518 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_37_37 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 5)));
#line 518 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 6)));
#line 533 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_97_97;
#line 533 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_98_98;
#line 533 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_99_99;
#line 533 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_100_100;
#line 533 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_101_101;
#line 533 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_102_102;
#line 533 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_103_103;
#line 533 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_104_104;
#line 533 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_105_105;

#line 532 "declarative_tree.m"
              {
#line 532 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_34, &mdb__declarative_tree__Call_39);
              }
#line 533 "declarative_tree.m"
              mdb__declarative_tree__NestedStartId_40 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 0));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_97_97 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 1));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 2)));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 3)));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 4)));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 5)));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 6)));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_103_103 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 7)));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 8)));
#line 533 "declarative_tree.m"
              mdb__declarative_tree__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_39, (MR_Integer) 9)));
#line 534 "declarative_tree.m"
              {
#line 534 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__NestedStartId_40, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
              }
#line 518 "declarative_tree.m"
            }
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 1:
#line 551 "declarative_tree.m"
            {
#line 551 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_94 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 551 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 551 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3));
#line 551 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 4)));
#line 551 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 5)));
#line 551 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 6)));
#line 551 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 7)));

#line 566 "declarative_tree.m"
#line 566 "declarative_tree.m"
              switch (mdb__declarative_tree__ContourType_7) {
#line 566 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 566 "declarative_tree.m"
                case (MR_Integer) 1:
#line 564 "declarative_tree.m"
                  {
#line 564 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_82_82 = ((MR_Word) mdb__declarative_tree__NodeId_9);

#line 565 "declarative_tree.m"
                    {
#line 565 "declarative_tree.m"
                      mdb__declarative_tree__Ns1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 0) = ((MR_Box) (mdb__declarative_tree__V_82_82));
#line 565 "declarative_tree.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_tree__Ns1_32, 1) = ((MR_Box) (mdb__declarative_tree__Ns0_11));
#line 565 "declarative_tree.m"
                    }
#line 564 "declarative_tree.m"
                  }
#line 566 "declarative_tree.m"
                  break;
#line 566 "declarative_tree.m"
                case (MR_Integer) 0:
#line 567 "declarative_tree.m"
                  {
#line 567 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__Call_90;
#line 567 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__NestedStartId_91;
#line 569 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_106_106;
#line 569 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_107_107;
#line 569 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_108_108;
#line 569 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_109_109;
#line 569 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_110_110;
#line 569 "declarative_tree.m"
                    MR_Word mdb__declarative_tree__V_111_111;
#line 569 "declarative_tree.m"
                    MR_Box mdb__declarative_tree__V_112_112;
#line 569 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_113_113;
#line 569 "declarative_tree.m"
                    MR_Integer mdb__declarative_tree__V_114_114;

#line 568 "declarative_tree.m"
                    {
#line 568 "declarative_tree.m"
                      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__CallId_94, &mdb__declarative_tree__Call_90);
                    }
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__NestedStartId_91 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 0));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_106_106 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 1));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 2)));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 3)));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 4)));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 5)));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 6)));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_112_112 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 7)));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 8)));
#line 569 "declarative_tree.m"
                    mdb__declarative_tree__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_90, (MR_Integer) 9)));
#line 570 "declarative_tree.m"
                    {
#line 570 "declarative_tree.m"
                      mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__NestedStartId_91, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
                    }
#line 567 "declarative_tree.m"
                  }
#line 566 "declarative_tree.m"
                  break;
#line 566 "declarative_tree.m"
              }
#line 551 "declarative_tree.m"
            }
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 2:
#line 590 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 3:
#line 590 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 4:
#line 590 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 5:
#line 592 "declarative_tree.m"
            {
#line 592 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CondStatus_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));
#line 592 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_66_66 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 592 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2)));

#line 596 "declarative_tree.m"
#line 596 "declarative_tree.m"
              switch (mdb__declarative_tree__CondStatus_68) {
#line 596 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 596 "declarative_tree.m"
                case (MR_Integer) 1:
#line 594 "declarative_tree.m"
                  {
#line 595 "declarative_tree.m"
                    {
#line 595 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 595 "declarative_tree.m"
                      return;
                    }
#line 594 "declarative_tree.m"
                  }
#line 596 "declarative_tree.m"
                  break;
#line 596 "declarative_tree.m"
                case (MR_Integer) 0:
#line 596 "declarative_tree.m"
                case (MR_Integer) 2:
#line 600 "declarative_tree.m"
                  mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 596 "declarative_tree.m"
                  break;
#line 596 "declarative_tree.m"
              }
#line 592 "declarative_tree.m"
            }
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 6:
#line 590 "declarative_tree.m"
            mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 7:
#line 547 "declarative_tree.m"
            {
#line 547 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_88 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 547 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_89 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 545 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 549 "declarative_tree.m"
              {
#line 549 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_89, mdb__declarative_tree__NestedStartId_88, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
              }
#line 547 "declarative_tree.m"
            }
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 8:
#line 603 "declarative_tree.m"
            {
#line 603 "declarative_tree.m"
              MR_Word mdb__declarative_tree__NegStatus_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));
#line 603 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 603 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2)));

#line 607 "declarative_tree.m"
#line 607 "declarative_tree.m"
              switch (mdb__declarative_tree__ContourType_7) {
#line 607 "declarative_tree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 607 "declarative_tree.m"
                case (MR_Integer) 1:
#line 612 "declarative_tree.m"
#line 612 "declarative_tree.m"
                  switch (mdb__declarative_tree__NegStatus_71) {
#line 612 "declarative_tree.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 612 "declarative_tree.m"
                    case (MR_Integer) 1:
#line 610 "declarative_tree.m"
                      {
#line 611 "declarative_tree.m"
                        {
#line 611 "declarative_tree.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 611 "declarative_tree.m"
                          return;
                        }
#line 610 "declarative_tree.m"
                      }
#line 612 "declarative_tree.m"
                      break;
#line 612 "declarative_tree.m"
                    case (MR_Integer) 0:
#line 612 "declarative_tree.m"
                    case (MR_Integer) 2:
#line 619 "declarative_tree.m"
                      mdb__declarative_tree__Ns1_32 = mdb__declarative_tree__Ns0_11;
#line 612 "declarative_tree.m"
                      break;
#line 612 "declarative_tree.m"
                  }
#line 607 "declarative_tree.m"
                  break;
#line 607 "declarative_tree.m"
                case (MR_Integer) 0:
#line 605 "declarative_tree.m"
                  {
#line 606 "declarative_tree.m"
                    {
#line 606 "declarative_tree.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[11])));
#line 606 "declarative_tree.m"
                      return;
                    }
#line 605 "declarative_tree.m"
                  }
#line 607 "declarative_tree.m"
                  break;
#line 607 "declarative_tree.m"
              }
#line 603 "declarative_tree.m"
            }
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 9:
#line 547 "declarative_tree.m"
            {
#line 547 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_120 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 547 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_121 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 546 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_44_44 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 549 "declarative_tree.m"
              {
#line 549 "declarative_tree.m"
                mdb__declarative_tree__stratum_children_5_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_121, mdb__declarative_tree__NestedStartId_120, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
              }
#line 547 "declarative_tree.m"
            }
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
          case (MR_Integer) 10:
#line 536 "declarative_tree.m"
            {
#line 536 "declarative_tree.m"
              MR_Box mdb__declarative_tree__Prec_41 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 1));
#line 536 "declarative_tree.m"
              MR_Box mdb__declarative_tree__NestedStartId_87 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 2));
#line 536 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_13, (MR_Integer) 3)));

#line 543 "declarative_tree.m"
              {
#line 543 "declarative_tree.m"
                mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__Prec_41, mdb__declarative_tree__NestedStartId_87, mdb__declarative_tree__Ns0_11, &mdb__declarative_tree__Ns1_32);
              }
#line 536 "declarative_tree.m"
            }
#line 513 "declarative_tree.m"
            break;
#line 513 "declarative_tree.m"
        }
#line 513 "declarative_tree.m"
        break;
#line 513 "declarative_tree.m"
    }
#line 623 "declarative_tree.m"
    {
#line 623 "declarative_tree.m"
      mdb__declarative_tree__Next_72 = mdb__declarative_execution__step_left_in_contour_2_f_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__Store_8, mdb__declarative_tree__Node_13);
    }
#line 624 "declarative_tree.m"
    {
#line 624 "declarative_tree.m"
      mdb__declarative_tree__contour_children_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_115, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__Next_72, mdb__declarative_tree__StartId_10, mdb__declarative_tree__Ns1_32, mdb__declarative_tree__Ns_12);
#line 624 "declarative_tree.m"
      return;
    }
#line 508 "declarative_tree.m"
  }
#line 504 "declarative_tree.m"
}

#line 493 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__contour_children_6_p_0(
#line 493 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13,
#line 493 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ContourType_7,
#line 493 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_8,
#line 493 "declarative_tree.m"
  MR_Box mdb__declarative_tree__NodeId_9,
#line 493 "declarative_tree.m"
  MR_Box mdb__declarative_tree__StartId_10,
#line 493 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Ns0_11,
#line 493 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Ns_12)
#line 493 "declarative_tree.m"
{
#line 500 "declarative_tree.m"
  {
#line 500 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 498 "declarative_tree.m"
    MR_Word mdb__declarative_tree__TypeInfo_15_15;

#line 17148 "mdb.declarative_tree.c"
    {
#line 17150 "mdb.declarative_tree.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_15_15);
    }
#line 498 "declarative_tree.m"
    {
#line 498 "declarative_tree.m"
      mdb__declarative_tree__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_tree__TypeInfo_15_15, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__StartId_10);
    }
#line 500 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 499 "declarative_tree.m"
      *mdb__declarative_tree__Ns_12 = mdb__declarative_tree__Ns0_11;
#line 500 "declarative_tree.m"
    else
#line 501 "declarative_tree.m"
      {
#line 501 "declarative_tree.m"
        mdb__declarative_tree__contour_children_2_6_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_13, mdb__declarative_tree__ContourType_7, mdb__declarative_tree__Store_8, mdb__declarative_tree__NodeId_9, mdb__declarative_tree__StartId_10, mdb__declarative_tree__Ns0_11, mdb__declarative_tree__Ns_12);
#line 501 "declarative_tree.m"
        return;
      }
#line 500 "declarative_tree.m"
  }
#line 493 "declarative_tree.m"
}

#line 468 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__not_at_depth_limit_2_p_0(
#line 468 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16,
#line 468 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_3,
#line 468 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_4)
#line 468 "declarative_tree.m"
{
#line 470 "declarative_tree.m"
  {
#line 470 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 470 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_5;
#line 470 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_6_6;
#line 472 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_7_7;
#line 472 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_8_8;
#line 472 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 472 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_10_10;
#line 472 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_11_11;
#line 472 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 472 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_13_13;
#line 472 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 472 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_15_15;

#line 471 "declarative_tree.m"
    {
#line 471 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_16, mdb__declarative_tree__Store_3, mdb__declarative_tree__Ref_4, &mdb__declarative_tree__CallNode_5);
    }
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_7_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 0));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 1));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 2)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 3)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 4)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 5)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 6)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 7)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 8)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_5, (MR_Integer) 9)));
#line 472 "declarative_tree.m"
    mdb__declarative_tree__succeeded = (mdb__declarative_tree__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 470 "declarative_tree.m"
  }
#line 468 "declarative_tree.m"
}

#line 449 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_1(
#line 449 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 449 "declarative_tree.m"
{
#line 449 "declarative_tree.m"
  {
#line 449 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 449 "declarative_tree.m"
    MR_builtin_longjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0, 1);
#line 449 "declarative_tree.m"
  }
#line 449 "declarative_tree.m"
}

#line 449 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_3(
#line 449 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 449 "declarative_tree.m"
{
#line 449 "declarative_tree.m"
  {
#line 449 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 459 "declarative_tree.m"
    {
#line 459 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19);
    }
#line 459 "declarative_tree.m"
    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 459 "declarative_tree.m"
      {
#line 459 "declarative_tree.m"
        mdb__declarative_tree__missing_answer_special_case_1_p_0_1(mdb__declarative_tree__env_ptr);
#line 459 "declarative_tree.m"
        return;
      }
#line 449 "declarative_tree.m"
  }
#line 449 "declarative_tree.m"
}

#line 449 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_2(
#line 449 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 449 "declarative_tree.m"
{
#line 449 "declarative_tree.m"
  {
#line 449 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 458 "declarative_tree.m"
    {
#line 458 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4, (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18);
    }
#line 449 "declarative_tree.m"
    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 449 "declarative_tree.m"
      {
#line 459 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_16_16 = (MR_String) "solutions";
#line 464 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19 = (MR_Word) &mdb__declarative_tree_scalar_common_2[0];
#line 464 "declarative_tree.m"
        {
#line 464 "declarative_tree.m"
          mdb__declarative_tree__missing_answer_special_case_1_p_0_3(mdb__declarative_tree__env_ptr);
        }
#line 465 "declarative_tree.m"
        {
#line 465 "declarative_tree.m"
          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[10]);
#line 465 "declarative_tree.m"
          {
#line 465 "declarative_tree.m"
            mdb__declarative_tree__missing_answer_special_case_1_p_0_3(mdb__declarative_tree__env_ptr);
          }
#line 465 "declarative_tree.m"
        }
#line 449 "declarative_tree.m"
      }
#line 449 "declarative_tree.m"
  }
#line 449 "declarative_tree.m"
}

#line 449 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0_4(
#line 449 "declarative_tree.m"
  void * mdb__declarative_tree__env_ptr_arg)
#line 449 "declarative_tree.m"
{
#line 449 "declarative_tree.m"
  {
#line 449 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s * mdb__declarative_tree__env_ptr = (struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s *) mdb__declarative_tree__env_ptr_arg;

#line 449 "declarative_tree.m"
    if (MR_builtin_setjmp((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__commit_0) == 0)
#line 449 "declarative_tree.m"
      {
#line 449 "declarative_tree.m"
        {
#line 449 "declarative_tree.m"
          MR_Word mdb__declarative_tree__ProcLabel_3;
#line 449 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 0)));
#line 449 "declarative_tree.m"
          MR_String mdb__declarative_tree__V_15_15;
#line 449 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_21_21;
#line 449 "declarative_tree.m"
          MR_String mdb__declarative_tree__V_22_22;
#line 449 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_23_23;
#line 449 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_24_24;
#line 449 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_25_25;
#line 450 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2, (MR_Integer) 1)));
#line 452 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_20_20;

#line 450 "declarative_tree.m"
          {
#line 450 "declarative_tree.m"
            mdb__declarative_tree__ProcLabel_3 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_tree__V_8_8);
          }
#line 452 "declarative_tree.m"
          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__ProcLabel_3)) == (MR_mktag((MR_Integer) 0)));
#line 452 "declarative_tree.m"
          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 452 "declarative_tree.m"
            {
#line 452 "declarative_tree.m"
              {
#line 452 "declarative_tree.m"
                mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 0)));
#line 452 "declarative_tree.m"
                mdb__declarative_tree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 1)));
#line 452 "declarative_tree.m"
                mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 2)));
#line 452 "declarative_tree.m"
                mdb__declarative_tree__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 3)));
#line 452 "declarative_tree.m"
                mdb__declarative_tree__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 4)));
#line 452 "declarative_tree.m"
                mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__ProcLabel_3, (MR_Integer) 5)));
#line 452 "declarative_tree.m"
              }
#line 449 "declarative_tree.m"
              {
#line 452 "declarative_tree.m"
                (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (mdb__declarative_tree__V_24_24 == (MR_Integer) 0);
#line 449 "declarative_tree.m"
                if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 449 "declarative_tree.m"
                  {
#line 454 "declarative_tree.m"
#line 454 "declarative_tree.m"
                    switch (mdb__declarative_tree__V_21_21) {
#line 454 "declarative_tree.m"
                      default:
#line 454 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
#line 454 "declarative_tree.m"
                        break;
#line 454 "declarative_tree.m"
                      case (MR_Integer) 4:
#line 452 "declarative_tree.m"
                        {
#line 453 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(mdb__declarative_tree__V_22_22, (MR_String) "builtin_aggregate") == 0);
#line 452 "declarative_tree.m"
                          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 452 "declarative_tree.m"
                            {
#line 452 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = mdb__declarative_tree__V_25_25;
#line 452 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = mdb__declarative_tree__V_23_23;
#line 452 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 452 "declarative_tree.m"
                            }
#line 452 "declarative_tree.m"
                        }
#line 454 "declarative_tree.m"
                        break;
#line 454 "declarative_tree.m"
                      case (MR_Integer) 6:
#line 455 "declarative_tree.m"
                        {
#line 456 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = (strcmp(mdb__declarative_tree__V_22_22, (MR_String) "builtin_aggregate2") == 0);
#line 455 "declarative_tree.m"
                          if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 455 "declarative_tree.m"
                            {
#line 455 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule1_4 = mdb__declarative_tree__V_25_25;
#line 455 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__StdUtilModule2_5 = mdb__declarative_tree__V_23_23;
#line 455 "declarative_tree.m"
                              (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 455 "declarative_tree.m"
                            }
#line 455 "declarative_tree.m"
                        }
#line 454 "declarative_tree.m"
                        break;
#line 454 "declarative_tree.m"
                    }
#line 449 "declarative_tree.m"
                    if ((mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded)
#line 449 "declarative_tree.m"
                      {
#line 458 "declarative_tree.m"
                        mdb__declarative_tree__V_15_15 = (MR_String) "solutions";
#line 464 "declarative_tree.m"
                        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18 = (MR_Word) &mdb__declarative_tree_scalar_common_2[0];
#line 464 "declarative_tree.m"
                        {
#line 464 "declarative_tree.m"
                          mdb__declarative_tree__missing_answer_special_case_1_p_0_2(mdb__declarative_tree__env_ptr);
                        }
#line 465 "declarative_tree.m"
                        {
#line 465 "declarative_tree.m"
                          (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_tree_scalar_common_1[10]);
#line 465 "declarative_tree.m"
                          {
#line 465 "declarative_tree.m"
                            mdb__declarative_tree__missing_answer_special_case_1_p_0_2(mdb__declarative_tree__env_ptr);
                          }
#line 465 "declarative_tree.m"
                        }
#line 449 "declarative_tree.m"
                      }
#line 449 "declarative_tree.m"
                  }
#line 449 "declarative_tree.m"
              }
#line 452 "declarative_tree.m"
            }
#line 449 "declarative_tree.m"
        }
#line 449 "declarative_tree.m"
        (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_FALSE;
#line 449 "declarative_tree.m"
      }
#line 449 "declarative_tree.m"
    else
#line 449 "declarative_tree.m"
      (mdb__declarative_tree__env_ptr)->mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded = MR_TRUE;
#line 449 "declarative_tree.m"
  }
#line 449 "declarative_tree.m"
}

#line 447 "declarative_tree.m"
static MR_bool MR_CALL 
mdb__declarative_tree__missing_answer_special_case_1_p_0(
#line 447 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Atom_2)
#line 447 "declarative_tree.m"
{
#line 447 "declarative_tree.m"
  {
#line 447 "declarative_tree.m"
    struct mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0_s mdb__declarative_tree__env;

#line 447 "declarative_tree.m"
    (mdb__declarative_tree__env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__Atom_2 = mdb__declarative_tree__Atom_2;
#line 449 "declarative_tree.m"
    {
#line 449 "declarative_tree.m"
      mdb__declarative_tree__missing_answer_special_case_1_p_0_4(&mdb__declarative_tree__env);
    }
#line 449 "declarative_tree.m"
    return (mdb__declarative_tree__env).mdb__declarative_tree__missing_answer_special_case_1_p_0_env_0__succeeded;
#line 447 "declarative_tree.m"
  }
#line 447 "declarative_tree.m"
}

#line 340 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__trace_weight_9_p_0(
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90,
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__Weighting_10,
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_3,
#line 340 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevWeight_13,
#line 340 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Weight_14,
#line 340 "declarative_tree.m"
  MR_Word mdb__declarative_tree__RecordDups_15,
#line 340 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__DupFactor_16,
#line 340 "declarative_tree.m"
  MR_Integer mdb__declarative_tree__PrevDupWeight_17,
#line 340 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Excess_18)
#line 340 "declarative_tree.m"
{
#line 345 "declarative_tree.m"
  while (MR_TRUE)
#line 345 "declarative_tree.m"
    {
#line 345 "declarative_tree.m"
      /* tailcall optimized into a loop */
#line 345 "declarative_tree.m"
      {
#line 345 "declarative_tree.m"
        MR_bool mdb__declarative_tree__succeeded;
#line 345 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Store_11 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 345 "declarative_tree.m"
        MR_Box mdb__declarative_tree__Ref_12 = ((MR_Box) (mdb__declarative_tree__HeadVar__3_3));
#line 345 "declarative_tree.m"
        MR_Word mdb__declarative_tree__Final_19;
#line 418 "declarative_tree.m"
        MR_Box mdb__declarative_tree__CallId_21;
#line 418 "declarative_tree.m"
        MR_Box mdb__declarative_tree__RedoId_22;
#line 418 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__FinalEvent_24;
#line 418 "declarative_tree.m"
        MR_Integer mdb__declarative_tree__FinalSuspicion_27;
#line 418 "declarative_tree.m"
        MR_Word mdb__declarative_tree__NewRecordDups_28;

#line 346 "declarative_tree.m"
        {
#line 346 "declarative_tree.m"
          mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__Ref_12, &mdb__declarative_tree__Final_19);
        }
#line 352 "declarative_tree.m"
#line 352 "declarative_tree.m"
        switch (MR_tag((MR_Word) mdb__declarative_tree__Final_19)) {
#line 352 "declarative_tree.m"
          default:
#line 352 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_FALSE;
#line 352 "declarative_tree.m"
            break;
#line 352 "declarative_tree.m"
          case (MR_Integer) 1:
#line 350 "declarative_tree.m"
            {
#line 349 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 0));
#line 349 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_23_23;
#line 349 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25;
#line 349 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_26_26;

#line 349 "declarative_tree.m"
              mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 349 "declarative_tree.m"
              mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 349 "declarative_tree.m"
              mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 3)));
#line 349 "declarative_tree.m"
              mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 349 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 349 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 349 "declarative_tree.m"
              mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Final_19, (MR_Integer) 7)));
#line 351 "declarative_tree.m"
              mdb__declarative_tree__NewRecordDups_28 = mdb__declarative_tree__RecordDups_15;
#line 350 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_TRUE;
#line 350 "declarative_tree.m"
            }
#line 352 "declarative_tree.m"
            break;
#line 352 "declarative_tree.m"
          case (MR_Integer) 3:
#line 352 "declarative_tree.m"
#line 352 "declarative_tree.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 0)))) {
#line 352 "declarative_tree.m"
              default:
#line 352 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_FALSE;
#line 352 "declarative_tree.m"
                break;
#line 352 "declarative_tree.m"
              case (MR_Integer) 0:
#line 354 "declarative_tree.m"
                {
#line 353 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_29_29 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 353 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_30_30;

#line 353 "declarative_tree.m"
                  mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 353 "declarative_tree.m"
                  mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 3));
#line 353 "declarative_tree.m"
                  mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 353 "declarative_tree.m"
                  mdb__declarative_tree__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 353 "declarative_tree.m"
                  mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 355 "declarative_tree.m"
                  mdb__declarative_tree__NewRecordDups_28 = (MR_Integer) 1;
#line 354 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 354 "declarative_tree.m"
                }
#line 352 "declarative_tree.m"
                break;
#line 352 "declarative_tree.m"
              case (MR_Integer) 1:
#line 358 "declarative_tree.m"
                {
#line 357 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_31_31 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 1));
#line 357 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__V_32_32;
#line 357 "declarative_tree.m"
                  MR_Box mdb__declarative_tree__V_33_33;

#line 357 "declarative_tree.m"
                  mdb__declarative_tree__CallId_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 2));
#line 357 "declarative_tree.m"
                  mdb__declarative_tree__RedoId_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 3));
#line 357 "declarative_tree.m"
                  mdb__declarative_tree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 4)));
#line 357 "declarative_tree.m"
                  mdb__declarative_tree__FinalEvent_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 5)));
#line 357 "declarative_tree.m"
                  mdb__declarative_tree__V_33_33 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 6)));
#line 357 "declarative_tree.m"
                  mdb__declarative_tree__FinalSuspicion_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Final_19, (MR_Integer) 7)));
#line 359 "declarative_tree.m"
                  mdb__declarative_tree__NewRecordDups_28 = (MR_Integer) 1;
#line 358 "declarative_tree.m"
                  mdb__declarative_tree__succeeded = MR_TRUE;
#line 358 "declarative_tree.m"
                }
#line 352 "declarative_tree.m"
                break;
#line 352 "declarative_tree.m"
            }
#line 352 "declarative_tree.m"
            break;
#line 352 "declarative_tree.m"
        }
#line 418 "declarative_tree.m"
        if (mdb__declarative_tree__succeeded)
#line 391 "declarative_tree.m"
          {
#line 391 "declarative_tree.m"
            MR_Box mdb__declarative_tree__ExitId_36;
#line 391 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__RedoEvent_37;
#line 391 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__RedoSuspicion_39;
#line 363 "declarative_tree.m"
            MR_Word mdb__declarative_tree__Redo_34;
#line 364 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_35_35;
#line 364 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_38_38;

#line 363 "declarative_tree.m"
            {
#line 363 "declarative_tree.m"
              mdb__declarative_tree__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__RedoId_22, &mdb__declarative_tree__Redo_34);
            }
#line 363 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 363 "declarative_tree.m"
              {
#line 364 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 0));
#line 364 "declarative_tree.m"
                mdb__declarative_tree__ExitId_36 = (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 1));
#line 364 "declarative_tree.m"
                mdb__declarative_tree__RedoEvent_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 2)));
#line 364 "declarative_tree.m"
                mdb__declarative_tree__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 3)));
#line 364 "declarative_tree.m"
                mdb__declarative_tree__RedoSuspicion_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_tree__Redo_34, (MR_Integer) 4)));
#line 364 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 363 "declarative_tree.m"
              }
#line 391 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 380 "declarative_tree.m"
              {
#line 380 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewPrevDupWeight_40;
#line 380 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__NewPrevWeight_41;
#line 380 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_56_56;
#line 380 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_57_57;

#line 17777 "mdb.declarative_tree.c"
#line 17778 "mdb.declarative_tree.c"
                switch (mdb__declarative_tree__NewRecordDups_28) {
#line 17780 "mdb.declarative_tree.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 17782 "mdb.declarative_tree.c"
                  case (MR_Integer) 0:
#line 17784 "mdb.declarative_tree.c"
                    {
#line 379 "declarative_tree.m"
                      mdb__declarative_tree__NewPrevDupWeight_40 = (MR_Integer) 0;
#line 384 "declarative_tree.m"
#line 384 "declarative_tree.m"
                      switch (mdb__declarative_tree__Weighting_10) {
#line 384 "declarative_tree.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 384 "declarative_tree.m"
                        case (MR_Integer) 0:
#line 382 "declarative_tree.m"
                          {
#line 382 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__V_52_52;
#line 382 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__V_53_53 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);

#line 383 "declarative_tree.m"
                            mdb__declarative_tree__V_52_52 = (mdb__declarative_tree__V_53_53 - mdb__declarative_tree__RedoEvent_37);
#line 383 "declarative_tree.m"
                            mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_52_52 + (MR_Integer) 1);
#line 382 "declarative_tree.m"
                          }
#line 384 "declarative_tree.m"
                          break;
#line 384 "declarative_tree.m"
                        case (MR_Integer) 1:
#line 385 "declarative_tree.m"
                          {
#line 385 "declarative_tree.m"
                            MR_Integer mdb__declarative_tree__V_51_51 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);

#line 386 "declarative_tree.m"
                            mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_51_51 - mdb__declarative_tree__RedoSuspicion_39);
#line 385 "declarative_tree.m"
                          }
#line 384 "declarative_tree.m"
                          break;
#line 384 "declarative_tree.m"
                      }
#line 17825 "mdb.declarative_tree.c"
                    }
#line 17827 "mdb.declarative_tree.c"
                    break;
#line 17829 "mdb.declarative_tree.c"
                  case (MR_Integer) 1:
#line 17831 "mdb.declarative_tree.c"
#line 17832 "mdb.declarative_tree.c"
                    switch (mdb__declarative_tree__Weighting_10) {
#line 17834 "mdb.declarative_tree.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 17836 "mdb.declarative_tree.c"
                      case (MR_Integer) 0:
#line 17838 "mdb.declarative_tree.c"
                        {
#line 17840 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_47_47;
#line 17842 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_48_48;
#line 17844 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_49_49 = (mdb__declarative_tree__FinalEvent_24 - mdb__declarative_tree__RedoEvent_37);
#line 17846 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_92_92;
#line 17848 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_93_93;

#line 371 "declarative_tree.m"
                          mdb__declarative_tree__V_48_48 = (mdb__declarative_tree__V_49_49 + (MR_Integer) 1);
#line 371 "declarative_tree.m"
                          mdb__declarative_tree__V_47_47 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_48_48);
#line 370 "declarative_tree.m"
                          mdb__declarative_tree__NewPrevDupWeight_40 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_47_47);
#line 383 "declarative_tree.m"
                          mdb__declarative_tree__V_93_93 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);
#line 383 "declarative_tree.m"
                          mdb__declarative_tree__V_92_92 = (mdb__declarative_tree__V_93_93 - mdb__declarative_tree__RedoEvent_37);
#line 383 "declarative_tree.m"
                          mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_92_92 + (MR_Integer) 1);
#line 17863 "mdb.declarative_tree.c"
                        }
#line 17865 "mdb.declarative_tree.c"
                        break;
#line 17867 "mdb.declarative_tree.c"
                      case (MR_Integer) 1:
#line 17869 "mdb.declarative_tree.c"
                        {
#line 17871 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_45_45;
#line 17873 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_46_46 = (mdb__declarative_tree__FinalSuspicion_27 - mdb__declarative_tree__RedoSuspicion_39);
#line 17875 "mdb.declarative_tree.c"
                          MR_Integer mdb__declarative_tree__V_95_95;

#line 375 "declarative_tree.m"
                          mdb__declarative_tree__V_45_45 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_46_46);
#line 374 "declarative_tree.m"
                          mdb__declarative_tree__NewPrevDupWeight_40 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_45_45);
#line 386 "declarative_tree.m"
                          mdb__declarative_tree__V_95_95 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);
#line 386 "declarative_tree.m"
                          mdb__declarative_tree__NewPrevWeight_41 = (mdb__declarative_tree__V_95_95 - mdb__declarative_tree__RedoSuspicion_39);
#line 17886 "mdb.declarative_tree.c"
                        }
#line 17888 "mdb.declarative_tree.c"
                        break;
#line 17890 "mdb.declarative_tree.c"
                    }
#line 17892 "mdb.declarative_tree.c"
                    break;
#line 17894 "mdb.declarative_tree.c"
                }
#line 388 "declarative_tree.m"
                mdb__declarative_tree__V_56_56 = ((MR_Word) mdb__declarative_tree__ExitId_36);
#line 390 "declarative_tree.m"
                mdb__declarative_tree__V_57_57 = (mdb__declarative_tree__DupFactor_16 + (MR_Integer) 1);
#line 388 "declarative_tree.m"
                /* direct tailcall eliminated */
#line 388 "declarative_tree.m"
                {
#line 388 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__HeadVar__3__tmp_copy_3 = mdb__declarative_tree__V_56_56;
#line 388 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__PrevWeight__tmp_copy_13 = mdb__declarative_tree__NewPrevWeight_41;
#line 388 "declarative_tree.m"
                  MR_Word mdb__declarative_tree__RecordDups__tmp_copy_15 = mdb__declarative_tree__NewRecordDups_28;
#line 388 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__DupFactor__tmp_copy_16 = mdb__declarative_tree__V_57_57;
#line 388 "declarative_tree.m"
                  MR_Integer mdb__declarative_tree__PrevDupWeight__tmp_copy_17 = mdb__declarative_tree__NewPrevDupWeight_40;

#line 388 "declarative_tree.m"
                  mdb__declarative_tree__PrevDupWeight_17 = mdb__declarative_tree__PrevDupWeight__tmp_copy_17;
#line 388 "declarative_tree.m"
                  mdb__declarative_tree__DupFactor_16 = mdb__declarative_tree__DupFactor__tmp_copy_16;
#line 388 "declarative_tree.m"
                  mdb__declarative_tree__RecordDups_15 = mdb__declarative_tree__RecordDups__tmp_copy_15;
#line 388 "declarative_tree.m"
                  mdb__declarative_tree__PrevWeight_13 = mdb__declarative_tree__PrevWeight__tmp_copy_13;
#line 388 "declarative_tree.m"
                  mdb__declarative_tree__HeadVar__3_3 = mdb__declarative_tree__HeadVar__3__tmp_copy_3;
#line 388 "declarative_tree.m"
                }
#line 388 "declarative_tree.m"
                continue;
#line 380 "declarative_tree.m"
              }
#line 391 "declarative_tree.m"
            else
#line 392 "declarative_tree.m"
              {
#line 392 "declarative_tree.m"
                MR_Word mdb__declarative_tree__Call_42;
#line 392 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CallEvent_43;
#line 392 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__CallSuspicion_44;
#line 393 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_72_72;
#line 393 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_73_73;
#line 393 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_74_74;
#line 393 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_75_75;
#line 393 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_76_76;
#line 393 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_77_77;
#line 393 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_78_78;
#line 393 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_79_79;

#line 392 "declarative_tree.m"
                {
#line 392 "declarative_tree.m"
                  mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_90, mdb__declarative_tree__Store_11, mdb__declarative_tree__CallId_21, &mdb__declarative_tree__Call_42);
                }
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_72_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 0));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_73_73 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 1));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 2)));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 3)));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__CallEvent_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 4)));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 5)));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 6)));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 7)));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 8)));
#line 393 "declarative_tree.m"
                mdb__declarative_tree__CallSuspicion_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_42, (MR_Integer) 9)));
#line 398 "declarative_tree.m"
#line 398 "declarative_tree.m"
                switch (mdb__declarative_tree__Weighting_10) {
#line 398 "declarative_tree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 398 "declarative_tree.m"
                  case (MR_Integer) 0:
#line 396 "declarative_tree.m"
                    {
#line 396 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_60_60;
#line 396 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_61_61 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalEvent_24);

#line 397 "declarative_tree.m"
                      mdb__declarative_tree__V_60_60 = (mdb__declarative_tree__V_61_61 - mdb__declarative_tree__CallEvent_43);
#line 397 "declarative_tree.m"
                      *mdb__declarative_tree__Weight_14 = (mdb__declarative_tree__V_60_60 + (MR_Integer) 1);
#line 396 "declarative_tree.m"
                    }
#line 398 "declarative_tree.m"
                    break;
#line 398 "declarative_tree.m"
                  case (MR_Integer) 1:
#line 399 "declarative_tree.m"
                    {
#line 399 "declarative_tree.m"
                      MR_Integer mdb__declarative_tree__V_59_59 = (mdb__declarative_tree__PrevWeight_13 + mdb__declarative_tree__FinalSuspicion_27);

#line 400 "declarative_tree.m"
                      *mdb__declarative_tree__Weight_14 = (mdb__declarative_tree__V_59_59 - mdb__declarative_tree__CallSuspicion_44);
#line 399 "declarative_tree.m"
                    }
#line 398 "declarative_tree.m"
                    break;
#line 398 "declarative_tree.m"
                }
#line 413 "declarative_tree.m"
#line 413 "declarative_tree.m"
                switch (mdb__declarative_tree__NewRecordDups_28) {
#line 413 "declarative_tree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 413 "declarative_tree.m"
                  case (MR_Integer) 0:
#line 415 "declarative_tree.m"
                    *mdb__declarative_tree__Excess_18 = (MR_Integer) 0;
#line 413 "declarative_tree.m"
                    break;
#line 413 "declarative_tree.m"
                  case (MR_Integer) 1:
#line 408 "declarative_tree.m"
#line 408 "declarative_tree.m"
                    switch (mdb__declarative_tree__Weighting_10) {
#line 408 "declarative_tree.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 408 "declarative_tree.m"
                      case (MR_Integer) 0:
#line 405 "declarative_tree.m"
                        {
#line 405 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_65_65;
#line 405 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_66_66;
#line 405 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_67_67 = (mdb__declarative_tree__FinalEvent_24 - mdb__declarative_tree__CallEvent_43);

#line 407 "declarative_tree.m"
                          mdb__declarative_tree__V_66_66 = (mdb__declarative_tree__V_67_67 + (MR_Integer) 1);
#line 406 "declarative_tree.m"
                          mdb__declarative_tree__V_65_65 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_66_66);
#line 406 "declarative_tree.m"
                          *mdb__declarative_tree__Excess_18 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_65_65);
#line 405 "declarative_tree.m"
                        }
#line 408 "declarative_tree.m"
                        break;
#line 408 "declarative_tree.m"
                      case (MR_Integer) 1:
#line 409 "declarative_tree.m"
                        {
#line 409 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_63_63;
#line 409 "declarative_tree.m"
                          MR_Integer mdb__declarative_tree__V_64_64 = (mdb__declarative_tree__FinalSuspicion_27 - mdb__declarative_tree__CallSuspicion_44);

#line 410 "declarative_tree.m"
                          mdb__declarative_tree__V_63_63 = (mdb__declarative_tree__DupFactor_16 * mdb__declarative_tree__V_64_64);
#line 410 "declarative_tree.m"
                          *mdb__declarative_tree__Excess_18 = (mdb__declarative_tree__PrevDupWeight_17 + mdb__declarative_tree__V_63_63);
#line 409 "declarative_tree.m"
                        }
#line 408 "declarative_tree.m"
                        break;
#line 408 "declarative_tree.m"
                    }
#line 413 "declarative_tree.m"
                    break;
#line 413 "declarative_tree.m"
                }
#line 392 "declarative_tree.m"
              }
#line 391 "declarative_tree.m"
          }
#line 418 "declarative_tree.m"
        else
#line 419 "declarative_tree.m"
          {
#line 419 "declarative_tree.m"
            {
#line 419 "declarative_tree.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[9])));
#line 419 "declarative_tree.m"
              return;
            }
#line 419 "declarative_tree.m"
          }
#line 345 "declarative_tree.m"
      }
#line 345 "declarative_tree.m"
      break;
#line 345 "declarative_tree.m"
    }
#line 340 "declarative_tree.m"
}

#line 175 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_answers_4_p_0(
#line 175 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26,
#line 175 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_5,
#line 175 "declarative_tree.m"
  MR_Box mdb__declarative_tree__RedoId_6,
#line 175 "declarative_tree.m"
  MR_Word mdb__declarative_tree__DeclAtoms0_7,
#line 175 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__DeclAtoms_8)
#line 175 "declarative_tree.m"
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
#line 105 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_38_38;
#line 105 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_39_39;
#line 105 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_40_40;
#line 105 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_41_41;
#line 105 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_42_42;
#line 105 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_43_43;
#line 105 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_44_44;
#line 107 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_45_45;
#line 107 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_46_46;
#line 107 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_47_47;
#line 107 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_48_48;
#line 107 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_49_49;
#line 107 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_50_50;
#line 107 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_51_51;
#line 107 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_52_52;
#line 107 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_53_53;
#line 108 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_54_54;
#line 108 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_55_55;
#line 108 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_56_56;
#line 108 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_57_57;
#line 108 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_58_58;
#line 108 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_59_59;
#line 108 "declarative_tree.m"
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
#line 18275 "mdb.declarative_tree.c"
            {
#line 18277 "mdb.declarative_tree.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_40_62);
            }
#line 104 "declarative_tree.m"
            {
#line 104 "declarative_tree.m"
              mdb__declarative_tree__ExitAtom_30 = mdb__declarative_execution__get_trace_exit_atom_1_f_0(mdb__declarative_tree__TypeInfo_40_62, mdb__declarative_tree__ExitNode_14);
            }
#line 105 "declarative_tree.m"
            mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 105 "declarative_tree.m"
            mdb__declarative_tree__CallId_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 105 "declarative_tree.m"
            mdb__declarative_tree__V_39_39 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 105 "declarative_tree.m"
            mdb__declarative_tree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 105 "declarative_tree.m"
            mdb__declarative_tree__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 105 "declarative_tree.m"
            mdb__declarative_tree__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 105 "declarative_tree.m"
            mdb__declarative_tree__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 105 "declarative_tree.m"
            mdb__declarative_tree__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 106 "declarative_tree.m"
            {
#line 106 "declarative_tree.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_26, mdb__declarative_tree__Store_5, mdb__declarative_tree__CallId_31, &mdb__declarative_tree__Call_32);
            }
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_45_45 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 0));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_46_46 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 1));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 2)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 3)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 4)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 5)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 6)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 7)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__CallIoSeq_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 8)));
#line 107 "declarative_tree.m"
            mdb__declarative_tree__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__Call_32, (MR_Integer) 9)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_54_54 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 0));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_55_55 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 1));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_56_56 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 2));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 3)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 4)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_59_59 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 5)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__ExitIoSeq_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 6)));
#line 108 "declarative_tree.m"
            mdb__declarative_tree__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__ExitNode_14, (MR_Integer) 7)));
#line 109 "declarative_tree.m"
            mdb__declarative_tree__succeeded = (mdb__declarative_tree__CallIoSeq_33 == mdb__declarative_tree__ExitIoSeq_34);
#line 111 "declarative_tree.m"
            if (mdb__declarative_tree__succeeded)
#line 110 "declarative_tree.m"
              {
#line 110 "declarative_tree.m"
                {
#line 110 "declarative_tree.m"
                  mdb__declarative_tree__DeclAtom_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_30));
#line 110 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "declarative_tree.m"
                }
#line 110 "declarative_tree.m"
              }
#line 111 "declarative_tree.m"
            else
#line 112 "declarative_tree.m"
              {
#line 112 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_36_36;
#line 112 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_37_37;

#line 113 "declarative_tree.m"
                {
#line 113 "declarative_tree.m"
                  mdb__declarative_tree__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 113 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_37_37, 0) = ((MR_Box) (mdb__declarative_tree__CallIoSeq_33));
#line 113 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__V_37_37, 1) = ((MR_Box) (mdb__declarative_tree__ExitIoSeq_34));
#line 113 "declarative_tree.m"
                }
#line 113 "declarative_tree.m"
                {
#line 113 "declarative_tree.m"
                  mdb__declarative_tree__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 113 "declarative_tree.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_36_36, 0) = ((MR_Box) (mdb__declarative_tree__V_37_37));
#line 113 "declarative_tree.m"
                }
#line 112 "declarative_tree.m"
                {
#line 112 "declarative_tree.m"
                  mdb__declarative_tree__DeclAtom_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 0) = ((MR_Box) (mdb__declarative_tree__ExitAtom_30));
#line 112 "declarative_tree.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_tree__DeclAtom_16, 1) = ((MR_Box) (mdb__declarative_tree__V_36_36));
#line 112 "declarative_tree.m"
                }
#line 112 "declarative_tree.m"
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
#line 175 "declarative_tree.m"
}

#line 123 "declarative_tree.m"
static void MR_CALL 
mdb__declarative_tree__get_edt_node_initial_atom_3_p_0(
#line 123 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29,
#line 123 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_4,
#line 123 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Ref_5,
#line 123 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__Atom_6)
#line 123 "declarative_tree.m"
{
#line 126 "declarative_tree.m"
  {
#line 126 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 126 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_7;

#line 127 "declarative_tree.m"
    {
#line 127 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__Node_7);
    }
#line 131 "declarative_tree.m"
#line 131 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_7)) {
#line 131 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 131 "declarative_tree.m"
      case (MR_Integer) 1:
#line 129 "declarative_tree.m"
        {
#line 129 "declarative_tree.m"
          MR_Word mdb__declarative_tree__TypeInfo_11_43;
#line 129 "declarative_tree.m"
          MR_Box mdb__declarative_tree__CallId_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 129 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallNode_40;
#line 129 "declarative_tree.m"
          MR_Word mdb__declarative_tree__CallAtom_41;
#line 129 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 0));
#line 129 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 129 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 3)));
#line 129 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 129 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 129 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 129 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_7, (MR_Integer) 7)));

#line 119 "declarative_tree.m"
          {
#line 119 "declarative_tree.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_9, &mdb__declarative_tree__CallNode_40);
          }
#line 18503 "mdb.declarative_tree.c"
          {
#line 18505 "mdb.declarative_tree.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_43);
          }
#line 120 "declarative_tree.m"
          {
#line 120 "declarative_tree.m"
            mdb__declarative_tree__CallAtom_41 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_43, mdb__declarative_tree__CallNode_40);
          }
#line 121 "declarative_tree.m"
          *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_41;
#line 129 "declarative_tree.m"
        }
#line 131 "declarative_tree.m"
        break;
#line 131 "declarative_tree.m"
      case (MR_Integer) 3:
#line 131 "declarative_tree.m"
#line 131 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 0)))) {
#line 131 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 131 "declarative_tree.m"
          case (MR_Integer) 0:
#line 132 "declarative_tree.m"
            {
#line 132 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_11_50;
#line 132 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_27 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 132 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_47;
#line 132 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_48;
#line 132 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 132 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_17_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3));
#line 132 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 132 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 132 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 6)));

#line 119 "declarative_tree.m"
              {
#line 119 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_27, &mdb__declarative_tree__CallNode_47);
              }
#line 18554 "mdb.declarative_tree.c"
              {
#line 18556 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_50);
              }
#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_48 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_50, mdb__declarative_tree__CallNode_47);
              }
#line 121 "declarative_tree.m"
              *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_48;
#line 132 "declarative_tree.m"
            }
#line 131 "declarative_tree.m"
            break;
#line 131 "declarative_tree.m"
          case (MR_Integer) 1:
#line 135 "declarative_tree.m"
            {
#line 135 "declarative_tree.m"
              MR_Word mdb__declarative_tree__TypeInfo_11_36;
#line 135 "declarative_tree.m"
              MR_Box mdb__declarative_tree__CallId_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 2));
#line 135 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallNode_33;
#line 135 "declarative_tree.m"
              MR_Word mdb__declarative_tree__CallAtom_34;
#line 135 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_21_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 1));
#line 135 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_22_22 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 3));
#line 135 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 4)));
#line 135 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 5)));
#line 135 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 6)));
#line 135 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_7, (MR_Integer) 7)));

#line 119 "declarative_tree.m"
              {
#line 119 "declarative_tree.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_28, &mdb__declarative_tree__CallNode_33);
              }
#line 18600 "mdb.declarative_tree.c"
              {
#line 18602 "mdb.declarative_tree.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_29, (MR_Integer) 2, &mdb__declarative_tree__TypeInfo_11_36);
              }
#line 120 "declarative_tree.m"
              {
#line 120 "declarative_tree.m"
                mdb__declarative_tree__CallAtom_34 = mdb__declarative_execution__get_trace_call_atom_1_f_0(mdb__declarative_tree__TypeInfo_11_36, mdb__declarative_tree__CallNode_33);
              }
#line 121 "declarative_tree.m"
              *mdb__declarative_tree__Atom_6 = (MR_Word) mdb__declarative_tree__CallAtom_34;
#line 135 "declarative_tree.m"
            }
#line 131 "declarative_tree.m"
            break;
#line 131 "declarative_tree.m"
        }
#line 131 "declarative_tree.m"
        break;
#line 131 "declarative_tree.m"
    }
#line 126 "declarative_tree.m"
  }
#line 123 "declarative_tree.m"
}

#line 48 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree__trace_implicit_tree_info_3_p_0(
#line 48 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19,
#line 48 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 48 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 48 "declarative_tree.m"
  MR_Word * mdb__declarative_tree__ImplicitTreeInfo_6)
#line 48 "declarative_tree.m"
{
#line 305 "declarative_tree.m"
  {
#line 305 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 305 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Store_4 = ((MR_Box) (mdb__declarative_tree__HeadVar__1_1));
#line 305 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_5 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 305 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId_7;
#line 305 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_8;
#line 305 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_9_9;
#line 1863 "declarative_tree.m"
    MR_Box mdb__declarative_tree__CallId0_25;
#line 1856 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node0_23;
#line 18658 "mdb.declarative_tree.c"
    MR_bool MR_CALL (* mdb__declarative_tree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18660 "mdb.declarative_tree.c"
    MR_Box mdb__declarative_tree__conv1_Node0_23;
#line 308 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_10_10;
#line 308 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_11_11;
#line 308 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_12_12;
#line 308 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_13_13;
#line 308 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_14_14;
#line 308 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_15_15;
#line 308 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_16_16;
#line 308 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_17_17;
#line 308 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_18_18;

#line 18681 "mdb.declarative_tree.c"
    {
#line 18683 "mdb.declarative_tree.c"
      mdb__declarative_tree__succeeded = mdb__declarative_tree__func_0(((MR_Box) mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19), mdb__declarative_tree__Store_4, mdb__declarative_tree__Ref_5, &mdb__declarative_tree__conv1_Node0_23);
    }
#line 18686 "mdb.declarative_tree.c"
    if (mdb__declarative_tree__succeeded)
#line 18688 "mdb.declarative_tree.c"
      {
#line 18690 "mdb.declarative_tree.c"
        mdb__declarative_tree__Node0_23 = ((MR_Word) mdb__declarative_tree__conv1_Node0_23);
#line 18692 "mdb.declarative_tree.c"
        mdb__declarative_tree__succeeded = MR_TRUE;
#line 18694 "mdb.declarative_tree.c"
      }
#line 1856 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1858 "declarative_tree.m"
#line 1858 "declarative_tree.m"
      switch (MR_tag((MR_Word) mdb__declarative_tree__Node0_23)) {
#line 1858 "declarative_tree.m"
        default:
#line 1858 "declarative_tree.m"
          mdb__declarative_tree__succeeded = MR_FALSE;
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
        case (MR_Integer) 1:
#line 1857 "declarative_tree.m"
          {
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 0));
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_26_26;
#line 1857 "declarative_tree.m"
            MR_Word mdb__declarative_tree__V_27_27;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_28_28;
#line 1857 "declarative_tree.m"
            MR_Box mdb__declarative_tree__V_29_29;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_30_30;
#line 1857 "declarative_tree.m"
            MR_Integer mdb__declarative_tree__V_31_31;

#line 1857 "declarative_tree.m"
            mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_26_26 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 3)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node0_23, (MR_Integer) 7)));
#line 1857 "declarative_tree.m"
            mdb__declarative_tree__succeeded = MR_TRUE;
#line 1857 "declarative_tree.m"
          }
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
        case (MR_Integer) 3:
#line 1858 "declarative_tree.m"
#line 1858 "declarative_tree.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 0)))) {
#line 1858 "declarative_tree.m"
            default:
#line 1858 "declarative_tree.m"
              mdb__declarative_tree__succeeded = MR_FALSE;
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
            case (MR_Integer) 0:
#line 1858 "declarative_tree.m"
              {
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_33_33;
#line 1858 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_34_34;
#line 1858 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_35_35;
#line 1858 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_36_36;

#line 1858 "declarative_tree.m"
                mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 3));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1858 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1858 "declarative_tree.m"
              }
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
            case (MR_Integer) 1:
#line 1859 "declarative_tree.m"
              {
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 1));
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_38_38;
#line 1859 "declarative_tree.m"
                MR_Word mdb__declarative_tree__V_39_39;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_40_40;
#line 1859 "declarative_tree.m"
                MR_Box mdb__declarative_tree__V_41_41;
#line 1859 "declarative_tree.m"
                MR_Integer mdb__declarative_tree__V_42_42;

#line 1859 "declarative_tree.m"
                mdb__declarative_tree__CallId0_25 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 2));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_38_38 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 3));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 4)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 5)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 6)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node0_23, (MR_Integer) 7)));
#line 1859 "declarative_tree.m"
                mdb__declarative_tree__succeeded = MR_TRUE;
#line 1859 "declarative_tree.m"
              }
#line 1858 "declarative_tree.m"
              break;
#line 1858 "declarative_tree.m"
          }
#line 1858 "declarative_tree.m"
          break;
#line 1858 "declarative_tree.m"
      }
#line 1863 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 1862 "declarative_tree.m"
      mdb__declarative_tree__CallId_7 = mdb__declarative_tree__CallId0_25;
#line 1863 "declarative_tree.m"
    else
#line 1864 "declarative_tree.m"
      {
#line 1864 "declarative_tree.m"
        {
#line 1864 "declarative_tree.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_tree_scalar_common_1[8])));
        }
#line 1864 "declarative_tree.m"
      }
#line 307 "declarative_tree.m"
    {
#line 307 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_19, mdb__declarative_tree__Store_4, mdb__declarative_tree__CallId_7, &mdb__declarative_tree__CallNode_8);
    }
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_10_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 0));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 1));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 2)));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 3)));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 4)));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 5)));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 6)));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 7)));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 8)));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_8, (MR_Integer) 9)));
#line 308 "declarative_tree.m"
    mdb__declarative_tree__succeeded = ((MR_tag((MR_Word) mdb__declarative_tree__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 308 "declarative_tree.m"
    if (mdb__declarative_tree__succeeded)
#line 308 "declarative_tree.m"
      *mdb__declarative_tree__ImplicitTreeInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__V_9_9, (MR_Integer) 0)));
#line 305 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 305 "declarative_tree.m"
  }
#line 48 "declarative_tree.m"
}

#line 45 "declarative_tree.m"
MR_bool MR_CALL 
mdb__declarative_tree__trace_atom_subterm_is_ground_3_p_0(
#line 45 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__1_1,
#line 45 "declarative_tree.m"
  MR_Word mdb__declarative_tree__ArgPos_6,
#line 45 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__3_7)
#line 45 "declarative_tree.m"
{
#line 1869 "declarative_tree.m"
  {
#line 1869 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;

#line 1869 "declarative_tree.m"
    {
#line 1869 "declarative_tree.m"
      return mdb__declarative_tree__succeeded = mdb__declarative_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_99_101_95_97_116_111_109_95_115_117_98_116_101_114_109_95_105_115_95_103_114_111_117_110_100_95_95_91_51_93_95_48_3_p_0(mdb__declarative_tree__HeadVar__1_1, mdb__declarative_tree__ArgPos_6);
    }
#line 1869 "declarative_tree.m"
    return mdb__declarative_tree__succeeded;
#line 1869 "declarative_tree.m"
  }
#line 45 "declarative_tree.m"
}

#line 42 "declarative_tree.m"
void MR_CALL 
mdb__declarative_tree__edt_subtree_details_5_p_0(
#line 42 "declarative_tree.m"
  MR_Word mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47,
#line 42 "declarative_tree.m"
  MR_Box mdb__declarative_tree__Store_6,
#line 42 "declarative_tree.m"
  MR_Word mdb__declarative_tree__HeadVar__2_2,
#line 42 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__Event_8,
#line 42 "declarative_tree.m"
  MR_Integer * mdb__declarative_tree__SeqNo_9,
#line 42 "declarative_tree.m"
  MR_Box * mdb__declarative_tree__CallPreceding_10)
#line 42 "declarative_tree.m"
{
#line 1819 "declarative_tree.m"
  {
#line 1819 "declarative_tree.m"
    MR_bool mdb__declarative_tree__succeeded;
#line 1819 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Ref_7 = ((MR_Box) (mdb__declarative_tree__HeadVar__2_2));
#line 1819 "declarative_tree.m"
    MR_Word mdb__declarative_tree__Node_11;
#line 1819 "declarative_tree.m"
    MR_Box mdb__declarative_tree__Call_13;
#line 1819 "declarative_tree.m"
    MR_Word mdb__declarative_tree__CallNode_28;
#line 1826 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_30_30;
#line 1826 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_31_31;
#line 1826 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_32_32;
#line 1826 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_33_33;
#line 1826 "declarative_tree.m"
    MR_Word mdb__declarative_tree__V_34_34;
#line 1826 "declarative_tree.m"
    MR_Box mdb__declarative_tree__V_35_35;
#line 1826 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_36_36;
#line 1826 "declarative_tree.m"
    MR_Integer mdb__declarative_tree__V_37_37;

#line 1820 "declarative_tree.m"
    {
#line 1820 "declarative_tree.m"
      mdb__declarative_tree__det_edt_return_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47, mdb__declarative_tree__Store_6, mdb__declarative_tree__Ref_7, &mdb__declarative_tree__Node_11);
    }
#line 1822 "declarative_tree.m"
#line 1822 "declarative_tree.m"
    switch (MR_tag((MR_Word) mdb__declarative_tree__Node_11)) {
#line 1822 "declarative_tree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1822 "declarative_tree.m"
      case (MR_Integer) 1:
#line 1821 "declarative_tree.m"
        {
#line 1821 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 0));
#line 1821 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_14_14;
#line 1821 "declarative_tree.m"
          MR_Word mdb__declarative_tree__V_15_15;
#line 1821 "declarative_tree.m"
          MR_Box mdb__declarative_tree__V_16_16;
#line 1821 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_17_17;
#line 1821 "declarative_tree.m"
          MR_Integer mdb__declarative_tree__V_18_18;

#line 1821 "declarative_tree.m"
          mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1821 "declarative_tree.m"
          mdb__declarative_tree__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1821 "declarative_tree.m"
          mdb__declarative_tree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 3)));
#line 1821 "declarative_tree.m"
          *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1821 "declarative_tree.m"
          mdb__declarative_tree__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1821 "declarative_tree.m"
          mdb__declarative_tree__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1821 "declarative_tree.m"
          mdb__declarative_tree__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1821 "declarative_tree.m"
        }
#line 1822 "declarative_tree.m"
        break;
#line 1822 "declarative_tree.m"
      case (MR_Integer) 3:
#line 1822 "declarative_tree.m"
#line 1822 "declarative_tree.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 0)))) {
#line 1822 "declarative_tree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1822 "declarative_tree.m"
          case (MR_Integer) 0:
#line 1822 "declarative_tree.m"
            {
#line 1822 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1822 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_20_20;
#line 1822 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_21_21;
#line 1822 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_22_22;

#line 1822 "declarative_tree.m"
              mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1822 "declarative_tree.m"
              mdb__declarative_tree__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 1822 "declarative_tree.m"
              *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1822 "declarative_tree.m"
              mdb__declarative_tree__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1822 "declarative_tree.m"
              mdb__declarative_tree__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1822 "declarative_tree.m"
            }
#line 1822 "declarative_tree.m"
            break;
#line 1822 "declarative_tree.m"
          case (MR_Integer) 1:
#line 1823 "declarative_tree.m"
            {
#line 1823 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_23_23 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 1));
#line 1823 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_24_24;
#line 1823 "declarative_tree.m"
              MR_Word mdb__declarative_tree__V_25_25;
#line 1823 "declarative_tree.m"
              MR_Box mdb__declarative_tree__V_26_26;
#line 1823 "declarative_tree.m"
              MR_Integer mdb__declarative_tree__V_27_27;

#line 1823 "declarative_tree.m"
              mdb__declarative_tree__Call_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 2));
#line 1823 "declarative_tree.m"
              mdb__declarative_tree__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 3));
#line 1823 "declarative_tree.m"
              mdb__declarative_tree__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 4)));
#line 1823 "declarative_tree.m"
              *mdb__declarative_tree__Event_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 5)));
#line 1823 "declarative_tree.m"
              mdb__declarative_tree__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 6)));
#line 1823 "declarative_tree.m"
              mdb__declarative_tree__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_tree__Node_11, (MR_Integer) 7)));
#line 1823 "declarative_tree.m"
            }
#line 1822 "declarative_tree.m"
            break;
#line 1822 "declarative_tree.m"
        }
#line 1822 "declarative_tree.m"
        break;
#line 1822 "declarative_tree.m"
    }
#line 1825 "declarative_tree.m"
    {
#line 1825 "declarative_tree.m"
      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_tree__TypeClassInfo_for_annotated_trace_47, mdb__declarative_tree__Store_6, mdb__declarative_tree__Call_13, &mdb__declarative_tree__CallNode_28);
    }
#line 1826 "declarative_tree.m"
    *mdb__declarative_tree__CallPreceding_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 0));
#line 1826 "declarative_tree.m"
    mdb__declarative_tree__V_30_30 = (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 1));
#line 1826 "declarative_tree.m"
    mdb__declarative_tree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 2)));
#line 1826 "declarative_tree.m"
    *mdb__declarative_tree__SeqNo_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 3)));
#line 1826 "declarative_tree.m"
    mdb__declarative_tree__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 4)));
#line 1826 "declarative_tree.m"
    mdb__declarative_tree__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 5)));
#line 1826 "declarative_tree.m"
    mdb__declarative_tree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 6)));
#line 1826 "declarative_tree.m"
    mdb__declarative_tree__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 7)));
#line 1826 "declarative_tree.m"
    mdb__declarative_tree__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 8)));
#line 1826 "declarative_tree.m"
    mdb__declarative_tree__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_tree__CallNode_28, (MR_Integer) 9)));
#line 1819 "declarative_tree.m"
  }
#line 42 "declarative_tree.m"
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
